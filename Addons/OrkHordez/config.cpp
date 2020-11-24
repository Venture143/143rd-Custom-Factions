class CfgPatches {
    class DK143_CustomFactions_OrkHordez {
        units[] = {

        };
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {"ace_common"};
        author = "VGm. Venture";
        authors[] = {"VGm. Venture"};
    };
};

class CfgFactions {
    class DK143_O_OrkHordez {
        displayName = "Ork Hordez";
        side = 0;
        flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        priority = 0;
    };
};

class CfgGroups {
    class EAST {
        class DK143_O_OrkHordez {
            name = "Ork Hordez"
                
            class Infantry {
                name = "Infantry";
            };
            
            class Motorized {
                name = "Motorized Infantry";
                
            };
            
            class Armored {
                name = "Armored";
                
            };
            
        };//Ork Hordez
    };//OPFOR GROUPS
};

class CfgVehicles {
//TODO:
//OrkBoyz + MekBoy Contrapshuns
};
