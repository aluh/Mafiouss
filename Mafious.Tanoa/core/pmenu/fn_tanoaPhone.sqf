#include "..\..\script_macros.hpp"
/*
    File: fn_tanoaPhone.sqf
    Author: Daniel Stuart

    Description:
    Opens the player's phone menu
*/
if (!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "tanoaPhone";
disableSerialization;
