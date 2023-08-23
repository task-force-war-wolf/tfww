/*
 * Name: tfwwb_common_fnc_sideToColor
 * Author: Snippers
 *
 * Arguments:
 * side
 *
 * Return:
 * array: color array
 *
 * Description:
 * Will return the color of the inputted side.
 */

//Cache vars for speed
if (isNil "tfwwb_common_blufor_color") then {
    tfwwb_common_blufor_color = [blufor] call bis_fnc_sideColor;
    tfwwb_common_opfor_color = [opfor] call bis_fnc_sideColor;
    tfwwb_common_indep_color = [independent] call bis_fnc_sideColor;
    tfwwb_common_civ_color = [civilian] call bis_fnc_sideColor;
    tfwwb_common_empty_color = [sideUnknown] call bis_fnc_sideColor;
};

switch _this do {
    case blufor: {tfwwb_common_blufor_color};
    case opfor: {tfwwb_common_opfor_color};
    case independent: {tfwwb_common_indep_color};
    case civilian: {tfwwb_common_civ_color};
    default {tfwwb_common_empty_color};
};
