#include "..\..\script_macros.hpp"
/*
    File: fn_licenceCheck.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Returns the licences to the cop.
*/
private["_cop","_licences","_licencesConfigs"];
_cop = param [0,objNull,[objNull]];
if (isNull _cop) exitWith {}; //Bad entry

_licences = "";

//Config entries for licences that are civilian
_licencesConfigs = "getText(_x >> 'side') isEqualTo 'civ'" configClasses (missionConfigFile >> "Licences");

{
    if (LICENCE_VALUE(configName _x,"civ")) then {
        _licences = _licences + localize getText(_x >> "displayName") + "<br/>";
    };
} forEach _licencesConfigs;

if (_licences isEqualTo "") then {_licences = (localize "STR_Cop_NoLicencesFound");};
[profileName,_licences] remoteExecCall ["life_fnc_licencesRead",_cop];
