#include "..\..\script_macros.hpp"


/*
Filename: : fn_requestTruckMission.sqf
Author: noms

INIT:
this addAction ["Request Legal Truck Mission", {0 = [(_this select 0), (_this select 1), (_this select 2), ["truck_georgetown_1", markerDir "truck_georgetown_1"], 0] spawn life_fnc_requestTruckMission;}, [], 0, false, false, "", "side _this == civilian && !(_this getVariable ['Truck_Mission_Requested',false])"];
this addAction ["Request Illegal Truck Mission", {0 = [(_this select 0), (_this select 1), (_this select 2), ["truck_georgetown_1", markerDir "truck_georgetown_1"], 1] spawn life_fnc_requestTruckMission;}, [], 0, false, false, "", "side _this == civilian && !(_this getVariable ['Truck_Mission_Requested',false])"];

*/

private ["_npc", "_player", "_action", "_spawn", "_type", "_truckTypes", "_truckDestinations", "_truckDestination", "_truckType", "_truck", "_taskID", "_missionReward"];

params [
  ["_npc", objNull],
  ["_player", objNull],
  ["_action", objNull],
  ["_spawn", objNull],
  ["_type", objNull],
  ["_startYard", objNull],
  ["_dis", objNull]
];

/*
_exit = false;
if(_type == 0) then {
  if(life_level < LIFE_SETTINGS(getNumber,"truck_legal_levelrequired")) exitWith {hint "You are not a high enough level to take a truck mission."; _exit=true;};
} else {
  if(life_level < LIFE_SETTINGS(getNumber,"truck_illegal_levelrequired")) exitWith {hint "You are not a high enough level to take an illegal truck mission."; _exit=true;};
};
if (_exit) exitWith {};
*/

if (_player getVariable ["Truck_Mission_Requested",false]) exitWith {
  hintSilent "You are already requested a Truck Mission!";
};


//_hasLicence = false;
//_hasLicence =  missionNamespace getVariable ["licence_civ_trucking",false];

if(!licence_civ_trucking) exitWith {hint "You do not have a truck licence!"};

//Checks to see if there are vehicles on the point
_sp = getMarkerPos (_spawn select 0);
_nearTrucks = nearestObjects [_sp, ["Car","Air"], 15];
if(count _nearTrucks > 0) exitWith {hint "There is a vehicle blocking the truck spawn point. Look for stray vehicle near the spawn point";};


_truckTypes = [
  "C_Van_01_transport_F",
  "C_Van_01_box_F",
  "C_Truck_02_covered_F"
];

_illegalTruckTypes = [
  "O_G_Van_01_transport_F",
  "O_Truck_02_covered_F",
  "I_Truck_02_covered_F",
  "B_Truck_01_covered_F",
  "B_G_Van_01_transport_F",
  "O_Truck_03_covered_F",
  "O_Truck_02_covered_F",
  "I_Truck_02_covered_F"
];

_canPay = false;
_deposit = 0;

switch _type do
{
  case 0: //Legal
  { _truckType = selectRandom _truckTypes;  };
  case 1: //Illegal
  { _truckType = selectRandom _illegalTruckTypes; };
};

life_deposit_action = false;

_truckPrice = getNumber (missionConfigFile >> "LifeCfgVehicles" >> _truckType >> "price");
_deposit = round(_truckPrice / 3);

createDialog "life_deposit_pay";
disableSerialization;
waitUntil {!isNull (findDisplay 6600)};

life_truck_deposit_paid = false;
life_truck_deposit_val = _deposit;

CONTROL(6600,6601) ctrlSetStructuredText parseText format["To take this truck mission you need to pay a deposit of $%1. Accept?",life_truck_deposit_val];
waitUntil {life_deposit_action};

if(!(life_truck_deposit_paid)) exitWith {hint "You did/could not pay the deposit. Sorry!"};
life_deposit_action = false;


_truckDestinations = [
  "Georgetown_FY_1",
  "Airport_FY_1",
  "Lijnhaven_FY_1",
  "BluePearl_FY_1",
  "LaRochelle_FY_1"
];

