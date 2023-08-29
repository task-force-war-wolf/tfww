#include "script_component.hpp"

/*
 * Author: NKey, johnb43
 * Returns the active SR radio.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Active SR radio <STRING>
 *
 * Example:
 * call tfww_tfar_setter_fncactiveSwRadio;
 *
 * Public: No
 */

// Active SR radio must be in assignedItems
private _assignedItems = assignedItems TFAR_currentUnit;

_assignedItems param [_assignedItems findIf {_x call TFAR_fnc_isRadio}, ""]
