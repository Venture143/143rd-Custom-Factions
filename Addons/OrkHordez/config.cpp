class CfgPatches {
    class DK143_CustomFactions_OrkHordez {
        units[] = {

        };
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {"ace_common"};
        author = "VGm. Venture";
        authors[] = {"VGm. Venture"};
    };
};

class CfgFactions {
    class DK143_O_OrkHordez {
        displayName = "Ork Hordez";
        side = 0;
        flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        priority = 0;
    };
};

class CfgGroups {
    class EAST {
        class DK143_O_OrkHordez {
            name = "Ork Hordez"
                
            class Infantry {
                name = "Infantry";
            };
            
            class Motorized {
                name = "Motorized Infantry";
                
            };
            
            class Armored {
                name = "Armored";
                
            };
            
        };//Ork Hordez
    };//OPFOR GROUPS
};

class CfgVehicles {
//TODO:
//OrkBoyz + MekBoy Contrapshuns
    // Define Macros
	/// Magazines macros definition ///
	#define mag_2(a) a, a
	#define mag_3(a) a, a, a
	#define mag_4(a) a, a, a, a
	#define mag_5(a) a, a, a, a, a
	#define mag_6(a) a, a, a, a, a, a
	#define mag_7(a) a, a, a, a, a, a, a
	#define mag_8(a) a, a, a, a, a, a, a, a
	#define mag_9(a) a, a, a, a, a, a, a, a, a
	#define mag_10(a) a, a, a, a, a, a, a, a, a, a
	#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
	#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a

	// ARMA 3 Base Soldier Classes
	class O_Soldier_base_F;
    
    // Base Ork Profile
    class DK143_Base_OrkBoy : O_Soldier_base_F {
        author = "VGm. Venture";
        scope = 0;
        scopeCurator = 0;
        displayName = "Ork Base Dude";
        side = 0;
        faction = "DK143_O_OrkHordez";

        identityTypes[] = {"Ork_Head"};

        uniformClass = "Naked1Uni_OP";
	backpack = "Meow_Meow_Invisywisy_Invs";
    };
    
    // Melee Unit goes here
    
    // Units
    class DK143_O_OrkBurna : DK143_Base_OrkBoy {
        scope = 2;
        scopeCurator = 2;
        displayName = "Ork Burna";

	linkedItems[] = {"ShootaBoyGear2","ArdBoyHelm2"};
	respawnlinkedItems[] = {"ShootaBoyGear2","ArdBoyHelm2"};
	
	weapons[] = {"TIOW_Chaos_Flamer"};
	respawnWeapons[] = {"TIOW_Chaos_Flamer"};
	magazines[] = {mag_2(TIOW_Chaos_Flamer_mag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
	respawnMagazines[] = {mag_2(TIOW_Chaos_Flamer_mag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
    };
    
    class DK143_O_OrkBooma : DK143_Base_OrkBoy {
        scope = 2;
        scopeCurator = 2;
        displayName = "Ork BooMah";

	linkedItems[] = {"ArdBoyGear2", "Catachan_Bandana"};
	respawnlinkedItems[] = {"ArdBoyGear2", "Catachan_Bandana"};
	
	weapons[] = {"TIOW_Shotgun"};
	respawnWeapons[] = {"TIOW_Shotgun"};
	magazines[] = {mag_6(TIOW_Shotgun_pellets_mag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
	respawnMagazines[] = {mag_6(TIOW_Shotgun_pellets_mag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
    };
    
    class DK143_O_OrkDakka : DK143_Base_OrkBoy {
        scope = 2;
        scopeCurator = 2;
        displayName = "Ork Dakka";
	    
	linkedItems[] = {};
	respawnlinkedItems[] = {};
	weapons[] = {"TIOW_KriegLauncher", "TIOW_StubPistol"};
	respawnWeapons[] = {"TIOW_KriegLauncher", "TIOW_StubPistol"};
	magazines[] = {mag_5(TIOW_Krieg_LauncherFrag_mag), Mag_5(TIOW_Krieg_LauncherKrak_mag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
	respawnMagazines[] = {mag_5(TIOW_Krieg_LauncherFrag_mag), Mag_5(TIOW_Krieg_LauncherKrak_mag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
    };
    
};
