/*
 * Name: tfwwb_common_fnc_serializeWaypoints
 * Author: Head
 *
 * Arguments:
 * _group: Group
 *
 * Return:
 * array: of waypoint datagit
 *
 */
params ["_group"];
#include "\z\tfww\addons\common\script_component.hpp"
private _waypoints = (waypoints _group) apply { _x call FUNC(serializeWaypoint)};
_waypoints
