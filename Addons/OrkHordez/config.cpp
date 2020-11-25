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

        uniformClass = "Boy1Uni_OP";
    };
    
    // Melee Unit goes here
    
    // Units
    class DK143_O_OrkBurna : DK143_Base_OrkBoy {
        scope = 2;
        scopeCurator = 2;
        displayName = "Ork Burna";
    };
    
    class DK143_O_OrkBooma : DK143_Base_OrkBoy {
        scope = 2;
        scopeCurator = 2;
        displayName = "Ork BooMah";
    };
    
    class DK143_O_OrkDakka : DK143_Base_OrkBoy {
        scope = 2;
        scopeCurator = 2;
        displayName = "Ork Dakka";
    };
    
};
