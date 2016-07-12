/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
    case civilian:
    {
      //Drop fishing net
      life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
      (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
     
	 /*
	  //Rob person
      life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
      !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']];
      */
	  life_actions pushBack (player addAction ["<t color='#BBBB00'>Put Your Seatbelt On</t>", {life_seatbelt = true; player setVariable ["seatbelt", true, true];}, "", 3, true, true, "", 'vehicle player isKindOf "Car" && !life_seatbelt']);
  		life_actions pushBack (player addAction ["<t color='#BBBB00'>Take Your Seatbelt Off</t>", {life_seatbelt = false; player setVariable ["seatbelt", false, true];}, "", 3, true, true, "", 'vehicle player isKindOf "Car" && life_seatbelt']);
    };
    case west:
    {
      life_actions pushBack (player addAction ["<t color='#BBBB00'>Put Your Seatbelt On</t>", {life_seatbelt = true; player setVariable ["seatbelt", true, true];}, "", 3, true, true, "", 'vehicle player isKindOf "Car" && !life_seatbelt']);
      life_actions pushBack (player addAction ["<t color='#BBBB00'>Take Your Seatbelt Off</t>", {life_seatbelt = false; player setVariable ["seatbelt", false, true];}, "", 3, true, true, "", 'vehicle player isKindOf "Car" && life_seatbelt']);
    };
    case independent:
    {
      life_actions pushBack (player addAction ["<t color='#BBBB00'>Put Your Seatbelt On</t>", {life_seatbelt = true; player setVariable ["seatbelt", true, true];}, "", 3, true, true, "", 'vehicle player isKindOf "Car" && !life_seatbelt']);
      life_actions pushBack (player addAction ["<t color='#BBBB00'>Take Your Seatbelt Off</t>", {life_seatbelt = false; player setVariable ["seatbelt", false, true];}, "", 3, true, true, "", 'vehicle player isKindOf "Car" && life_seatbelt']);
    };
};
