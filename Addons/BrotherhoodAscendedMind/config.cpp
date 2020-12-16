//To Do: All
class CfgPatches {
	class DK143_CustomFactions_BrotherhoodAscendedMind{
		author = "Venture";
		name = "DK143 TIOW ALIVE_COMPAT Custom Factions";
		requiredAddons[] = 
        {"ace_common", "DkoKFoot","CadFoot","OrkBoyz","TIOWSpaceMarines", "IC_CAD_WEAPONS"};
    requiredVersion = 1.62;
		units[] = {};
		weapons[] = {};
		worlds[] = {};
	};
};

class CfgFactionClasses {
  class DK143_O_BthrAscMind {
    displayName = "Brotherhood of the Ascended Mind";
		side = 0;
		flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		priority = 0;
  };
};

class CfgGroups {
  class EAST {
		class DK143_Custom_Factions{
			name = "143rd Custom Factions";
        class DK143_O_BthrAscMind {
          name = "Brotherhood of the Ascended Mind";
        };
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

	// ARMA 3 Base Soldier Classes
	class O_Soldier_base_F;
  
  // BAse Config Class
  class DK143_Base_BthrAscMind : O_Soldier_base_F {
    scope = 0;
    scopeCurator = 0;
    faction = "DK143_O_BthrAscMind";
    displayName = "change this";
    cost = 1;
    side = 0;
    identityTypes[] = {"Head_Chaos","LanguageENGB"};
    uniformClass = "CadTnkUni667th_OP";
    backpack = "Ren_Backpack_02_black";
    items[] = {mag_12(ACE_quikclot), mag_12(ACE_quikclot), mag_12(ACE_quikclot), mag_4(ACE_quikclot), mag_10(ACE_CableTie)};
    respawnItems[] = {mag_12(ACE_quikclot), mag_12(ACE_quikclot), mag_12(ACE_quikclot), mag_4(ACE_quikclot), mag_10(ACE_CableTie)};
    linkedItems[] = {"ML700_ML_Cadian_Armor5_Armor","TIOW_RenEnforcerMask_1","ItemMap","ItemRadio","ItemCompass","ItemWatch", "TIOW_F_Gloves_Black", "ML700_BP_Photo_NVG", "Laserdesignator"};
    respawnlinkedItems[] = {"ML700_ML_Cadian_Armor5_Armor","TIOW_RenEnforcerMask_1","ItemMap","ItemRadio","ItemCompass","ItemWatch", "TIOW_F_Gloves_Black", "ML700_BP_Photo_NVG", "Laserdesignator"};
  };
  
  //Actual Units
  class DK143_O_BthrAscMind_Rifleman : DK143_Base_BthrAscMind {
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    // Give AI gun
    weapons[] = {"ic_cad_galaxy_lasgun"};
    respawnWeapons[] = {"ic_cad_galaxy_lasgun"};
    // Give AI boolets
    magazines[] = {mag_12(ic_las_powerpack), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
    respawnMagazines[] = {mag_12(ic_las_powerpack), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
  };
};
