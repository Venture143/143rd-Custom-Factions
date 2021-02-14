class CfgPatches {
  class O_RussianRepublic {
    units[] = {
      "O_Russian_Republic_Squad_Leader_01",
      "O_Russian_Republic_Rifleman_01",
      "O_Russian_Republic_Autorifleman_01",
      "O_Russian_Republic_Grenadier_01",
      "O_Russian_Republic_Marksman_01",
      "O_Russian_Republic_Medic_01",
      "O_Russian_Republic_AT_01",
      "O_Russian_Republic_MAZ_660_King_Spider_01",
      "O_Russian_Republic_T100_Ogre_01",
      "O_Russian_Republic_BTR_112_Cockroach_01",
      "O_Russian_Republic_Ka_65_Howler_01",
      "O_Russian_Republic_KV_20_Zhukov_01",
      "O_Russian_Republic_Mi_55_Locust_01",
      "O_Russian_Republic_Su_38_Slamhound_01",
      "O_Russian_Republic_Tu_3Vulture_01"
    };
    weapons[] = {};
    requiredVersion = 1.62;
    requiredAddons[] = {
      "min_rf_units",
      "ace_movement",
      "rhs_c_bmp",
      "HTNK",
    };
    author = "WM. Loli";
    authors[] = {"WM. Loli"};
  };
};

class CfgFactionClasses {
  class O_RussianRepublic {
    displayName = "Spetsnaz Guard Brigade";
    side = 0;
    flag = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_rus_CO.paa";
    icon = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_rus_CO.paa";
    priority = 0;
  };
};

class CfgGroups {
    class EAST {

        class O_RussianRepublic {
            name = "Spetsnaz Guard Brigade";

            class Infantry {
                name = "Infantry";

                class o_russian_republic_infantry_wolves {
                    name = "Wolves";
                    side = 0;
                    faction = "O_RussianRepublic";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_Russian_Republic_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Marksman_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Marksman_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Medic_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                };

                class o_russian_republic_infantry_bears {
                    name = "Bears";
                    side = 0;
                    faction = "O_RussianRepublic";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_Russian_Republic_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Autorifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Autorifleman_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_AT_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Medic_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Grenadier_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Grenadier_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Grenadier_01";
                    };
                };
            };

            class Mechanized {
                name = "Mechanized Infantry";

                class o_russian_republic_mechanized_mechanized {
                    name = "Mechanized Wolves";
                    side = 0;
                    faction = "O_RussianRepublic";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_Russian_Republic_BTR_112_Cockroach_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Squad_Leader_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Marksman_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Medic_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                };

                class o_russian_republic_mechanized_mechanized_bears {
                    name = "Mechanized Bears";
                    side = 0;
                    faction = "O_RussianRepublic";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_Russian_Republic_BTR_112_Cockroach_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Squad_Leader_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Autorifleman_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Medic_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_AT_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Grenadier_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_Russian_Republic_Grenadier_01";
                    };
                };
            };
        };

    };
};

class CfgVehicles {
  //base
  class min_rf_spetsnaz_TL;
  class HTNK_Nato_Pacific;
  class O_MBT_02_cannon_F;
  class min_rf_t_15;
  class O_Heli_Attack_02_dynamicLoadout_F;
  class O_MBT_02_arty_F;
  class RHS_Mi8MTV3_heavy_vdv;
  class O_Plane_Fighter_02_F;
  class O_UAV_02_dynamicLoadout_F;
  
  //doods
  class O_Russian_Republic_Squad_Leader_01 : min_rf_spetsnaz_TL {
    author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "Squad Leader";
    side = 0;
    faction = "O_RussianRepublic";

    identityTypes[] = {"Head_Asian","LanguageRUS_F"};

    uniformClass = "min_rf_tactical_skol";

    linkedItems[] = {"min_rf_armor_vest_black","min_rf_helmet_recon_black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"min_rf_armor_vest_black","min_rf_helmet_recon_black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};

    weapons[] = {"arifle_min_rf_ak_12_grip","rhs_weap_pya","Rangefinder"};
    respawnWeapons[] = {"arifle_min_rf_ak_12_grip","rhs_weap_pya","Rangefinder"};

