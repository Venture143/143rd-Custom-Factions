class CfgPatches {
  class B_JointStrikeForce {
    units[] = {
      "B_JointStrikeForce_Squad_Leader_01",
      "B_JointStrikeForce_Rifleman_01",
      "B_JointStrikeForce_Medic_01",
      "B_JointStrikeForce_Autorifleman_01",
      "B_JointStrikeForce_AT_01",
      "B_JointStrikeForce_Sniper_01",
      "B_JointStrikeForce_Grenadier_01",
      "B_JointStrikeForce_M5A2_Schwarzkopf_01",
      "B_JointStrikeForce_M118_Fastback_01",
      "B_JointStrikeForce_M320_Spartan_01",
      "B_JointStrikeForce_AH_10_Blackfoot_01",
      "B_JointStrikeForce_V120_Valkyrie_01",
      "B_JointStrikeForce_A20_Razorback_01",
      "B_JointStrikeForce_PD_6Rottweiler_01"
    };
    weapons[] = {};
    requiredVersion = 1.62;
    requiredAddons[] = {"ace_common", "rhsusf_c_m1a2","rhsusf_c_troops",};
    author = "WM. Loli";
    authors[] = {"WM. Loli"};
  };
};

class CfgFactionClasses {
  class B_JointStrikeForce {
    displayName = "Joint Strike Force";
    side = 1;
    flag = "\A3\ui_f\data\map\markers\flags\USA_ca.paa";
    icon = "\A3\ui_f\data\map\markers\flags\USA_ca.paa";
    priority = 0;
  };
};

class CfgGroups {
  class WEST {
      class B_JointStrikeForce {
          name = "Joint Strike Force";

          class Infantry {
                name = "Infantry"; 

                class B_JointStrikeForce_infantry_ghosts {
                    name = "Ghosts";
                    side = 1;
                    faction = "B_JointStrikeForce";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Medic_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Sniper_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Sniper_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Rifleman_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Rifleman_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Rifleman_01";
                    };
                };
          
                class B_JointStrikeForce_infantry_pioneers {
                    name = "Pioneers";
                    side = 1;
                    faction = "B_JointStrikeForce";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Medic_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_AT_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Grenadier_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Autorifleman_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Autorifleman_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Grenadier_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Grenadier_01";
                    };
                };
          };

          class Mechanized {
            name = "Mechanized Infantry";

            class B_JointStrikeForce_mechanized_mechanized_ghosts {
                    name = "Mechanized Ghosts";
                    side = 1;
                    faction = "B_JointStrikeForce";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_JointStrikeForce_M118_Fastback_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Squad_Leader_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Sniper_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Medic_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Rifleman_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Rifleman_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Rifleman_01";
                    };
                };

                class B_JointStrikeForce_mechanized_mechanized_pioneers {
                    name = "Mechanized Pioneers";
                    side = 1;
                    faction = "B_JointStrikeForce";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Medic_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Autorifleman_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_AT_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Grenadier_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_Grenadier_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JointStrikeForce_M118_Fastback_01";
                    };
                };
          };
      };
    };
};

class CfgVehicles {
  // base units
  class B_Soldier_SL_F;
  class B_MBT_01_TUSK_F;
  class RHS_M6;
  class rhsusf_m109d_usarmy;
  class B_T_VTOL_01_infantry_F;
  class B_Plane_CAS_01_dynamicLoadout_F;
  class USAF_MQ9;
  class B_Heli_Attack_01_dynamicLoadout_F;
  
  // units
  
  class B_JointStrikeForce_Squad_Leader_01 : B_Soldier_SL_F {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "B_JointStrikeForce";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_cu_ocp";

        linkedItems[] = {"V_PlateCarrierSpec_blk","rhsusf_hgu56p_visor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrierSpec_blk","rhsusf_hgu56p_visor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_m4a1_blockII_KAC_bk","rhsusf_weap_m9","Binocular"};
        respawnWeapons[] = {"rhs_weap_m4a1_blockII_KAC_bk","rhsusf_weap_m9","Binocular"};

        magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhsusf_mag_15Rnd_9x19_FMJ","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhsusf_mag_15Rnd_9x19_FMJ"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhsusf_mag_15Rnd_9x19_FMJ","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhsusf_mag_15Rnd_9x19_FMJ"};

