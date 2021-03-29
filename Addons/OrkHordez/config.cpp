class CfgPatches {
    class DK143_CustomFactions_OrkHordez {
	name = "Ork Hordez (custom Faction)"
        units[] = { "DK143_O_LootedValk", "DK143_O_MegaDeffKopta", "DK143_O_DeffKopta", "DK143_O_DeffKoptaRokkit", "DK143_O_OrkHordez_LR_Battlecannon_Black_OP", "DK143_O_OrkBooma", "DK143_O_OrkDakka", "DK143_O_OrkBurna", "DK143_O_OrkSlugga", "DK143_O_OrkHordez_Trukk", "DK143_O_OrkHordez_Stompa", "DK143_O_LootedChimera","DK143_O_WarBoss", "DK143_O_Nob", "DK143_O_Ardboyz2", "DK143_O_Ardboyz1", "DK143_O_TankBusta2", "DK143_O_TankBusta1", "DK143_O_Shoota2", "DK143_O_Shoota1", "DK143_O_NakedOrk"};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {"ace_common", "DkoKFoot","CadFoot","OrkBoyz","TIOWSpaceMarines", "Renegades_Foot", "Sashka_Russian"};
        author = "VGm. Venture";
        authors[] = {"VGm. Venture"};
    };
};

class CfgFactionClasses {
    class DK143_O_OrkHordez {
        displayName = "143rd Ork Hordez";
        side = 0;
        flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        priority = 0;
    };
};

class CfgGroups {
    class EAST {
        class DK143_O_OrkHordez {
        	name = "143rd Ork Hordez";
        	class Infantry {
                	name = "Infantry";
				
			class DK143_O_OrkHordez_Fireteam {
				name = "Gaggle of Boomahs";
				side = 0;
				faction = "DK143_O_OrkHordez";
				icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
				rarityGroup = 0.5;
				class Unit0 {
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "DK143_O_OrkBooma";
				};
				class Unit1 {
					position[] = {5,-5,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_OrkBooma";
				};
				class Unit2 {
					position[] = {-5,-5,0};
					rank = "CORPORAL";
					side = 0;
					vehicle = "DK143_O_OrkDakka";
				};
				class Unit3 {
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_OrkBooma";
				};
				class Unit4 {
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_OrkBooma";
				};
			}; //Regular Fireteam
		    
			class DK143_O_OrkHordez_Fireteam2 {
				name = "Gaggle of Boyz";
				side = 0;
				faction = "DK143_O_OrkHordez";
				icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
				rarityGroup = 0.5;
				class Unit0 {
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "DK143_O_Nob";
				};
				class Unit1 {
					position[] = {5,-5,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_Shoota1";
				};
				class Unit2 {
					position[] = {-5,-5,0};
					rank = "CORPORAL";
					side = 0;
					vehicle = "DK143_O_TankBusta1";
				};
				class Unit3 {
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_Shoota2";
				};
				class Unit4 {
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_NakedOrk";
				};
			}; //Regular (TIOW) Fireteam
		    
			class DK143_O_OrkHordez_FireteamMelee {
				name = "Proppa Lads (melee Fireteam)"
				side = 0;
				faction = "DK143_O_OrkHordez";
				icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
				rarityGroup = 0.4;
				class Unit0 {
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "DK143_O_OrkSlugga";
				};
				class Unit1 {
					position[] = {5,-5,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_OrkSlugga";
				};
				class Unit2 {
					position[] = {-5,-5,0};
					rank = "CORPORAL";
					side = 0;
					vehicle = "DK143_O_OrkSlugga";
				};
				class Unit3 {
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_OrkSlugga";
				};
				class Unit4 {
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_OrkSlugga";
				};
			};// Melee Fireteam
		    
			class DK143_O_OrkHordez_BurnaFireteam {
				name = "Gaggle of Burn'd Boyz (Burna Fireteam)";
				side = 0;
				faction = "DK143_O_OrkHordez";
				icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
				rarityGroup = 0.1;
				class Unit0 {
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "DK143_O_OrkBooma";
				};
				class Unit1 {
					position[] = {5,-5,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_OrkBooma";
				};
				class Unit2 {
					position[] = {-5,-5,0};
					rank = "CORPORAL";
					side = 0;
					vehicle = "DK143_O_OrkBurna";
				};
				class Unit3 {
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_OrkBooma";
				};
				class Unit4 {
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_OrkBooma";
				};
			}; //Burna Fireteam
				
