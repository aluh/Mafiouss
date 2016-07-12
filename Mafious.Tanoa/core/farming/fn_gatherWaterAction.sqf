#include "..\..\script_macros.hpp"

/*
* @File:   fn_gatherWaterAction.sqf
* @Author: noms

*/

if (life_action_inUse) exitWith {};

life_action_inUse = true;

//Validate the player has all the items needed, also generate total needed item weight.
_bucket = missionNamespace getVariable "life_inv_bucket";
if (_bucket < 1) exitWith {hint "You are missing a bucket!";life_action_inUse = false;};
//Setup our progress bar
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
private _ui = uiNamespace getVariable ["life_progress",displayNull];
private _progressBar = _ui displayCtrl 38201;
private _titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%","Collecting Sea Water"];
_progressBar progressSetPosition 0.01;
private _cP = 0.01;
private _succeed = true;

for "_i" from 0 to 1 step 0 do {
  if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
    [player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
    player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
    player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
  };
  sleep 0.1;

  _cP = _cP + .01;
  _progressBar progressSetPosition _cP;
  _titleText ctrlSetText format["%3",round(_cP * 100),"%","Collecting Sea Water"];
  ctrlSetText [38203,format["%1%2"],round(_cp*100),"%"];
  if !(alive player) exitWith {_succeed = false;};
  if (life_istazed) exitWith {_succeed = false;};
  if (life_isknocked) exitWith {_succeed = false;};
  if (life_interrupted) exitWith {_succeed = false;};
  if (player getVariable ["restrained",false]) exitWith {_succeed = false;};
  if (_cP >= 1) exitWith {};
};

5 cutText ["","PLAIN"];
player playActionNow "stop";

if !(_succeed) exitWith {
  hint "Cancelled";
  life_action_inUse = false;
};

private _diff = ["seawaterbucket", 1, life_carryWeight, life_maxWeight] call life_fnc_calWeightDiff;
if (_diff isEqualTo 0) exitWith {life_action_inUse = false; hint localize "STR_NOTF_InvFull";};
[false, "bucket", 1] call life_fnc_handleInv;
[true, "seawaterbucket", 1] call life_fnc_handleInv;
titleText ["You gathered some sea water","PLAIN DOWN"];

life_action_inUse = false;
