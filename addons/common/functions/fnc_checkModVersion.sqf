#include "\z\tfww\addons\common\script_component.hpp"
/*
 * Name: tfwwb_common_fnc_checkModVersion
 * Author: Snippers
 *
 * Arguments:
 *  Array - Version to check
 *
 * Return:
 * Boolean
 *
 * Description:
 * Checks if tfwwb Mission version is larger than the input version;
 */

params [
    ["_input",[0,0,0]]
];

private _tfwwbersion = getMissionConfigValue ["tfwwb_version",[0,0,0]];

([_tfwwbersion,_input] call EFUNC(common,checkVersionArray));

