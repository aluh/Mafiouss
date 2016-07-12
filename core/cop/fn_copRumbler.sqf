#include "..\..\script_macros.hpp"
/*
    File: fn_copRumbler.sqf
    Author: noms

    Description:
    Starts the cop siren sound for other players
*/
private["_vehicle"];
_vehicle = param [0,objNull,[objNull]];

if (isNull _vehicle) exitWith {};
if (isNil {_vehicle getVariable "rumblerActive"}) exitWith {};

for "_i" from 0 to 1 step 0 do {
    if (!(_vehicle getVariable "rumblerActive")) exitWith {};
    if (!isEngineOn _vehicle) then {_vehicle setVariable ["rumblerActive",false,true]};
    if (!alive _vehicle) exitWith {};
    if (isNull _vehicle) exitWith {};
    _vehicle say3D "Rumbler";//Class/name specified in description.ext
    sleep 1.393;//Exactly matches the length of the audio file.
    if (!(_vehicle getVariable "rumblerActive")) exitWith {};
};
