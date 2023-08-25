#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_UI_F",
            "cba_main",
            "cba_xeh",
            "ace_vector",
            "A3_Weapons_F",
            "A3_Weapons_F_Exp",
            "cba_jr",
            "ace_xm157",
            "cba_jam",
            // "MCX_Rattler",
            "A3_Weapons_F_Rifles_MX_Black",
            "A3_Weapons_F_Rifles_MX",
            "A3_Weapons_F_LongRangeRifles_M320"

        };
        authorUrl = "https://www.tfwwsofbattle.com/";
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "XtdGearweapon.hpp"
#include "XtdGeartier1.hpp"
#include "CfgMagazineWells.hpp"