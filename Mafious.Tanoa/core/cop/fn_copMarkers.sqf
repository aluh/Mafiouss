/*
    File: fn_copMarkers.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Marks cops on the map for other cops. Only initializes when the actual map is open.
*/
private["_markers","_cops"];
_markers = [];
_cops = [];

sleep 0.5;
if (visibleMap) then {
    {if (side _x isEqualTo west) then {_cops pushBack _x;}} forEach playableUnits; //Fetch list of cops / blufor

    //Create markers
    {
        if (_x != player) then {
		
			_copCodeText = _x getVariable["copCode", "Code 4"];
			
            _marker = createMarkerLocal [format["%1_marker",_x],visiblePosition _x];
            _marker setMarkerColorLocal "ColorBLUFOR";
            _marker setMarkerTypeLocal "Mil_dot";
			
			switch (_copCodeText) do
			{
				case "Code 1":
				{
					_marker setMarkerColorLocal "ColorYellow";
				};
				case "Code 2":
				{
					_marker setMarkerColorLocal "ColorOrange";
				};
				case "Code 3":
				{
					_marker setMarkerColorLocal "ColorRed";
				};
				case "Code 4":
				{
					_marker setMarkerColorLocal "ColorBlue";
				};
				case "Code 5":
				{
					_marker setMarkerColorLocal "ColorPink";
				};
				case "Code 6":
				{
					_marker setMarkerColorLocal "ColorGreen";
				};
				default
				{
					_marker setMarkerColorLocal "ColorBlue";
				};
			};
			
            _marker setMarkerTextLocal format["%1 [%2]", _x getVariable ["realname",name _x], _copCodeText];

            _markers pushBack [_marker,_x];
        };
    } forEach _cops;

    while {visibleMap} do {
        {
            private["_unit"];
            _unit = _x select 1;
            if (!isNil "_unit" && !isNull _unit) then {
                (_x select 0) setMarkerPosLocal (visiblePosition _unit);
            };
        } forEach _markers;
        if (!visibleMap) exitWith {};
        sleep 0.02;
    };

    {deleteMarkerLocal (_x select 0);} forEach _markers;
    _markers = [];
    _cops = [];
};
