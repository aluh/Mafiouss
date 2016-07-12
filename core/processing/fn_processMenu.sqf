#include "..\..\script_macros.hpp"

private "_totalProducts";
private _vendor = param[0,objNull,[objNull]];
private _config = param[3,"",[""]];

try
{
	if (player distance (position _vendor) > 10) then
	{
		throw "You're too far away to start processing!";
	};
	if (player != vehicle player) then
	{
		throw "You cannot be in a vehicle to start processing!";
	};
	if (dialog) then
	{
		throw "Dialog: Error";
	};
	if (life_action_inUse) then
	{
		throw "You're already doing something else!";
	};
	if (life_is_processing) then
	{
		throw "Finish processing!";
	};
	if (_config isEqualTo "") then
	{
		throw "Config: Error";
	};
	ProcessInfo = nil;
	private _configClass = missionConfigFile >> "CfgProcess" >> _config;
	if (!isClass _configClass) then
	{
		throw "Config: Error - Doesn't Exist";
	};
	private _hasLicence = false;
	private _licenceName = "";
	private _licencePrice = 0;
	private _licenceRequired = getText(_configClass >> "licence");

	if (_licenceRequired isEqualTo "") then
	{
		_hasLicence = true;
		_licenceName = "No Training Required";
	}
	else
	{
		_hasLicence = (missionNamespace getVariable [format["licence_civ_%1", _licenceRequired], false]);
		_licencePrice = getNumber (missionConfigFile >> "Licences" >> _licenceRequired >> "price");
		_licenceName = localize getText (missionConfigFile >> "Licences" >> _licenceRequired >> "displayName");
	};

	createDialog "TIDAL_Processing";
	disableSerialization;
	private _display = findDisplay 56000;
	private _title = _display displayCtrl 1001;
	private _message = _display displayCtrl 1003;
	private _expReceived = _display displayCtrl 1004;
	private _neededList = _display displayCtrl 1500;
	private _productList = _display displayCtrl 1501;
	private _processButton = _display displayCtrl 2400;
	lbClear _neededList;
	lbClear _productList;

	_title ctrlSetText format ["%1",getText (missionConfigFile >> "CfgProcess" >> _config >> "title")];
	_expReceived ctrlSetText format ["Approx. Experience Received: %1",[getNumber (missionConfigFile >> "CfgProcess" >> _config >> "exp")] call life_fnc_numberText];

	if (_hasLicence) then
	{
		_message ctrlSetText format ["Training Required: %1",_licenceName];
		_message ctrlSetTextColor [0,1,0.01,1];
	}
	else
	{
		_message ctrlSetText format ["Training Required: %1 - Cost: $%2",_licenceName,_licencePrice];
		_message ctrlSetTextColor [0.74,0,0,1];
	};

	private _neededArray = [];
	{
		_neededItem = configName _x;
		_neededAmount = getNumber(_x >> "amount");
		if (_neededAmount <= 0) exitWith {};
		if (!isClass (missionConfigFile >> "VirtualItems" >> configName(_x))) exitWith {};
		_playerHas = missionNamespace getVariable [format ["life_inv_%1",_neededItem],0];
		_displayName = localize getText (missionConfigFile >> "VirtualItems" >> _neededItem >> "displayName");


		if (_playerHas < _neededAmount) then
		{
			private _index = _neededList lbAdd format [format ["%1 %2",_neededAmount,_displayName]];
			_neededList lbSetColor [_index,[0.74,0,0,1]];
			_processButton ctrlEnable false;
		}
		else
		{
			private _index = _neededList lbAdd format [format ["%1 %2",_neededAmount,_displayName]];
			_neededList lbSetColor [_index,[0,1,0.01,1]];
		};

		if (isNil "_totalProducts") then
		{
			_totalProducts = floor(_playerHas / _neededAmount);
		}
		else
		{
			_totalProducts = floor(_playerHas / _neededAmount) min _totalProducts;
		};
		_neededArray pushBack [_neededItem, _neededAmount];
	} forEach ("true" configClasses (_configClass >> "needed"));

	{
		_receivingItem = configName _x;
		if (!isClass (missionConfigFile >> "VirtualItems" >> configName(_x))) exitWith {};
		_displayName = localize getText (missionConfigFile >> "VirtualItems" >> _receivingItem >> "displayName");
		_productamount = getNumber(_configClass >> "product" >> _receivingItem >> "amount");
		private _index = _productList lbAdd format [format ["%1 %2",_productAmount,_displayName]];
		_productList lbSetColor [_index,[0,1,0.01,1]];
	} forEach ("true" configClasses (_configClass >> "product"));

	if (isNil "ProcessInfo") then
	{
								//config name (sugarcane) ,
									//licence required (grain),
										//whether they have the licence,
											//[[needed item],[needed amount],[needed item],[needed amount]],
												//total raw products to process,
													//the vendor object himself
		ProcessInfo = [_config,_licenceRequired,_hasLicence,_neededArray,_totalProducts,_vendor];
	};
	_processButton buttonSetAction "closeDialog 0; [] spawn life_fnc_processAction";
}
catch
{
	hint _exception;
};
