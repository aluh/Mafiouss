/*
* @File:   fn_isPlantMature.sqf
* @Author: Ciaran "Ciaran" Langton <email@ciaranlangton.com>
*/
params [
  ["_plant", objNull, [objNull, []]]
];

if (_plant isEqualType objNull) then {_plant = [_plant] call life_fnc_getPlant};
if (count _plant < 1) exitWith {false};

_plant params [
  ["_xPlant", objNull, [objNull]],
  ["_timeCreated", serverTime, [serverTime]],
  ["_lifeTime", 99999, [-1]],
  ["_maturityTime", 99999, [-1]]
];

(serverTime - _timeCreated > _maturityTime)
