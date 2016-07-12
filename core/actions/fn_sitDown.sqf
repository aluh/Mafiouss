private ["_chair","_unit"];
_chair = _this select 0;
_unit = _this select 1;

_chairAnims = [];
_chairAnims pushBack "HubSittingChairA_idle1";
_chairAnims pushBack "HubSittingChairA_idle2";
_chairAnims pushBack "HubSittingChairA_idle3";
_chairAnims pushBack "HubSittingChairA_move1";
_chairAnims pushBack "HubSittingChairB_idle1";
_chairAnims pushBack "HubSittingChairB_idle2";
_chairAnims pushBack "HubSittingChairB_idle3";
_chairAnims pushBack "HubSittingChairB_move1";
_chairAnims pushBack "HubSittingChairC_idle1";
_chairAnims pushBack "HubSittingChairC_idle2";
_chairAnims pushBack "HubSittingChairC_idle3";
_chairAnims pushBack "HubSittingChairC_move1";
_chairAnims pushBack "HubSittingChairUA_idle1";
_chairAnims pushBack "HubSittingChairUA_idle2";
_chairAnims pushBack "HubSittingChairUA_idle3";
_chairAnims pushBack "HubSittingChairUA_move1";
_chairAnims pushBack "HubSittingChairUB_idle1";
_chairAnims pushBack "HubSittingChairUB_idle2";
_chairAnims pushBack "HubSittingChairUB_idle3";
_chairAnims pushBack "HubSittingChairUB_move1";
_chairAnims pushBack "HubSittingChairUC_idle1";
_chairAnims pushBack "HubSittingChairUC_idle2";
_chairAnims pushBack "HubSittingChairUC_idle3";
_chairAnims pushBack "HubSittingChairUC_move1";

_unit switchMove "amovpknlmstpsraswrfldnon";

life_action_standup = _unit addaction [
	"Stand Up",
	"[player] call life_fnc_standUp",
	nil,
	20,
	true,
	true,
	"GetOut",
	""
];

player switchMove selectRandom _chairAnims;

_unit setVariable ["isSeated",true,true];
_unit setDir ((getDir _chair) - 180);
_unit setPos (getPos _chair);

player removeAction life_action_sitdown;


/*
_unit setPos [getPos _unit select 0, getPos _unit select 1,((getPos _unit select 2) +1)];
*/
