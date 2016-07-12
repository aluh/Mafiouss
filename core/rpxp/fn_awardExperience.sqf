#include "..\..\script_macros.hpp"
/*
Award Experience
Filename: fn_awardExperience.sqf
Author: noms
Description: This file handles awarding experience to players.
*/


private ["_exp","_coeff","_currentLevel","_newLevel"];

// Enable this when live testing
// if(!(life_introduced)) exitWith {systemChat "You cannot gain experience as you have not spoken to the introductory NPC at Tanoa Airport.";};

_exp = param [0,0,[0]];
_coeff = LEVEL_COEF;

if(_exp isEqualTo 0) exitWith {};

life_exp = life_exp + _exp;
[8] call SOCK_fnc_updatePartial;
[] call life_fnc_hudUpdate;
if (_exp > 0) then {
  systemChat format["You have recieved %1 experience point(s).",_exp];
} else {
  systemChat format["You have lost %1 experience point(s).",_exp];
};


_currentLevel = life_level; // Store currentLevel

_newLevel = floor(_coeff * sqrt (life_exp)); //Calculate new level
life_level = _newLevel;

if(_newLevel > _currentLevel) then {
  ["RPXP_LevelUp",[format["You are now level %1!",_newLevel]]] call bis_fnc_showNotification;
  [8] call SOCK_fnc_updatePartial;
  [] call life_fnc_hudUpdate;
};

if(_newLevel < _currentLevel) then {
  ["RPXP_LevelDown",[format["You are now level %1!",_newLevel]]] call bis_fnc_showNotification;
  [8] call SOCK_fnc_updatePartial;
  [] call life_fnc_hudUpdate;
};
