#include "..\..\script_macros.hpp"
/*
*    File: fn_keyHandler.sqf
*    Author: Bryan "Tonic" Boardwine
*
*    Description:
*    Main key handler for event 'keyDown'
*/
private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh","_locked","_interactionKey","_mapKey","_interruptionKeys"];
_ctrl = _this select 0;
_code = _this select 1;
_shift = _this select 2;
_ctrlKey = _this select 3;
_alt = _this select 4;
_speed = speed cursorObject;
_handled = false;


_interactionKey = if (count (actionKeys "User10") isEqualTo 0) then {219} else {(actionKeys "User10") select 0};
_debugKey = if (count (actionKeys "User13") isEqualTo 0) then {74} else {(actionKeys "User13") select 0}; //Define a temporary debug key

_mapKey = (actionKeys "ShowMap" select 0);
//hint str _code;
_interruptionKeys = [17,30,31,32]; //A,S,W,D

//Vault handling...
if ((_code in (actionKeys "GetOver") || _code in (actionKeys "salute") || _code in (actionKeys "SitDown") || _code in (actionKeys "Throw") || _code in (actionKeys "GetIn") || _code in (actionKeys "GetOut") || _code in (actionKeys "Fire") || _code in (actionKeys "ReloadMagazine") || _code in [16,18]) && ((player getVariable ["restrained",false]) || (player getVariable ["playerSurrender",false]) || life_isknocked || life_istazed)) exitWith {
    true;
};

if (life_action_inUse) exitWith {
    if (!life_interrupted && _code in _interruptionKeys) then {life_interrupted = true;};
    _handled;
};

//Code Hotkeys
_copCodeOneKey = if(count (actionKeys "User3") == 0) then {79} else {(actionKeys "User3") select 0}; // NUMPAD 1 for Code 1
_copCodeTwoKey = if(count (actionKeys "User4") == 0) then {80} else {(actionKeys "User4") select 0}; // NUMPAD 2 for Code 2
_copCodeThreeKey = if(count (actionKeys "User5") == 0) then {81} else {(actionKeys "User5") select 0}; // NUMPAD 3 for Code 3
_copCodeFourKey = if(count (actionKeys "User6") == 0) then {75} else {(actionKeys "User6") select 0}; // NUMPAD 4 for Code 4
_copCodeFiveKey = if(count (actionKeys "User7") == 0) then {76} else {(actionKeys "User7") select 0}; // NUMPAD 5 for Code 5
_copCodeSixKey = if(count (actionKeys "User8") == 0) then {77} else {(actionKeys "User8") select 0}; // NUMPAD 6 for Code 6

_interactionKey4 = if(count (actionKeys "User13") == 0) then {36} else {(actionKeys "User13") select 0};// J
_interactionKey3 = if(count (actionKeys "User12") == 0) then {157} else {(actionKeys "User12") select 0};// Right Control

//Hotfix for Interaction key not being able to be bound on some operation systems.
if (!(count (actionKeys "User10") isEqualTo 0) && {(inputAction "User10" > 0)}) exitWith {
    //Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
    if (!life_action_inUse) then {
        [] spawn {
            private "_handle";
            _handle = [] spawn life_fnc_actionKeyHandler;
            waitUntil {scriptDone _handle};
            life_action_inUse = false;
        };
    };
    true;
};

if (life_container_active) then {
    switch (_code) do {
        //space key
        case 57: {
            [] spawn life_fnc_placestorage;
        };
    };
    true;
};

