	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] =
		{
			"APEXAmmunition",
			"APEXAssaultRifles",
			"APEXBipodAttachments",
			"APEXLightMachineGuns",
			"APEXMuzzleAttachments",
			"APEXOpticAttachments",
			"APEXPistols",
			"APEXSniperRifles",
			"APEXSubMachineGuns",
			"Ammunition",
			"AssaultRifles",
			// "BPAmmunition",
			// "BPAssaultRifles",
			// "BPLightMachineGuns",
			// "BPMuzzleAttachments",
			// "BPOpticAttachments",
			// "BPPistols",
			// "BPPointerAttachments",
			// "BPSniperRifles",
			// "BPSubMachineGuns",
			// "BipodAttachments",
			// "CUPAmmunition",
			// "CUPAssaultRifles",
			// "CUPLightMachineGuns",
			// "CUPMuzzleAttachments",
			// "CUPOpticAttachments",
			// "CUPPistols",
			// "CUPPointerAttachments",
			// "CUPSniperRifles",
			// "CUPSubMachineGuns",
			// "FFAAAmunition",
			// "FFAABipodAttachments",
			// "FFAAMuzzleAttachments",
			// "FFAAMuzzleAttachments",
			// "FFAAPistols",
			// "FFAAPointerAttachments",
			// "FFAARifles",
			// "FFAASmg",
			// "FFAASniperRifles",
			// "FHQACCESSORIES",
			// "GREFAmmunition",
			// "GREFWeapons",
			// "HAPASSAULTRIFLES",
			// "HAPSNIPERRIFLES",
			// "HWPweapons",
			// "KAAmmunition",
			// "KAAttachments",
			// "KAMuzzleAttachments",
			// "KAOpticAttachments",
			// "KAPistols",
			// "KARifles",
			"LightMachineGuns",
			// "MASAmmunition",
			// "MASAssaultRifles",
			// "MASLightMachineGuns",
			// "MASMuzzleAttachments",
			// "MASOpticAttachments",
			// "MASPistols",
			// "MASPointerAttachments",
			// "MASSniperRifles",
			// "MASSubMachineGuns",
			"MuzzleAttachments",
			// "NIAAmmunition",
			// "NIAAssaultRifles",
			// "NIAAttachments",
			// "NIALightMachineGuns",
			// "NIAMuzzleAttachments",
			// "NIAOpticAttachments",
			// "NIASniperRifles",
			"OpticAttachments",
			"Pistols",
			"PointerAttachments",
			// "R3FAmmunition",
			// "R3FAssaultRifles",
			// "R3FBipodAttachments",
			// "R3FLightMachineGuns",
			// "R3FMuzzleAttachments",
			// "R3FOpticAttachments",
			// "R3FPistols",
			// "R3FPointerAttachments",
			// "R3FSniperRifles",
			// "R3FSubMachineGuns",
			// "RHSAmmunition",
			// "RHSAssaultRifles",
			// "RHSBipodAttachments",
			// "RHSForegripAttachments",
			// "RHSLightMachineGuns",
			// "RHSMuzzleAttachments",
			// "RHSOpticAttachments",
			// "RHSPistols",
			// "RHSPointerAttachments",
			// "RHSSniperRifles",
			// "RHSSubMachineGuns",
			// "SAFAmmunition",
			// "SAFAttachments",
			// "SAFWeapons",
			"Shotguns",
			"SniperRifles",
			"SubMachineGuns",
			//"HLCAmmunition",				//should use NIArms
			//"HLCAssaultRifles",			//should use NIArms
			//"HLCLightMachineGuns",		//should use NIArms
			//"HLCMuzzleAttachments",		//should use NIArms
			//"HLCOpticAttachments",		//should use NIArms
			//"HLCSniperRifles",			//should use NIArms
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] =
		{
			"A3LauncherAmmo",
			"A3Launchers",
			// "APEXLauncherAmmo",
			// "ApexLaunchers",
			// "CUPExplosive",
			// "CUPLauncherAmmo",
			// "CUPLaunchers",
			// "ExplosiveWeapons",
			"Explosives",
			"Flares",
			// "MASExplosive",
			// "MASLauncherAmmo",
			// "MASLaunchers",
			"Navigation",
			// "R3FLauncherAmmo",
			// "R3FLaunchers",
			// "RHSExplosives",
			// "RHSLauncherAmmo",
			// "RHSLaunchers",
			// "RHSStaticMG",		//not recommended except for militarised servers due to rockets/mortar etc
			// "RHSUGLAmmo",
			// "SAFMines",
			"Smokes",
			"StaticMGs",
			"UAVs",
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] =
		{
			// "A3Backpacks",
			"APEXBackpacks",
			"APEXHeadgear",
			"APEXUniforms",
			"APEXVests",
			"Backpacks",
			// "CUPBackpacks",
			// "CUPHeadgear",
			// "CUPUniforms",
			// "CUPVests",
			// "FFAAHeadgear",
			// "FFAAUniform",
			// "FFAAVest",
			// "FFAAbackpack",
			// "FFAAfaceware",
			"FirstAid",
			// "GREFHeadgear",
			// "GREFUniforms",
			// "GREFVests",
			// "HAPBACKPACKS",
			// "HAPHEADGEAR",
			// "HAPUNIFORMS",
			// "HAPVESTS",
			"Headgear",
			// "MASBackpacks",
			// "MASHeadgear",
			// "MASTools",
			// "RHSAccessories",
			// "RHSBackpacks",
			// "RHSHeadgear",
			// "RHSUniforms",
			// "RHSVests",
			// "SAFBackpacks",
			// "SAFHeadgear",
			// "SAFUniforms",
			// "SAFVests",
			// "TRYKBackpacks",
			// "TRYKHeadgear",
			// "TRYKUniforms",
			// "TRYKVests",
			"Tools",
			"Uniforms",
			"Vests",
			//"APEXTools",		//not used
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] =
		{
			"Drinks",
			"Food",
			"NonVeganFood"
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] =
		{
			"Hardware",
			//"R3FTools",
			"ExtendedBaseMod",
			// "CBuilding",
			"Tools",
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] =
		{
			"A3Armed",
			"A3Cars",
			"A3Tanks",
			"A3Trucks",
			// "A3UGVs",
			"ApexCars",
			// "ApexTrucks",
			// "ApexUAVs",
			"Bikes",
			// "CTrucks",
			// "CUGVs",
			// "CUPArmed",
			// "CUPUnarmed",
			"Cars",
			// "FMPCars",
			// "FMPTrucks",
			// "FOXCars",
			// "FOXTrucks",
			// "GREFArmed",
			// "GREFUnarmed",
			// "HAPCARS",
			// "HAPTRUCKS",
			// "HVPCars",
			// "JonzieCars",
			// "MASArmed",
			// "MASCars",
			// "MASTrucks",
			// "RHSVehicles",
			// "SAFArmed",
			// "SAFUnarmed",
			"Trucks",
			//"MASTanks"
			// "UGV",
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] =
		{
			"A3Planes",
			"A3armedChoppers",
			"A3unarmedChoppers",
			// "A3UAVs",
			// "ApexChoppers",
			"ApexPlanes",
			"ApexVTOL",
			// "CChoppers",
			// "CPlanes",
			// "CUPChoppers",
			"Choppers",
			// "GREFChoppers",
			// "GREFPlanes",
			// "HVPPlanes",
			// "MASChoppers",
			// "MASPlanes",
			"Planes",
			// ,"JetPlanes",
			"Pods",
			// "RHSChoppers",
			// "RHSPlanes",
			// "SAFChoppers"
			//"CUAVs",
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Sells ships and boats
	 */
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] =
		{
			"A3Boats",
			"ApexBoats",
			"Boats",
			// "RHSBoats",
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] =
		{
			"Diving"
		};
	};

	/**
	 * Sells Community Items
	 */
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community"
		};
	};
	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community10"
		};
	};