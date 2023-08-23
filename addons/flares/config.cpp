#include "script_component.hpp"

#ifndef TFWW_LEAN_RHS_CUP_HLC

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tfww_common"};
        author = QAUTHOR;
        authors[] = {"PabstMirror"};
        authorUrl = "https://tfwwsofbattle.com";
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"

#endif
