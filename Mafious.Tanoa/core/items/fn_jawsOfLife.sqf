/*
+	File: fn_jawsOfLife.sqf
+	Original Author: Paronity
+	Description:
+	Removed dead bodies from car for revival
+*/

private["_unit"];
_unit = cursorTarget;
if(player getVariable ["restrained",false]) exitWith {};
if(player distance _unit > 7) exitWith {hint "You need to be within 7 feet!"};
_jaws = ITEM_VARNAME("jaws");
if(_jaws == 0) exitWith {};

if(_unit isKindOf "House_F") then
{
	_unit setVariable ["jawsOpen",true,true];
}
else
{
	if(getDammage _unit != 1) then
	{
		_unit setDamage .7;
	};
	if(count(crew _unit) > 0) then
	{
		[_unit] call life_fnc_choiceReviveUpdate;
	}
	else
	{
		hint "There are no bodies in the vehicle!";
	};
};