			class DK143_O_OrkHordez_BoyzMob {
			    name = "Boyz Mob (10)";
			    side = 0;
			    faction = "DK143_O_OrkHordez";
			    icon = "\A3\uI_f\data\map\markers\nato\b_inf.paa";
			    rarityGroup = 0.3;

			    class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 0;
				vehicle = "DK143_O_Nob";
			    };
			    class Unit1 {
				position[] = {5,-5,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_Shoota1";
			    };
			    class Unit2 {
				position[] = {-5,-5,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_Shoota1";
			    };
			    class Unit3 {
				position[] = {10,-10,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_Shoota2";
			    };
			    class Unit4 {
				position[] = {-10,-10,0};
				rank = "CORPORAL";
				side = 0;
				vehicle = "DK143_O_TankBusta1";
			    };
			    class Unit5 {
				position[] = {15,-15,0};
				rank = "CORPORAL";
				side = 0;
				vehicle = "DK143_O_TankBusta2";
			    };
			    class Unit6 {
				position[] = {-15,-15,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_Shoota2";
			    };
			    class Unit7 {
				position[] = {20,-20,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_Shoota1";
			    };
			    class Unit8 {
				position[] = {-20,-20,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_NakedOrk";
			    };
			    class Unit9 {
				position[] = {25,-25,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_NakedOrk";
			    };
			};
				
			class DK143_O_OrkHordez_SluggaMob {
			    name = "Slugga Mob (10)";
			    side = 0;
			    faction = "DK143_O_OrkHordez";
			    icon = "\A3\uI_f\data\map\markers\nato\b_inf.paa";
			    rarityGroup = 0.2;

			    class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 0;
				vehicle = "DK143_O_Nob";
			    };
			    class Unit1 {
				position[] = {5,-5,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_OrkSlugga";
			    };
			    class Unit2 {
				position[] = {-5,-5,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_OrkSlugga";
			    };
			    class Unit3 {
				position[] = {10,-10,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_OrkSlugga";
			    };
			    class Unit4 {
				position[] = {-10,-10,0};
				rank = "CORPORAL";
				side = 0;
				vehicle = "DK143_O_OrkSlugga";
			    };
			    class Unit5 {
				position[] = {15,-15,0};
				rank = "CORPORAL";
				side = 0;
				vehicle = "DK143_O_OrkSlugga";
			    };
			    class Unit6 {
				position[] = {-15,-15,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_OrkSlugga";
			    };
			    class Unit7 {
				position[] = {20,-20,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_OrkSlugga";
			    };
			    class Unit8 {
				position[] = {-20,-20,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_OrkSlugga";
			    };
			    class Unit9 {
				position[] = {25,-25,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_OrkSlugga";
			    };
			};
       		};
			
		class SpecOps {
			name = "Specialized Squads";
			
			class DK143_O_OrkHordez_ArdBoysFireteam {
				name = "Gaggle of Ard Boyz";
				side = 0;
				faction = "DK143_O_OrkHordez";
				icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
				rarityGroup = 0.5;
				class Unit0 {
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "DK143_O_Ardboyz1";
				};
				class Unit1 {
					position[] = {5,-5,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_Ardboyz1";
				};
				class Unit2 {
					position[] = {-5,-5,0};
					rank = "CORPORAL";
					side = 0;
					vehicle = "DK143_O_Ardboyz1";
				};
				class Unit3 {
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_Ardboyz2";
				};
				class Unit4 {
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_Ardboyz2";
				};
			}; //Regular Fireteam
				
			class DK143_O_OrkHordez_NobzMob {
			    name = "Nobz Mob";
			    side = 0;
			    faction = "DK143_O_OrkHordez";
			    icon = "\A3\uI_f\data\map\markers\nato\b_inf.paa";
			    rarityGroup = 0.2;

