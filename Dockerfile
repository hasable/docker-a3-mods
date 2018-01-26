FROM hasable/arma3-exile:latest
LABEL maintainer='hasable'

USER root
RUN apt-get update && apt-get install -y p7zip && apt-get clean

ARG USER_NAME=steamu
USER ${USER_NAME}
WORKDIR /tmp

# Install CUP Weapons
RUN ggID=0By04o_GxOry3eHppeUpoNTZ6SjQ \
		&& ggURL=https://drive.google.com/uc?export=download \
		&& curl -sc /tmp/gcookie "${ggURL}&id=${ggID}" >/dev/null \
		&& ggCode="$(awk '/_warning_/ {print $NF}' /tmp/gcookie)"  \
		&& curl -LOJb /tmp/gcookie "${ggURL}&confirm=${ggCode}&id=${ggID}" \
	&& unzip \@CUP_Weapons-1.10.0.zip && rm -f \@CUP_Weapons-1.10.0.zip \
	&& cd \@CUP_Weapons \
		&& mv Keys/cup_weapons-1.10.0.bikey /opt/arma3/keys/cup_weapons-1.10.0.bikey \
		&& rm -rf *.txt *.sha1 Keys \
		&& find . -depth -exec rename 's/(.*)\/([^\/]*)/$1\/\L$2/' {} \; \
		&& cd .. \
	&& mv \@CUP_Weapons /opt/arma3/\@CUPWeapons

# Install CUP Units	
RUN ggID=0By04o_GxOry3cm5TVXV4LXhuLVE \
		&& ggURL=https://drive.google.com/uc?export=download \
		&& curl -sc /tmp/gcookie "${ggURL}&id=${ggID}" >/dev/null \
		&& ggCode="$(awk '/_warning_/ {print $NF}' /tmp/gcookie)"  \
		&& curl -LOJb /tmp/gcookie "${ggURL}&confirm=${ggCode}&id=${ggID}" \
	&& unzip \@CUP_Units-1.10.0.zip && rm -f \@CUP_Units-1.10.0.zip \
	&& cd \@CUP_Units \
		&& mv Keys/cup_units-1.10.0.bikey /opt/arma3/keys/cup_units-1.10.0.bikey \
		&& rm -rf *.txt *.sha1 Keys \
		&& find . -depth -exec rename 's/(.*)\/([^\/]*)/$1\/\L$2/' {} \; \
	&& cd .. \
	&& mv \@CUP_Units /opt/arma3/\@CUPUnits
	
# Install CUP Vehicles	
RUN ggID=0By04o_GxOry3OG1qcC1oUEwyUXM \
		&& ggURL=https://drive.google.com/uc?export=download \
		&& curl -sc /tmp/gcookie "${ggURL}&id=${ggID}" >/dev/null \
		&& ggCode="$(awk '/_warning_/ {print $NF}' /tmp/gcookie)"  \
		&& curl -LOJb /tmp/gcookie "${ggURL}&confirm=${ggCode}&id=${ggID}" \
	&& unzip @CUP_Vehicles-1.10.0.zip && rm -f @CUP_Vehicles-1.10.0.zip \
	&& cd \@CUP_Vehicles \
		&& mv Keys/cup_vehicles-1.10.0.bikey /opt/arma3/keys/cup_vehicles-1.10.0.bikey \
		&& rm -rf *.txt *.sha1 Keys \
		&& find . -depth -exec rename 's/(.*)\/([^\/]*)/$1\/\L$2/' {} \; \
	&& cd .. \
	&& mv \@CUP_Vehicles /opt/arma3/\@CUPVehicles
	
# Install R3F Weapons	
RUN wget -nv http://team-r3f.org/public/addons/R3F_ARMES_3.5.7z \
	&& p7zip -d R3F_ARMES_3.5.7z \
	&& cd \@R3F_ARMES \
		&& rm -f *.pdf *.url \
		&& mv Server_Key/r3f.bikey /opt/arma3/keys/r3fa.bikey && rmdir Server_Key \
		&& find . -depth -exec rename 's/(.*)\/([^\/]*)/$1\/\L$2/' {} \; \
		&& cd .. \
	&& mv \@R3F_ARMES /opt/arma3/\@R3FArmes
	
# Install R3F Units
RUN wget -nv http://team-r3f.org/public/addons/R3F_UNITES_3.7.7z \
	&& p7zip -d ${CACHE}R3F_UNITES_3.7.7z  \
	&& cd \@R3F_UNITES \
		&& rm -f *.pdf *.url \
		&& mv Server_Key/r3f.bikey /opt/arma3/keys/r3fu.bikey && rmdir Server_Key \
		&& find . -depth -exec rename 's/(.*)\/([^\/]*)/$1\/\L$2/' {} \; \
		&& cd .. \
	&& mv \@R3F_UNITES /opt/arma3/\@R3FUnites
	
WORKDIR /opt/arma3
ENTRYPOINT ["/usr/local/bin/docker-entrypoint", "/opt/arma3/arma3server"]
CMD ["\"-config=conf/exile.cfg\"", \
		"\"-servermod=@ExileServer;@AdminToolkitServer;@AdvancedRappelling;@AdvancedUrbanRappelling;@Enigma;@ExAd\"", \
		"\"-mod=@Exile;@CBA_A3;@CUPWeapons;@CUPUnits;@CUPVehicles;@R3FArmes;@R3FUnites\"", \
		"-world=empty", \
		"-autoinit"]