        backpack = "TFAR_rt1523g_black";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_blockII_KAC_bk","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"rhs_mag_30Rnd_556x45_Mk262_Stanag",30},{},"rhsusf_acc_grip3"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_cu_ocp",{{"ACE_elasticBandage",13},{"ACE_CableTie",3},{"ACE_tourniquet",4},{"ACE_splint",5},{"ACE_morphine",5},{"ACE_epinephrine",5}}},{"V_PlateCarrierSpec_blk",{{"ACE_elasticBandage",18},{"HandGrenade",3,1},{"SmokeShell",10,1},{"ACE_CTS9",3,1}}},{"TFAR_rt1523g_black",{{"rhs_mag_30Rnd_556x45_Mk262_Stanag",8,30},{"rhsusf_mag_15Rnd_9x19_FMJ",4,15}}},"rhsusf_hgu56p_visor_black","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
  
  class B_JointStrikeForce_Rifleman_01 : B_JointStrikeForce_Squad_Leader_01 {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "B_JointStrikeForce";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_cu_ocp";

        linkedItems[] = {"V_PlateCarrier2_blk","rhsusf_hgu56p_visor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","rhsusf_hgu56p_visor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_m4a1_blockII_KAC_bk","Binocular"};
        respawnWeapons[] = {"rhs_weap_m4a1_blockII_KAC_bk","Binocular"};

        magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_blockII_KAC_bk","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"rhs_mag_30Rnd_556x45_Mk262_Stanag",30},{},"rhsusf_acc_grip3"},{},{},{"rhs_uniform_cu_ocp",{{"ACE_elasticBandage",13},{"ACE_CableTie",3},{"ACE_tourniquet",4},{"ACE_splint",5},{"ACE_morphine",5},{"ACE_epinephrine",5}}},{"V_PlateCarrier2_blk",{{"ACE_elasticBandage",10},{"HandGrenade",3,1},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",10,30}}},{},"rhsusf_hgu56p_visor_black","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
  
  class B_JointStrikeForce_Medic_01 : B_JointStrikeForce_Rifleman_01 {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 1;
        faction = "B_JointStrikeForce";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_cu_ocp";

        linkedItems[] = {"V_PlateCarrier2_blk","rhsusf_hgu56p_visor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","rhsusf_hgu56p_visor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_m4a1_blockII_KAC_bk","Binocular"};
        respawnWeapons[] = {"rhs_weap_m4a1_blockII_KAC_bk","Binocular"};

        magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag"};

        backpack = "rhsusf_assault_eagleaiii_ocp";
    };
  
  class B_JointStrikeForce_Autorifleman_01 : B_JointStrikeForce_Rifleman_01 {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "B_JointStrikeForce";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_cu_ocp";

        linkedItems[] = {"V_PlateCarrier2_blk","rhsusf_hgu56p_visor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","rhsusf_hgu56p_visor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_m249_pip","Binocular"};
        respawnWeapons[] = {"rhs_weap_m249_pip","Binocular"};

        magazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};
        respawnMagazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};

        backpack = "rhsusf_assault_eagleaiii_ocp";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip","rhsusf_acc_nt4_black","","rhsusf_acc_g33_xps3",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{},{},{"rhs_uniform_cu_ocp",{{"ACE_elasticBandage",13},{"ACE_CableTie",3},{"ACE_tourniquet",4},{"ACE_splint",5},{"ACE_morphine",5},{"ACE_epinephrine",5}}},{"V_PlateCarrier2_blk",{{"ACE_elasticBandage",10},{"HandGrenade",3,1},{"rhsusf_200rnd_556x45_mixed_box",1,200}}},{"rhsusf_assault_eagleaiii_ocp",{{"rhsusf_200rnd_556x45_mixed_box",4,200}}},"rhsusf_hgu56p_visor_black","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
  
  class B_JointStrikeForce_AT_01 : B_JointStrikeForce_Rifleman_01 {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT";
        side = 1;
        faction = "B_JointStrikeForce";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_cu_ocp";

        linkedItems[] = {"V_PlateCarrier2_blk","rhsusf_hgu56p_visor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","rhsusf_hgu56p_visor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_m4a1_blockII_KAC_bk","launch_B_Titan_short_F","Binocular"};
        respawnWeapons[] = {"rhs_weap_m4a1_blockII_KAC_bk","launch_B_Titan_short_F","Binocular"};

        magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","Titan_AT","rhs_mag_30Rnd_556x45_Mk262_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","Titan_AT","rhs_mag_30Rnd_556x45_Mk262_Stanag"};

        backpack = "rhsusf_assault_eagleaiii_ocp";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_blockII_KAC_bk","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"rhs_mag_30Rnd_556x45_Mk262_Stanag",30},{},"rhsusf_acc_grip3"},{"launch_B_Titan_short_F","","","",{"Titan_AT",1},{},""},{},{"rhs_uniform_cu_ocp",{{"ACE_elasticBandage",13},{"ACE_CableTie",3},{"ACE_tourniquet",4},{"ACE_splint",5},{"ACE_morphine",5},{"ACE_epinephrine",5}}},{"V_PlateCarrier2_blk",{{"ACE_elasticBandage",10},{"HandGrenade",3,1},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",10,30}}},{"rhsusf_assault_eagleaiii_ocp",{{"Titan_AT",2,1},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",4,30}}},"rhsusf_hgu56p_visor_black","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
  
  class B_JointStrikeForce_Sniper_01 : B_JointStrikeForce_Rifleman_01 {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 1;
        faction = "B_JointStrikeForce";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_cu_ocp";

        linkedItems[] = {"V_PlateCarrier2_blk","rhsusf_hgu56p_visor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","rhsusf_hgu56p_visor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_M107","rhsusf_weap_m9","Binocular"};
        respawnWeapons[] = {"rhs_weap_M107","rhsusf_weap_m9","Binocular"};

        magazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_mk211","rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_10Rnd_STD_50BMG_mk211","rhsusf_mag_15Rnd_9x19_FMJ"};
        respawnMagazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_mk211","rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_10Rnd_STD_50BMG_mk211","rhsusf_mag_15Rnd_9x19_FMJ"};

        backpack = "rhsusf_falconii_mc";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_M107","","","rhsusf_acc_premier_mrds",{"rhsusf_mag_10Rnd_STD_50BMG_mk211",10},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_cu_ocp",{{"ACE_elasticBandage",13},{"ACE_CableTie",3},{"ACE_tourniquet",4},{"ACE_splint",5},{"ACE_morphine",5},{"ACE_epinephrine",5}}},{"V_PlateCarrier2_blk",{{"ACE_elasticBandage",10},{"HandGrenade",3,1},{"rhsusf_mag_10Rnd_STD_50BMG_mk211",2,10},{"rhsusf_mag_15Rnd_9x19_FMJ",2,15}}},{"rhsusf_falconii_mc",{{"rhsusf_mag_10Rnd_STD_50BMG_mk211",3,10},{"rhsusf_mag_15Rnd_9x19_FMJ",6,15}}},"rhsusf_hgu56p_visor_black","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
  
  class B_JointStrikeForce_Grenadier_01 : B_JointStrikeForce_Rifleman_01 {
        author = "WM. Loli";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "B_JointStrikeForce";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_cu_ocp";

        linkedItems[] = {"V_PlateCarrierGL_blk","rhsusf_hgu56p_visor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrierGL_blk","rhsusf_hgu56p_visor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"};

        weapons[] = {"rhs_weap_m4a1_blockII_M203_bk","Binocular"};
        respawnWeapons[] = {"rhs_weap_m4a1_blockII_M203_bk","Binocular"};

        magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_blockII_M203_bk","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15side_bk","rhsusf_acc_g33_xps3",{"rhs_mag_30Rnd_556x45_Mk262_Stanag",30},{},""},{},{},{"rhs_uniform_cu_ocp",{{"ACE_elasticBandage",13},{"ACE_CableTie",3},{"ACE_tourniquet",4},{"ACE_splint",5},{"ACE_morphine",5},{"ACE_epinephrine",5}}},{"V_PlateCarrierGL_blk",{{"ACE_elasticBandage",10},{"HandGrenade",3,1},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",6,30},{"1Rnd_HE_Grenade_shell",10,1}}},{},"rhsusf_hgu56p_visor_black","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_blk_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
  
  // Vehicles
  class B_JointStrikeForce_M5A2_Schwarzkopf_01 : B_MBT_01_TUSK_F {    
    scope = 2;
    scopeCurator = 2;
    displayName = "M5A2 Schwarzkopf";
    side = 1;
    faction = "B_JointStrikeForce";
    crew = "B_JointStrikeForce_Squad_Leader_01";
   };
  class B_JointStrikeForce_M118_Fastback_01 : RHS_M6 {
        scope = 2;
        scopeCurator = 2;
        displayName = "M118 Fastback";
        side = 1;
        faction = "B_JointStrikeForce";
        crew = "B_JointStrikeForce_Squad_Leader_01";
   };
  class B_JointStrikeForce_M320_Spartan_01 : rhsusf_m109d_usarmy {
        scope = 2;
        scopeCurator = 2;
        displayName = "M320 Spartan";
        side = 1;
        faction = "B_JointStrikeForce";
        crew = "B_JointStrikeForce_Squad_Leader_01";
    };
  class B_JointStrikeForce_AH_10_Blackfoot_01 : B_Heli_Attack_01_dynamicLoadout_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-10 Blackfoot";
        side = 1;
        faction = "B_JointStrikeForce";
        crew = "B_JointStrikeForce_Squad_Leader_01";
    };
  class B_JointStrikeForce_V120_Valkyrie_01 : B_T_VTOL_01_infantry_F {
      scope = 2;
      scopeCurator = 2;
      displayName = "V-120 Valkyrie";
      side = 1;
      faction = "B_JointStrikeForce";
      crew = "B_JointStrikeForce_Squad_Leader_01";
    };
    class B_JointStrikeForce_A20_Razorback_01 : B_Plane_CAS_01_dynamicLoadout_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "A-20 Razorback";
        side = 1;
        faction = "B_JointStrikeForce";
        crew = "B_JointStrikeForce_Squad_Leader_01";
    };
    class B_JointStrikeForce_PD_6Rottweiler_01 : USAF_MQ9 {    
        scope = 2;
        scopeCurator = 2;
        displayName = "PD-6 Rottweiler";
        side = 1;
        faction = "B_JointStrikeForce";
        crew = "B_JointStrikeForce_Squad_Leader_01";
    };
 };