			    class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 0;
				vehicle = "DK143_O_Nob";
			    };
			    class Unit1 {
				position[] = {5,-5,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_Nob";
			    };
			    class Unit2 {
				position[] = {-5,-5,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_Nob";
			    };
			    class Unit3 {
				position[] = {10,-10,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "DK143_O_Nob";
			    };
			    class Unit4 {
				position[] = {-10,-10,0};
				rank = "CORPORAL";
				side = 0;
				vehicle = "DK143_O_Nob";
			    };
			};
				
			class DK143_O_OrkHordez_TankbustaTeam {
				name = "Gaggle of Tankbustas";
				side = 0;
				faction = "DK143_O_OrkHordez";
				icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
				rarityGroup = 0.5;
				class Unit0 {
					position[] = {0,0,0};
					rank = "SERGEANT";
					side = 0;
					vehicle = "DK143_O_TankBusta1";
				};
				class Unit1 {
					position[] = {5,-5,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_TankBusta1";
				};
				class Unit2 {
					position[] = {-5,-5,0};
					rank = "CORPORAL";
					side = 0;
					vehicle = "DK143_O_TankBusta2";
				};
				class Unit3 {
					position[] = {10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_TankBusta2";
				};
				class Unit4 {
					position[] = {-10,-10,0};
					rank = "PRIVATE";
					side = 0;
					vehicle = "DK143_O_TankBusta1";
				};
			}; 
		};
            
            	class Motorized {
			name = "Motorized Infantry";

				class DK143_O_OrkHordez_TrukkBoomahSquad {
					name = "Trukk Boomah Boyz";
					side = 0;
					faction = "DK143_O_OrkHordez";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;
					 class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkHordez_Trukk";
					};
					class Unit1 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
					};
					class Unit2 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_OrkDakka";
					};
					class Unit3 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_OrkDakka";
					};
					class Unit4 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
					};
					class Unit5 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
					};
					class Unit6 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
					};
					class Unit7 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
					};
					class Unit8 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
					};
					class Unit9 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
					};
					class Unit10 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
					};
				}; // Regular Trukk
			
				class DK143_O_OrkHordez_TrukkArdSquad {
					name = "Trukk Ard Boyz";
					side = 0;
					faction = "DK143_O_OrkHordez";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;
					 class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkHordez_Trukk";
					};
					class Unit1 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_Ardboyz1";
					};
					class Unit2 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Ardboyz1";
					};
					class Unit3 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Ardboyz2";
					};
					class Unit4 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Ardboyz2";
					};
					class Unit5 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Ardboyz1";
					};
					class Unit6 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Ardboyz1";
					};
					class Unit7 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Ardboyz2";
					};
					class Unit8 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Ardboyz2";
					};
					class Unit9 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Ardboyz1";
					};
					class Unit10 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Ardboyz1";
					};
				}; // Regular Trukk
		
