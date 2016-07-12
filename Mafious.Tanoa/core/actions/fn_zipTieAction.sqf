#include "..\..\script_macros.hpp"
/*
	File: fn_restrainAction.sqf
	Author: Bryan "Tonic" Boardwine
*/
private["_unit"];
_unit = cursorTarget;
if(isNull _unit) exitWith {}; //Not valid
if((_unit getVariable "restrained")) exitWith {};
if(player == _unit) exitWith {};
if(!isPlayer _unit) exitWith {};

_unit setVariable["restrained",true,true];
_unit setVariable["restrainedType","zip",true];
[player] remoteExec ["life_fnc_zipTie", _unit, false];
[getPlayerUID player,player getVariable["realname",profileName],"21"] remoteExec ["life_fnc_wantedAdd",2,false];
[player] remoteExec ["life_fnc_wantedFetchForCivilian",2,false];
hint "You have been added to the wanted list for kidnapping";
[0,format[localize "STR_NOTF_ZipTied",_unit getVariable["realname", name _unit], profileName]] remoteExec ["life_fnc_broadcast",west,false];
