/*
 * Name: TFWW_common_fnc_checkTFWWVersion
 * Author: Snippers
 *
 * Arguments:
 *  Array - Version to check
 *
 * Return:
 * Boolean
 *
 * Description:
 * Checks if Task Force War Wolf  Mission version is larger than the input version;
 */
#include "\z\tfww\addons\common\script_component.hpp"

params [
    ["_input",[0,0,0]]
];

private _tfwwVersion = getMissionConfigValue ["tfww_version",[0,0,0]];

([_tfwwVersion,_input] call EFUNC(common,checkVersionArray));