				class DK143_O_OrkHordez_TrukkBurnaSquad {
					name = "Trukk Burn'd Boyz";
					side = 0;
					faction = "DK143_O_OrkHordez";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.4;
					 class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkHordez_Trukk";
						};
					class Unit1 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
						};
					class Unit2 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkBurna";
						};
					class Unit3 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkBurna";
						};
					class Unit4 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
						};
					class Unit5 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
						};
					class Unit6 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
						};
					class Unit7 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
						};
					class Unit8 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
						};
					class Unit9 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
						};
					class Unit11 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
						};
				}; // Trukk Burna Squad
		
				class DK143_O_OrkHordez_TrukkSluggaSquad {
					name = "Trukk Slugga Boyz";
					side = 0;
					faction = "DK143_O_OrkHordez";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.1;
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkHordez_Trukk";
						};
					class Unit1 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkSlugga";
						};
					class Unit2 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkSlugga";
						};
					class Unit3 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkSlugga";
						};
					class Unit4 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkSlugga";
						};
					class Unit5 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkSlugga";
						};
					class Unit6 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkSlugga";
						};
					class Unit7 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkSlugga";
						};
					class Unit8 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkSlugga";
						};
					class Unit9 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkSlugga";
						};
					class Unit11 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkSlugga";
						};
				}; // Trukk Slugga Boyz
            		};
            
			class Mechanized {
				name = "Mechanized";
				class DK143_O_OrkHordez_ArmoreedTrukkSquad {
					name = "Ard Trukk Boyz";
					side = 0;
					faction = "DK143_O_OrkHordez";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_LootedChimera";
					};
					class Unit1 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
					};
					class Unit2 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_OrkDakka";
					};
					class Unit3 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_OrkDakka";
					};
					class Unit4 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
					};
					class Unit5 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
					};
					class Unit6 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_OrkBooma";
					};
				}; 
			};// end of mechanized groups
			
           		 class Armored {
                		name = "Armored";
                
				class DK143_O_OrkHordez_LootedTank {
					name = "Looted Tank";
					side = 0;
					faction = "DK143_O_OrkHordez";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.8;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkHordez_LR_Battlecannon_Black_OP";
					}; 
				}; // Tank Group
		    
				class DK143_O_OrkHordez_Stompa {
					name = "Stompa";
					side = 0;
					faction = "DK143_O_OrkHordez";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					 rarityGroup = 0.01;
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_OrkHordez_Stompa";
					}; 
				}; // Stompa Group
           		 };//Armored Groups
            
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
	class O_soldier_Melee;
	//Stuff from TIOW
	class TIOW_Renegade_LR_Battlecannon_Black_OP;
	class TIOW_Stompa_01_ds_OP;
	class Trukk1_OP;
	class _82ndChimAuto_OP;
	class Deffkopta_01_0;
	class Deffkopta_02_0;
	class MDK_0;
	class Valkyrie_Looted_0;

	// Base Ork Profile
	class DK143_Base_OrkBoy : O_Soldier_base_F {
		author = "VGm. Venture";
		scope = 0;
		scopeCurator = 0;
		displayName = "Ork Base Dude";
		side = 0;
		faction = "DK143_O_OrkHordez";

		identityTypes[] = {"Ork_Head"};

		uniformClass = "Naked1Uni_OP";

	};
    
	// Melee Unit goes here
	class DK143_O_OrkSlugga : O_soldier_Melee {
        	scope = 2;
        	scopeCurator = 2;
        	displayName = "Ork Slugga";
		faction = "DK143_O_OrkHordez";

        	identityTypes[] = {"Ork_Head"};

        	uniformClass = "Naked1Uni_OP";

	    
		linkedItems[] = {"ShootaBoyGear1"};
		respawnlinkedItems[] = {"ShootaBoyGear1"};
	    
		weapons[] = {"Bat_Spike"};
		respawnWeapons[] = {"Bat_Spike"};
	    
		magazines[] = {mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
		respawnMagazines[] = {mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};    
	};
	
	// Units
	class DK143_O_OrkBurna : DK143_Base_OrkBoy {
        	scope = 2;
        	scopeCurator = 2;
       		displayName = "Ork Burna";

		linkedItems[] = {"ShootaBoyGear2","ArdBoyHelm2"};
		respawnlinkedItems[] = {"ShootaBoyGear2","ArdBoyHelm2"};
	
		weapons[] = {"TIOW_Chaos_Flamer"};
		respawnWeapons[] = {"TIOW_Chaos_Flamer"};
		magazines[] = {mag_2(TIOW_Chaos_Flamer_mag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
		respawnMagazines[] = {mag_2(TIOW_Chaos_Flamer_mag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
    	};
    
    	class DK143_O_OrkBooma : DK143_Base_OrkBoy {
       		scope = 2;
        	scopeCurator = 2;
        	displayName = "Ork BooMah";

		linkedItems[] = {"ArdBoyGear2", "Catachan_Bandana"};
		respawnlinkedItems[] = {"ArdBoyGear2", "Catachan_Bandana"};
	
		weapons[] = {"TIOW_Shotgun"};
		respawnWeapons[] = {"TIOW_Shotgun"};
		magazines[] = {mag_6(TIOW_Shotgun_pellets_mag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
		respawnMagazines[] = {mag_6(TIOW_Shotgun_pellets_mag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
   	 };
    
    	class DK143_O_OrkDakka : DK143_Base_OrkBoy {
        	scope = 2;
        	scopeCurator = 2;
        	displayName = "Ork Dakka";
	    
		linkedItems[] = {"ArdBoyGear1", "Catachan_Bandana"};
		respawnlinkedItems[] = {"ArdBoyGear1", "Catachan_Bandana"};
		weapons[] = {"TIOW_KriegLauncher", "TIOW_StubPistol"};
		respawnWeapons[] = {"TIOW_KriegLauncher", "TIOW_StubPistol"};
		magazines[] = {mag_10(TIOW_Krieg_LauncherFrag_mag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
		respawnMagazines[] = {mag_10(TIOW_Krieg_LauncherFrag_mag),  mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
    	};
    // Stuff Ported from TIOW
	class DK143_O_Shoota1 : DK143_Base_OrkBoy {
		scope = 2;
        	scopeCurator = 2;
        	displayName = "Ork Shoota 1";

		linkedItems[] = {"ShootaBoyHelm1"};
		respawnlinkedItems[] = {"ShootaBoyHelm1"};
	
		weapons[] = {"Shoota1"};
		respawnWeapons[] = {"Shoota1"};
		magazines[] = {mag_3(ShootaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
		respawnMagazines[] = {mag_3(ShootaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
	};
	class DK143_O_NakedOrk : DK143_Base_OrkBoy {
		scope = 2;
        	scopeCurator = 2;
        	displayName = "Ork boy";

		linkedItems[] = {};
		respawnlinkedItems[] = {};
	
		weapons[] = {"Shoota1"};
		respawnWeapons[] = {"Shoota1"};
		magazines[] = {mag_3(ShootaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
		respawnMagazines[] = {mag_3(ShootaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
	};
	class DK143_O_Shoota2: DK143_Base_OrkBoy {
		scope = 2;
        	scopeCurator = 2;
        	displayName = "Ork Shoota 2";

		linkedItems[] = {"ShootaBoyHelm2"};
		respawnlinkedItems[] = {"ShootaBoyHelm2"};
	
		weapons[] = {"Shoota1"};
		respawnWeapons[] = {"Shoota1"};
		magazines[] = {mag_3(ShootaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
		respawnMagazines[] = {mag_3(ShootaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
	};
	class DK143_O_TankBusta1 : DK143_Base_OrkBoy {
		scope = 2;
        	scopeCurator = 2;
        	displayName = "Ork Tankbusta 1";
		uniformClass = "TankBusta1Uni_OP";
		linkedItems[] = {"TankBustaGear1", "TankBustaHelm1"};
		respawnlinkedItems[] = {"TankBustaGear1", "TankBustaHelm1"};
	
		weapons[] = {"TankBustaLauncha1"};
		respawnWeapons[] = {"TankBustaLauncha1"};
		magazines[] = {mag_3(TankBustaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
		respawnMagazines[] = {mag_3(TankBustaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
	};
	class DK143_O_TankBusta2 : DK143_Base_OrkBoy  {
		scope = 2;
        	scopeCurator = 2;
        	displayName = "Ork Tankbusta 2";
		uniformClass = "TankBusta1Uni_OP";
		linkedItems[] = {"TankBustaGear2", "TankBustaHelm2"};
		respawnlinkedItems[] = {"TankBustaGear2", "TankBustaHelm2"};
	
		weapons[] = {"TankBustaLauncha1"};
		respawnWeapons[] = {"TankBustaLauncha1"};
		magazines[] = {mag_3(TankBustaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
		respawnMagazines[] = {mag_3(TankBustaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
	};
	class DK143_O_Ardboyz1 : DK143_Base_OrkBoy  {
		scope = 2;
        	scopeCurator = 2;
        	displayName = "Ork Ard Boy 1";
		uniformClass = "ArdBoy1Uni_OP";
		linkedItems[] = {"ArdBoyGear1", "ArdBoyHelm1"};
		respawnlinkedItems[] = {"ArdBoyGear1", "ArdBoyHelm1"};

		weapons[] = {"Shoota2"};
		respawnWeapons[] = {"Shoota2"};
		magazines[] = {mag_3(ShootaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
		respawnMagazines[] = {mag_3(ShootaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
	};
	class DK143_O_Ardboyz2 : DK143_Base_OrkBoy {
		scope = 2;
        	scopeCurator = 2;
        	displayName = "Ork Ard Boy 2";
		uniformClass = "ArdBoy1Uni_OP";
		linkedItems[] = {"ArdBoyGear2", "ArdBoyHelm2"};
		respawnlinkedItems[] = {"ArdBoyGear2", "ArdBoyHelm2"};

		weapons[] = {"Shoota2"};
		respawnWeapons[] = {"Shoota2"};
		magazines[] = {mag_3(ShootaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
		respawnMagazines[] = {mag_3(ShootaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag)};
	};
	class DK143_O_Nob : DK143_Base_OrkBoy {
		scope = 2;
        	scopeCurator = 2;
        	displayName = "Ork Nob";
		uniformClass = "Boss1Uni_OP";
		linkedItems[] = {"BossGear1", "BossHelm1"};
		respawnlinkedItems[] = {"BossGear1", "BossHelm1"};
	
		weapons[] = {"Shoota1_A"};
		respawnWeapons[] = {"Shoota1_A"};
		magazines[] = {mag_3(ShootaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag),mag_2(KannonAPMag),mag_2(KannonHEMag)};
		respawnMagazines[] = {mag_3(ShootaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag),mag_2(KannonAPMag),mag_2(KannonHEMag)};
	};//Nob
	class DK143_O_WarBoss : DK143_Base_OrkBoy {
		scope = 2;
        	scopeCurator = 2;
        	displayName = "Ork Warboss";
		uniformClass = "Boss1Uni_OP";
		linkedItems[] = {"BossGear2", "BossHelm2"};
		respawnlinkedItems[] = {"BossGear2", "BossHelm2"};
	
		weapons[] = {"Shoota1_A"};
		respawnWeapons[] = {"Shoota1_A"};
		magazines[] = {mag_3(ShootaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag),mag_2(KannonAPMag),mag_2(KannonHEMag)};
		respawnMagazines[] = {mag_3(ShootaMag), mag_3(TIOW_chaos_krak_grenade_mag), mag_3(TIOW_chaos_frag_grenade_mag),mag_2(KannonAPMag),mag_2(KannonHEMag)};
	};//Warboss
	
	//Vehicles
	class DK143_O_OrkHordez_LR_Battlecannon_Black_OP : TIOW_Renegade_LR_Battlecannon_Black_OP {
		displayName = "Some Gitz Tank";
		Faction = "DK143_O_OrkHordez";
		crew = "DK143_O_OrkBooma";
	};

	class DK143_O_OrkHordez_Stompa : TIOW_Stompa_01_ds_OP {
		displayName = "Stompa";
		Faction = "DK143_O_OrkHordez";
		crew = "DK143_O_OrkBooma";
	};

	class DK143_O_OrkHordez_Trukk : Trukk1_OP {
		displayName = "Trukk";
		Faction = "DK143_O_OrkHordez";
		crew = "DK143_O_OrkBooma";
	};
	
	class DK143_O_LootedChimera :  _82ndChimAuto_OP {
		displayName = "Some Gitz Ard Trukk";
		Faction = "DK143_O_OrkHordez";
		crew = "DK143_O_OrkBooma";
	};
	
	class DK143_O_DeffKoptaRokkit : Deffkopta_01_0 {
		displayName = "Deff Kopta Rokkit";
		Faction = "DK143_O_OrkHordez";
		crew = "DK143_O_OrkBooma";
	};
	
	class DK143_O_DeffKopta : Deffkopta_02_0 {
		displayName = "Deff Kopta";
		Faction = "DK143_O_OrkHordez";
		crew = "DK143_O_OrkBooma";
	};
	
	class DK143_O_MegaDeffKopta :  MDK_0 {
		displayName = "Mega Deff Kopta";
		Faction = "DK143_O_OrkHordez";
		crew = "DK143_O_OrkBooma";
	};
	
	class DK143_O_LootedValk : Valkyrie_Looted_0 {
		displayName = "Some Gitz Valk're";
		Faction = "DK143_O_OrkHordez";
		crew = "DK143_O_OrkBooma";
	};
};