    magazines[] = {"30Rnd_min_rf_545x39_Mag","rhs_mag_9x19_17","30Rnd_min_rf_545x39_Mag","rhs_mag_9x19_17"};
    respawnMagazines[] = {"30Rnd_min_rf_545x39_Mag","rhs_mag_9x19_17","30Rnd_min_rf_545x39_Mag","rhs_mag_9x19_17"};

    backpack = "TFAR_rt1523g_bwmod";
  };
  
  class O_Russian_Republic_Rifleman_01 : O_Russian_Republic_Squad_Leader_01 {
    author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 0;
    faction = "O_RussianRepublic";

    identityTypes[] = {"Head_Asian","LanguageRUS_F"};

    uniformClass = "min_rf_tactical_skol";

    linkedItems[] = {"min_rf_armor_vest_black","min_rf_helmet_recon_black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"min_rf_armor_vest_black","min_rf_helmet_recon_black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};

    weapons[] = {"arifle_min_rf_aek_a545","Rangefinder"};
    respawnWeapons[] = {"arifle_min_rf_aek_a545","Rangefinder"};

    magazines[] = {"30Rnd_min_rf_545x39_Mag","30Rnd_min_rf_545x39_Mag"};
    respawnMagazines[] = {"30Rnd_min_rf_545x39_Mag","30Rnd_min_rf_545x39_Mag"};
   };
   
   class O_Russian_Republic_Autorifleman_01 : O_Russian_Republic_Rifleman_01 {
    author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "Autorifleman";
    side = 0;
    faction = "O_RussianRepublic";

    identityTypes[] = {"Head_Asian","LanguageRUS_F"};

    uniformClass = "min_rf_tactical_skol";

    linkedItems[] = {"min_rf_armor_vest_AR_black","min_rf_helmet_recon_black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"min_rf_armor_vest_AR_black","min_rf_helmet_recon_black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};

    weapons[] = {"LMG_min_rf_6p69","Rangefinder"};
    respawnWeapons[] = {"LMG_min_rf_6p69","Rangefinder"};

    magazines[] = {"150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer"};
    respawnMagazines[] = {"150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer"};

    backpack = "min_rf_torna_black";
   };
   
   class O_Russian_Republic_Grenadier_01 : O_Russian_Republic_Rifleman_01 {
    author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    side = 0;
    faction = "O_RussianRepublic";

    identityTypes[] = {"Head_Asian","LanguageRUS_F"};

    uniformClass = "min_rf_tactical_skol";

    linkedItems[] = {"min_rf_armor_vest_GL_black","min_rf_helmet_recon_black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"min_rf_armor_vest_GL_black","min_rf_helmet_recon_black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};

    weapons[] = {"arifle_min_rf_ak_12_gp","Rangefinder"};
    respawnWeapons[] = {"arifle_min_rf_ak_12_gp","Rangefinder"};

    magazines[] = {"30Rnd_min_rf_545x39_Mag","30Rnd_min_rf_545x39_Mag"};
    respawnMagazines[] = {"30Rnd_min_rf_545x39_Mag","30Rnd_min_rf_545x39_Mag"};
  };
  
  class O_Russian_Republic_Marksman_01 : O_Russian_Republic_Rifleman_01 {
    author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 0;
    faction = "O_RussianRepublic";

    identityTypes[] = {"Head_Asian","LanguageRUS_F"};

    uniformClass = "min_rf_tactical_skol";

    linkedItems[] = {"min_rf_armor_vest_M_black","min_rf_helmet_recon_black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"min_rf_armor_vest_M_black","min_rf_helmet_recon_black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};

    weapons[] = {"srifle_min_rf_orsis_t5000","rhs_weap_pp2000_folded","Rangefinder"};
    respawnWeapons[] = {"srifle_min_rf_orsis_t5000","rhs_weap_pp2000_folded","Rangefinder"};

    magazines[] = {"5Rnd_min_rf_338_Mag","rhs_mag_9x19mm_7n21_20","5Rnd_min_rf_338_Mag","rhs_mag_9x19mm_7n21_20"};
    respawnMagazines[] = {"5Rnd_min_rf_338_Mag","rhs_mag_9x19mm_7n21_20","5Rnd_min_rf_338_Mag","rhs_mag_9x19mm_7n21_20"};
  };
  
