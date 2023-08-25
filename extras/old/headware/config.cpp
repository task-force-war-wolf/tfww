#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tfww_main",
            "A3_Characters_F",
            "ace_hearing",
            "A3_Characters_F_Enoch",
            "A3_Supplies_F_Enoch_Bags"
            };
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "XtdGear.hpp"

class Headlamps_Presets {
    class Headlamps_Preset_Full {
        offset[] = {-0.5,0.06,0.13};
        colorCycle[] = {
            "Headlamp_light_white_low",
            "Headlamp_light_red_low",
            "Headlamp_light_blue_low"
        };
    };

    class Headlamps_Preset_Helmet_Surefire_HL1_Right: Headlamps_Preset_Full {
        offset[] = {0.04,0,0.15};
    };

    class Headlamps_Preset_Helmet_Surefire_HL1_Left: Headlamps_Preset_Helmet_Surefire_HL1_Right {
        offset[] = {-0.185,-0.08,0.09};
    };

    class Headlamps_Preset_Helmet_Surefire_HL1_Left_ARC: Headlamps_Preset_Helmet_Surefire_HL1_Left {
        offset[] = {-0.185,-0.08,0.15};
    };

    class Headlamps_Preset_Helmet_Surefire_HL1_Right_ARC: Headlamps_Preset_Helmet_Surefire_HL1_Left {
        offset[] = {0.04,0,0.19};
    };
};
