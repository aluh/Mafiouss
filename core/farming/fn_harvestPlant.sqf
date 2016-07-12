/*
* @File:   fn_harvestPlant.sqf
* @Author: Ciaran "Ciaran" Langton <email@ciaranlangton.com>
*/
params [
  ["_plantData", [], [[]]]
];

_plantData params [
  ["_plant", objNull, [objNull]],
  ["_timeCreated", serverTime, [serverTime]],
  ["_lifeTime", -1, [-1]],
  ["_maturityTime", -1, [-1]],
  ["_groundSinkHeight", -1, [-1]],
  ["_finalHeightDiff", -1, [-1]],
  ["_initialLocation", [], [[]]],
  ["_plantClassname", "", [""]]
];

private _plantCfg = missionConfigFile >> "CfgFarming" >> "Plants" >> _plantClassname;
private _harvestItems = getArray(_plantCfg >> "harvestItems");

//Sum up total weight
private _weight = 0;
{
  _x params [
    ["_item", "", [""]],
    ["_count", 1, [1]]
  ];

  _weight = _weight + (([_item] call life_fnc_itemWeight) * _count);
} forEach _harvestItems;

//Enough space for these items?
if !((life_carryWeight + _weight) <= life_maxWeight) exitWith {hint "You do not have enough room in your pack to hold these items"};

player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil {
    animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
};

sleep 1;

//Actually add the items.
{
  _x params [
    ["_item", "", [""]],
    ["_count", 1, [1]]
  ];


  [true,_item,_count] call life_fnc_handleInv;
} forEach _harvestItems;

//Discard Tree
_curObject setDamage 1;
systemChat format["You gathered some %1.",_item];
sleep 2;
_plant setPosATL [-1000, -1000, 0];
