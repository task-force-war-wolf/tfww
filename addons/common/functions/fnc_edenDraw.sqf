#include "\z\tfww\addons\common\script_component.hpp"
/*
 * Name: tfwwb_common_fnc_edenDraw
 * Author: Snippers
 *
 * Arguments:
 * None
 *
 * Return:
 * nil
 *
 * Description:
 * Called on the draw event in EDEN.
 *
 */
if (GVAR(Garrison)) then {
    [] call FUNC(edenMouseOver);
    [] call FUNC(edenMouseKeyDown);
};

[] call FUNC(edenHideMapObjects);
