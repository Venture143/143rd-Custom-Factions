class CfgPatches {
  class I_EnforcerCorps {
    units[] = {
      "I_Enforcer_Corps_Squad_Leader_01",
      "I_Enforcer_Corps_Rifleman_01",
      "I_Enforcer_Corps_AT_01",
      "I_Enforcer_Corps_Autorifleman_01",
      "I_Enforcer_Corps_Asst_Autorifleman_01",
      "I_Enforcer_Corps_Marksman_01",
      "I_Enforcer_Corps_Medic_01",
      "I_Enforcer_Corps_Grenadier_01",
      "I_Enforcer_Corps_AMZ_26_Badger_IFV_01",
      "I_Enforcer_Corps_Panther_1A3_01",
      "I_Enforcer_Corps_AMZ_50_Marksman_01",
      "I_Enforcer_Corps_PAH_6Cheetah_01",
      "I_Enforcer_Corps_Eurofighter_Hailstorm_01",
      "I_Enforcer_Corps_Crewman_01", 
      "I_Enforcer_Corps_Grenadier_AT_01", 
      "I_Enforcer_Corps_Grenadier_Autorifleman_01", 
      "I_Enforcer_Corps_Grenadier_01", 
      "I_Enforcer_Corps_Grenadier_SL_01",
      "I_Enforcer_Corps_Squad_Leader_Kommando_01",
      "I_Enforcer_Corps_Rifleman_Kommando_01",
      "I_Enforcer_Corps_Marksman_Kommando_01"
    };
    weapons[] = {};
    requiredVersion = 1.62;
    requiredAddons[] = {
      "A3_Characters_F",
      "rhs_cti_insurgents",
      "rhsgref_c_troops","CFP_O_IRARMY"
    };
    author = "WM. Loli";
    authors[] = {"WM. Loli"};
  };
};

class CfgFactionClasses {
  class I_EnforcerCorps {
    displayName = "Enforcer Corps";
    side = 2;
    flag = "\A3\ui_f\data\map\markers\flags\EU_ca.paa";
    icon = "\A3\ui_f\data\map\markers\flags\EU_ca.paa";
    priority = 0;
  };
};

class CfgGroups { 
    class Indep {
        class I_EnforcerCorps {
            name = "Enforcer Corps";
            
            class Infantry {
                name = "Infantry";
			    class i_enforcer_corps_infantry_Squad {
                    name = "Squad";
                    side = 2;
                    faction = "I_EnforcerCorps";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Marksman_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Autorifleman_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_AT_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Autorifleman_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_01";
                    };
                };

                class i_enforcer_corps_infantry_Fireteam {
                    name = "Fireteam";
                    side = 2;
                    faction = "I_EnforcerCorps";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_AT_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Autorifleman_01";
                    };
                };
        
			};
			
			class SpecOps {
                name = "Special Forces";
				class i_enforcer_corps_specops_GrenadierSquad {
                    name = "Grenadier Squad";
                    side = 2;
                    faction = "I_EnforcerCorps";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_SL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_Autorifleman_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_Autorifleman_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_AT_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_Autorifleman_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_01";
                    };
                };

