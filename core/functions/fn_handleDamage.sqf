#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];

_oldDamage = _unit getVariable["currentDamage",0];
_newDamage = _damage;
_difference = _newDamage - _oldDamage;


//Handle the tazer first (Top-Priority).
if (!isNull _source) then {
    if (_source != _unit) then {
        if (currentWeapon _source in ["hgun_P07_snds_F","arifle_SDAR_F"] && _projectile in ["B_9x21_Ball","B_556x45_dual"]) then {
            if (side _source isEqualTo west && playerSide isEqualTo civilian) then {
                _damage = 0;
                if (alive player && !life_istazed && !life_isknocked && !(_unit getVariable ["restrained",false])) then {
                    private["_distance"];
                    _distance = 50;
                    if (_projectile == "B_556x45_dual") then {_distance = 130;};
                    if (_unit distance _source < _distance) then {
                        if (vehicle player != player) then {
                            if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                                player action ["Eject",vehicle player];
                            };
                            [_unit,_source,15,0] spawn life_fnc_tazed;
                        } else {
                            [_unit,_source,15,0] spawn life_fnc_tazed;
                        };
                    };
                };
            };

            //Temp fix for super tasers on cops.
            if (side _source isEqualTo west && (playerSide isEqualTo west || playerSide isEqualTo independent)) then {
                _damage = 0;
            };
        };


    /*

    _result = random 100;
    if( 15 > _result) then {
      hint format["You have been tased! Random 100: %1",_result];
    } else {
    hint format["Miss! Random 100: %1",_result];
    };

    */
		if(currentWeapon _source in ["SMG_05_F" ] && _projectile in ["B_9x21_Ball_Tracer_Green"]) then {
      if ((side _source isEqualTo west || side _source isEqualTo civilian) && playerSide isEqualTo civilian) then {
  			_damage = 0;
    		if (alive player && !life_istazed && !life_isknocked && !(_unit getVariable ["restrained",false])) then {
          private["_distance"];
          _distance = 180;
          if (_unit distance _source < _distance) then {
            if (vehicle player == player) then {
              _result = selectRandom [false,false,false,false,true];  //STOP JUDGING ME
              if( _result) then {
  							[_unit,_source,3,1] spawn life_fnc_tazed;
                _dmgChance = random 100;
  							if ( _dmgChance < 5) then {
  									_damage = 0.2;
  							};
  						};
            };
          };
        };
      };
		};
  };
  if(((getMarkerPos "civ_spawn_georgetown" distance _unit) < 1000) && vehicle _source != _source) then
  {
    _damage = 0;
  };
};

if((vehicle _unit) isKindOf "Car" && (isNull _source || _source == _unit)) then
{
  _damage = if(life_seatbelt) then { _damage / 3} else {_damage};
};

[] spawn life_fnc_hudUpdate;

//_unit setVariable["currentDamage",_newDamage,true];

_damage;