switch (_spawn select 0) do {
  case "truck_georgetown_1" : {
    _truckDestinations = _truckDestinations - ["Georgetown_FY_1"];
  };
  case "truck_airport_1" : {
    _truckDestinations = _truckDestinations - ["Airport_FY_1"];
  };
  case "truck_lijnhaven_1" : {
    _truckDestinations = _truckDestinations - ["Lijnhaven_FY_1"];
  };
  case "truck_georgetown_2" : {
    _truckDestinations = _truckDestinations - ["BluePearl_FY_1"];
  };
  case "truck_georgetown_3" : {
    _truckDestinations = _truckDestinations - ["LaRochelle_FY_1"];
  };
};


_player setVariable ["Truck_Mission_Requested", true, true];

_player removeAction _Action;

_truckDestination = selectRandom _truckDestinations;

_truckDestinationName = "";
switch _truckDestination do
{
  case "Georgetown_FY_1":
  {
    _truckDestinationName = "Georgetown";
  };
  case "Airport_FY_1":
  {
    _truckDestinationName = "Tanoa Airport";
  };
  case "Lijnhaven_FY_1":
  {
    _truckDestinationName = "Lijnhaven";
  };
  case "BluePearl_FY_1":
  {
    _truckDestinationName = "Blue Pearl Industrial Port";
  };
  case "LaRochelle_FY_1":
  {
    _truckDestinationName = "La Rochelle";
  };
};


_destination = createVehicle ["Land_HelipadEmpty_F", (getMarkerPos _truckDestination), [], 0, "NONE"];

_truck = createVehicle [_truckType, (getMarkerPos (_spawn select 0)), [], 0, "NONE"];
[_truck] call life_fnc_clearVehicleAmmo;

[_truck,"vehicle_info_owners",["truck_mission"],true]; //should hopefully set the owner of the vehicle to the player?



_truck setDir (_spawn select 1);
_truck lock 2;
_startYard = getPos _truck;
_truck setVariable ["Restrict_Vehicle_Storage", true, true];
_truck setVariable ["Restrict_Vehicle_Chopping", true, true];
[_truck, _player, profileName] remoteExecCall ["TON_fnc_clientGetKey", _player];
_taskID = ["Truck_Task", _player,  [format["Deliver the Truck to the %1 freightyard in one piece. You will fail if you die or the vehicle is destroyed.",_truckDestinationName], "Truck Mission", "Truck Destiantion"], position _destination, "ASSIGNED", 1, false, false, "", false] call BIS_fnc_setTask;
["TruckMissionStart",[format ["<t align='center' font='PuristaBold' color='#FFFF00'>Deliver the Truck to the %1 freightyard.</t>", _truckDestinationName]]] call bis_fnc_showNotification;
// {"Unit Name", Unit Cost};

private ["_truckCargos", "_illegalTruckCargos"];
_truckCargos = [];
_truckCargos pushBack ["Jars of Marmite",100];
_truckCargos pushBack ["Tins of Baked Beans",50];
_truckCargos pushBack ["Google Glasses",2500];
_truckCargos pushBack ["Bottles of Vodka",500];
_truckCargos pushBack ["Xbox Ones",2500];
_truckCargos pushBack ["PS4s",2500];
_truckCargos pushBack ["Royal Rabbits",2500];

_illegalTruckCargos = [];
_illegalTruckCargos pushBack ["Crates of Stolen Kidneys",15000];
_illegalTruckCargos pushBack ["Asian Matheletes",10000];
_illegalTruckCargos pushBack ["Used Fleshlights",50];
_illegalTruckCargos pushBack ["Scalpels",1000];
_illegalTruckCargos pushBack ["Pounds of Radioactive Material",5000];
_illegalTruckCargos pushBack ["Stolen Police turbos",7500];


_truck setVariable ["purpose","truck_mission",true];
_truck setVariable ["goodsRemoved","0",true];
_truck setVariable ["truckDriver",_player];


switch _type do
{
  case 0: //Legal
  {
    _truck setVariable ["startYard",_startYard,true]; //Save sthe location of the start yard. (In case of disconnects/new owner)
    _truck setVariable ["type","legal",true];
    _truck setVariable ["cargoType",_truckCargos call BIS_fnc_selectRandom,true];
    _truck setVariable ["cargoAmount",round random 250,true];
  };

  case 1: //Illegal
  {
    _truck setVariable ["startYard",_startYard,true]; //Save sthe location of the start yard. (In case of disconnects/new owner)
    _truck setVariable ["type","illegal",true];
    _truck setVariable ["cargoType",_illegalTruckCargos call BIS_fnc_selectRandom,true];
    _truck setVariable ["cargoAmount",round random 250,true];
  };
};



