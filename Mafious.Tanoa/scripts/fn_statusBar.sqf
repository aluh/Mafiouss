waitUntil {!(isNull (findDisplay 46))};
disableSerialization;
/*
	File: fn_statusBar.sqf
*/
4 cutRsc ["statusBar","PLAIN"];
systemChat format["[TIDAL GAMING] Loading game server info..."];

[] spawn {
	sleep 5;
	_counter = 180;
	_timeSinceLastUpdate = 0;
	while {true} do
	{
		sleep 1;
		_counter = _counter - 1;
		_uptime = [time,"HH:MM:SS"] call BIS_fnc_secondsToString;
		((uiNamespace getVariable "statusBar")displayCtrl 1000)ctrlSetText format["TIDAL GAMING TANOA LIFE | Uptime: %8 | FPS: %1 | Civilians: %3 | Sheriff's Department: %2 | Fire & Rescue: %4 | CASH: %5 | BANK: %6 | GRIDREF: %7 |", round diag_fps, west countSide playableUnits, civilian countSide playableUnits, independent countSide playableUnits,[life_cash] call life_fnc_numberText,[life_atmbank] call life_fnc_numberText,mapGridPosition player,_uptime];
	};
};
