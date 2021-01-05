//To Do: All
class CfgPatches {
	class DK143_CustomFactions_FWKurus{
		author = "Venture";
		name = "DK143 TIOW ALIVE_COMPAT Custom Factions";
		requiredAddons[] = 
        {"ace_common", "DkoKFoot","CadFoot","OrkBoyz","TIOWSpaceMarines", "IC_CAD_WEAPONS"};
    requiredVersion = 1.62;
		units[] = {"DK143_O_FWKurus_Guardsmen"};
		weapons[] = {};
		worlds[] = {};
	};
};

class CfgFactionClasses {
  class DK143_O_FWKurus {
    displayName = "Forgeworld Kurus";
		side = 0;
		flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		priority = 0;
  };
  
   class DK143_B_FWKurus {
    displayName = "Forgeworld Kurus";
		side = 1;
		flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		priority = 0;
  };
  
   class DK143_G_FWKurus {
    displayName = "Forgeworld Kurus";
		side = 2;
		flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		priority = 0;
  };
};

class CfgGroups {
  class EAST {
		class DK143_Custom_Factions{
			name = "143rd Custom Factions";
        class DK143_O_FWKurus {
          name = "Forge World Kurus";
        };
    };
    
    class WEST {
      class DK143_Custom_Factions{
        name = "143rd Custom Factions";
          class DK143_B_FWKurus {
            name = "Forge World Kurus";
          };
    };
    
    class
    class Indep {
      class DK143_Custom_Factions{
        name = "143rd Custom Factions";
          class DK143_G_FWKurus {
            name = "Forge World Kurus";
          };
     };
};

class CfgVehicles
{
 
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
	/// Equipment list macros definition ///

	#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
	#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
	#define item_xx(a,b) class _xx_##a {name = a; count = b;}
	
	// ARMA 3 Base Soldier Classes
	class O_Soldier_base_F;

        
  // BAse Config Class
  class DK143_Base_FWKurusGuardsmen : O_Soldier_base_F {
    scope = 0;
    scopeCurator = 0;
    faction = "DK143_O_FWKurus";
    displayName = "change this";
    cost = 1;
    side = 0;
    identityTypes[] = {"Head_NATO","LanguageENGB"};
    uniformClass = "OPTRE_UNSC_Dress_Uniform_gray";
    backpack = "Meow_Meow_Invisywisy_Invs";
    items[] = {mag_12(ACE_quikclot), mag_12(ACE_quikclot), mag_12(ACE_quikclot), mag_4(ACE_quikclot), mag_10(ACE_CableTie)};
    respawnItems[] = {mag_12(ACE_quikclot), mag_12(ACE_quikclot), mag_12(ACE_quikclot), mag_4(ACE_quikclot), mag_10(ACE_CableTie)};
    linkedItems[] = {"AM_armor","H_Beret_EAF_01_F","ItemMap","ItemRadio","ItemCompass","ItemWatch", "TIOW_F_Gloves_Black", "TIOW_Bionic_Eye", "Laserdesignator"};
    respawnlinkedItems[] = {"AM_armor","H_Beret_EAF_01_F1","ItemMap","ItemRadio","ItemCompass","ItemWatch", "TIOW_F_Gloves_Black", "TIOW_Bionic_Eye", "Laserdesignator"};
  };
  
  //Actual Units
    class DK143_O_FWKurus_Guardsmen : DK143_Base_FWKurusGuardsmen{
        scope = 2;
        scopeCurator =2;
        displayName = "Guardsmen";

        // Give AI gun
		weapons[] = {"galvanic_rifle"};
        respawnWeapons[] = {"galvanic_rifle"};
		// Give AI boolets
        magazines[] = {mag_5(galvanic_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag"};
        respawnMagazines[] = {mag_5(galvanic_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag"};
    };
};
