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
      "I_Enforcer_Corps_Eaglefly_01"
    };
    weapons[] = {};
    requiredVersion = 1.62;
    requiredAddons[] = {
      "A3_Characters_F",
      "rhs_cti_insurgents",
      "rhsgref_c_troops",
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

                class i_enforcer_corps_infantry_kommandos {
                    name = "Kommandos";
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
                        vehicle = "I_Enforcer_Corps_Marksman_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Medic_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Rifleman_01";
                    };
                };

                class i_enforcer_corps_infantry_grenadiers {
                    name = "Grenadiers";
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
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Asst_Autorifleman_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Medic_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_Enforcer_Corps_Grenadier_01";
                    };
                };
            };

            class Mechanized {
                name = "Mechanized Infantry";

                class i_enforcer_corps_mechanized_mechanized_kommandos {
                    name = "Mechanized Kommandos";
                    side = 2;
                    faction = "I_EnforcerCorps";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                            position[] = {0,0,0};
                            rank = "SERGEANT";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_AMZ_26_Badger_IFV_01";
                    };
                        class Unit1 {
                            position[] = {-18,-24,0};
                            rank = "PRIVATE";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_Squad_Leader_01";
                        };
                        class Unit2 {
                            position[] = {23,-29,0};
                            rank = "PRIVATE";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_Rifleman_01";
                        };
                        class Unit3 {
                            position[] = {-23,-29,0};
                            rank = "PRIVATE";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_Rifleman_01";
                        };
                        class Unit4 {
                            position[] = {28,-34,0};
                            rank = "PRIVATE";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_Medic_01";
                        };
                        class Unit5 {
                            position[] = {-28,-34,0};
                            rank = "PRIVATE";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_Marksman_01";
                        };
                        class Unit6 {
                            position[] = {33,-39,0};
                            rank = "PRIVATE";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_Marksman_01";
                        };
                        class Unit7 {
                            position[] = {-33,-39,0};
                            rank = "PRIVATE";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_Rifleman_01";
                        };
                        class Unit8 {
                            position[] = {33,-39,0};
                            rank = "PRIVATE";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_Rifleman_01";
                        };
                };

                class i_enforcer_corps_mechanized_mechanized_grenadiers {
                        name = "Mechanized Grenadiers";
                        side = 2;
                        faction = "I_EnforcerCorps";
                        icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                        rarityGroup = 0.5;

                        class Unit0 {
                            position[] = {0,0,0};
                            rank = "SERGEANT";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_AMZ_26_Badger_IFV_01";
                        };
                        class Unit1 {
                            position[] = {5,-5,0};
                            rank = "PRIVATE";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_Squad_Leader_01";
                        };
                        class Unit2 {
                            position[] = {-5,-5,0};
                            rank = "PRIVATE";
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
                            vehicle = "I_Enforcer_Corps_Autorifleman_01";
                        };
                        class Unit5 {
                            position[] = {15,-15,0};
                            rank = "PRIVATE";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_Asst_Autorifleman_01";
                        };
                        class Unit6 {
                            position[] = {-15,-15,0};
                            rank = "PRIVATE";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_AT_01";
                        };
                        class Unit7 {
                            position[] = {20,-20,0};
                            rank = "PRIVATE";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_Medic_01";
                        };
                        class Unit8 {
                            position[] = {-20,-20,0};
                            rank = "PRIVATE";
                            side = 2;
                            vehicle = "I_Enforcer_Corps_Grenadier_01";
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
  class B_MBT_01_cannon_F;
  class B_MBT_01_arty_F;
  class B_Heli_Attack_01_dynamicLoadout_F;
  class O_Plane_Fighter_02_F;
  class B_UAV_02_dynamicLoadout_F;
  class B_APC_Wheeled_01_cannon_F;

  class I_EnforcerCorps_Import_Dude : I_Soldier_SL_F {scope = 0; class EventHandlers;};
  
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

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_vhsd2_ct15x","rhsusf_acc_nt4_black","ACE_acc_pointer_green","",{"rhssaf_30rnd_556x45_Tracers_G36",30},{},"rhsusf_acc_grip2"},{},{"rhs_weap_cz99","","","",{"rhssaf_mag_15Rnd_9x19_FMJ",15},{},""},{"CFP_FieldUniform_ipdpm",{{"ACE_elasticBandage",20},{"ACE_CableTie",3},{"ACE_splint",4},{"ACE_tourniquet",4},{"SmokeShell",1,1}}},{"V_EOD_blue_F",{{"ACE_elasticBandage",2},{"HandGrenade",2,1},{"SmokeShell",2,1}}},{"TFAR_rt1523g_black",{{"rhssaf_30rnd_556x45_Tracers_G36",10,30},{"rhssaf_mag_15Rnd_9x19_FMJ",6,15}}},"H_PASGT_basic_blue_F","G_CBRN_S10",{},{"ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"}};

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

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_vhsd2_ct15x","rhsusf_acc_nt4_black","ACE_acc_pointer_green","",{"rhssaf_30rnd_556x45_Tracers_G36",30},{},"rhsusf_acc_grip2"},{},{},{"CFP_FieldUniform_ipdpm",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"ACE_M84",1,1}}},{"V_EOD_blue_F",{{"ACE_elasticBandage",20},{"ACE_CableTie",3},{"ACE_splint",3}}},{"B_LegStrapBag_black_F",{{"ACE_elasticBandage",2},{"rhssaf_30rnd_556x45_Tracers_G36",13,30}}},"H_PASGT_basic_blue_F","G_CBRN_S10",{},{"ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"}};

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

        backpack = "min_rf_torna_black";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_vhsd2_ct15x","rhsusf_acc_nt4_black","ACE_acc_pointer_green","",{"rhssaf_30rnd_556x45_Tracers_G36",30},{},"rhsusf_acc_grip2"},{"launch_O_Vorona_green_F","","","",{"Vorona_HEAT",1},{},""},{},{"CFP_FieldUniform_ipdpm",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"ACE_M84",1,1}}},{"V_EOD_blue_F",{{"ACE_elasticBandage",20},{"ACE_CableTie",3},{"ACE_splint",3}}},{"min_rf_torna_black",{{"ACE_elasticBandage",2},{"Vorona_HEAT",2,1},{"rhssaf_30rnd_556x45_Tracers_G36",19,30}}},"H_PASGT_basic_blue_F","G_CBRN_S10",{},{"ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"}};

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

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_minimi_para_railed","rhsusf_acc_rotex5_grey","ACE_acc_pointer_green","rhsusf_acc_eotech_552",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_kac_grip_saw_bipod"},{},{},{"CFP_FieldUniform_ipdpm",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"ACE_M84",1,1}}},{"V_EOD_blue_F",{{"ACE_elasticBandage",20},{"ACE_CableTie",3},{"ACE_splint",3}}},{"B_LegStrapBag_black_F",{{"ACE_elasticBandage",2},{"rhsusf_200rnd_556x45_mixed_box",1,200}}},"H_PASGT_basic_blue_F","G_CBRN_S10",{},{"ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
 };
 
 class I_Enforcer_Corps_Asst_Autorifleman_01 : I_Enforcer_Corps_Rifleman_01 {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
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

        backpack = "min_rf_torna_black";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_vhsd2_ct15x","rhsusf_acc_nt4_black","ACE_acc_pointer_green","",{"rhssaf_30rnd_556x45_Tracers_G36",30},{},"rhsusf_acc_grip2"},{},{},{"CFP_FieldUniform_ipdpm",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"ACE_M84",1,1}}},{"V_EOD_blue_F",{{"ACE_elasticBandage",20},{"ACE_CableTie",3},{"ACE_splint",3}}},{"min_rf_torna_black",{{"ACE_elasticBandage",2},{"rhssaf_30rnd_556x45_Tracers_G36",13,30},{"rhsusf_200rnd_556x45_mixed_box",4,200}}},"H_PASGT_basic_blue_F","G_CBRN_S10",{},{"ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"}};

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

        ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_F","","","optic_DMS",{"7Rnd_408_Mag",7},{},""},{},{"rhs_weap_cz99","","","",{"rhssaf_mag_15Rnd_9x19_FMJ",15},{},""},{"CFP_FieldUniform_ipdpm",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"ACE_M84",1,1}}},{"V_EOD_blue_F",{{"ACE_elasticBandage",20},{"ACE_CableTie",3},{"ACE_splint",3}}},{"B_LegStrapBag_black_F",{{"7Rnd_408_Mag",4,7},{"rhssaf_mag_15Rnd_9x19_FMJ",4,15}}},"H_PASGT_basic_blue_F","G_CBRN_S10",{},{"ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
   };
   
   class I_Enforcer_Corps_Medic_01 : I_Enforcer_Corps_Rifleman_01 {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
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

        backpack = "LOP_B_KB_Med_tub";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_vhsd2_ct15x","rhsusf_acc_nt4_black","ACE_acc_pointer_green","",{"rhssaf_30rnd_556x45_Tracers_G36",30},{},"rhsusf_acc_grip2"},{},{},{"CFP_FieldUniform_ipdpm",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"ACE_M84",1,1}}},{"V_EOD_blue_F",{{"ACE_elasticBandage",20},{"ACE_CableTie",3},{"ACE_splint",3}}},{"LOP_B_KB_Med_tub",{{"ACE_elasticBandage",50},{"ACE_surgicalKit",1},{"ACE_salineIV_250",40},{"ACE_morphine",15},{"ACE_epinephrine",15},{"ACE_splint",12},{"rhssaf_30rnd_556x45_Tracers_G36",10,30}}},"H_PASGT_basic_blue_F","G_CBRN_S10",{},{"ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"}};

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

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_vhsd2_bg_ct15x","rhsusf_acc_nt4_black","ACE_acc_pointer_green","",{"rhssaf_30rnd_556x45_Tracers_G36",30},{},""},{},{},{"CFP_FieldUniform_ipdpm",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"ACE_M84",1,1}}},{"V_EOD_blue_F",{{"ACE_elasticBandage",20},{"ACE_CableTie",3},{"ACE_splint",3}}},{"B_LegStrapBag_black_F",{{"ACE_elasticBandage",2},{"rhssaf_30rnd_556x45_Tracers_G36",9,30},{"1Rnd_HE_Grenade_shell",6,1}}},"H_PASGT_basic_blue_F","G_CBRN_S10",{},{"ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","NVGogglesB_blk_F"}};

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
      crew = "I_Enforcer_Corps_Squad_Leader_01";
    };
    
    class I_Enforcer_Corps_Panther_1A3_01 : B_MBT_01_cannon_F {
     scope = 2;
     scopeCurator = 2;
     displayName = "Panther 1A3";
     side = 2;
     faction = "I_EnforcerCorps";
     crew = "I_Enforcer_Corps_Squad_Leader_01";
    };
    
    class I_Enforcer_Corps_AMZ_50_Marksman_01 : B_MBT_01_arty_F {
      scope = 2;
      scopeCurator = 2;
      displayName = "AMZ-50 Marksman";
      side = 2;
      faction = "I_EnforcerCorps";
      crew = "I_Enforcer_Corps_Squad_Leader_01";
    };
    
    class I_Enforcer_Corps_PAH_6Cheetah_01 : B_Heli_Attack_01_dynamicLoadout_F {
      scope = 2;
      scopeCurator = 2;
      displayName = "PAH-6 Cheetah";
      side = 2;
      faction = "I_EnforcerCorps";
      crew = "I_Enforcer_Corps_Squad_Leader_01";
    };
    
    class I_Enforcer_Corps_Eurofighter_Hailstorm_01 : O_Plane_Fighter_02_F {
      scope = 2;
      scopeCurator = 2;
      displayName = "Eurofighter Hailstorm";
      side = 2;
      faction = "I_EnforcerCorps";
      crew = "I_Enforcer_Corps_Squad_Leader_01";
    };
    
    class I_Enforcer_Corps_Eaglefly_01 : B_UAV_02_dynamicLoadout_F {
      scope = 2;
      scopeCurator = 2;
      displayName = "Eaglefly";
      side = 2;
      faction = "I_EnforcerCorps";
      crew = "I_Enforcer_Corps_Squad_Leader_01";
    };
};
