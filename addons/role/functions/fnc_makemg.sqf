#include "..\script_component.hpp"
if (isDedicated) exitwith {};

if (hasinterface) then {
    player setUnitTrait ["Pilot", false, true];
    player setVariable ["canUseSSScas", false, true];
    player setVariable ["canUseSSstrans", false, true];
    player setVariable ["canUseSSSarty", false, true];
    player setUnitTrait ["UAVHacker", false];
    player setVariable ["ACE_isEOD", false, true];
    player setVariable ["ace_isEngineer", 0, true];
    player setVariable ["ace_medical_medicclass", 0, true];

    player setVariable["draWhitelisted", false, true];
    daoWhitelisted=false;

    // Radar (available since 1.5.5)
    player setVariable ["diwako_dui_radar_customIcon", "\a3\ui_f\data\map\vehicleicons\iconmanmg_ca.paa", true];

    // middle icon for indicators (available since 1.6.0)
    player setVariable ["diwako_dui_indicators_customIcon", "\a3\ui_f\data\map\vehicleicons\iconmanmg_ca.paa", true];

};
Hint "Machine Gunner";