switch (_code) do {
    //Space key for Jumping
    /*
    case 57: {
        if (isNil "jumpActionTime") then {jumpActionTime = 0;};
        if (_shift && {!(animationState player isEqualTo "AovrPercMrunSrasWrflDf")} && {isTouchingGround player} && {stance player isEqualTo "STAND"} && {speed player > 2} && {!life_is_arrested} && {((velocity player) select 2) < 2.5} && {time - jumpActionTime > 1.5}) then {
            jumpActionTime = time; //Update the time.
            [player] remoteExec ["life_fnc_jumpFnc",RANY]; //Global execution
            _handled = true;
        };
    };
    */
    //Surrender (Shift + B)
    case 48: {
        if (_shift) then {
            if (player getVariable ["playerSurrender",false]) then {
                player setVariable ["playerSurrender",false,true];
            } else {
                [] spawn life_fnc_surrender;
            };
            _handled = true;
        };
    };

    //Map Key
    case _mapKey: {
        switch (playerSide) do {
            case west: {if (!visibleMap) then {[] spawn life_fnc_copMarkers;}};
            case independent: {if (!visibleMap) then {[] spawn life_fnc_medicMarkers;}};
            case civilian: {if (!visibleMap) then {[] spawn life_fnc_civMarkers;}};
        };
    };

    //Holster / recall weapon. (Shift + H)
    case 35: {
        if (_shift && !_ctrlKey && !(currentWeapon player isEqualTo "")) then {
            life_curWep_h = currentWeapon player;
            player action ["SwitchWeapon", player, player, 100];
            player switchCamera cameraView;
        };

        if (!_shift && _ctrlKey && !isNil "life_curWep_h" && {!(life_curWep_h isEqualTo "")}) then {
            if (life_curWep_h in [primaryWeapon player,secondaryWeapon player,handgunWeapon player]) then {
                player selectWeapon life_curWep_h;
            };
        };
    };

    //Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
    case _interactionKey: {
        if (!life_action_inUse) then {
            [] spawn  {
                private "_handle";
                _handle = [] spawn life_fnc_actionKeyHandler;
                waitUntil {scriptDone _handle};
                life_action_inUse = false;
            };
        };
    };

    //Restraining (Shift + R)
    case 19: {
        if (_shift) then {_handled = true;};
        if (_shift && playerSide isEqualTo west && {!isNull cursorObject} && {cursorObject isKindOf "Man"} && {(isPlayer cursorObject)} && {(side cursorObject in [civilian,independent])} && {alive cursorObject} && {cursorObject distance player < 3.5} && {!(cursorObject getVariable "Escorting")} && {!(cursorObject getVariable "restrained")} && {speed cursorObject < 1}) then {
            [] call life_fnc_restrainAction;
            [player,"Cuff"] remoteExec ["life_fnc_say3D",RANY];
        };
    };

	// Shift + Z Key = Ziptie
	case 44:
	{
		if(_shift) then {_handled = true;};
		if(_shift && playerSide isEqualTo civilian && {!isNull cursorObject} && {cursorObject isKindOf "Man"} && {(isPlayer cursorObject)} && {(side cursorObject in [civilian,west])} && {alive cursorObject} && {cursorObject distance player < 3.5} && {!(cursorObject getVariable "Escorting")} && {!(cursorObject getVariable "restrained")} && {speed cursorObject < 1} && ((animationState cursorObject) == "Incapacitated")) then
		{
			if([false,"ziptie",1] call life_fnc_handleInv) then
			{
				[] call life_fnc_zipTieAction;
				[player,"ziptie"] remoteExec ["life_fnc_say3D",RANY];

			};
		};
	};

    //Knock out, this is experimental and yeah... (Shift + G)
    case 34: {
        if (_shift) then {_handled = true;};
        if (_shift && playerSide isEqualTo civilian && !isNull cursorObject && cursorObject isKindOf "Man" && isPlayer cursorObject && alive cursorObject && cursorObject distance player < 4 && speed cursorObject < 1) then {
            if ((animationState cursorObject) != "Incapacitated" && (currentWeapon player == primaryWeapon player || currentWeapon player == handgunWeapon player) && currentWeapon player != "" && !life_knockout && !(player getVariable ["restrained",false]) && !life_istazed && !life_isknocked) then {
                [cursorObject] spawn life_fnc_knockoutAction;
            };
        };
    };

    //T Key (Trunk)
    case 20: {
        if (!_alt && !_ctrlKey && !dialog && {!life_action_inUse}) then {
            if (vehicle player != player && alive vehicle player) then {
                if ((vehicle player) in life_vehicles) then {
                    [vehicle player] spawn life_fnc_openInventory;
                };
            } else {
                private "_list";
                _list = ((ASLtoATL (getPosASL player)) nearEntities [["Box_IND_Grenades_F","B_supplyCrate_F"], 2.5]) select 0;
                if (!(isNil "_list")) then {
                    _house = nearestObject [(ASLtoATL (getPosASL _list)), "House"];
                    if (_house getVariable ["locked", false]) then {
                        hint localize "STR_House_ContainerDeny";
                    } else {
                        [_list] spawn life_fnc_openInventory;
                    };
                } else {
                    _list = ["landVehicle","Air","Ship"];
                    if (KINDOF_ARRAY(cursorObject,_list) && {player distance cursorObject < 7} && {isNull objectParent player} && {alive cursorObject} && {!life_action_inUse}) then {
                        if (cursorObject in life_vehicles) then {
                            [cursorObject] spawn life_fnc_openInventory;
                        };
                    } else {
                        _list = ["Land_Shed_02_F","Land_Shed_05_F","Land_SM_01_shed_F","Land_Warehouse_03_F","Land_Warehouse_01_F","Land_Warehouse_02_F"];
                        if(KINDOF_ARRAY(cursorObject,_list) && { player distance cursorObject < 30}) then
                        {
                          if (cursorObject getVariable ["locked", true]) then {
                              hint localize "STR_House_ContainerDeny";
                          } else {
                              [cursorObject] spawn life_fnc_openInventory;
                          };
                        };
                    };
                };
            };
        };
    };

    //L Key?
    case 38: {
        //If cop run checks for turning lights on.
        if (_shift && playerSide in [west,independent]) then {
            if (vehicle player != player && (typeOf vehicle player) in ["C_Offroad_01_F","B_MRAP_01_F","C_SUV_01_F","C_Hatchback_01_sport_F","B_Heli_Light_01_F","B_Heli_Transport_01_F","C_Offroad_02_unarmed_F","B_T_LSV_01_unarmed_black_F"]) then {
                if (!isNil {vehicle player getVariable "lights"}) then {
                    if (playerSide isEqualTo west) then {
                        [vehicle player] call life_fnc_sirenLights;
                    } else {
                        [vehicle player] call life_fnc_medicSirenLights;
                    };
                    _handled = true;
                };
            };
        };

    };
	
	case _interactionKey3: // User Action Key 12 --- Cop Radar --- Right Control by Default
	{
		if(playerSide == west) then
		{
			if(!_alt) then { [] call life_fnc_radar; };
		};
	};

    //Y Player Menu
    case 21: {
        if (!_alt && !_ctrlKey && !dialog && !(player getVariable ["restrained",false]) && {!life_action_inUse}) then {
            if (!_shift) then {
                [] call life_fnc_p_openMenu;
            } else {
                //[] call life_fnc_tanoaPhone;
            };
        };
    };

    case 16:
    {
      // Phaser
      if(_shift) then {
        if (playerSide in [west,independent] && {vehicle player != player} && {((driver vehicle player) == player)}) then {
          switch (playerSide) do
          {
            case west:
            {
              _veh = vehicle player;
              if(life_phaser_active) exitWith{};
              [] spawn
              {
                _veh = vehicle player;
                life_phaser_active = true;
                _veh setVariable ["phaserActive",true,true];
                sleep 0.91;
                life_phaser_active = false;
                _veh setVariable ["phaserActive",false,true];
              };
              [_veh] remoteExec ["life_fnc_copPhaser",RCLIENT];
            };
          };
        };
      }
      else
      {
        if (playerSide in [west,independent] && {vehicle player != player} && {((driver vehicle player) == player)}) then {
          switch (playerSide) do
          {
            case west:
            {
              _veh = vehicle player;
              if(life_rumbler_active) exitWith{};
              [] spawn
              {
                _veh = vehicle player;
                life_rumbler_active = true;
                _veh setVariable ["rumblerActive",true,true];
                sleep 1.393;
                life_rumbler_active = false;
                _veh setVariable ["rumblerActive",false,true];
              };
              [_veh] remoteExec ["life_fnc_copRumbler",RCLIENT];
            };
          };
        };
      };
    };

    //F Key
    case 33: {
        if(_shift) then {
          if (playerSide in [west,independent] && {vehicle player != player} && {((driver vehicle player) == player)}) then {
              if(life_wail_active) exitWith{};
              [] spawn {
                  life_wail_active = true;
                  sleep 6;
                  life_wail_active = false;
              };
              _veh = vehicle player;
              if (isNil {_veh getVariable "wailActive"}) then {_veh setVariable ["wailActive",false,true];};
              if ((_veh getVariable "wailActive")) then {
                  titleText ["Wail Off","PLAIN"];
                  _veh setVariable ["wailActive",false,true];
              } else {
                  titleText ["Wail On","PLAIN"];
                  _veh setVariable ["wailActive",true,true];
                  if (playerSide isEqualTo west) then {
                      [_veh] remoteExec ["life_fnc_copWail",RCLIENT];
                  };
              };
          };
        }
        else
        {
          if (playerSide in [west,independent] && {vehicle player != player} && {((driver vehicle player) == player)}) then {
            if(life_siren_active) exitWith{};
            [] spawn {
                life_siren_active = true;
                sleep 3;
                life_siren_active = false;
            };

            _veh = vehicle player;
            if (isNil {_veh getVariable "siren"}) then {_veh setVariable ["siren",false,true];};
            if ((_veh getVariable "siren")) then {
                titleText [localize "STR_MISC_SirensOFF","PLAIN"];
                _veh setVariable ["siren",false,true];
            } else {
                titleText [localize "STR_MISC_SirensON","PLAIN"];
                _veh setVariable ["siren",true,true];
                if (playerSide isEqualTo west) then {
                    [_veh] remoteExec ["life_fnc_copSiren",RCLIENT];
                } else {
                    [_veh] remoteExec ["life_fnc_medicSiren",RCLIENT];
                };
            };
          };
        };
    };

    //O Key
    case 24: {
        if (_shift) then {
            if (soundVolume != 1) then {
                1 fadeSound 1;
                systemChat localize "STR_MISC_soundnormal";
            } else {
                1 fadeSound 0.1;
                systemChat localize "STR_MISC_soundfade";
            };
        };
    };

    //U Key
    case 22: {
      if (!_alt && !_ctrlKey) then {
        if (isNull objectParent player) then {
          _veh = cursorObject;
        } else {
          _veh = vehicle player;
        };

        if (((_veh isKindOf "House_F") || (typeOf _veh in ["Land_Slum_01_F","Land_House_Small_02_F","Land_House_Small_03_F","Land_GarageShelter_01_F","Land_House_Small_06_F","Land_Addon_04_F","Land_Slum_03_F","Land_House_Small_04_F","Land_House_Small_05_F","Land_House_Big_01_F","Land_School_01_F","Land_House_Big_02_F","Land_House_Big_04_F","Land_House_Big_03_F","Land_Hotel_01_F","Land_Hotel_02_F"]) )&& {playerSide isEqualTo civilian}) then {
          if (_veh in life_vehicles && player distance _veh < 8) then {
            _door = [_veh] call life_fnc_nearestDoor;
            if (_door isEqualTo 0) exitWith {hint localize "STR_House_Door_NotNear"};
            _locked = _veh getVariable [format["bis_disabled_Door_%1",_door],0];

            if (_locked isEqualTo 0) then {
              _veh setVariable [format["bis_disabled_Door_%1",_door],1,true];
              _veh animate [format["door_%1_rot",_door],0];
              systemChat localize "STR_House_Door_Lock";
            } else {
              _veh setVariable [format["bis_disabled_Door_%1",_door],0,true];
              _veh animate [format["door_%1_rot",_door],1];
              systemChat localize "STR_House_Door_Unlock";
            };
          };
        } else {
          //Handle FOB Locking
          [] call life_fnc_toggleVehicleLock;
        };
      };
    };

    case 54:
    {
       switch (player getVariable["Earplugs",0]) do {
			case 0: {hintSilent "Ear Plugs 90%"; 1 fadeSound 0.1; player setVariable ["Earplugs", 10]; };
			case 10: {hintSilent "Ear Plugs 60%"; 1 fadeSound 0.4; player setVariable ["Earplugs", 40]; };
			case 40: {hintSilent "Ear Plugs 30%"; 1 fadeSound 0.7; player setVariable ["Earplugs", 70]; };
			case 70: {hintSilent "Ear Plugs Removed"; 1 fadeSound 1; player setVariable ["Earplugs", 0]; };
      };
    };

	/*
    case _debugKey:
    {
      //Debug Key (NUMPAD - )
      _exp = 25;
      // [_exp] spawn life_fnc_awardExperience;
    };
	*/

	case _copCodeOneKey: // Code 1!
	{
		if (!_shift && _alt && !_ctrlKey) then // Checks if the alt key was held
		{

			if(playerSide in [west]) then // Check if player is a cop
			{
				titleText ["You have set Code 1", "PLAIN"]; // Display a message informing the player they have set code 1
        [0,format["%1 is Code 1",name player]] remoteExecCall ["life_fnc_broadcast",west];
				player setVariable ["copCode","Code 1", true];
			};
		};
	};

	case _copCodeTwoKey: // Code 2!
	{
		if (!_shift && _alt && !_ctrlKey) then // Checks if the alt key was held
		{

			if(playerSide in [west]) then // Check if player is a cop
			{
				titleText ["You have set Code 2", "PLAIN"]; // Display a message informing the player they have set code 2
				[0,format["%1 is Code 2",name player]] remoteExecCall ["life_fnc_broadcast",west];
				player setVariable ["copCode","Code 2", true];
			};
		};
	};
	case _copCodeThreeKey: // Code 3!
	{
		if (!_shift && _alt && !_ctrlKey) then // Checks if the alt key was held
		{

			if(playerSide in [west]) then // Check if player is a cop
			{
				titleText ["You have set Code 3", "PLAIN"]; // Display a message informing the player they have set code 3
				[0,format["%1 is Code 3",name player]] remoteExecCall ["life_fnc_broadcast",west];
				player setVariable ["copCode","Code 3", true];
				[] call life_fnc_callbackup // Call the backup function in addition
			};
		};
	};
	case _copCodeFourKey: // Code 4!
	{
		if (!_shift && _alt && !_ctrlKey) then // Checks if the alt key was held
		{

			if(playerSide in [west]) then // Check if player is a cop
			{
				[0,format["%1 is Code 4",name player]] remoteExecCall ["life_fnc_broadcast",west];
				titleText ["You have set Code 4", "PLAIN"]; // Display a message informing the player they have set code 4
				player setVariable ["copCode","Code 4", true];
			};
		};
	};

	case _copCodeFiveKey: //Code 5!
	{
		if (!_shift && _alt && !_ctrlKey) then // Checks if the alt key was held
		{
			if(playerSide in [west]) then // Check if player is a cop
			{
				titleText ["You have set Code 5", "PLAIN"]; // Display a message informing the player they have set code 5
				[0,format["%1 is Code 5.",name player]] remoteExecCall ["life_fnc_broadcast",west];
				player setVariable ["copCode","Code 5", true];
				// Notify supervisors
				/*
				// Disabled for now
				_supervisors = [];
				{
					if(side _x == west) then
					{
						_supervisors pushBack _x
					};
				} foreach playableUnits; //Fetch list of cops / blufor
				*/
			};
		};
	};

	case _copCodeSixKey: // Code 6!
	{
		if (!_shift && _alt && !_ctrlKey) then // Checks if the alt key was held
		{

			if(playerSide in [west]) then // Check if player is a cop
			{
				[0,format["%1 is Code 6",name player]] remoteExecCall ["life_fnc_broadcast",west];
				titleText ["You have set Code 6'", "PLAIN"]; // Display a message informing the player they have set code 4
				player setVariable ["copCode","Code 6", true];
			};
		};
	};
	
	case _interactionKey4:
	    {
	        if(_shift && !isNull cursorTarget && alive cursorTarget && cursorTarget distance player < 1000) then
	        {
	            // If it's a player, display their name
	            if(cursorTarget isKindOf "Man" && (isPlayer cursorTarget)) then
	            {
	                _name = name cursorTarget;
	                hint format["You have identified %1",_name];
	            };
	            // If it's a vehicle, list all crew.
	            if(cursorTarget isKindOf "LandVehicle" OR cursorTarget isKindOf "Air" OR cursorTarget isKindOf "Ship") then
	            {
	                _veh = cursorTarget;
	                _vehName = getText(configFile >> "CfgVehicles" >> (typeOf _veh) >> "displayName");
	                _driver = driver _veh;
	                _driverName = _driver getVariable["realname",name _driver];
	                _result =  format["You have identified vehicle: %1 <br/> Driver: %2",_vehName, _driverName];
	                hint parseText _result;
	            };
	        };
	    };
};

_handled;
