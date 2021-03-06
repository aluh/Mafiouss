#include "..\..\script_macros.hpp"
/*
    File: fn_safeFix.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Piece of functionality for the cops to close the safe (lock it)
*/
params [
    ["_vault", objNull, [objNull]]
];
if (!(_vault getVariable ["safe_open",false])) exitWith {hint localize "STR_Cop_VaultLocked"};

life_action_inUse = true;

//Setup the progress bar
disableSerialization;
private _title = localize "STR_Cop_RepairVault";
5 cutRsc ["life_progress","PLAIN"];
private _ui = uiNamespace getVariable "life_progress";
private _progressBar = _ui displayCtrl 38201;
private _titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2","%",_title];
_progressBar progressSetPosition 0.01;

private _cP = 0.01;
for "_i" from 0 to 1 step 0 do {
    if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
        [player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
        player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
        player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
    };

    sleep 0.26;

    if (isNull _ui) then {
        5 cutRsc ["life_progress","PLAIN"];
        _ui = uiNamespace getVariable "life_progress";
        _progressBar = _ui displayCtrl 38201;
        _titleText = _ui displayCtrl 38202;
    };
    _cP = _cP + .012;
    _progressBar progressSetPosition _cP;
    _titleText ctrlSetText format["%3",round(_cP * 100),"%",_title];
    ctrlSetText [38203,format["%1%2"],round(_cp*100),"%"];
    if (_cP >= 1 || !alive player) exitWith {};
    if (life_interrupted) exitWith {};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";
if (!alive player) exitWith {life_action_inUse = false;};
if (life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};

life_action_inUse = false;

_vault setVariable ["safe_open",false,true];
hint localize "STR_Cop_VaultRepaired";
