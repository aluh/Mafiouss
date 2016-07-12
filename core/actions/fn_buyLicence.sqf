#include "..\..\script_macros.hpp"
/*
    File: fn_buyLicence.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Called when purchasing a licence. May need to be revised.
*/
private["_type","_varName","_displayName","_sideFlag","_price"];
_type = _this select 3;

if (!isClass (missionConfigFile >> "Licences" >> _type)) exitWith {}; //Bad entry?
_varName = M_CONFIG(getText,"Licences",_type,"variable");
_displayName = M_CONFIG(getText,"Licences",_type,"displayName");
_price = M_CONFIG(getNumber,"Licences",_type,"price");
_sideFlag = M_CONFIG(getText,"Licences",_type,"side");
_varName = LICENCE_VARNAME(_varName,_sideFlag);

if (CASH < _price) exitWith {hint format[localize "STR_NOTF_NE_1",[_price] call life_fnc_numberText,localize _displayName];};
CASH = CASH - _price;

titleText[format[localize "STR_NOTF_B_1", localize _displayName,[_price] call life_fnc_numberText],"PLAIN"];
missionNamespace setVariable [_varName,true];
 
