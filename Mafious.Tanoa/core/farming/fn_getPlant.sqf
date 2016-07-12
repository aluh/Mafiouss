scopeName "getPlant";
/*
* @File:   fn_getPlant.sqf
* @Author: Ciaran "Ciaran" Langton <email@ciaranlangton.com>
*/
params [
  ["_plant", objNull, [objNull]]
];
if(isNull(_plant)) exitWith {};

{
  _x params [
    ["_xPlant", objNull, [objNull]]
  ];

  //If it is the correct plant, return.
  if (_plant isEqualTo _xPlant) then {
    _x breakOut "getPlant";
  };
} forEach life_farming_objects;

//No plant found.
[]
