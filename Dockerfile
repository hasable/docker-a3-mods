FROM hasable/arma3-exile:latest
LABEL maintainer='hasable'

# Server user
ARG USER_NAME=steamu
ARG USER_UID=60000

# Take long time, add it first to reuse cache 
USER root
COPY cache /tmp/cache
RUN chown -R 60000:60000 /tmp/cache

USER root
RUN apt-get update && apt-get install -y p7zip && apt-get clean

# Provides commands & entrypoint
COPY bin /usr/local/bin
RUN chmod +x /usr/local/bin/google-download

ARG USER_NAME=steamu
USER ${USER_NAME}
WORKDIR /tmp

# Install CUP Weapons
RUN install-cup-weapons \
	&& install-cup-units \
	&& install-cup-vehicles \
	&& install-r3f-units \
	&& install-r3f-weapons
	
WORKDIR /opt/arma3
ENTRYPOINT ["/usr/local/bin/docker-entrypoint", "/opt/arma3/arma3server"]
CMD ["\"-config=conf/exile.cfg\"", \
		"\"-servermod=@ExileServer;@AdminToolkitServer;@AdvancedRappelling;@AdvancedUrbanRappelling;@Enigma;@ExAd\"", \
		"\"-mod=@Exile;@CBA_A3;@CUPWeapons;@CUPUnits;@CUPVehicles;@R3FArmes;@R3FUnites\"", \
		"-world=empty", \
		"-autoinit"]