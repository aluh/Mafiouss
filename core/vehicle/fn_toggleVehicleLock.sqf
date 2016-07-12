#include "..\..\script_macros.hpp"
/*
* @File:   fn_toggleVehicleLock.sqf
* @Author: Ciaran "Ciaran" Langton <email@ciaranlangton.com>
*/
private _vehicle = cursorObject;
private _isVehicle = (_vehicle isKindOf "Car" || _vehicle isKindOf "Air" || _vehicle isKindOf "Ship");
private _inRange = (_vehicle distance player < 8);

private _toggleLock = {
  params [
    ["_vehicle", objNull, [objNull]]
  ];

  //Fetch current status.
  private _locked = (locked _vehicle) isEqualTo 2;

  //Play sound and toggle lock.

  if(_locked) then {
    [_vehicle,"UnlockCarSound"] remoteExec ["life_fnc_say3D",RANY];
  } else {
    [_vehicle,"LockCarSound"] remoteExec ["life_fnc_say3D",RANY];
  };

  //Broadcast if not local.
  if !(local _vehicle) then {
    [_vehicle, !_locked] remoteExecCall ["life_fnc_lockVehicle", _vehicle];
  } else {
    [_vehicle, !_locked] call life_fnc_lockVehicle;
  };
};

//Is the cursorTarget belonging to us and in range?
if (_isVehicle && {_inRange} && {_vehicle in life_vehicles}) then {
  if(!_locked) then {
    systemChat "You use your key to manually lock your vehicle.";
  } else {
    systemChat "You use your key to manually unlock your vehicle.";
  };

  _vehicle call _toggleLock;
} else {
  //FOB Locking / Unlocking
  private _nearVehicles = nearestObjects[player, ["Car", "Air", "Ship"], 15];
  private _myVehicles = _nearVehicles select {_x in life_vehicles};

  if (count _myVehicles > 0) then {
    if(!_locked) then {
      systemChat "You use your key to manually lock your vehicle.";
    } else {
      systemChat "You use your key to manually unlock your vehicle.";
    };
    //Toggle nearest vehicle's locks.
    (_myVehicles select 0) call _toggleLock;
  };
};
