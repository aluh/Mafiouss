/*
@File: fn_jobStart.sqf
@Author: noms
@Description:  Handles hiring a player
*/
private ["_player","_job","_employer"];

if(life_hasJob) exitWith {hint "You already have a job!"};

//Set up some variables
_player = _this select 3 select 0;
_job = _this select 3 select 1;
_employer = _this select 3 select 2;
/*
_player  =  The player being given the job.
_job = Text value, name of the job (as defined in Config_Jobs.hpp)
_employer = The object (if any) that has given the job. This can be a sign, a vehicle or another player.
*/
_jobCfg = missionConfigFile >> "CfgJobs" >> _job;
_jobDisplayName = getText (_jobCfg >> "displayName");
_jobDescription = getText (_jobCfg >> "description");

if(life_job != "") then
{
  ["JobStart",[format ["You have started your job as a '%1'. Check your tasks by pressing M and going to your tasks menu for further information.", _jobDisplayName ]]] call bis_fnc_showNotification;
  _jobID = ["PlayerJob", _player,  [format["%1",_jobDescription], _jobDisplayName], [], "ASSIGNED", 2, false, false, "", false] call BIS_fnc_setTask;
  life_hasJob = true;
  life_job = _job;

  switch(_job) do
  {
    case "ShopAssistant":
    {
      [] spawn life_fnc_shopAssistant;
    };
  };
}
else
{
  hint "You already have a job!";
};
