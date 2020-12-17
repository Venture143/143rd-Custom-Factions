//To Do: All
class CfgPatches {
	class DK143_CustomFactions_BrotherhoodAscendedMind{
		author = "Venture";
		name = "DK143 TIOW ALIVE_COMPAT Custom Factions";
		requiredAddons[] = 
        {"ace_common", "DkoKFoot","CadFoot","OrkBoyz","TIOWSpaceMarines", "IC_CAD_WEAPONS"};
    requiredVersion = 1.62;
		units[] = {"DK143_O_BthrAscMind_Flamer", "DK143_O_BthrAscMind_Grenadier", "DK143_O_BthrAscMind_Rocket", "DK143_O_BthrAscMind_Plasma", "DK143_O_BthrAscMind_Melta", "DK143_O_BthrAscMind_Stubber", "DK143_O_BthrAscMind_Rifleman"};
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
								class DK143_O_BthrAscMind_FireteamLight {
					name = "Fireteam";
					side = 0;
					faction = "DK143_O_BthrAscMind";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Stubber";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					 };
					 class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					 };
				};
				
				class DK143_O_BthrAscMind_FireteamPlasma {
					name = "Fireteam Plasma";
					side = 0;
					faction = "DK143_O_BthrAscMind";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Plasma";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					 };
					 class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					 };
				};
				
				class DK143_O_BthrAscMind_FireteamMelta {
					name = "Fireteam Melta";
					side = 0;
					faction = "DK143_O_BthrAscMind";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Melta";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					 };
					 class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					 };
				};
				
				class DK143_O_BthrAscMind_FireteamRocket {
					name = "Fireteam Rocket";
					side = 0;
					faction = "DK143_O_BthrAscMind";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rocket";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					 };
					 class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					 };
				};
							
				class DK143_O_BthrAscMind_FireteamFlamer {
					name = "Fireteam Flamer";
					side = 0;
					faction = "DK143_O_BthrAscMind";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Flamer";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					 };
					 class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					 };
				};
				
				class DK143_O_BthrAscMind_FireteaGrenadier{
					name = "Fireteam Flamer";
					side = 0;
					faction = "DK143_O_BthrAscMind";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Grenadier";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					 };
					 class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					 };
				};
				
				class DK143_O_BthrAscMind_Squad {
					name = "Squad (Stubber + GL)";
					side = 0;
					faction = "DK143_O_BthrAscMind";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Grenadier";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Stubber";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
				};
				
				class DK143_O_BthrAscMind_SquadPlasma {
					name = "Squad (Plasma)";
					side = 0;
					faction = "DK143_O_BthrAscMind";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Plasma";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Plasma";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
				};
				
				class DK143_O_BthrAscMind_SquadMelta {
					name = "Squad (Melta)";
					side = 0;
					faction = "DK143_O_BthrAscMind";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Melta";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Melta";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
				};
				
				class DK143_O_BthrAscMind_SquadRocket {
					name = "Squad (Rocket)";
					side = 0;
					faction = "DK143_O_BthrAscMind";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rocket";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rocket";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
				};
				
				class DK143_O_BthrAscMind_SquadFlamer {
					name = "Squad (Flamers)";
					side = 0;
					faction = "DK143_O_BthrAscMind";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Flamer";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Flamer";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_BthrAscMind_Rifleman";
					};
				};
			 
     };
    };
  };
};

class CfgVehicles
{
        //Handle Weapons With Attachements (and Cry on the inside)
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
  // Backpacks (I hate you arma)
  class Ren_Backpack_02_black;
  class DK143_BthrAscMind_RocketManBackpack : Ren_Backpack_02_black {
	scope = 1;
	class TransportItems {
                
	};
	class TransportMagazines {
		mag_xx(MLAT_Mag, 5);
	};
  };
        
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
  
  class DK143_O_BthrAscMind_Stubber : DK143_Base_BthrAscMind {
    scope = 2;
    scopeCurator = 2;
    displayName = "Stubberman";
    // Give AI gun
    weapons[] = {"TIOW_BP_Heavy_Stubber"};
    respawnWeapons[] = {"TIOW_BP_Heavy_Stubber"};
    // Give AI boolets
    magazines[] = {mag_12(TIOW_150Rnd_Stubber_expander), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
    respawnMagazines[] = {mag_12(TIOW_150Rnd_Stubber_expander), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
  };
  
  class DK143_O_BthrAscMind_Melta : DK143_Base_BthrAscMind {
    scope = 2;
    scopeCurator = 2;
    displayName = "Meltaman";
    // Give AI gun
    weapons[] = {"TIOW_MeltaGun_01"};
    respawnWeapons[] = {"TIOW_MeltaGun_01"};
    // Give AI boolets
    magazines[] = {mag_12(TIOW_Meltagun_Mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
    respawnMagazines[] = {mag_12(TIOW_Meltagun_Mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
  };
      
  class DK143_O_BthrAscMind_Plasma : DK143_Base_BthrAscMind {
    scope = 2;
    scopeCurator = 2;
    displayName = "Plasmaman";
    // Give AI gun
    weapons[] = {"Chaos_PlasmaGun"};
    respawnWeapons[] = {"Chaos_PlasmaGun"};
    // Give AI boolets
    magazines[] = {mag_12(DK_Overcharge_PlasmaGun_Flask), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
    respawnMagazines[] = {mag_12(DK_Overcharge_PlasmaGun_Flask), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
  };
        
  class DK143_O_BthrAscMind_Rocket : Dk143_Base_BthrAscMind {
    scope = 2;
    scopeCurator = 2;
    displayName = "Rocketman";
    // Give AI gun
    weapons[] = {"ic_cad_galaxy_lasgun","MissileLauncherDKOKBlack"};
    respawnWeapons[] = {"ic_cad_galaxy_lasgun", "MissileLauncherDKOKBlack"};
    // Give AI boolets
    magazines[] = {mag_12(ic_las_powerpack), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
    respawnMagazines[] = {mag_12(ic_las_powerpack), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
    backpack = "DK143_BthrAscMind_RocketManBackpack";
  };
        
  class DK143_O_BthrAscMind_Grenadier : DK143_Base_BthrAscMind {
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    // Give AI gun
    weapons[] = {"TIOW_IG_GL"};
    respawnWeapons[] = {"TIOW_IG_GL"};
    // Give AI boolets
    magazines[] = {mag_8(TIOW_IG_GL_Frag_mag), mag_4(TIOW_ig_krak_grenade_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
    respawnMagazines[] = {mag_8(TIOW_IG_GL_Frag_mag), mag_4(TIOW_ig_krak_grenade_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
  };
	
  class DK143_O_BthrAscMind_Flamer : DK143_Base_BthrAscMind {
    scope = 2;
    scopeCurator = 2;
    displayName = "Flamer";
    // Give AI gun
    weapons[] = {"TIOW_Krieg_Flamer"};
    respawnWeapons[] = {"TIOW_Krieg_Flamer"};
    // Give AI boolets
    magazines[] = {mag_12(TIOW_Krieg_Flamer_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
    respawnMagazines[] = {mag_12(TIOW_Krieg_Flamer_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
  };

};
