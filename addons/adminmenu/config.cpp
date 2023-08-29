#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "Bear, Snippers";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tfww_common", "A3_UI_F", "cba_diagnostic"};
        VERSION_CONFIG;
    };
};

// SteamID64 of players authorized to access admin tools (matches against getPlayerUID)
class GVAR(authorized_players) {
    class Yonv {
        uid = "76561198000002705";
    };
    class SILVI {
        uid = "76561198097524106";
    };
    class SUPERJES1 {
        uid = "76561198198046123";
    };
    class MADMOONRABBIT {
        uid = "76561198276476043";
    };
    class RIPTIDE {
        uid = "76561199202994293";
    };
};


#include "CfgFunctions.hpp"
#include "CfgDebriefing.hpp"
#include "CfgEventHandlers.hpp"
#include "autotest.hpp"
#include "gui\adminMenu.hpp"
