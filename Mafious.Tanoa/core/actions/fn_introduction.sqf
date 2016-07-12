#include "..\..\script_macros.hpp"
/*
    File: fn_introduced.sqf
    Author: noms
*/

if(life_introduced < 1) then {
  systemChat "Weird Nice Guy: Hey! Welcome to Tanoa man!";
  systemChat "You have now unlocked all spawn points.";
  life_introduced=1;
  [9] call SOCK_fnc_updatePartial;
  [] call SOCK_fnc_updateRequest;
} else {
  systemChat "Weird Nice Guy: Oh hey man! Enjoying Tanoa?";
};
