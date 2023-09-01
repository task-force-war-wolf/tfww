#include "..\script_component.hpp"

if (isDedicated) exitWith {};

////////////////////////////////////////////////////////////////////////////////////////////////
private _tfwwmakecom = [
    "tfwwmakecom",
    "Communications",
    "", {
        player call FUNC(makecom);
        player 
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _tfwwmakecom] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _tfwwmakeeng = [
    "tfwwmakeeng",
    "Engineer",
    "", {
        player call FUNC(makeeng);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _tfwwmakeeng] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _tfwwmakemed = [
    "tfwwmakemed",
    "Medic",
    "", {
        player call FUNC(makemed);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _tfwwmakemed] call ACE_interact_menu_fnc_addActionToObject;


////////////////////////////////////////////////////////////////////////////////////////////////
private _tfwwmakewep = [
    "tfwwmakewep",
    "RiflePerson",
    "", {
        player call FUNC(makewep);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _tfwwmakewep] call ACE_interact_menu_fnc_addActionToObject;

private _tfwwmakemg = [
    "tfwwmakemg",
    "Machine Gunner",
    "", {
        player call FUNC(makemg);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _tfwwmakemg] call ACE_interact_menu_fnc_addActionToObject;

private _tfwwmakemark = [
    "tfwwmakemark",
    "Marksman",
    "", {
        player call FUNC(makemark);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _tfwwmakemark] call ACE_interact_menu_fnc_addActionToObject;

private _tfwwmakegren = [
    "tfwwmakegren",
    "Grenadier",
    "", {
        player call FUNC(makegren);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _tfwwmakegren] call ACE_interact_menu_fnc_addActionToObject;

private _tfwwmakeat = [
    "tfwwmakeat",
    "AT/AA",
    "", {
        player call FUNC(makeat);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _tfwwmakeat] call ACE_interact_menu_fnc_addActionToObject;

private _tfwwmakepilot = [
    "tfwwmakepilot",
    "Pilot",
    "", {
        player call FUNC(makepilot);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _tfwwmakepilot] call ACE_interact_menu_fnc_addActionToObject;


private _tfwwmakelead = [
    "tfwwmakelead",
    "Leader",
    "", {
        player call FUNC(makelead);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _tfwwmakelead] call ACE_interact_menu_fnc_addActionToObject;




////////////////////////////////////////////////////////////////////////////////////////////////
private _tfwwFIX = [
    "tfwwfix",
    "FIX Perms",
    "", {
        player call FUNC(role);
        player call FUNC(rank);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _tfwwFIX] call ACE_interact_menu_fnc_addActionToObject;


