#include "..\..\script_macros.hpp"
#define PLANTCFG missionConfigFile >> "CfgFarming" >> "Plants"
/*
* @File:   fn_farmingPlant.sqf
* @Author: Ciaran "Ciaran" Langton <email@ciaranlangton.com>
*/
params [
  ["_itemUsed", "", [""]]
];

//Limit amount of plants a client can own
if (count life_farming_objects >= getNumber(PLANTCFG >> "maxPlants")) exitWith {
  hint "Sorry, your other plants need taking care of before you can plant more!"
};
_nearTowns = nearestLocations[position player, ["NameVillage","NameCity","NameCityCapital"], 250];
if(count _nearTowns > 0) exitWith {hint "You cannot farm within 250 meters of a town or village."};
//Check that we are not near anything that could be a problem.
if (player call life_fnc_isNearRoads) exitWith {hint "You are too close to a road to plant this."};

//Select a plant class based on the item.
private _plantClasses = "getText(_x >> 'plantItem') isEqualTo _itemUsed" configClasses (PLANTCFG);
if (count _plantClasses < 1) exitWith {};
private _plantClass = _plantClasses select 0;

//Take the seed
if !([false,_itemUsed,1] call life_fnc_handleInv) exitWith {};

//Extract information
private _plantClassname = configName _plantClass;
private _displayName = getText(_plantClass >> "displayName");
private _lifeTime = getNumber(_plantClass >> "lifeTime");
private _maturityTime = getNumber(_plantClass >> "maturityTime");
private _model = getText(_plantClass >> "model");
private _groundSinkHeight = -1 * getNumber(_plantClass >> "groundSinkHeight");
private _randomSinkRange = getNumber(_plantClass >> "randomSink");

//Calculate a random height target.
private _targetHeight = -1 * (random _randomSinkRange);
private _finalHeightDiff = _targetHeight - _groundSinkHeight;

//Create the object and initially sink it.
private _plant = createSimpleObject [_model, [0, 0, 0]];
_plant setPosATL (getPosATL player vectorAdd [0, 0, _groundSinkHeight]);
_plant setVariable ["farmed", true, true];

//Register server event handlers.
[_plantClassname, _plant] remoteExec ["life_fnc_farmingPlantServer", RSERV];

//[plant obj, time planted, lifetime, maturity, sunken height, difference needed to reach max height.]
life_farming_objects pushBack [
  _plant,
  serverTime,
  _lifeTime,
  _maturityTime,
  _groundSinkHeight,
  _finalHeightDiff,
  getPosATL player,
  _plantClassname
];

//Start FSM if needed.
if (isNil 'life_farming_managerFSM' || {isNull life_farming_managerFSM}) then {
  life_farming_managerFSM = [] execFSM "core\farming\Farming_Manager.fsm";
};
