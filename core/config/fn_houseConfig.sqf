/*
    File: fn_houseConfig.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master config file for buyable houses?
*/
private["_house"];
_house = [_this,0,"",[""]] call BIS_fnc_param;
if (_house isEqualTo "") exitWith {[]};

/*
    Return Format:
    [price,# of containers allowed]
*/


switch (true) do {
    //Tanoa Buildings
    case (_house in ["Land_Slum_01_F","Land_House_Small_02_F"]): {[40000,0]};
    case (_house in ["Land_House_Small_03_F","Land_GarageShelter_01_F","Land_House_Small_06_F","Land_Addon_04_F"]): {[100000,1]};
    case (_house in ["Land_Slum_03_F","Land_House_Small_04_F","Land_House_Small_05_F","Land_House_Big_01_F"]): {[175000,2]};
    case (_house in ["Land_School_01_F","Land_House_Big_02_F"]): {[230000,3]};
    case (_house in ["Land_House_Big_04_F","Land_House_Big_03_F"]): {[280000,4]};
    case (_house in ["Land_Hotel_01_F","Land_Hotel_02_F"]): {[565000,6]};


    //Tanoa Warehouses - No Spawn, No Crates, Only Storage Space
    case (_house in ["Land_Shed_02_F"]): {[70000,0]};
    case (_house in ["Land_Shed_05_F"]): {[110000,0]};
    case (_house in ["Land_SM_01_shed_F"]): {[360000,0]};
    case (_house in ["Land_Warehouse_03_F"]): {[580000,0]};
    case (_house in ["Land_Warehouse_01_F"]): {[1150000,0]};
    case (_house in ["Land_Warehouse_02_F"]): {[1550000,0]};


    //Altis Buildings
    case (_house in ["Land_i_House_Big_02_V1_F","Land_i_House_Big_02_V2_F","Land_i_House_Big_02_V3_F"]): {[1550000,3]};
    case (_house in ["Land_i_House_Big_01_V1_F","Land_i_House_Big_01_V2_F","Land_i_House_Big_01_V3_F"]): {[2200000,4]};
    case (_house in ["Land_i_Garage_V1_F","Land_i_Garage_V2_F"]): {[500000,0]};
    case (_house in ["Land_i_House_Small_01_V1_F","Land_i_House_Small_01_V2_F","Land_i_House_Small_01_V3_F"]): {[1050000,2]};
    case (_house in ["Land_i_House_Small_02_V1_F","Land_i_House_Small_02_V2_F","Land_i_House_Small_02_V3_F"]): {[1000500,2]};
    case (_house in ["Land_i_House_Small_03_V1_F"]): {[1250000,3]};
    case (_house in ["Land_i_Stone_HouseSmall_V2_F","Land_i_Stone_HouseSmall_V1_F","Land_i_Stone_HouseSmall_V3_F"]): {[750000,1]};
    default {[]};
};



/*
Port Warehouse (INDUSTRIAL SYSTEM ONLY):

_warehouses = ["Land_Shed_02_F","Land_Shed_05_F","Land_SM_01_shed_F","Land_Warehouse_03_F","Land_Warehouse_01_F","Land_Warehouse_02_F"]

Tiny Grey Metal Shed = Land_Shed_02_F
Small Grey Metal Shed = Land_Shed_05_F
Industrial Shed =  Land_SM_01_shed_F
Warehouse (Blue) = Land_Warehouse_03_F
Warehouse Small = Land_Warehouse_01_F
Warehouse Large = Land_Warehouse_02_F


//Shit Tier
Grey Shack (Small) = Land_Slum_01_F
Brick Bungalow = Land_House_Small_02_F

//Low Tier
Bungalow (Torqoise) =  Land_House_Small_03_F
House with Parking Shelter = Land_GarageShelter_01_F
Bungalow (Yellow) = Land_House_Small_06_F
Apartment (House Addon Terrace) = Land_Addon_04_F

//Mid Tier
Purple Shack = Land_Slum_03_F
Bungalow (Blue Roof) = Land_House_Small_04_F
Bungalow (Grey Roof) = Land_House_Small_05_F
Bungalow (Yellow Large) = Land_House_Big_01_F

//Large Tier
School = Land_School_01_F
Bungalow (Large) = Land_House_Big_02_F

//Good Tier
Apartment Building = Land_House_Big_04_F
Villa = Land_House_Big_03_F

//Elite Tier
Hotel (White) = Land_Hotel_01_F
Hotel (Yellow) = Land_Hotel_02_F


*/
