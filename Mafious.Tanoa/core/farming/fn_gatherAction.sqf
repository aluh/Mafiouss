#include "..\..\script_macros.hpp"
/*
* @File:   fn_gatherAction.sqf
* @Author: noms
* @Description: Handles the gathering of items on the map (farm, wildfarming, trees)
*/

private ["_resource", "_curObject", "_rewardAmount", "_rewardClass", "_rewardXP", "_rewardAmountArray", "_hoe", "_axe","_resourceName","_harvestItems","_resourceSeeds"];
if (life_action_inUse) exitWith {};
if ((vehicle player) != player) exitWith {};
if (player getVariable "restrained") exitWith {hint localize "STR_NOTF_isrestrained";};
if (player getVariable "playerSurrender") exitWith {hint localize "STR_NOTF_surrender";};
_nearTowns = nearestLocations[position player, ["NameVillage","NameCity","NameCityCapital"], 250];
if(count _nearTowns > 0) exitWith {hint "You cannot farm within 250 meters of a town or village."};




life_action_inUse = true;

_curObject = param [0,ObjNull,[ObjNull]];
_hoe = missionNamespace getVariable "life_inv_hoe";
_axe = missionNamespace getVariable "life_inv_axe";
_type = "Axe";
_reqTool = 0;
_resourceClass = "";

_exit = false;




