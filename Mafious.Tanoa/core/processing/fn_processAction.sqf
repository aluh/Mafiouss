
scopeName "processing";
private _configFile = ProcessInfo select 0;
private _licenceRequired = ProcessInfo select 1;
private _hasLicence = ProcessInfo select 2;
private _neededArray = ProcessInfo select 3;
private _totalProducts = ProcessInfo select 4;
private _vendor = ProcessInfo select 5;
ProcessInfo = nil;

if (!_hasLicence) then
{
	private _licencePrice = getNumber(missionConfigFile >> "Licences" >> _licenceRequired >> "price");
	private _licenceName = localize getText(missionConfigFile >> "Licences" >> _licenceRequired >> "displayName");

	private _action =
	[
		parseText format["To process this item you require %1. Would you like to buy this training for $%2?",_licenceName,[_licencePrice] call life_fnc_numberText],
		"Buy Training",
		"Yes",
		"No"
	] call BIS_fnc_guiMessage;

	if (!_action) exitWith {breakOut "processing";};
	if (life_cash < _licencePrice) exitWith {hintSilent "Not Enough Cash"; breakOut "processing";};
	life_cash = life_cash - _licencePrice;
	missionNamespace setVariable[format["licence_civ_%1",_licenceRequired],true];
	[0] call SOCK_fnc_updatePartial;
	[2] call SOCK_fnc_updatePartial;
};

life_is_processing = true;
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
private _ui = uiNamespace getVariable "life_progress";
private _progress = _ui displayCtrl 38201;
private _pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%1...",getText (missionConfigFile >> "CfgProcess" >> _configFile >> "title")];
_progress progressSetPosition 0.01;
private _cP = 0.01;

for "_i" from 0 to 1 step 0 do
{
	sleep 0.3;
  	_cP = _cP + 0.01;
  	_progress progressSetPosition _cP;
		ctrlSetText [38203,format["%1%2"],round(_cp*100),"%"];
	if (!alive player) exitWith {life_is_processing = false;5 cutText ["","PLAIN"];breakOut "processing";};
	if (player != vehicle player) exitWith {life_is_processing = false;5 cutText ["","PLAIN"];breakOut "processing";};
	if (player distance (position _vendor) > 10) exitWith {life_is_processing = false;5 cutText ["","PLAIN"];breakOut "processing";};
	if (life_istazed) exitWith {life_is_processing = false;5 cutText ["","PLAIN"];breakOut "processing";};
	if (player getVariable ["restrained",false]) exitWith {life_is_processing = false;5 cutText ["","PLAIN"];breakOut "processing";};
	if (_cP >= 1) exitWith {};
};

5 cutText ["","PLAIN"];

{
	private _item = _x select 0;
	private _amount = _x select 1;
	private _inventoryAmount = missionNamespace getVariable [format ["life_inv_%1",_item],0];
	_itemRemove = _amount * _totalProducts;
	[false,_item,_itemRemove] call life_fnc_handleInv;
} forEach _neededArray;

{
	private _item = configName _x;
	if (!isClass (missionConfigFile >> "VirtualItems" >> _item)) exitWith {life_is_processing = false;breakOut "processing";};
	private _amount = getNumber(_x >> "amount");
	private _itemsToAdd = _amount * _totalProducts;
	[true,_item,_itemsToAdd] call life_fnc_handleInv;
} forEach ("true" configClasses (missionConfigFile >> "CfgProcess" >> _configFile >> "product"));

hint "You've successfully finished processing!";
/*
ADD EXP HERE
*/
life_is_processing = false;