  class O_Russian_Republic_Medic_01 : O_Russian_Republic_Rifleman_01 {
    author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    side = 0;
    faction = "O_RussianRepublic";

    identityTypes[] = {"Head_Asian","LanguageRUS_F"};

    uniformClass = "min_rf_tactical_skol";

    linkedItems[] = {"min_rf_armor_vest_black","min_rf_helmet_recon_black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"min_rf_armor_vest_black","min_rf_helmet_recon_black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};

    weapons[] = {"arifle_min_rf_aek_a545","Rangefinder"};
    respawnWeapons[] = {"arifle_min_rf_aek_a545","Rangefinder"};

    magazines[] = {"30Rnd_min_rf_545x39_Mag","30Rnd_min_rf_545x39_Mag"};
    respawnMagazines[] = {"30Rnd_min_rf_545x39_Mag","30Rnd_min_rf_545x39_Mag"};

    backpack = "min_rf_torna_black";
   };
   
   class O_Russian_Republic_AT_01 : O_Russian_Republic_Rifleman_01 {
    author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "AT";
    side = 0;
    faction = "O_RussianRepublic";

    identityTypes[] = {"Head_Asian","LanguageRUS_F"};

    uniformClass = "min_rf_tactical_skol";

    linkedItems[] = {"min_rf_armor_vest_black","min_rf_helmet_recon_black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"min_rf_armor_vest_black","min_rf_helmet_recon_black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};

    weapons[] = {"arifle_min_rf_aek_a545","launch_min_rf_titan_short","Rangefinder"};
    respawnWeapons[] = {"arifle_min_rf_aek_a545","launch_min_rf_titan_short","Rangefinder"};

    magazines[] = {"30Rnd_min_rf_545x39_Mag","Titan_AT","30Rnd_min_rf_545x39_Mag"};
    respawnMagazines[] = {"30Rnd_min_rf_545x39_Mag","Titan_AT","30Rnd_min_rf_545x39_Mag"};

    backpack = "min_rf_torna_black";
  };
  
  class O_Russian_Republic_MAZ_660_King_Spider_01 : HTNK_Nato_Pacific {
    author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "MAZ-660 King Spider";
    side = 0;
    faction = "O_RussianRepublic";
    crew = "O_Russian_Republic_Squad_Leader_01";
  };
  
  class O_Russian_Republic_T100_Ogre_01 : O_MBT_02_cannon_F {
    author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "T-100 Ogre";
    side = 0;
    faction = "O_RussianRepublic";
    crew = "O_crew_F";
  };
  
  class O_Russian_Republic_BTR_112_Cockroach_01 : min_rf_t_15 {
    author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "BTR-112 Cockroach";
    side = 0;
    faction = "O_RussianRepublic";
    crew = "min_rf_crew";
  };
  
  class O_Russian_Republic_Ka_65_Howler_01 : O_Heli_Attack_02_dynamicLoadout_F {
    author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ka-65 Howler";
    side = 0;
    faction = "O_RussianRepublic";
    crew = "O_Russian_Republic_Squad_Leader_01";
  };
  
  class O_Russian_Republic_KV_20_Zhukov_01 : O_MBT_02_arty_F {
    author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "KV-20 Zhukov";
    side = 0;
    faction = "O_RussianRepublic";
    crew = "O_Russian_Republic_Squad_Leader_01";
  };
  
  class O_Russian_Republic_Mi_55_Locust_01 : RHS_Mi8MTV3_heavy_vdv {
    author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mi-55 Locust";
    side = 0;
    faction = "O_RussianRepublic";
    crew = "O_Russian_Republic_Squad_Leader_01";
  };
  
  class O_Russian_Republic_Su_38_Slamhound_01 : O_Plane_Fighter_02_F {
     author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "Su-38 Slamhound";
    side = 0;
    faction = "O_RussianRepublic";
    crew = "O_Russian_Republic_Squad_Leader_01";
  };
  
  class O_Russian_Republic_Tu_3Vulture_01 : O_UAV_02_dynamicLoadout_F {
    author = "WM. Loli";
    scope = 2;
    scopeCurator = 2;
    displayName = "Tu-3 Vulture";
    side = 0;
    faction = "O_RussianRepublic";
    crew = "O_Russian_Republic_Squad_Leader_01";
  };
};
