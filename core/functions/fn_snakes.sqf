/*
    File: fn_snakes.sqf
    Author: Braxton "Buddytex" Williams

    Description:
    Checks if the player is getting fucked by snakes.

*/

private ["_snek"];

_snek = position player nearObjects ["Snake_random_F", 25];

if((count _snek > 0) && (random 100 <= 1)) then
{
	hint "You've been bit by snake! Better watch out next time.";
	player setDammage 1;
};
		