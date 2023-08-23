#include "script_component.hpp"
/*
 * Author: 3Mydlo3
 * Function disables spectator functionality.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * 0: New spectator state <BOOL>
 *
 * Example:
 * [0] call tfww_spectator_fnc_disable
 *
 * Public: No
 */

[QGVAR(stop)] call CBA_fnc_globalEvent;

false
