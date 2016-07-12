#include "..\..\script_macros.hpp"
/*
    File: fn_hudUpdate.sqf
    Author: Daniel Stuart

    Description:
    Updates the HUD when it needs to.
*/
disableSerialization;

if (isNull LIFEdisplay) then {[] call life_fnc_hudSetup;};

[8] call SOCK_fnc_updatePartial;

// I'm so sorry for this mess. TODO: Move this somewhere more useful.
_nextLevel = life_level + 1;
_totalXPToCurrentLevel = ceil(((life_level)/LEVEL_COEF)^2);
_totalXPToNextLevel = ceil(((_nextLevel)/LEVEL_COEF)^2);
_xpToNextLevel = _totalXPToNextLevel - _totalXPToCurrentLevel;
_currentXPToNextLevel = (life_exp-_totalXPToCurrentLevel);
_percentToNextLevel = (_currentXPToNextLevel / _xpToNextLevel) * 100;



LIFEctrl(2200) progressSetPosition (life_hunger / 100);
LIFEctrl(2201) progressSetPosition (1 - (damage player));
LIFEctrl(2202) progressSetPosition (life_thirst / 100);
LIFEctrl(2203) progressSetPosition (_percentToNextLevel / 100);  //Temporary (Experience to Next Level)
LIFEctrl(9400) progressSetPosition (1);
LIFEctrl(9401) progressSetPosition (1);
LIFEctrl(9402) progressSetPosition (1);
LIFEctrl(9403) progressSetPosition (1);
LIFEctrl(9600) ctrlSetText format["%1%2",life_hunger,"%"];
LIFEctrl(9601) ctrlSetText format["%1%2",round(100-((damage player) * 100)),"%"];
LIFEctrl(9602) ctrlSetText format["%1%2",life_thirst,"%"];
LIFEctrl(9603) ctrlSetText format["LEVEL %1",_nextLevel];
LIFEctrl(9604) ctrlSetText format["%1 / %2", _currentXPToNextLevel, _xpToNextLevel];
LIFEctrl(1203) ctrlSetText format["LEVEL %1", life_level];

// Set colours for low values... (DANGER VALUE!)
if(life_hunger < 0.3) then
{
  LIFEctrl(2200) ctrlSetBackgroundColor [255,0,0,0.4];
};
if((damage player) < 0.3) then
{
  LIFEctrl(2201) ctrlSetBackgroundColor [255,0,0,0.4];
};
if((life_thirst) < 0.3) then
{
  LIFEctrl(2202) ctrlSetBackgroundColor [255,0,0,0.4];
};
