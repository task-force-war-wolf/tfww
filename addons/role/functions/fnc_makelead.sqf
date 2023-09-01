#include "..\script_component.hpp"
if (isDedicated) exitwith {};

if (hasinterface) then {
    player setUnitTrait ["Pilot", false, true];
    player setVariable ["canUseSSScas", true, true];
    player setVariable ["canUseSSstrans", true, true];
    player setVariable ["canUseSSSarty", true, true];
    player setUnitTrait ["UAVHacker", true];

    player setVariable ["ace_medical_medicclass", 0, true];
    player setVariable ["ACE_isEOD", false, true];
    player setVariable ["ace_isEngineer", 0, true];

        [
        {player setVariable["draWhitelisted",TRUE,TRUE];player setVariable["draAccessDrones",TRUE,TRUE];player setVariable["draAccessCruise",TRUE,TRUE];player setVariable["draAccessSensors",TRUE,TRUE];},
        [draReady],
        5
    ] call CBA_fnc_waitAndExecute;

    [
        {daoWhitelisted=true;daoJTACmode=true;},
        [daoReady],
        5
    ] call CBA_fnc_waitAndExecute;

        // Radar (available since 1.5.5)
    player setVariable ["diwako_dui_radar_customIcon", "\a3\ui_f\data\map\vehicleicons\iconmancommander_ca.paa", true];

    // middle icon for indicators (available since 1.6.0)
    player setVariable ["diwako_dui_indicators_customIcon", "\a3\ui_f\data\map\vehicleicons\iconmancommander_ca.paa", true];
};
Hint "Your in charge now!";