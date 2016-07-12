/*
* @File:   fn_isNearRoads.sqf
* @Author: Ciaran "Ciaran" Langton <email@ciaranlangton.com>

*/
params [
  ["_pos", objNull, [objNull, []]],
  ["_range", 50, [50]]
];

count (_pos nearRoads _range) != 0
