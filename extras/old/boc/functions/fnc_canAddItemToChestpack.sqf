#include "script_component.hpp"
/*
 * Author: DerZade
 * Checks if given item can be stored into soldier's chestpack.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Item/magazine/weapon classname <STRING>
 * 2: Amount <NUMBER> (optional | default: 1)
 *
 * Return Value:
 * Can add item? <BOOL>
 *
 * Example:
 * [player,"FirstAidKit",2] call TFWW_boc_fnc_canAddItemToChestpack;
 *
 * Public: No
 */
params [ ["_unit",objNull,[objNull]], ["_item","",[""]], ["_amount",1,[0]] ];
private ["_maximumLoad","_freeSpace","_itemMass"];

if (isNull _unit || _item isEqualTo "" || _amount < 1) exitWith {false};

if ([_unit] call FUNC(chestpack) isEqualTo "") exitWith {false};

// calculate space left in chestpack
_maximumLoad = [configFile >> "CfgVehicles" >> ([_unit] call FUNC(chestpack)), "maximumLoad", 0] call BIS_fnc_returnConfigEntry;
_freeSpace = _maximumLoad - ([_unit] call FUNC(loadChestpack));

if (_freeSpace < 0) exitWith {false};

_itemMass = [_item] call FUNC(itemMass);

if (_itemMass * _amount > _freeSpace) then {false} else {true};
