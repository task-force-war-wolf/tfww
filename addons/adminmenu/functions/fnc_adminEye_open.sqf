#include "\z\tfww\addons\adminmenu\script_component.hpp"

disableSerialization;

createDialog QGVAR(adminEyeDialog);

GVAR(Triggers) = allMissionObjects "EmptyDetector";
GVAR(WaveSpawners) = allMissionObjects "tfww_ai_wavespawn";
GVAR(Garrison) = (allMissionObjects "tfww_ai_garrison" + allMissionObjects "tfww_ai_garrisonQuantity");


GVAR(adminEyeSelectedObj) = objNull;
//FUTURE - Area
