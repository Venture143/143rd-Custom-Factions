//To Do: All
class CfgPatches {
	class DK143_CustomFactions_FWKurus{
		author = "Venture";
		name = "DK143 TIOW ALIVE_COMPAT Custom Factions";
		requiredAddons[] = 
        {"ace_common", "DkoKFoot","CadFoot","OrkBoyz","TIOWSpaceMarines", "OPTRE_Core",  "AM_weapons"};
        requiredVersion = 1.62;
		units[] = {"DK143_B_FWKurus_Guardsmen", "DK143_B_FWKurus_Sergeant", "DK143_B_FWKurus_Melta", "DK143_B_FWKurus_PlasmaCal", "DK143_B_FWKurus_ATRocket", "DK143_B_FWKurus_ATRifle", "DK143_B_FWKurus_Flamer", "DK143_B_FWKurus_Stubber", "DK143_I_FWKurus_Guardsmen", "DK143_I_FWKurus_Sergeant", "DK143_I_FWKurus_Melta", "DK143_I_FWKurus_PlasmaCal", "DK143_I_FWKurus_ATRocket", "DK143_I_FWKurus_ATRifle", "DK143_I_FWKurus_Flamer", "DK143_I_FWKurus_Stubber", "DK143_O_FWKurus_Guardsmen", "DK143_O_FWKurus_Sergeant", "DK143_O_FWKurus_Melta", "DK143_O_FWKurus_PlasmaCal", "DK143_O_FWKurus_ATRocket", "DK143_O_FWKurus_ATRifle", "DK143_O_FWKurus_Flamer", "DK143_O_FWKurus_Stubber"};
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
  
   class DK143_I_FWKurus {
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
                class DK143_O_FWKurus_FireteamStubber{
                    name = "Fireteam Stubber";
                    side = 0;
                    faction = "DK143_O_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Stubber";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                };

                class DK143_O_FWKurus_FireteamPlasma{
                    name = "Fireteam Plasma";
                    side = 0;
                    faction = "DK143_O_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_PlasmaCal";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                };

                class DK143_O_FWKurus_Flamer{
                    name = "Fireteam Flamer";
                    side = 0;
                    faction = "DK143_O_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Flamer";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                };

                class DK143_O_FWKurus_Melta{
                    name = "Fireteam Melta";
                    side = 0;
                    faction = "DK143_O_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Melta";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                };

                class DK143_O_FWKurus_ATRifle{
                    name = "Fireteam Arquebus";
                    side = 0;
                    faction = "DK143_O_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_ATRifle";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                };

                class DK143_O_FWKurus_ATRocket{
                    name = "Fireteam AT Rocket";
                    side = 0;
                    faction = "DK143_O_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_ATRocket";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                };

                class DK143_O_FWKurus_Squad {
                    name = "Squad (Stubber + AT Rocket)";
                    side = 0;
                    faction = "DK143_O_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_ATRocket";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Stubber";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                };

                class DK143_O_FWKurus_SquadATRifle {
                    name = "Squad (Stubber + Arquebus)";
                    side = 0;
                    faction = "DK143_O_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_ATRifle";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Stubber";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                };

                class DK143_O_FWKurus_SquadFlamer {
                    name = "Squad (Melta + Flamer)";
                    side = 0;
                    faction = "DK143_O_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Flamer";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Melta";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                };

                class DK143_O_FWKurus_SquadPlasma {
                    name = "Squad (Plasma + Stubber)";
                    side = 0;
                    faction = "DK143_O_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Stubber";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_PlasmaCal";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_FWKurus_Guardsmen";
                    };
                };
            };
        };
    };

    class WEST {
      class DK143_Custom_Factions{
        name = "143rd Custom Factions";
            class DK143_B_FWKurus {
                name = "Forge World Kurus";
                class DK143_B_FWKurus_FireteamStubber{
                    name = "Fireteam Stubber";
                    side = 1;
                    faction = "DK143_B_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Stubber";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                };

