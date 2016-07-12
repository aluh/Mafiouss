/*
    File: fn_packupSpikes.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Packs up a deployed spike strip.
*/
private["_chair"];
_chair = nearestObjects[getPos player,["Land_CampingChair_V1_F"],8] select 0;
if (isNil "_chair") exitWith {};

if(player getVariable ["isSeated",true]) then {
  [player] call life_fnc_standUp;
};

if ([true,"campingchair",1] call life_fnc_handleInv) then {
    titleText["You have packed up the chair.","PLAIN"];
    player removeAction life_action_chairPickup;
    life_action_chairPickup = nil;
    player removeAction life_action_sitdown;
    life_action_sitdown= nil;
    deleteVehicle _chair;
};
