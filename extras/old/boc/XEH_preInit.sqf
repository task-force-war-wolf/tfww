#include "script_component.hpp"

ADDON = false;

#include "initCBASettings.sqf"

if (isNil QEGVAR(common,TFWW_enabled) || !(EGVAR(common,TFWW_enabled))) exitWith {};

#include "XEH_PREP.hpp"

ADDON = true;
