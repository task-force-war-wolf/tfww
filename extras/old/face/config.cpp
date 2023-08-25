#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tfww_main", "A3_Characters_F", "A3_Characters_F_Enoch","A3_Supplies_F_Enoch_Bags"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgGlasses.hpp"
#include "XtdGear.hpp"
