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
                        osition[] = {-5,-5,0};
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
