class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } },
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
            { "B_Truck_01_fuel_F", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "C_Plane_Civil_01_F", { "", "", -1 } },
            { "C_Plane_Civil_01_racing_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "C_Scooter_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Transport_02_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "I_Truck_02_medical_F", { "", "", -1 } },
            { "O_Truck_03_medical_F", { "", "", -1 } },
            { "B_Truck_01_medical_F", { "", "", -1 } },
			{ "B_Quadbike_01_F", { "", "", -1 } }
        };
    };

    class med_air {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "life_coplevel", "SCALAR", 1 } },
            { "C_SUV_01_F", { "life_coplevel", "SCALAR", 1 } },
            { "C_Hatchback_01_sport_F", { "life_coplevel", "SCALAR", 1 } },
            { "C_Offroad_02_unarmed_F", { "life_coplevel", "SCALAR", 1 } },
            { "B_MRAP_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "B_T_LSV_01_unarmed_black_F", { "life_coplevel", "SCALAR", 2 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "B_Heli_Transport_01_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_T_VTOL_01_infantry_F", { "life_coplevel", "SCALAR", 5 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 5 } },
            { "C_Boat_Transport_02_F",  { "life_coplevel", "SCALAR", 3 } },
            { "C_Scooter_Transport_01_F",  { "life_coplevel", "SCALAR", 2 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (licence required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licences[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licences[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        licences[] = { {"boat"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        licences[] = { {""}, {"cAir"}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };


    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licences[] = { {""}, {"cg"}, {""}, {""} };
        price = 15000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licences[] = { {""}, {"cg"}, {""}, {""} };
        price = 6000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        licences[] = { {"trucking"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        licences[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licences[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licences[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licences[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 75;
        licences[] = { {""}, {""}, {""}, {""} };
        price = 7050;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        licences[] = { {"rebel"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        licences[] = { {"boat"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = { };
    };

    class C_Scooter_Transport_01_F {
        vItemSpace = 85;
        licences[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 15000;
        textures[] = {
          { "Black", "cop", {
              "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
          } }
         };
    };

    class C_Boat_Transport_02_F {
        vItemSpace = 85;
        licences[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 15000;
        textures[] = {
          { "Black", "cop", {
              "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
          } }
         };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licences[] = { {""}, {"cg"}, {""}, {""} };
        price = 2500;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        licences[] = { {"trucking"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        licences[] = { {"trucking"}, {""}, {""}, {""} };
        price = 27500;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        licences[] = { {"driver"}, {""}, {""}, {""} };
        price = 52021;
        textures[] = { };
    };
	
	class I_Truck_02_medical_F {
        vItemSpace = 60;
        licences[] = { {""}, {""}, {""}, {""} };
        price = 3200;
        textures[] = { };
    };
	
	class O_Truck_03_medical_F {
        vItemSpace = 120;
        licences[] = { {""}, {""}, {""}, {""} };
        price = 4500;
        textures[] = { };
    };
	
	class B_Truck_01_medical_F {
        vItemSpace = 160;
        licences[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 90;
        licences[] = { {"driver"}, {""}, {""}, {""} };
        price = 5500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Unmarked", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Sheriff", "cop", {
                "textures\cop\vehicles\cop_offroad.paa"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licences[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as licence and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 80;
        licences[] = { {"driver"}, {""}, {""}, {""} };
        price = 23000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Unmarked", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Sheriff", "cop", {
                "textures\cop\vehicles\cop_hatchback_sheriff.paa"
            } },
            { "Highway Patrol", "cop", {
                "textures\cop\vehicles\cop_hatchback_hw.paa"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 60;
        licences[] = { {"driver"}, {""}, {""}, {""} };
        price = 950;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 450;
        licences[] = { {"trucking"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class C_Truck_02_covered_F {
        vItemSpace = 450;
        licences[] = { {"trucking"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = {};
    };

    class I_Truck_02_transport_F {
        vItemSpace = 400;
        licences[] = { {"trucking"}, {""}, {""}, {""} };
        price = 27500;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 600;
        licences[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 100;
        licences[] = { {"driver"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
            { "Public Officer", "cop", {
                "textures\cop\vehicles\cop_hatchback_public.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 150;
        licences[] = { {"driver"}, {""}, {""}, {""} };
        price = 18600;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } }
        };
    };

    class B_T_LSV_01_unarmed_black_F {
        vItemSpace = 150;
        licences[] = { {"driver"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {
          { "Black", "cop", {
              "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
          } }
        };
    };

    class C_Offroad_02_unarmed_F {
        vItemSpace = 120;
        licences[] = { {"driver"}, {""}, {""}, {""} };
        price = 14000;
        textures[] = {
          { "Black", "cop", {
              "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
          } }
        };
    };


    class C_Van_01_transport_F {
        vItemSpace = 200;
        licences[] = { {"driver"}, {""}, {""}, {""} };
        price = 19000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 300;
        licences[] = { {"trucking"}, {""}, {""}, {""} };
        price = 22000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 200;
        licences[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 100;
        licences[] = { {""}, {""}, {""}, {""} };
        price = 47000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class C_Plane_Civil_01_F {
       vItemSpace = 150;
       licences[] = { {""}, {""}, {""}, {""} };
       price = 75000;
       textures[] = {};
   };

   class C_Plane_Civil_01_racing_F {
      vItemSpace = 150;
      licences[] = { {""}, {""}, {""}, {""} };
      price = 95000;
      textures[] = {};
  };

  class B_T_VTOL_01_infantry_F {
     vItemSpace = 800;
     licences[] = { {""}, {""}, {""}, {""} };
     price = 175000;
     textures[] = {};
  };

    class B_Heli_Light_01_F {
        vItemSpace = 100;
        licences[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 45000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 100;
        price = 45000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 400;
        licences[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 75000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 100;
        licences[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 15000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 19500;
        licences[] = { {"trucking"}, {""}, {""}, {""} };
        price = 22000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 60;
        vFuelSpace = 42000;
        licences[] = { {"trucking"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 100;
        vFuelSpace = 50000;
        licences[] = { {"trucking"}, {""}, {""}, {""} };
        price = 95000;
        textures[] = {};
    };
};
