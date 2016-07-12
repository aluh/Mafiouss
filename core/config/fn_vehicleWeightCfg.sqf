#include "..\..\script_macros.hpp"
/*
    File: fn_vehicleWeightCfg.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master configuration for vehicle weight.
*/
private["_className","_classNameLife","_weight"];
_className = [_this,0,"",[""]] call BIS_fnc_param;
_classNameLife = _className;
if (!isClass (missionConfigFile >> "LifeCfgVehicles" >> _classNameLife) && !(_className in ["Land_Shed_02_F","Land_Shed_05_F","Land_SM_01_shed_F","Land_Warehouse_03_F","Land_Warehouse_01_F","Land_Warehouse_02_F"]) ) then {
    _classNameLife = "Default"; //Use Default class if it doesn't exist
    diag_log format["%1: LifeCfgVehicles class doesn't exist",_className];
};
//systemChat format["%1 - %2",_className,_classNameLife];
if(_className in ["Land_Shed_02_F","Land_Shed_05_F","Land_SM_01_shed_F","Land_Warehouse_03_F","Land_Warehouse_01_F","Land_Warehouse_02_F"]) then
{
  _weight = getNumber(missionConfigFile >> "CfgWarehouses" >> _classNameLife >> "vItemSpace");
} else {
  _weight = M_CONFIG(getNumber,"LifeCfgVehicles",_classNameLife,"vItemSpace");
};

if (isNil "_weight") then {_weight = -1;};
//systemChat format["weight: %1", _weight];
_weight;
