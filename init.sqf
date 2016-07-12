/*
    File: init.sqf
    Author:

    Description:

*/
enableSaving [false, false];
StartProgress = false;



[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\fn_statusBar.sqf";
[] execVM "scripts\fn_randomWeather.sqf";
StartProgress = true;
