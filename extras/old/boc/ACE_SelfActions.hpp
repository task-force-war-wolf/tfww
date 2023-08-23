#include "script_component.hpp"
class GVAR(onChest) {
    displayName = "$STR_TFWW_boc_OnChest";
    condition = "!(missionNamespace getVariable [QQGVAR(disabled),false]) && {!((backpack _player) isEqualTo '')} && {(([_player] call FUNC(chestpack)) isEqualTo '')}";
    exceptions[] = {"isNotInside"};
    statement = QUOTE([_player] call FUNC(actionOnChest));
    showDisabled = 0;
    priority = 2.5;
    icon = QPATHTOF(data\actions\onchest_ca.paa);
};
class GVAR(onBack): GVAR(onChest) {
    displayName = "$STR_TFWW_boc_OnBack";
    condition = "!(missionNamespace getVariable [QQGVAR(disabled),false]) && {((backpack _player) isEqualTo '')} && {!(([_player] call FUNC(chestpack)) isEqualTo '')}";
    statement = QUOTE([_player] call FUNC(actionOnBack));
    icon = QPATHTOF(data\actions\onback_ca.paa);
};
class GVAR(swap): GVAR(onChest) {
    displayName = "$STR_TFWW_boc_swap";
    condition = "!(missionNamespace getVariable [QQGVAR(disabled),false]) && {!((backpack _player) isEqualTo '')} && {!(([_player] call FUNC(chestpack)) isEqualTo '')}";
    statement = QUOTE([_player] call FUNC(actionSwap));
    icon = QPATHTOF(data\actions\swap_ca.paa);
};