if([str _curObject,"b_"] call KRON_StrInStr) then {
  if([str _curObject,"sugarcane_mat"] call KRON_StrInStr) then {
    _resourceClass = "Sugarcane";
    _reqTool = _hoe;
    _type = "Hoe"
  };
  if([str _curObject,"neriumo2s"] call KRON_StrInStr) then {
    _resourceClass = "Poppy";
    _reqTool = _hoe;
    _type = "Hoe"
  };
  if([str _curObject,"ficusc1s"] call KRON_StrInStr) then {
    _resourceClass = "Cocaine";
    _reqTool = _hoe;
    _type = "Hoe"
  };
  if([str _curObject,"neriumo2d"] call KRON_StrInStr) then {
    _resourceClass = "Cannabis";
    _reqTool = _hoe;
    _type = "Hoe"
  };
};
if([str _curObject,"t_"] call KRON_StrInStr) then {
  if([str _curObject,"cocosnucifera"] call KRON_StrInStr) then {
    _resourceClass = "Papaya";
    _reqTool = _axe;
  };
  if([str _curObject,"millettia_p"] call KRON_StrInStr) then {
    _resourceClass = "Orange";
    _reqTool = _axe;
  };
  if([str _curObject,"banana"] call KRON_StrInStr) then {
    _resourceClass = "Banana";
    _reqTool = _axe;
  };
  if([str _curObject,"cacao_ripe"] call KRON_StrInStr) then {
    _resourceClass = "Cocoa";
    _reqTool = _axe;
  };
  if([str _curObject,"ficus_s"] call KRON_StrInStr) then {
    _resourceClass = "FicusS";
    _reqTool = _axe;
  };
  if([str _curObject,"ficus_m"] call KRON_StrInStr) then {
    _resourceClass = "FicusM";
    _reqTool = _axe;
  };
  if([str _curObject,"ficus_b"] call KRON_StrInStr) then {
    _resourceClass = "FicusM";
    _reqTool = _axe;
  };
  if([str _curObject,"t_palaquium"] call KRON_StrInStr) then {
    _resourceClass = "Palaquium";
    _reqTool = _axe;
  };
  if([str _curObject,"t_cyathea"] call KRON_StrInStr) then {
    _resourceClass = "Cyathea";
    _reqTool = _axe;
  };
  if([str _curObject,"t_inocarpus"] call KRON_StrInStr) then {
    _resourceClass = "Inocarpus";
    _reqTool = _axe;
  };
};
if(_resourceClass != "") then {

  //Let's get the required variables set up
  _rpxpTier = getNumber(missionConfigFile >> "CfgFarming" >> "Plants" >> _resourceClass >> "rpxpTier");
  _rewardAmountArray = getArray(missionConfigFile >> "CfgFarming" >> "Plants" >> _resourceClass >> "rewardAmountArray");
  _harvestItems = getArray(missionConfigFile >> "CfgFarming" >> "Plants" >> _resourceClass >> "harvestItems");
  _resource = (_harvestItems select 0) select 0;
  _resourceName = getText(missionConfigFile >> "CfgFarming" >> "Plants" >> _resourceClass >> "displayName");
  _rewardAmount = selectRandom _rewardAmountArray;
  _resourceSeeds = getText(missionConfigFile >> "CfgFarming" >> "Plants" >> _resourceClass >> "plantItem");
  _harvestTime = getNumber(missionConfigFile >> "CfgFarming" >> "Plants" >> _resourceClass >> "farmWait");
  _isFarmObj = false;
  _isFarmable = false;

  //Now let's see if it's a farming system plant.
  private _plantData = [_curObject] call life_fnc_getPlant;
  if ( (local _curObject) &&  (count life_farming_objects > 0) &&  (count _plantData > 0)) then
  {
    if ([_plantData] call life_fnc_isPlantMature) then
    {
      _isFarmObj = true;
      _isFarmable = true;
    } else {
      systemChat format["The %1 is not ready for harvesting yet.",_resourceName];
      _exit = true;
    };
    if(_exit) exitWith { life_action_inUse = false; };
  }
  else
  {
    if( !(local _curObject) && ([str _curObject,"NOID"] call KRON_StrInStr)) exitWith {systemChat "This is not yours to farm"; life_action_inUse = false;};
    if ((LIFE_SETTINGS(getNumber,"enable_wild_farming") isEqualTo 1)) then {_isFarmable = true;} else { _exit = true; };
    if(_exit) exitWith { life_action_inUse = false; };
  };


  if(_isFarmable) then
  {
    //Do they have the required tool?
    if(_reqTool < 1) exitWith  { systemChat format["You need a %1 to harvest %2.",_type,_resourceName]; life_action_inUse = false;};
    // Do they have room in their inventory?
    _diff = [_resource, _rewardAmount, life_carryWeight, life_maxWeight] call life_fnc_calWeightDiff;
    if(_diff isEqualTo 0) exitWith { hint localize "STR_NOTF_InvFull"; life_action_inUse = false;};
    //Are they already in the process of harvesting something?
    if (life_action_harvesting) exitWith {life_action_inUse = false;};

    //Set up the correct sound effect to play.
    _soundFX = "";
    switch (_type) do { case "Axe": {_soundFX="AxeChop";}; case "Hoe": {_soundFX="HoeDig";}; default {_soundFX = "harvest";};};

    life_action_harvesting = true;
    _step = 0;
    for "_i" from 0 to _harvestTime do {
      if(player distance2d _curObject > 8) exitWith { systemChat "You got too far away to complete harvesting."; life_action_harvesting = false; life_action_inUse = false; _exit = true; };
      player say3D _soundFX;
      player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
      waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
      titleText [format["Gathering %1 (%2)",_resourceName,(_harvestTime-_step)],"PLAIN DOWN",0.1];
      sleep 1;
      _step = _step + 1;
    };

    //Sanity check after the for action
    if(_exit) exitWith { life_action_inUse = false; life_action_harvesting = false; };

    //See if the _harvestTime has been met
    if((_step+1) >= _harvestTime) then {

      //Award items
      [true,_resource,_rewardAmount] call life_fnc_handleInv;
      // Inform player
      titleText [format["You gathered %1 %2",_rewardAmount, _resourceName],"PLAIN DOWN"];
      //Award RPXP
      //[_rpxpTier] spawn life_fnc_awardExperience;
      // Handle removing the object
      if(_isFarmObj) then {
        _seedReward = selectRandom [0,0,1,2,2,2,2,2,2,2,2,3,4];
        [true,_resourceSeeds,_seedReward] call life_fnc_handleInv;
        _curObject setPosATL [-1000,-1000,0];
        _curObject setDamage 1;
        life_action_inUse = false;
        life_action_harvesting = false;
      } else {
        _curObject setDamage 1;
        uiSleep 1;
        life_action_inUse = false;
        life_action_harvesting = false;
      };
    };
  };
};
life_action_inUse = false;