                class DK143_B_FWKurus_FireteamPlasma{
                    name = "Fireteam Plasma";
                    side = 1;
                    faction = "DK143_B_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_PlasmaCal";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                };

                class DK143_B_FWKurus_Flamer{
                    name = "Fireteam Flamer";
                    side = 1;
                    faction = "DK143_B_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Flamer";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                };

                class DK143_B_FWKurus_Melta{
                    name = "Fireteam Melta";
                    side = 1;
                    faction = "DK143_B_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Melta";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                };

                class DK143_B_FWKurus_ATRifle{
                    name = "Fireteam Arquebus";
                    side = 1;
                    faction = "DK143_B_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_ATRifle";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                };

                class DK143_B_FWKurus_ATRocket{
                    name = "Fireteam AT Rocket";
                    side = 1;
                    faction = "DK143_B_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_ATRocket";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                };

                class DK143_B_FWKurus_Squad {
                    name = "Squad (Stubber + AT Rocket)";
                    side = 1;
                    faction = "DK143_B_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_ATRocket";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Stubber";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                };

                class DK143_B_FWKurus_SquadATRifle {
                    name = "Squad (Stubber + Arquebus)";
                    side = 1;
                    faction = "DK143_B_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_ATRifle";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Stubber";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                };

                class DK143_B_FWKurus_SquadFlamer {
                    name = "Squad (Melta + Flamer)";
                    side = 1;
                    faction = "DK143_B_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Flamer";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Melta";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                };

                class DK143_B_FWKurus_SquadPlasma {
                    name = "Squad (Plasma + Stubber)";
                    side = 1;
                    faction = "DK143_B_FWKurus";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                                    
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Stubber";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_PlasmaCal";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "DK143_B_FWKurus_Guardsmen";
                    };
                };
            };
        };
    };
    
    class Indep {
      class DK143_Custom_Factions{
        name = "143rd Custom Factions";
        class DK143_I_FWKurus {
            name = "Forge World Kurus";
            class DK143_I_FWKurus_FireteamStubber{
                name = "Fireteam Stubber";
                side = 2;
                faction = "DK143_I_FWKurus";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;
                                
                class Unit0 {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Sergeant";
                };
                class Unit1 {
                    position[] = {5,-5,0};
                    rank = "CORPORAL";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Stubber";
                };
                class Unit2 {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit3 {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
            };

            class DK143_I_FWKurus_FireteamPlasma{
                name = "Fireteam Plasma";
                side = 2;
                faction = "DK143_I_FWKurus";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;
                                
                class Unit0 {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Sergeant";
                };
                class Unit1 {
                    position[] = {5,-5,0};
                    rank = "CORPORAL";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_PlasmaCal";
                };
                class Unit2 {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit3 {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
            };

            class DK143_I_FWKurus_Flamer{
                name = "Fireteam Flamer";
                side = 2;
                faction = "DK143_I_FWKurus";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;
                                
                class Unit0 {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Sergeant";
                };
                class Unit1 {
                    position[] = {5,-5,0};
                    rank = "CORPORAL";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Flamer";
                };
                class Unit2 {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit3 {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
            };

            class DK143_I_FWKurus_Melta{
                name = "Fireteam Melta";
                side = 2;
                faction = "DK143_I_FWKurus";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;
                                
                class Unit0 {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Sergeant";
                };
                class Unit1 {
                    position[] = {5,-5,0};
                    rank = "CORPORAL";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Melta";
                };
                class Unit2 {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit3 {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
            };

            class DK143_I_FWKurus_ATRifle{
                name = "Fireteam Arquebus";
                side = 2;
                faction = "DK143_I_FWKurus";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;
                                
                class Unit0 {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Sergeant";
                };
                class Unit1 {
                    position[] = {5,-5,0};
                    rank = "CORPORAL";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_ATRifle";
                };
                class Unit2 {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit3 {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
            };