                class i_enforcer_corps_specops_GrenadierFireteam {
                    name = "Grenadier Fireteam";
                    side = 2;
                    faction = "I_EnforcerCorps";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_SL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_AT_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_Autorifleman_01";
                    };
                };
			
				class i_enforcer_corps_specops_KommandoSquad {
                    name = "Kommando Squad";
                    side = 2;
                    faction = "I_EnforcerCorps";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Squad_Leader_Kommando_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_Kommando_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_Kommando_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_Kommando_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_Kommando_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Marksman_Kommando_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Marksman_Kommando_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Marksman_Kommando_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Marksman_Kommando_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_Kommando_01";
                    };
                };

                class i_enforcer_corps_specops_KommandoFireteam {
                    name = "Kommando Fireteam";
                    side = 2;
                    faction = "I_EnforcerCorps";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Squad_Leader_Kommando_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_Kommando_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_Kommando_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Marksman_Kommando_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Marksman_Kommando_01";
                    };
                };
			};
		};
    };
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
  //base units
  class I_Soldier_SL_F;
  class O_MBT_04_cannon_F;
  class B_MBT_01_arty_F;
  class B_Heli_Attack_01_dynamicLoadout_F;
  class CUP_B_GR9_DYN_GB;
  class CFP_B_GBARMY_Merlin_HC3_Armed_WDL_01;
  class B_UAV_02_dynamicLoadout_F;
  class B_APC_Wheeled_01_cannon_F;

  class I_EnforcerCorps_Import_Dude : I_Soldier_SL_F {scope = 0; class EventHandlers;};
  class I_EnforcerCorps_Import_tank : O_MBT_04_cannon_F {scope = 0; class EventHandlers;};
  // doods
  class I_Enforcer_Corps_Squad_Leader_01 : I_EnforcerCorps_Import_Dude {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "I_EnforcerCorps";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "CFP_FieldUniform_ipdpm";

        linkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_vhsd2_ct15x","rhs_weap_cz99"};
        respawnWeapons[] = {"rhs_weap_vhsd2_ct15x","rhs_weap_cz99"};

        magazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ"};

        backpack = "TFAR_rt1523g_black";

        ALiVE_orbatCreator_loadout[] = {{"CUP_Famas_F1_Rail","","CUP_acc_Flashlight","",{"CUP_25Rnd_556x45_Famas_Tracer_Yellow",25},{},""},{},{},{"LOP_U_IRAQ_M93_pol_digi",{{"ACE_elasticBandage",10},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_CableTie",1},{"rhs_mag_m67",1,1}}},{"SP_Tactical1_Blue",{{"CUP_25Rnd_556x45_Famas_Tracer_Yellow",14,25}}},{"TFAR_rt1523g_black",{}},"rhssaf_helmet_m97_nostrap_blue_tan_ess_bare","",{},{"","","ItemRadio","ItemCompass","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
  };
  
  class I_Enforcer_Corps_Rifleman_01 : I_Enforcer_Corps_Squad_Leader_01 {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "I_EnforcerCorps";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "CFP_FieldUniform_ipdpm";

        linkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_vhsd2_ct15x"};
        respawnWeapons[] = {"rhs_weap_vhsd2_ct15x"};

        magazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_30rnd_556x45_Tracers_G36"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_30rnd_556x45_Tracers_G36"};

        backpack = "B_LegStrapBag_black_F";

        ALiVE_orbatCreator_loadout[] = {{"CUP_Famas_F1_Rail","","CUP_acc_Flashlight","",{"CUP_25Rnd_556x45_Famas_Tracer_Yellow",25},{},""},{},{},{"LOP_U_IRAQ_M93_pol_digi",{{"ACE_elasticBandage",10},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_CableTie",1},{"rhs_mag_m67",1,1}}},{"SP_Tactical1_Blue",{{"CUP_25Rnd_556x45_Famas_Tracer_Yellow",14,25}}},{},"rhssaf_helmet_m97_nostrap_blue_tan_ess_bare","",{},{"","","ItemRadio","ItemCompass","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
   
  class I_Enforcer_Corps_AT_01 : I_Enforcer_Corps_Rifleman_01 {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT";
        side = 2;
        faction = "I_EnforcerCorps";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "CFP_FieldUniform_ipdpm";

        linkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_vhsd2_ct15x","launch_O_Vorona_green_F"};
        respawnWeapons[] = {"rhs_weap_vhsd2_ct15x","launch_O_Vorona_green_F"};

        magazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","Vorona_HEAT","rhssaf_30rnd_556x45_Tracers_G36"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","Vorona_HEAT","rhssaf_30rnd_556x45_Tracers_G36"};

        

        ALiVE_orbatCreator_loadout[] = {{"CUP_Famas_F1_Rail","","CUP_acc_Flashlight","",{"CUP_25Rnd_556x45_Famas_Tracer_Yellow",25},{},""},{"launch_MRAWS_sand_rail_F","","","",{"MRAWS_HEAT55_F",1},{},""},{},{"LOP_U_IRAQ_M93_pol_digi",{{"ACE_elasticBandage",10},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_CableTie",1},{"rhs_mag_m67",1,1}}},{"SP_Tactical1_Blue",{{"CUP_25Rnd_556x45_Famas_Tracer_Yellow",14,25}}},{"B_AssaultPack_blk",{{"MRAWS_HEAT55_F",3,1}}},"rhssaf_helmet_m97_nostrap_blue_tan_ess_bare","",{},{"","","ItemRadio","ItemCompass","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
   };
   
  class I_Enforcer_Corps_Autorifleman_01 : I_Enforcer_Corps_Rifleman_01 {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 2;
        faction = "I_EnforcerCorps";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "CFP_FieldUniform_ipdpm";

        linkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_minimi_para_railed"};
        respawnWeapons[] = {"rhs_weap_minimi_para_railed"};

        magazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};
        respawnMagazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};

        backpack = "B_LegStrapBag_black_F";

        ALiVE_orbatCreator_loadout[] = {{"CFP_Negev_Black","","","",{"150Rnd_762x54_Box_Tracer",150},{},""},{},{},{"LOP_U_IRAQ_M93_pol_digi",{{"ACE_elasticBandage",10},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_CableTie",1},{"rhs_mag_m67",1,1}}},{"SP_Tactical1_Blue",{{"150Rnd_762x54_Box_Tracer",2,150}}},{},"rhssaf_helmet_m97_nostrap_blue_tan_ess_bare","",{},{"","","ItemRadio","ItemCompass","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };


  class I_Enforcer_Corps_Marksman_01 : I_Enforcer_Corps_Rifleman_01 {
	author = "WM. Loli";
	scope = 2;
	scopeCurator = 2;
	displayName = "Marksman";
	side = 2;
	faction = "I_EnforcerCorps";

	identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

	uniformClass = "CFP_FieldUniform_ipdpm";

	linkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};
	respawnlinkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};

	weapons[] = {"srifle_LRR_F","rhs_weap_cz99"};
	respawnWeapons[] = {"srifle_LRR_F","rhs_weap_cz99"};

	magazines[] = {"7Rnd_408_Mag","rhssaf_mag_15Rnd_9x19_FMJ","7Rnd_408_Mag","rhssaf_mag_15Rnd_9x19_FMJ"};
	respawnMagazines[] = {"7Rnd_408_Mag","rhssaf_mag_15Rnd_9x19_FMJ","7Rnd_408_Mag","rhssaf_mag_15Rnd_9x19_FMJ"};

	backpack = "B_LegStrapBag_black_F";

	ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_CZ750","","","CUP_optic_AIMM_COMPM4_BLK",{"CUP_10Rnd_762x51_CZ750_Tracer",10},{},"bipod_01_F_blk"},{},{},{"LOP_U_IRAQ_M93_pol_digi",{{"ACE_elasticBandage",10},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_CableTie",1},{"rhs_mag_m67",1,1}}},{"SP_Tactical1_Blue",{{"CUP_10Rnd_762x51_CZ750_Tracer",7,10}}},{},"rhssaf_helmet_m97_nostrap_blue_tan_ess_bare","",{},{"","","ItemRadio","ItemCompass","ItemWatch",""}};

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};

	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
   };
   
	class I_Enforcer_Corps_Grenadier_SL_01 :  I_Enforcer_Corps_Rifleman_01 {
		author = "WM. Loli";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier SL";
		side = 2;
		faction = "I_EnforcerCorps";

		identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

		uniformClass = "CFP_FieldUniform_ipdpm";

		linkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};
		respawnlinkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};

		weapons[] = {"rhs_weap_vhsd2_bg_ct15x"};
		respawnWeapons[] = {"rhs_weap_vhsd2_bg_ct15x"};

		magazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_30rnd_556x45_Tracers_G36"};
		respawnMagazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_30rnd_556x45_Tracers_G36"};

		backpack = "B_LegStrapBag_black_F";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_vhsd2_bg","","H2H_acc_bayo_M12","optic_Nightstalker",{"rhsgref_30rnd_556x45_vhs2_t",30},{"1Rnd_HE_Grenade_shell",1},""},{},{},{"CFP_FieldUniform_ipdpm_SS",{{"ACE_elasticBandage",20},{"ACE_packingBandage",20},{"ACE_quikclot",20}}},{"SP_Modular2_Black",{{"rhsgref_30rnd_556x45_vhs2_t",10,30},{"1Rnd_HE_Grenade_shell",9,1}}},{"TFAR_rt1523g_black",{}},"SP_PASGTHelmet_Blue2","G_Tactical_Clear",{},{"ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
    };

   class I_Enforcer_Corps_Grenadier_01 :  I_Enforcer_Corps_Rifleman_01 {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "I_EnforcerCorps";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "CFP_FieldUniform_ipdpm";

        linkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_vhsd2_bg_ct15x"};
        respawnWeapons[] = {"rhs_weap_vhsd2_bg_ct15x"};

        magazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_30rnd_556x45_Tracers_G36"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_30rnd_556x45_Tracers_G36"};

        backpack = "B_LegStrapBag_black_F";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_vhsd2_bg","","H2H_acc_bayo_M12","optic_Nightstalker",{"rhsgref_30rnd_556x45_vhs2_t",30},{"1Rnd_HE_Grenade_shell",1},""},{},{},{"CFP_FieldUniform_ipdpm_SS",{{"ACE_elasticBandage",20},{"ACE_packingBandage",20},{"ACE_quikclot",20}}},{"SP_Modular2_Black",{{"rhsgref_30rnd_556x45_vhs2_t",10,30},{"1Rnd_HE_Grenade_shell",9,1}}},{},"SP_PASGTHelmet_Blue2","G_Tactical_Clear",{},{"ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
   
    class I_Enforcer_Corps_Grenadier_Autorifleman_01 :  I_Enforcer_Corps_Rifleman_01 {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier Autorifleman";
        side = 2;
        faction = "I_EnforcerCorps";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "CFP_FieldUniform_ipdpm";

        linkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_vhsd2_bg_ct15x"};
        respawnWeapons[] = {"rhs_weap_vhsd2_bg_ct15x"};

        magazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_30rnd_556x45_Tracers_G36"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_30rnd_556x45_Tracers_G36"};

        backpack = "B_LegStrapBag_black_F";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_minimi_para_railed","","","optic_Nightstalker",{"CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249",100},{},"rhsusf_acc_kac_grip_saw_bipod"},{},{},{"CFP_FieldUniform_ipdpm_SS",{{"ACE_elasticBandage",20},{"ACE_packingBandage",20},{"ACE_quikclot",20}}},{"SP_Modular2_Black",{{"CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249",3,100}}},{},"SP_PASGTHelmet_Blue2","G_Tactical_Clear",{},{"ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class I_Enforcer_Corps_Grenadier_AT_01 :  I_Enforcer_Corps_Rifleman_01 {
		author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier AT";
        side = 2;
        faction = "I_EnforcerCorps";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "CFP_FieldUniform_ipdpm";

        linkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_vhsd2_bg_ct15x"};
        respawnWeapons[] = {"rhs_weap_vhsd2_bg_ct15x"};

        magazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_30rnd_556x45_Tracers_G36"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_30rnd_556x45_Tracers_G36"};

        backpack = "B_LegStrapBag_black_F";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_vhsk2","","H2H_acc_bayo_M12","optic_Nightstalker",{"rhsgref_30rnd_556x45_vhs2_t",30},{},""},{"launch_MRAWS_sand_rail_F","","H2H_acc_bayo_M12","",{"rhs_mag_maaws_HEAT",1},{},""},{},{"CFP_FieldUniform_ipdpm_SS",{{"ACE_elasticBandage",20},{"ACE_packingBandage",20},{"ACE_quikclot",20}}},{"SP_Modular2_Black",{{"1Rnd_HE_Grenade_shell",9,1}}},{"SP_Carryall_Black",{{"MRAWS_HEAT_F",5,1}}},"SP_PASGTHelmet_Blue2","G_Tactical_Clear",{},{"ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class I_Enforcer_Corps_Crewman_01 : I_Enforcer_Corps_Squad_Leader_01 {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 2;
        faction = "I_EnforcerCorps";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "CFP_FieldUniform_ipdpm";

        linkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_vhsd2_ct15x"};
        respawnWeapons[] = {"rhs_weap_vhsd2_ct15x"};

        magazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_30rnd_556x45_Tracers_G36"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_30rnd_556x45_Tracers_G36"};

        backpack = "B_LegStrapBag_black_F";

        ALiVE_orbatCreator_loadout[] = {{},{},{"rhs_weap_cz99","","","",{"rhssaf_mag_15Rnd_9x19_FMJ",15},{},""},{"CFP_FieldUniform_ipdpm_SS",{{"ACE_elasticBandage",20},{"ACE_packingBandage",20},{"ACE_quikclot",20}}},{"SP_JackEllis1_Blue",{}},{"TFAR_rt1523g_black",{{"rhssaf_mag_15Rnd_9x19_FMJ",16,15}}},"SP_SPH4Helmet_Blue","G_Aviator",{},{"ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
   };


    class I_Enforcer_Corps_Squad_Leader_Kommando_01 : I_EnforcerCorps_Import_Dude {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Kommando Squad Leader";
        side = 2;
        faction = "I_EnforcerCorps";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "CFP_FieldUniform_ipdpm";

        linkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_vhsd2_ct15x","rhs_weap_cz99"};
        respawnWeapons[] = {"rhs_weap_vhsd2_ct15x","rhs_weap_cz99"};

        magazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ"};

        backpack = "TFAR_rt1523g_black";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_vhsd2","","CUP_acc_ANPEQ_2_Flashlight_Black_L","optic_Nightstalker",{"rhsgref_30rnd_556x45_vhs2",30},{},"rhsusf_acc_kac_grip"},{},{},{"CFP_FieldUniform_ipdpm",{{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",6},{"ACE_M84",1,1},{"HandGrenade",2,1}}},{"SP_Modular1_Black",{{"rhsgref_30rnd_556x45_vhs2",15,30}}},{"TFAR_rt1523g_black",{}},"SP_PASGTHelmet_Blue1","G_Tactical_Clear",{},{"","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
  };

   class I_Enforcer_Corps_Rifleman_Kommando_01 : I_EnforcerCorps_Import_Dude {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Kommando Rifleman";
        side = 2;
        faction = "I_EnforcerCorps";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "CFP_FieldUniform_ipdpm";

        linkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_vhsd2_ct15x","rhs_weap_cz99"};
        respawnWeapons[] = {"rhs_weap_vhsd2_ct15x","rhs_weap_cz99"};

        magazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ"};

        backpack = "TFAR_rt1523g_black";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_vhsd2","","CUP_acc_ANPEQ_2_Flashlight_Black_L","optic_Nightstalker",{"rhsgref_30rnd_556x45_vhs2",30},{},"rhsusf_acc_kac_grip"},{},{},{"CFP_FieldUniform_ipdpm",{{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",6},{"ACE_M84",1,1},{"HandGrenade",2,1}}},{"SP_Modular1_Black",{{"rhsgref_30rnd_556x45_vhs2",15,30}}},{},"SP_PASGTHelmet_Blue1","G_Tactical_Clear",{},{"","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
  };

     class I_Enforcer_Corps_Marksman_Kommando_01 : I_EnforcerCorps_Import_Dude {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Kommando Marksman";
        side = 2;
        faction = "I_EnforcerCorps";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "CFP_FieldUniform_ipdpm";

        linkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_vhsd2_ct15x","rhs_weap_cz99"};
        respawnWeapons[] = {"rhs_weap_vhsd2_ct15x","rhs_weap_cz99"};

        magazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_30rnd_556x45_Tracers_G36","rhssaf_mag_15Rnd_9x19_FMJ"};

        backpack = "TFAR_rt1523g_black";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_AS50","","","optic_LRPS",{"CUP_5Rnd_127x99_as50_M",5},{},""},{},{},{"CFP_FieldUniform_ipdpm",{{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",6},{"ACE_M84",1,1},{"HandGrenade",2,1}}},{"SP_Modular1_Black",{{"CUP_5Rnd_127x99_as50_M",10,5}}},{},"SP_PASGTHelmet_Blue1","G_Tactical_Clear",{},{"","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
  };
   // vehicles
   
   class I_Enforcer_Corps_AMZ_26_Badger_IFV_01 : B_APC_Wheeled_01_cannon_F {
      scope = 2;
      scopeCurator = 2;
      displayName = "AMZ-26 Badger IFV";
      side = 2;
      faction = "I_EnforcerCorps";
      crew = "I_Enforcer_Corps_Crewman_01";
    };
    
    class I_Enforcer_Corps_Panther_1A3_01 : I_EnforcerCorps_Import_tank {
     scope = 2;
     scopeCurator = 2;
     displayName = "Panther 1A3";
     side = 2;
     faction = "I_EnforcerCorps";
     crew = "I_Enforcer_Corps_Crewman_01";
	 
	 class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_1_CO.paa'];_unit setObjectTextureGlobal [1,'a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_2_CO.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F\Data\camonet_CSAT_Stripe_Desert_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Grey";

    };
    
    class I_Enforcer_Corps_AMZ_50_Marksman_01 : B_MBT_01_arty_F {
      scope = 2;
      scopeCurator = 2;
      displayName = "AMZ-50 Marksman";
      side = 2;
      faction = "I_EnforcerCorps";
      crew = "I_Enforcer_Corps_Crewman_01";
    };
    
    class I_Enforcer_Corps_PAH_6Cheetah_01 : B_Heli_Attack_01_dynamicLoadout_F {
      scope = 2;
      scopeCurator = 2;
      displayName = "PAH-6 Cheetah";
      side = 2;
      faction = "I_EnforcerCorps";
      crew = "I_Enforcer_Corps_Crewman_01";
    };
    
    class I_Enforcer_Corps_Eurofighter_Hailstorm_01 : CUP_B_GR9_DYN_GB {
      scope = 2;
      scopeCurator = 2;
      displayName = "Eurofighter Hailstorm";
      side = 2;
      faction = "I_EnforcerCorps";
      crew = "I_Enforcer_Corps_Crewman_01";
    };
    
	class I_EnforcerCorps_GadFly : CFP_B_GBARMY_Merlin_HC3_Armed_WDL_01{
	  scope = 2;
      scopeCurator = 2;
      displayName = "EC 220 Gadfly";
      side = 2;
      faction = "I_EnforcerCorps";
      crew = "I_Enforcer_Corps_Crewman_01";
	};
};