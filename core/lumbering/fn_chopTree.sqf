/*
* @File:   fn_chopTree.sqf
* @Author: noms
*/

private ["_resource", "_curObject","_amount"];

_curObject = param [0,ObjNull,[ObjNull]];
_resource = "lumber";
_amount = 1;

life_action_inUse = true;     //Make sure the player can't use the action key yet...
_diff = [_resource, _amount, life_carryWeight, life_maxWeight] call life_fnc_calWeightDiff; //Can the player fit the object into his inventory?
if (_diff isEqualTo 0) exitWith {
    hint localize "STR_NOTF_InvFull";
    life_action_inUse = false;
};
player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";//Do the animation
waitUntil {  animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
sleep 1; //Enforce a wait period...
_curObject setDamage 1; //Damage the object
systemChat format["You gathered %1 %2.",_amount, _resource]; //Inform the player of their success
[true,_resource,_amount] call life_fnc_handleInv; //Add the items to the inventory
sleep 2; //Make 'em wait a little longer
life_action_inUse = false; //Enable the player to use the action again.
