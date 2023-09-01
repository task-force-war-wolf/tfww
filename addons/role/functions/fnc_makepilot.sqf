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

    // Radar (available since 1.5.5)
    player setVariable ["diwako_dui_radar_customIcon", "\a3\ui_f\data\map\vehicleicons\iconmanvirtual_ca.paa", true];

    // middle icon for indicators (available since 1.6.0)
    player setVariable ["diwako_dui_indicators_customIcon", "\a3\ui_f\data\map\vehicleicons\iconmanvirtual_ca.paa", true];
};

Hint "Pilot";
