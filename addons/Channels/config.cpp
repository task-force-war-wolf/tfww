#include "script_component.hpp"

class CfgPatches {
    class tfwwFundamentals_Channels {

        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
        VERSION_CONFIG;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};

class Extended_PreInit_EventHandlers {
    class tfwwFundamentals_Channels_Event {
        init = "call compile preprocessFileLineNumbers 'z\tfww\addons\Channels\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class tfww_AI_Event {
        init = "call compile preprocessFileLineNumbers 'z\tfww\addons\Channels\XEH_postInit.sqf'";
    };
};