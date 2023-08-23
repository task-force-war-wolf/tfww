#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"TFWW_main","tfww_common"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};



#include "CfgEventHandlers.hpp"
#include "dialogs\CfgDisplays.hpp"

class CfgScriptPaths {
    TFWWisplays = "z\tfww\addons\cuecard\Scripts\UI\Displays\";
};

