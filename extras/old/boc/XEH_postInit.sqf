#include "script_component.hpp"

if (isNil QEGVAR(common,TFWW_enabled) || !(EGVAR(common,TFWW_enabled))) exitWith {};

if !(hasInterface) exitWith {};

call FUNC(arsenal_postInit);

TFWW_unit setVariable [QGVAR(preventProne),false,true];

[{
    if (
        (stance TFWW_unit) == "PRONE" && {TFWW_unit getvariable [QGVAR(preventProne),false]} && {!(TFWW_unit getVariable ["ACE_isUnconscious", false]) || lifeState TFWW_unit != "INCAPACITATED"}
       ) then {
        TFWW_unit playAction "PlayerCrouch";
        hint localize "str_TFWW_boc_crouch";
    };
},1] call CBA_fnc_addPerFrameHandler;