            class DK143_I_FWKurus_ATRocket{
                name = "Fireteam AT Rocket";
                side = 2;
                faction = "DK143_I_FWKurus";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;
                                
                class Unit0 {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Sergeant";
                };
                class Unit1 {
                    position[] = {5,-5,0};
                    rank = "CORPORAL";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_ATRocket";
                };
                class Unit2 {
                    position[] = {-5,-5,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit3 {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
            };

            class DK143_I_FWKurus_Squad {
                name = "Squad (Stubber + AT Rocket)";
                side = 2;
                faction = "DK143_I_FWKurus";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;
                                
                class Unit0 {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Sergeant";
                };
                class Unit1 {
                    position[] = {5,-5,0};
                    rank = "CORPORAL";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_ATRocket";
                };
                class Unit2 {
                    position[] = {-5,-5,0};
                    rank = "CORPORAL";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Stubber";
                };
                class Unit3 {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit4 {
                    position[] = {-10,-10,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit5 {
                    position[] = {15,-15,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit6 {
                    position[] = {-15,-15,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit7 {
                    position[] = {20,-20,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit8 {
                    position[] = {-20,-20,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit9 {
                    position[] = {25,-25,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
            };

            class DK143_I_FWKurus_SquadATRifle {
                name = "Squad (Stubber + Arquebus)";
                side = 2;
                faction = "DK143_I_FWKurus";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;
                                
                class Unit0 {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Sergeant";
                };
                class Unit1 {
                    position[] = {5,-5,0};
                    rank = "CORPORAL";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_ATRifle";
                };
                class Unit2 {
                    position[] = {-5,-5,0};
                    rank = "CORPORAL";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Stubber";
                };
                class Unit3 {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit4 {
                    position[] = {-10,-10,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit5 {
                    position[] = {15,-15,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit6 {
                    position[] = {-15,-15,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit7 {
                    position[] = {20,-20,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit8 {
                    position[] = {-20,-20,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit9 {
                    position[] = {25,-25,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
            };

            class DK143_I_FWKurus_SquadFlamer {
                name = "Squad (Melta + Flamer)";
                side = 2;
                faction = "DK143_I_FWKurus";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;
                                
                class Unit0 {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Sergeant";
                };
                class Unit1 {
                    position[] = {5,-5,0};
                    rank = "CORPORAL";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Flamer";
                };
                class Unit2 {
                    position[] = {-5,-5,0};
                    rank = "CORPORAL";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Melta";
                };
                class Unit3 {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit4 {
                    position[] = {-10,-10,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit5 {
                    position[] = {15,-15,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit6 {
                    position[] = {-15,-15,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit7 {
                    position[] = {20,-20,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit8 {
                    position[] = {-20,-20,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit9 {
                    position[] = {25,-25,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
            };

            class DK143_I_FWKurus_SquadPlasma {
                name = "Squad (Plasma + Stubber)";
                side = 2;
                faction = "DK143_I_FWKurus";
                icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                rarityGroup = 0.5;
                                
                class Unit0 {
                    position[] = {0,0,0};
                    rank = "SERGEANT";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Sergeant";
                };
                class Unit1 {
                    position[] = {5,-5,0};
                    rank = "CORPORAL";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Stubber";
                };
                class Unit2 {
                    position[] = {-5,-5,0};
                    rank = "CORPORAL";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_PlasmaCal";
                };
                class Unit3 {
                    position[] = {10,-10,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit4 {
                    position[] = {-10,-10,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit5 {
                    position[] = {15,-15,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit6 {
                    position[] = {-15,-15,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit7 {
                    position[] = {20,-20,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit8 {
                    position[] = {-20,-20,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
                class Unit9 {
                    position[] = {25,-25,0};
                    rank = "PRIVATE";
                    side = 2;
                    vehicle = "DK143_I_FWKurus_Guardsmen";
                };
            };
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
	/// Equipment list macros definition ///

	#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
	#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
	#define item_xx(a,b) class _xx_##a {name = a; count = b;}
	
	// ARMA 3 Base Soldier Classes
	class O_Soldier_base_F;

    // Custom Backpacks
    class Meow_Meow_Invisywisy_Invs;

    class DK143_B_FWKurus_ATBackpack : Meow_Meow_Invisywisy_Invs
    {
        scope = 1;
        scopeCurator = 2;

        class TransportItems {
                
	    };
	    class TransportMagazines {
		    mag_xx(Vorona_HEAT, 5);
	    };
    }
        
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
    // OPFOR
    class DK143_O_FWKurus_Guardsmen : DK143_Base_FWKurusGuardsmen {
        scope = 2;
        scopeCurator =2;
        displayName = "Guardsmen";

        // Give AI gun
		weapons[] = {"arifle_MSBS65_black_F"};
        respawnWeapons[] = {"arifle_MSBS65_black_F"};
		// Give AI boolets
        magazines[] = {mag_5(30Rnd_65x39_caseless_msbs_mag_Tracer), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
        respawnMagazines[] = {mag_5(30Rnd_65x39_caseless_msbs_mag_Tracer), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
    };

    class DK143_O_FWKurus_Sergeant : DK143_Base_FWKurusGuardsmen {
        scope = 2;
        scopeCurator =2;
        displayName = "Sergeant";

        // Give AI gun
		weapons[] = {"arifle_MSBS65_GL_black_F"};
        respawnWeapons[] = {"arifle_MSBS65_GL_black_F"};
		// Give AI boolets
        magazines[] = {mag_5(30Rnd_65x39_caseless_msbs_mag_Tracer), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag", mag_3(1Rnd_HE_Grenade_shell)};
        respawnMagazines[] = {mag_5(30Rnd_65x39_caseless_msbs_mag_Tracer), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag", mag_3(1Rnd_HE_Grenade_shell)};
    };

    class DK143_O_FWKurus_Stubber : DK143_Base_FWKurusGuardsmen {
        scope = 2;
        scopeCurator =2;
        displayName = "Stubber";

        // Give AI gun
		weapons[] = {"LMG_03_F"};
        respawnWeapons[] = {"LMG_03_F"};
		// Give AI boolets
        magazines[] = {mag_5(200Rnd_556x45_Box_Tracer_Red_F), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag"};
        respawnMagazines[] = {mag_5(200Rnd_556x45_Box_Tracer_Red_F), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag"};
    };

    class DK143_O_FWKurus_PlasmaCal : DK143_Base_FWKurusGuardsmen {
        scope = 2;
        scopeCurator =2;
        displayName = "Plasma Caliver";

        // Give AI gun
		weapons[] = {"plasma_caliver"};
        respawnWeapons[] = {"plasma_caliver"};
		// Give AI boolets
        magazines[] = {mag_5(plasma_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag"};
        respawnMagazines[] = {mag_5(plasma_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag"};
    };

    class DK143_O_FWKurus_Melta : DK143_Base_FWKurusGuardsmen {
        scope = 2;
        scopeCurator =2;
        displayName = "Melta";

        // Give AI gun
		weapons[] = {"TIOW_MeltaGun_01"};
        respawnWeapons[] = {"TIOW_MeltaGun_01"};
		// Give AI boolets
        magazines[] = {mag_5(TIOW_Meltagun_Mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag"};
        respawnMagazines[] = {mag_5(TIOW_Meltagun_Mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag"};
    };

    class DK143_O_FWKurus_Flamer : DK143_Base_FWKurusGuardsmen {
        scope = 2;
        scopeCurator =2;
        displayName = "Flamer";

        // Give AI gun
		weapons[] = {"TIOW_IG_Flamer"};
        respawnWeapons[] = {"TIOW_IG_Flamer"};
		// Give AI boolets
        magazines[] = {mag_5(TIOW_Krieg_Flamer_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag"};
        respawnMagazines[] = {mag_5(TIOW_Krieg_Flamer_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag"};
    };

    class DK143_O_FWKurus_ATRifle : DK143_Base_FWKurusGuardsmen {
        scope = 2;
        scopeCurator =2;
        displayName = "Arquebus";

        // Give AI gun
		weapons[] = {"transuranic_arquebus"};
        respawnWeapons[] = {"transuranic_arquebus"};
		// Give AI boolets
        magazines[] = {mag_5(transuranic_HE_mag), mag_5(transuranic_AP_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag"};
        respawnMagazines[] = {mag_5(transuranic_HE_mag), mag_5(transuranic_AP_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag"};
    };

    class DK143_O_FWKurus_ATRocket : DK143_Base_FWKurusGuardsmen {
        scope = 2;
        scopeCurator =2;
        displayName = "Rocketman";
        backpack = "DK143_B_FWKurus_ATBackpack";

        // Give AI gun
		weapons[] = {"arifle_MSBS65_black_F", "launch_O_Vorona_brown_F"};
        respawnWeapons[] = {"arifle_MSBS65_black_F", "launch_O_Vorona_brown_F"};
		// Give AI boolets
        magazines[] = {mag_5(30Rnd_65x39_caseless_msbs_mag_Tracer), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag"};
        respawnMagazines[] = {mag_5(30Rnd_65x39_caseless_msbs_mag_Tracer), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), "TIOW_ig_smoke_grenade_mag"};
    };


    //Blufor
    class DK143_B_FWKurus_Guardsmen : DK143_O_FWKurus_Guardsmen {side = 1; faction = "DK143_B_FWKurus";};
    class DK143_B_FWKurus_Sergeant : DK143_O_FWKurus_Sergeant {side = 1; faction = "DK143_B_FWKurus";};
    class DK143_B_FWKurus_Melta : DK143_O_FWKurus_Melta {side = 1; faction = "DK143_B_FWKurus";};
    class DK143_B_FWKurus_PlasmaCal : DK143_O_FWKurus_PlasmaCal {side = 1; faction = "DK143_B_FWKurus";};
    class DK143_B_FWKurus_ATRocket : DK143_O_FWKurus_ATRocket {side = 1; faction = "DK143_B_FWKurus";};
    class DK143_B_FWKurus_ATRifle : DK143_O_FWKurus_ATRifle {side = 1; faction = "DK143_B_FWKurus";};
    class DK143_B_FWKurus_Flamer : DK143_O_FWKurus_Flamer {side = 1; faction = "DK143_B_FWKurus";};
    class DK143_B_FWKurus_Stubber : DK143_O_FWKurus_Stubber {side = 1; faction = "DK143_B_FWKurus";};
    //Indepfor
    class DK143_I_FWKurus_Guardsmen : DK143_O_FWKurus_Guardsmen {side = 2; faction = "DK143_I_FWKurus";};
    class DK143_I_FWKurus_Sergeant : DK143_O_FWKurus_Sergeant {side = 2; faction = "DK143_I_FWKurus";};
    class DK143_I_FWKurus_Melta : DK143_O_FWKurus_Melta {side = 2; faction = "DK143_I_FWKurus";};
    class DK143_I_FWKurus_PlasmaCal : DK143_O_FWKurus_PlasmaCal {side = 2; faction = "DK143_I_FWKurus";};
    class DK143_I_FWKurus_ATRocket : DK143_O_FWKurus_ATRocket {side = 2; faction = "DK143_I_FWKurus";};
    class DK143_I_FWKurus_ATRifle : DK143_O_FWKurus_ATRifle {side = 2; faction = "DK143_I_FWKurus";};
    class DK143_I_FWKurus_Flamer : DK143_O_FWKurus_Flamer {side = 2; faction = "DK143_I_FWKurus";};
    class DK143_I_FWKurus_Stubber : DK143_O_FWKurus_Stubber {side = 2; faction = "DK143_I_FWKurus";};
};
