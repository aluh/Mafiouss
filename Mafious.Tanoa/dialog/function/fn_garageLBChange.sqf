#include "..\..\script_macros.hpp"
/*
    File: fn_garageLBChange.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Can't be bothered to answer it.. Already deleted it by accident..
*/
disableSerialization;
params [
    ["_control", controlNull, [controlNull]],
    ["_index", -1, [-1]]
];

//Fetch some information.
private _dataArr = CONTROL_DATAI(_control,_index);
private _dataArr = call compile format["%1",_dataArr];
private _className = (_dataArr select 0);
private _classNameLife = _className;

if (!isClass (missionConfigFile >> "LifeCfgVehicles" >> _classNameLife)) then {
    _classNameLife = "Default"; //Use Default class if it doesn't exist
    diag_log format["%1: LifeCfgVehicles class doesn't exist",_className];
};

private _vehicleColor = ((M_CONFIG(getArray,"LifeCfgVehicles",_classNameLife,"textures") select (_dataArr select 1)) select 0);
if (isNil "_vehicleColor") then {_vehicleColor = "Default";};

private _vehicleInfo = [_className] call life_fnc_fetchVehInfo;
private _trunkSpace = [_className] call life_fnc_vehicleWeightCfg;

private _price = M_CONFIG(getNumber,"LifeCfgVehicles",_classNameLife,"price");
private _storageFee = LIFE_SETTINGS(getNumber,"vehicle_storage_fee_multiplier");

private ["_purchasePrice", "_sellMultiplier"];
switch (playerSide) do {
    case civilian: {
        _purchasePrice = _price * LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_CIVILIAN");
        _sellMultiplier = LIFE_SETTINGS(getNumber,"vehicle_sell_multiplier_CIVILIAN");
    };
    case west: {
        _purchasePrice = _price * LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_COP");
        _sellMultiplier = LIFE_SETTINGS(getNumber,"vehicle_sell_multiplier_COP");
    };
    case independent: {
        _purchasePrice = _price * LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_MEDIC");
        _sellMultiplier = LIFE_SETTINGS(getNumber,"vehicle_sell_multiplier_MEDIC");
    };
    case east: {
        _purchasePrice = _price * LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_OPFOR");
        _sellMultiplier = LIFE_SETTINGS(getNumber,"vehicle_sell_multiplier_OPFOR");
    };
};
private _retrievePrice = _purchasePrice * _storageFee;
private _sellPrice = _purchasePrice * _sellMultiplier;

if (!(_sellPrice isEqualType 0) || _sellPrice < 1) then {_sellPrice = 500;};
if (!(_retrievePrice isEqualType 0) || _retrievePrice < 1) then {_retrievePrice = 500;};

(CONTROL(2800,2803)) ctrlSetStructuredText parseText format[
    (localize "STR_Shop_Veh_UI_RetrievalP")+ " <t color='#8cff9b'>$%1</t><br/>
    " +(localize "STR_Shop_Veh_UI_SellP")+ " <t color='#8cff9b'>$%2</t><br/>
    " +(localize "STR_Shop_Veh_UI_Color")+ " %8<br/>
    " +(localize "STR_Shop_Veh_UI_MaxSpeed")+ " %3 km/h<br/>
    " +(localize "STR_Shop_Veh_UI_HPower")+ " %4<br/>
    " +(localize "STR_Shop_Veh_UI_PSeats")+ " %5<br/>
    " +(localize "STR_Shop_Veh_UI_Trunk")+ " %6<br/>
    " +(localize "STR_Shop_Veh_UI_Fuel")+ " %7
    ",
    [_retrievePrice] call life_fnc_numberText,
    [_sellPrice] call life_fnc_numberText,
    (_vehicleInfo select 8),
    (_vehicleInfo select 11),
    (_vehicleInfo select 10),
    if (_trunkSpace isEqualTo -1) then {"None"} else {_trunkSpace},
    (_vehicleInfo select 12),
    _vehicleColor
];

ctrlShow [2803,true];
ctrlShow [2830,true];
