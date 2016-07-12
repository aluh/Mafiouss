/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Jerry's Personal Defense Weapons";
        side = "civ";
        licence = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 550, 100 },
            { "hgun_Pistol_01_F", "", 500, 150 },
            { "hgun_ACPC2_F", "", 750, 100 },
            { "hgun_PDW2000_F", "", 1000, 200 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 15 },
            { "9Rnd_45ACP_Mag", "", 25 },
            { "30Rnd_9x21_Mag", "", 35 },
            { "10Rnd_9x21_Mag", "", 15 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 100 }
        };
    };

    class rebel {
        name = "Achmed's Bits and Bombs";
        side = "civ";
        licence = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 3500, 2500 },
            { "arifle_AKM_F", "", 7000, 2500 },
            { "arifle_AKS_F", "", 5000, 2500 },
            { "arifle_SDAR_F", "", 3000, 7500 },
            { "Binocular", "", 100, 1 },
            { "ItemGPS", "", 250, 45 },
            { "ItemMap", "", 5, 1 },
            { "ItemCompass", "", 10, 2 },
            { "ItemWatch", "", 50, 10 },
            { "FirstAidKit", "", 10, 2 },
            { "NVGoggles", "", 1000, 200 },
            { "Chemlight_red", "", 5, 1 },
            { "Chemlight_yellow", "", 5, 1 },
            { "Chemlight_green", "", 5, 1 },
            { "Chemlight_blue", "", 5, 1 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 40 },
            { "30Rnd_762x39_Mag_F", "", 50 },
            { "30Rnd_545x39_Mag_F", "", 45 },
            { "20Rnd_556x45_UW_mag", "", 25 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 100 },
            { "optic_Holosight", "", 125 },
            { "optic_Arco", "", 200 },
            { "acc_flashlight", "", 100 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 550, 100 },
            { "hgun_Pistol_01_F", "", 500, 150 },
            { "hgun_ACPC2_F", "", 750, 100 },
            { "hgun_PDW2000_F", "", 1000, 200 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 15 },
            { "9Rnd_45ACP_Mag", "", 25 },
            { "30Rnd_9x21_Mag", "", 35 },
            { "10Rnd_9x21_Mag", "", 15 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 100 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Tanoa General Store";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 100, 1 },
            { "ItemGPS", "", 250, 45 },
            { "ItemMap", "", 5, 1 },
            { "ItemCompass", "", 10, 2 },
            { "ItemWatch", "", 50, 10 },
            { "FirstAidKit", "", 10, 2 },
            { "NVGoggles", "", 1000, 200 },
            { "Chemlight_red", "", 5, 1 },
            { "Chemlight_yellow", "", 5, 1 },
            { "Chemlight_green", "", 5, 1 },
            { "Chemlight_blue", "", 5, 1 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Tanoa Fuel Station Store";
        side = "";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 100, 20 },
            { "ItemGPS", "", 250, 40 },
            { "ItemMap", "", 5, 1 },
            { "ItemCompass", "", 10, 2 },
            { "ItemWatch", "", 50, 10 },
            { "FirstAidKit", "", 10, 2 },
            { "NVGoggles", "", 1000, 200 },
            { "Chemlight_red", "", 5, 1 },
            { "Chemlight_yellow", "", 5, 1 },
            { "Chemlight_green", "", 5, 1 },
            { "Chemlight_blue", "", 5, 1 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_public {
        name = "Public Officer Store";
        side = "cop";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 400, 80 },
            { "hgun_P07_snds_F", "Stun Pistol", 100, 20 },
            { "Binocular", "", 5, 1 },
            { "ItemGPS", "", 50, 10 },
            { "Medikit", "", 50, 10 },
            { "ToolKit", "", 70, 15 },
            { "NVGoggles", "", 200, 40 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 2 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 5 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 50 }
        };
    };

    //Cop Shops
    class cop_basic {
        name = "Recruit Store";
        side = "cop";
        licence = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a recruit or higher to access this store!" };
        items[] = {
            { "SMG_05_F", "Rubber Bullet Gun (MP5K)", 600, 650 },
            { "arifle_MXC_Black_F", "", 1000, 650 },
            { "Binocular", "", 5, 1 },
            { "ItemGPS", "", 50, 10 },
            { "Medikit", "", 50, 10 },
            { "ToolKit", "", 70, 15 },
            { "NVGoggles", "", 200, 40 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "MP5K 30Rnd 9x21 Rubber Rounds Magazine", 7},
            { "30Rnd_9x21_Mag_SMG_02", "MP5K 30Rnd 9x21 Lethal Rounds Magazine", 10},
            { "30Rnd_65x39_caseless_mag", "", 12 }
        };
        accs[] = {
          { "acc_flashlight", "", 10 },
          { "optic_Holosight_blk_F", "", 25 },
          { "optic_Hamr", "", 50 },
          { "optic_Aco", "", 15 },
          { "muzzle_snds_L", "", 50 },
          { "muzzle_snds_H", "", 50 }
        };
    };

    class cop_patrol {
        name = "Deputy's Shop";
        side = "cop";
        licence = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a deputy or above to access this store!" };
        items[] = {
            { "arifle_MX_Black_F", "", 700, 140 },
            { "arifle_MXC_Black_F", "", 1000, 200 },
            { "arifle_MXM_Black_F", "", 1200, 240 },
            { "arifle_SPAR_01_blk_F", "", 800, 160 },
            { "arifle_SPAR_03_blk_F", "", 1500, 300 },
            { "SMG_01_F", "", 500, 100 },
            { "SMG_02_F", "", 500, 100 }

        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 12 },
            { "30Rnd_556x45_Stanag", "", 12 },
            { "20Rnd_762x51_Mag", "", 20 },
            { "30Rnd_9x21_Mag", "", 7 },
			{"30Rnd_45ACP_Mag_SMG_01", "", 12}
        };
        accs[] = {
          { "acc_flashlight", "", 10 },
          { "optic_Holosight_blk_F", "", 25 },
          { "optic_Hamr", "", 50 },
          { "optic_Aco", "", 15 },
          { "acc_pointer_IR", "", 25 },
          { "optic_ERCO_blk_F", "", 75 },
          { "optic_MRCO", "", 75 },
          { "muzzle_snds_L", "", 50 },
          { "muzzle_snds_H", "", 50 },
		  {"muzzle_snds_B", "", 50 },
		  {"muzzle_snds_65_TI_blk_F", "", 50 }
        };
    };

    class cop_sergeant {
        name = "Sergeant's Shop";
        side = "cop";
        licence = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a sergeant or above to access this store!" };
        items[] = {
            { "srifle_DMR_03_F", "", 3000, 600 },
            { "srifle_DMR_02_F", "", 2250, 400 },
            { "hgun_Pistol_heavy_02_F", "", 600, 120 }

        };
        mags[] = {
            { "10Rnd_338_Mag", "", 50 },
            { "20Rnd_762x51_Mag", "", 20 },
            { "6Rnd_45ACP_Cylinder", "", 10 }
        };
        accs[] = {
            { "optic_AMS", "", 800 },
			{"muzzle_snds_B", "", 50 },
			{"muzzle_snds_338_black", "", 50 }
			
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 50, 10 },
            { "Binocular", "", 10, 2 },
            { "Medikit", "", 50, 10 },
            { "NVGoggles", "", 50, 10 }
        };
        mags[] = {};
        accs[] = {};
    };
};
