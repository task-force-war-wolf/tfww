#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Ui_F"};
        author = QAUTHOR;
        authors[] = {"Drofseh"};
        authorUrl = "https://tfwwsofbattle.com";
        VERSION_CONFIG;
    };
};

#include "RscDisplay.hpp"
