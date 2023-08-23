#include "script_component.hpp"
/*
 * Author: DerZade
 * Returns the cargo container of a unit's chestpack. Note that this is only a prop and does not contain any items. Items which
 * were added with vanilla commands like 'addWeaponCargo' etc.  will be ignored. You have to use the provided functions instead.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Cargo container or objNull <OBJECT>
 *
 * Example:
 * [player] call TFWW_boc_fnc_chestpackContainer;
 *
 * Public: No
 */
params [ ["_unit",objNull,[objNull]] ];
private ["_var","_weaponHolder"];

if (isNull _unit) exitWith {objNull};

_var = _unit getVariable [QGVAR(chestpack),[["", objNull]]];
_weaponHolder = (_var select 0) select 1;

// return backpack
firstBackpack _weaponHolder
