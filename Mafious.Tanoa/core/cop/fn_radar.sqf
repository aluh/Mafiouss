/*
	File: fn_radar.sqf
	Author: Herman "Mordin" Othelius
*/
if(!(vehicle player != player)) exitWith {};
if(playerSide != west) exitWith {};
_speed = 0;
_info = "";
_vehicle = [];
_owner =[];
_cars = [];
{
	if (alive _x) then{
	 	_cars set [(count _cars),_x];
	};
} forEach nearestObjects [vehicle player,["Car","Truck"],100];
if(vehicle player == player) exitWith {hint "You must be in your vehicle for radar to work."};
if(count _cars < 2) exitWith{};
_vehicle = (_cars select 1);
_type = getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");
if(count (crew (_vehicle)) == 0) exitWith {hint parseText format ["<t color='#5A80EB'><t align='center'><t size='1.5'>ERROR!</t></t><br/><t color='#FF0000'><t size='1'>No moving vehicles in range!</t></t>"];};
_speed = round speed (_vehicle);
_owners = _vehicle getVariable "vehicle_info_owners";
if(isNil {_owners}) then
{
	_owner = "Unknown (Hack?)";
}
else
{
	_owners = [_owners] call life_fnc_vehicleOwners;
	if(_owners == "any<br/>") then
	{
		_owners = "Unknown (Hack?)";
	};
};

_driver = driver _vehicle;

// Format speed & owner below here
if(_speed > 85) then {_info = format ["<t color='#5A80EB'><t size='1.5'><t align='center'>Radar<br/><t color='#FF0000'><t align='center'><t size='1'>Speed %1 km/h", _speed];
} else {_info = format ["<t color='#5A80EB'><t size='1.5'><t align='center'>Radar<br/><t color='#33CC33'><t align='center'><t size='1'>Speed %1 km/h", _speed];};
if(isNil {_owner}) then {_info = _info + format ["<br/><t color='#FFD700'><t size='1.5'><t align='center'>Owner:<br/><t color='#33CC33'><t align='center'><t size='1.8'> NOT FOUND!"];
}else{_info = _info + format ["<br/><t color='#5A80EB'><t size='1.5'><t align='center'>Owner(s):<br/><t color='#33CC33'><t align='center'><t size='1'> %1", _owners];};
_info = _info + format ["<br/><t color='#5A80EB'><t size='1.5'><t align='center'>Driver:<br/><t color='#33CC33'><t align='center'><t size='1'> %1", _driver getVariable["realname",name _driver]];
_info = _info + format ["<br/><t color='#5A80EB'><t size='1.5'><t align='center'>Vehicle:<br/><t color='#33CC33'><t align='center'><t size='1'> %1", _type];
// Add in checks...
if (!(_driver getVariable "seatbelt")) then
{
	_info = _info + format ["<br/><t color='#F00'><t size='1.5'><t align='center'>Driver is NOT wearing a seatbelt"];
}
else
{
	_info = _info + format ["<br/><t color='#0F0'><t size='1.5'><t align='center'>Driver is wearing a seatbelt"];
};

if ((_driver getVariable "isWanted")) then
{
	_info = _info + format ["<br/><t color='#F00'><t size='1.5'><t align='center'>Driver is WANTED"];
}
else
{
	_info = _info + format ["<br/><t color='#0F0'><t size='1.5'><t align='center'>Driver is not wanted"];
};

hint parseText _info;