
params [
  ["_vehicle", objNull, [objNull]],
  ["_locked", false, [false]]
];
if (isNull _vehicle) exitWith {};

_vehicle lock ([0, 2] select _locked);