[_truck,_player,_destination,_taskID] spawn
{
  _player = _this select 1;
  _truckToWatch = _this select 0;
  _destination = _this select 2;
  _taskID = _this select 3;
  waitUntil {!alive _player OR !alive _truckToWatch};
  if(_player getVariable "Truck_Mission_Requested") then
  {
    if(!alive _player) then
    {
      ["DeliveryFailed",["You failed to deliver the truck because you died."]] call BIS_fnc_showNotification;
      deleteVehicle _destination;
      [_taskID] call BIS_fnc_deleteTask;
      _player setVariable ["Truck_Mission_Requested", false, true];
    };

    if(!alive _truckToWatch) then {
      ["DeliveryFailed",["Truck exploded or was impounded."]] call BIS_fnc_showNotification;
      deleteVehicle _destination;
      [_taskID] call BIS_fnc_deleteTask;
      _player setVariable ["Truck_Mission_Requested", false, true];
    };
  };
};

waitUntil {_truck distance getMarkerPos _truckDestination <= 25 && vehicle _player == _player};

_player setVariable ["Truck_Mission_Requested", false, true];

  _deliveryTruck = vehicle player;

if(!isNil "_deliveryTruck") then
{
	if(!isNil "_startYard") then
	{
		_dis = position _player distance _startYard;
	}
};

//Get truck mission modifiers
_truck_legal_modifier = LIFE_SETTINGS(getNumber,"truck_legal_modifier");
_truck_illegal_modifier = LIFE_SETTINGS(getNumber,"truck_illegal_modifier");


_truck_legal_cargovalue_reward = LIFE_SETTINGS(getNumber,"truck_legal_cargovalue_reward");
_truck_illegal_cargovalue_reward = LIFE_SETTINGS(getNumber,"truck_illegal_cargovalue_reward");
_xpLegalRewardModifier = LIFE_SETTINGS(getNumber,"_truck_mission_legal_rpxp_modifier");
_xpIllegalRewardModifier = LIFE_SETTINGS(getNumber,"_truck_mission_illegal_rpxp_modifier");
_xpReward = 25;
_missionReward = 0;
switch _type do
{
  case 0:
  {
    _cargoReward = ((_truck getVariable("cargoType") select 1) * (_truck getVariable("cargoAmount")) * _truck_legal_cargovalue_reward);
    _distReward = round(_truck_legal_modifier * _dis);
    _missionReward = round(_cargoReward + _distReward);
    _xpReward = round(_dis * _xpLegalRewardModifier);

  };
  case 1:
  {
    _cargoReward = ((_truck getVariable("cargoType") select 1) * (_truck getVariable("cargoAmount")) * _truck_illegal_cargovalue_reward);
    _distReward = round(_truck_illegal_modifier * _dis);
    _missionReward = round(_cargoReward + _distReward);
    _xpReward = round(_dis * _xpIllegalRewardModifier);
  };
  default
  {
    _missionReward = round(0.2 * _dis);
  };
};

//Set Maximum Payout for Truck Mission
_maxReward = LIFE_SETTINGS(getNumber,"truck_max_reward");
if(_missionReward > _maxReward) then {
  _missionReward = _maxReward;
};


_truckSearchedModifier = LIFE_SETTINGS(getNumber,"truck_searched_modifier");

_rewardText = "";
if(_truck getVariable["goodsRemoved",""] == "1") then
{
  _rewardText = "<t font='PuristaBold' color='#FFFF00'>Vehicle was searched! You received $%1.</t>";
  _missionReward = _missionReward / _truckSearchedModifier;
}
else
{
  _rewardText = "<t align='center' font='PuristaBold' color='#FFFF00'>You have received $%1 for delivering the Cargo.</t>";
};

deleteVehicle _destination;
deleteVehicle _truck;
["Truck_Task","CANCELED",false] call BIS_fnc_taskSetState;
[_taskID] call BIS_fnc_deleteTask;

["TruckMissionReward",[format [_rewardText, _missionReward]]] call bis_fnc_showNotification;

life_cash = life_cash + _missionReward;
// [_rewardXP] spawn life_fnc_awardExperience;
life_truck_deposit_val = 0;
life_deposit_action = false;
life_truck_deposit_paid = false;
