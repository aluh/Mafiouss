#include "..\..\script_macros.hpp"
/*
* @File:   fn_farmingPlantServer.sqf
* @Author: Ciaran "Ciaran" Langton <email@ciaranlangton.com>
*/
if !(isDedicated) exitWith {};
params [
  ["_plantClass", "", [""]],
  ["_plantObject", objNull, [objNull]]
];
if (isNull _plantObject || _plantClass isEqualTo "") exitWith {};

//Get model information
private _modelConfig = getText(missionConfigFile >> "CfgFarming" >> "Plants" >> _plantClass >> "model");
(getModelInfo _plantObject) params [
  ["_modelName", "", [""]],
  ["_modelObject", "", [""]]
];

//Nope
if (_modelConfig != _modelObject) exitWith {};

//If the owner is already server, delete. If not, add event handler to listen if it becomes owned by server. (Only for Dedis!!)
if (owner _plantObject isEqualTo 2) exitWith {deleteVehicle _plantObject;};

_plantObject addEventHandler [
  "Local",
  {
    params [
      ["_object", objNull, [objNull]],
      ["_local", false, [false]]
    ];

    //If it is now local to us, delete it!
    if (_local) then {
      deleteVehicle _object;
    };
  }
];
