#include "..\script_component.hpp"
if (isDedicated) exitwith {};

if (hasinterface) then {
    player setUnitTrait ["Pilot", true, true];
    player setVariable ["canUseSSScas", false, true];
    player setVariable ["canUseSSstrans", false, true];
    player setVariable ["canUseSSSarty", false, true];
    player setUnitTrait ["UAVHacker", false];
    player setVariable ["ACE_isEOD", false, true];
    player setVariable ["ace_isEngineer", 1, true];
    player setVariable ["ace_medical_medicclass", 0, true];
};
[ format [hint_tfww_default, "Pilot"] ] call tfww_fnc_hint;