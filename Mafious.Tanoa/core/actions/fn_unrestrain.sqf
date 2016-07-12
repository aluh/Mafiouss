#include "..\..\script_macros.hpp"
/*
    File: fn_unrestrain.sqf
    Author:

    Description:

*/
private["_unit"];
_unit = param [0,objNull,[objNull]];
if (isNull _unit || !(_unit getVariable ["restrained",false])) exitWith {}; //Error check?

_success = false;
switch playerSide do
{
	case west:
	{
		_unit setVariable ["restrained",FALSE,TRUE];
		_unit setVariable ["Escorting",FALSE,TRUE];
		_unit setVariable ["transporting",FALSE,TRUE];
		detach _unit;
		_success = true;
		[0,"STR_NOTF_Unrestrain",true,[_unit getVariable ["realname",name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
	};
	case independent:
	{
		if(_unit getVariable ["restrainedType",""] == "zip") then
		{
			_unit setVariable ["restrained",FALSE,TRUE];
			_unit setVariable ["Escorting",FALSE,TRUE];
			_unit setVariable ["transporting",FALSE,TRUE];
			detach _unit;
			_success = true;
		};
	};
	case civilian:
	{
		if((_unit getVariable "restrainedType") == "zip") then
		{
			_unit setVariable["restrained",FALSE,TRUE];
			_unit setVariable["Escorting",FALSE,TRUE];
			_unit setVariable["transporting",FALSE,TRUE];
			detach _unit;
			[[0,format[localize "STR_NOTF_Unrestrain",_unit getVariable["realname",name _unit], profileName]],"life_fnc_broadcast",west,FALSE] call life_fnc_MP;
		}
		else
		{
			hint format[localize "STR_NOTF_CantUnrestrain", "Zip Tied"]
		};
	};
};


if(_success) then {
	if(_unit getVariable ["restrainedType",""] == "zip") then
	{
		[0, format ["%1's zipties were cut by %2",_unit getVariable ["realname",name _unit],profileName]] remoteExec ["life_fnc_broadcast", west, false];
		[0, format ["%1's zipties were cut.",_unit getVariable ["realname",name _unit],profileName]] remoteExec ["life_fnc_broadcast", civilian, false];
	}
	else
	{
		[0, format ["%1 was unrestrained by %2",_unit getVariable ["realname",name _unit],profileName]] remoteExec ["life_fnc_broadcast", west, false];
	};
};