private ["_unit"];
_unit = _this select 0;

_unit removeAction life_action_standup;
_unit setVariable ["isSeated",false,true];

private _animation = switch (currentWeapon _unit) do {
    case "": {"amovpercmstpsnonwnondnon"};
    case (primaryWeapon _unit): {"amovpercmstpslowwrfldnon"};
    case (handgunWeapon _unit): {"amovpercmstpslowwpstdnon"};
    default {"amovpercmstpsnonwnondnon"};
};
player switchMove _animation;
