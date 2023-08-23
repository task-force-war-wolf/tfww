#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tfww_common"
        };
        author = QAUTHOR;
        authors[] = {"3Mydlo3"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
