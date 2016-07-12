#include "..\..\script_macros.hpp"
/*
    File: fn_truckDepositPay.sqf
    Author: noms

    Description:
    Pays the deposit
*/
if (CASH < life_truck_deposit_val) exitWith {
    hint "You cannot afford to pay the deposit.";
    life_deposit_action = true;
    closeDialog 0;
};

CASH = CASH - life_truck_deposit_val;
life_truck_deposit_paid = true;
life_deposit_action = true;
