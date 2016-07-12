#include "..\..\script_macros.hpp"
/*
    File : fn_placechair.sqf
    Author: noms

    Description:
    PLace chair were player select with preview

*/
private["_chair"];
if (!isNil "life_action_chairPickup") exitWith {hint "You are already placing a chair!"};    // avoid conflicts with addactions allowing duplication.
_chair = "Land_CampingChair_V1_F" createVehicle [0,0,0];
_chair attachTo[player,[0,1,0.5]];
_chair setDir 90;
_chair setVariable ["item","deployed",true];

life_chairPlaced = false;

life_action_chairDeploy = player addAction["Place Chair",{if (!isNull life_chair) then {detach life_chair;}; player removeAction life_action_chairDeploy; life_action_chairDeploy = nil; ;life_chairPlaced = true;},"",999,false,false,"",'!isNull life_chair'];

life_chair = _chair;
waitUntil {life_chairPlaced};

life_chairPlaced = false;

if (!isNil "life_action_chairDeploy") then {player removeAction life_action_chairDeploy;};
if (isNull _chair) exitWith {life_chair = objNull;};

_chair setPos [(getPos _chair select 0),(getPos _chair select 1),0];

life_action_chairPickup = player addAction["Packup Chair",life_fnc_packupChair,"",0,false,false,"",
' _chair = nearestObjects[getPos player,["Land_CampingChair_V1_F"],8] select 0; !isNil "_chair" && !isNil {(_chair getVariable "item")}  && (cursorObject isEqualTo life_chair)'];
life_action_sitdown = player addAction ["Sit Down","[cursorObject, player] call life_fnc_sitDown",[],10,true,true,'',"(!(player getVariable [""isSeated"",false])) && (player distance cursorObject < 3) && (cursorObject isEqualTo life_chair)"];
