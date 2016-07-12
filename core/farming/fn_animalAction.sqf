#include "..\..\script_macros.hpp"
#define ANIMALCFG missionConfigFile >> "CfgFarming" >> "Animals"
/*
* @File:   fn_animalAction.sqf
* @Author: Ciaran "Ciaran" Langton <email@ciaranlangton.com>
*/
params [
  ["_animal", objNull, [objNull]]
];
if (life_action_inUse) exitWith {};

private _cfg = missionConfigFile >> "CfgFarming" >> "Animals" >> typeOf _animal;
if !(isClass _cfg) exitWith {};

private _action = getText(_cfg >> "action");
private _neededItems = getArray(_cfg >> "neededItems");
private _products = getArray(_cfg >> "products");
private _timeoutTime = getNumber(_cfg >> "timeoutTime");
private _timeoutMsg = getText(_cfg >> "timeoutMsg");

private _lastInteracted = _animal getVariable ["life_lastInteracted", -9999];
if (time - _lastInteracted < _timeoutTime) exitWith {
  hint _timeoutMsg;
};
life_action_inUse = true;

//Validate the player has all the items needed, also generate total needed item weight.
private _itemValidateCheck = true;
private _neededItemWeight = 0;
{
  _x params [
    ["_itemName", "", [""]],
    ["_remove", 0, [0]]
  ];

  private _count = ITEM_VALUE(_itemName);
  if (_count < 1) exitWith {_itemValidateCheck = false; hint format["You are missing a %1.", localize ITEM_NAME(_itemName)]};

  if (_remove isEqualTo 1) then {
    _neededItemWeight = _neededItemWeight + ITEM_WEIGHT(_itemName);
  };
} forEach _neededItems;
if !(_itemValidateCheck) exitWith {life_action_inUse = false;};

//Setup our progress bar
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
private _ui = uiNamespace getVariable ["life_progress",displayNull];
private _progressBar = _ui displayCtrl 38201;
private _titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%",_action];
_progressBar progressSetPosition 0.01;
private _cP = 0.01;
private _succeed = true;

for "_i" from 0 to 1 step 0 do {
  if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
    [player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
    player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
    player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
  };
  sleep 0.26;

  _cP = _cP + .01;
  _progressBar progressSetPosition _cP;
  _titleText ctrlSetText format["%3",round(_cP * 100),"%",_action];
  ctrlSetText [38203,format["%1%2"],round(_cp*100),"%"];
  if !(alive player) exitWith {_succeed = false;};
  if (life_istazed) exitWith {_succeed = false;};
  if (life_isknocked) exitWith {_succeed = false;};
  if (life_interrupted) exitWith {_succeed = false;};
  if (player getVariable ["restrained",false]) exitWith {_succeed = false;};
  if (isNull _animal) exitWith {_succeed = false;};
  if (player distance _animal > 4) exitWith {_succeed = false;};
  if (_cP >= 1) exitWith {};
};

5 cutText ["","PLAIN"];
player playActionNow "stop";

if !(_succeed) exitWith {
  hint "Cancelled";
  life_action_inUse = false;
};

//Set milk time
_animal setVariable ["life_lastInteracted", time];

private _diff = ["milkbucket", 1, life_carryWeight, life_maxWeight] call life_fnc_calWeightDiff;
if (_diff isEqualTo 0) exitWith {life_action_inUse = false; hint localize "STR_NOTF_InvFull";};

//Validate the player has enough space to hold the new items
private _spaceValidation = true;
{
  _x params [
    ["_itemName", "", [""]],
    ["_count", 0, [0]]
  ];

  //Calculate difference, excluding the used item weight.
  private _diff = [_itemName, _count, life_carryWeight - _neededItemWeight, life_maxWeight] call life_fnc_calWeightDiff;
  if (_diff isEqualTo 0) exitWith {_spaceValidation = false};
} forEach _products;
if !(_spaceValidation) exitWith {life_action_inUse = false; hint localize "STR_NOTF_InvFull";};

//Remove items
{
  _x params [
    ["_itemName", "", [""]],
    ["_remove", 0, [0]]
  ];

  if (_remove isEqualTo 1) then {
    [false, _itemName, 1] call life_fnc_handleInv;
  };
} forEach _neededItems;

//Give items
{
  _x params [
    ["_itemName", "", [""]],
    ["_count", 0, [0]]
  ];

  [true, _itemName, _count] call life_fnc_handleInv;
} forEach _products;

life_action_inUse = false;
