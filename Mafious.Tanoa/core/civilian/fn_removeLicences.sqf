#include "..\..\script_macros.hpp"
/*
    File: fn_removeLicences.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Used for stripping certain licences off of civilians as punishment.
*/
private "_state";
_state = param [0,1,[0]];

switch (_state) do {
    //Death while being wanted
    case 0: {
        missionNamespace setVariable [LICENCE_VARNAME("rebel","civ"),false];
        missionNamespace setVariable [LICENCE_VARNAME("heroin","civ"),false];
        missionNamespace setVariable [LICENCE_VARNAME("marijuana","civ"),false];
        missionNamespace setVariable [LICENCE_VARNAME("cocaine","civ"),false];
    };

    //Jail licences
    case 1: {
        missionNamespace setVariable [LICENCE_VARNAME("gun","civ"),false];
    };

    //Remove motor vehicle licences
    case 2: {
        if (missionNamespace getVariable LICENCE_VARNAME("driver","civ") || missionNamespace getVariable LICENCE_VARNAME("pilot","civ") || missionNamespace getVariable LICENCE_VARNAME("trucking","civ") || missionNamespace getVariable LICENCE_VARNAME("boat","civ")) then {
            missionNamespace setVariable [LICENCE_VARNAME("pilot","civ"),false];
            missionNamespace setVariable [LICENCE_VARNAME("driver","civ"),false];
            missionNamespace setVariable [LICENCE_VARNAME("trucking","civ"),false];
            missionNamespace setVariable [LICENCE_VARNAME("boat","civ"),false];
            hint localize "STR_Civ_LicenceRemove_1";
        };
    };

    //Killing someone while owning a gun licence
    case 3: {
        if (missionNamespace getVariable LICENCE_VARNAME("gun","civ")) then {
            missionNamespace setVariable [LICENCE_VARNAME("gun","civ"),false];
            hint localize "STR_Civ_LicenceRemove_2";
        };
    };
};
