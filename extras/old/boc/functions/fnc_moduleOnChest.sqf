#include "script_component.hpp"
/*
 * Author: DerZade
 * Triggerd by OnChest-Module
 *
 * Arguments:
 * 0: module <OBJECT>
 * 1: synchronized units <ARRAY>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * n/a
 *
 * Public: No
 */
params ["_module","_syncedUnits"];
private ["_backpackClass","_delay","_units"];

_backpackClass = _module getVariable "classname";
_delay = _module getVariable "delay";
_units = [];
 {
    _units pushBackUnique _x;
} forEach _syncedUnits;

[_units,_backpackClass,_delay] spawn {
    params ["_units","_backpackClass","_delay"];
    sleep _delay; {
        if !((backpack _x) isEqualTo "") then {
            [_x] call FUNC(actionOnChest);
        };
        if !(_backpackClass isEqualTo "") then {
            _x addBackpackGlobal _backpackClass;
        };
    } forEach _units;
};
