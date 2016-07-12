/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*/
class VirtualShops {
    //Virtual Shops



    class market {
        name = "STR_Shops_Market";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "banana","orange", "papaya", "redgull", "tbacon", "pickaxe", "hoe","axe", "bucket","shears","toolkit", "fuelFull", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw","campingchair","orangejuice","cola"};
    };

    class trademarket {
        name = "STR_Trade_Market";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "pickaxe", "hoe","axe", "rabbit_raw", "rabbit", "banana","orange", "papaya","cocoa","wheat","sugarcane", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw","milkbucket","seawaterbucket","waterbucket","cocoapowder","sugar","flour","butter","cheese","wool_processed","wool","eggs","timber","oilProcessed","copper_refined","iron_refined","tin_refined","saltRefined","glass","diamond_Cut","cement","copper_unrefined","tin_unrefined","iron_unrefined","salt_unrefined","sand","diamond_uncut","rock","oil_unprocessed"};
    };

    class farmmarket {
        name = "STR_Shops_FarmersMarket";
        side = "civ";
        licence = "farming";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle","orangejuice","rabbit", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw", "papaya","cocoa","wheat","banana","sugarcane","orange","campingchair","milkbucket","bucket","shears","cocoapowder","sugar","flour","butter","cheese","seawaterbucket","waterbucket","wool_processed","wool","eggs" };
    };

    class seedmarket {
        name = "STR_Shops_SeedMarket";
        side = "civ";
        licence = "farming";
        level[] = { "", "", -1, "" };
        items[] = {"papayaseeds", "cocoaseeds", "bananaseeds", "sugarcaneseeds","orangeseeds", "hoe","campingchair", "axe"};
    };

    class lumberyard {
        name = "STR_Shops_LumberMarket";
        side = "civ";
        licence = "lumbering";
        level[] = { "", "", -1, "" };
        items[] = {"axe","lumber","timber"};
    };


    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "redgull", "tbacon", "toolkit", "fuelFull", "defibrillator", "jaws" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        licence = "rebel";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "ziptie", "rabbit","redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull",  "boltcutter", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "ziptie", "rabbit", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "boltcutter", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "cocaine_processed", "heroin_processed", "marijuana", "poppyseeds","cocaineseeds","cannabisseeds","cocaine_unprocessed","cannabis","heroin_unprocessed" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        licence = "";
        level[] = { "", "", -1, "" };
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "redgull", "toolkit", "fuelFull", "defusekit", "defibrillator", "pumpwedge", "campingchair" };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
  //Virtual Items

  //////////////////////////////
  //FARMING - FARMING SEEDS
  //////////////////////////////
  class sugarcaneseeds {
    variable = "sugarcaneseeds";
    displayName = "STR_Item_SugarcaneSeed";
    canUse = 1;
    weight = 1;
    buyPrice = 5;
    sellPrice = 1;
    illegal = false;
    edible = -1;
    icon = "icons\ico_sugarcane_seed.paa";
    };
  class papayaseeds {
    variable = "papayaseeds";
    displayName = "STR_Item_PapayaSeed";
    canUse = 1;
    weight = 1;
    buyPrice = 5;
    sellPrice = 1;
    illegal = false;
    edible = -1;
    icon = "icons\ico_papaya_seed.paa";
  };
  class orangeseeds {
    variable = "orangeseeds";
    displayName = "STR_Item_OrangeSeed";
    canUse = 1;
    weight = 1;
    buyPrice = 6;
    sellPrice = 1;
    illegal = false;
    edible = -1;
    icon = "icons\ico_orange_seed.paa";
  };
  class cocoaseeds {
    variable = "cocoaseeds";
    displayName = "STR_Item_CocoaSeed";
    canUse = 1;
    weight = 1;
    buyPrice = 6;
    sellPrice = 1;
    illegal = false;
    edible = -1;
    icon = "icons\ico_cocoa_seed.paa";
  };
  class bananaseeds {
    variable = "bananaseeds";
    displayName = "STR_Item_BananaSeed";
    canUse = 1;
    weight = 1;
    buyPrice = 7;
    sellPrice = 1;
    illegal = false;
    edible = -1;
    icon = "icons\ico_banana_seed.paa";
  };
  class wheatseeds {
    variable = "wheatseeds";
    displayName = "STR_Item_WheatSeed";
    canUse = 1;
    weight = 1;
    buyPrice = -1;
    illegal = false;
    sellPrice = 1;
    edible = -1;
    icon = "icons\ico_wheat_seeds.paa";
  };
  class poppyseeds {
    variable = "poppyseeds";
    displayName = "STR_Item_PoppySeed";
    canUse = 1;
    weight = 1;
    buyPrice = 200;
    sellPrice = 10;
    illegal = true;
    edible = -1;
    icon = "icons\ico_seed.paa";
  };
  class cannabisseeds {
    variable = "cannabisseeds";
    displayName = "STR_Item_CannabisSeed";
    canUse = 1;
    weight = 1;
    buyPrice = 100;
    sellPrice = 10;
    illegal = true;
    edible = -1;
    icon = "icons\ico_seed.paa";
  };
  class cocaineseeds {
    variable = "cocaineseeds";
    displayName = "STR_Item_CocaineSeed";
    canUse = 1;
    weight = 1;
    buyPrice = 150;
    sellPrice = 10;
    illegal = true;
    edible = -1;
    icon = "icons\ico_seed.paa";
  };

  //////////////////////////////
  //FARMING - RAW RESOURCES
  //////////////////////////////
  class sugarcane {
    variable = "sugarcane";
    weight = 1;
    displayName = "STR_Item_Sugarcane";
    buyPrice = 15;
    sellPrice = 7;
    illegal = false;
    edible = -1;
    icon = "icons\ico_sugarcane.paa";
  };
  class papaya {
    variable = "papaya";
    weight = 2;
    displayName = "STR_Item_Papaya";
    canUse = 1;
    buyPrice = 16;
    sellPrice = 11;
    illegal = false;
    edible = 5;
    icon = "icons\ico_papaya.paa";
  };
  class orange {
    variable = "orange";
    weight = 2;
    displayName = "STR_Item_Orange";
    canUse = 1;
    buyPrice = 12;
    sellPrice = 4;
    illegal = false;
    edible = 10;
    icon = "icons\ico_orange.paa";
  };
  class cocoa {
    variable = "cocoa";
    weight = 2;
    displayName = "STR_Item_Cocoa";
    buyPrice = 16;
    sellPrice = 8;
    illegal = false;
    edible = -1;
    icon = "icons\ico_cocoa.paa";
  };
  class banana {
    variable = "banana";
    weight = 2;
    displayName = "STR_Item_Banana";
    canUse = 1;
    buyPrice = 14;
    sellPrice = 7;
    illegal = false;
    edible = -1;
    icon = "icons\ico_banana.paa";
  };
  class wheat {
    variable = "wheat";
    displayName = "STR_Item_Wheat";
    weight = 1;
    buyPrice = 10;
    illegal = false;
    sellPrice = 5;
    edible = -1;
    icon = "icons\ico_wheat.paa";
  };
  class lumber {
    variable = "lumber";
    displayName = "STR_Item_Lumber";
    weight = 5;
    buyPrice = 20;
    sellPrice = 10;
    illegal = false;
    edible = -1;
    icon = "icons\ico_lumber.paa";
  };
  class milkbucket {
    variable = "milkbucket";
    displayName = "STR_Item_MilkBucket";
    canUse = 1;
    weight = 5;
    buyPrice = 40;
    sellPrice = 20;
    illegal = false;
    edible = -1;
    icon = "icons\ico_bucket_full.paa";
  };
  class seawaterbucket {
    variable = "seawaterbucket";
    displayName = "STR_Item_SeaWaterBucket";
    weight = 5;
    buyPrice = 20;
    sellPrice = 10;
    illegal = false;
    icon = "icons\ico_bucket_full.paa";
  };
  class eggs {
    variable = "eggs";
    displayName = "STR_Item_Eggs";
    weight = 2;
    buyPrice = 20;
    sellPrice = 10;
    illegal = false;
    edible = -1;
    icon = "icons\ico_egg.paa";
  };
  class wool {
    variable = "wool";
    displayName = "STR_Item_Wool";
    weight = 4;
    buyPrice = 40;
    illegal = false;
    sellPrice = 15;
    edible = -1;
    icon = "icons\ico_wool.paa";
  };

  //////////////////////////////
  //PROCESSING - TIER 1
  //////////////////////////////

  class sugar {
    variable = "sugar";
    displayName = "STR_Item_Sugar";
    weight = 1;
    buyPrice = 30;
    sellPrice = 14;
    illegal = false;
    edible = 2;
    icon = "icons\ico_sugar.paa";
  };
  class flour {
    variable = "flour";
    displayName = "STR_Item_Flour";
    weight = 1;
    buyPrice = 20;
    illegal = false;
    sellPrice = 10;
    edible = -1;
    icon = "icons\ico_flour.paa";
  };
  class cocoapowder {
    variable = "cocoapowder";
    displayName = "STR_Item_CocoaPowder";
    weight = 1;
    buyPrice = 32;
    sellPrice = 16;
    illegal = false;
    edible = 2;
    icon = "icons\ico_cocoapowder.paa";
  };
  class butter {
    variable = "butter";
    displayName = "STR_Item_Butter";
    weight = 1;
    buyPrice = 20;
    sellPrice = 10;
    illegal = false;
    edible = 2;
    icon = "icons\ico_butter.paa";
  };
  class cheese {
    variable = "cheese";
    displayName = "STR_Item_Cheese";
    canUse = 1;
    weight = 1;
    buyPrice = 25;
    sellPrice = 12;
    illegal = false;
    edible = 5;
    icon = "icons\ico_cheese.paa";
  };
  class timber {
    variable = "timber";
    displayName = "STR_Item_Timber";
    weight = 3;
    buyPrice = 40;
    sellPrice = 30;
    illegal = false;
    edible = -1;
    icon = "icons\ico_timber.paa";
  };
  class oil_processed {
    variable = "oilProcessed";
    displayName = "STR_Item_OilP";
    weight = 6;
    buyPrice = 80;
    sellPrice = 40;
    illegal = false;
    edible = -1;
    icon = "icons\ico_oilProcessed.paa";
  };
  class copper_refined {
    variable = "copper_refined";
    displayName = "STR_Item_CopperIngot";
    weight = 3;
    buyPrice = 40;
    sellPrice = 20;
    illegal = false;
    edible = -1;
    icon = "icons\ico_copper.paa";
  };
  class iron_refined {
    variable = "iron_refined";
    displayName = "STR_Item_IronIngot";
    weight = 3;
    buyPrice = 50;
    sellPrice = 25;
    illegal = false;
    edible = -1;
    icon = "icons\ico_iron.paa";
  };
  class tin_refined {
    variable = "tin_refined";
    displayName = "STR_Item_TinIngot";
    weight = 3;
    buyPrice = 40;
    sellPrice = 20;
    illegal = false;
    edible = -1;
    icon = "icons\ico_iron.paa";
  };
  class salt_refined {
    variable = "saltRefined";
    displayName = "STR_Item_SaltR";
    weight = 1;
    buyPrice = 30;
    sellPrice = 15;
    illegal = false;
    edible = -1;
    icon = "icons\ico_saltProcessed.paa";
  };
  class glass {
    variable = "glass";
    displayName = "STR_Item_Glass";
    weight = 1;
    buyPrice = 40;
    sellPrice = 20;
    illegal = false;
    edible = -1;
    icon = "icons\ico_glass.paa";
  };
  class diamond_cut {
    variable = "diamondCut";
    displayName = "STR_Item_DiamondC";
    weight = 2;
    buyPrice = 200;
    sellPrice = 80;
    illegal = false;
    edible = -1;
    icon = "icons\ico_diamondCut.paa";
  };
  class cement {
    variable = "cement";
    displayName = "STR_Item_CementBag";
    weight = 5;
    buyPrice = 40;
    sellPrice = 25;
    illegal = false;
    edible = -1;
    icon = "icons\ico_cement.paa";
  };
  class waterbucket {
    variable = "waterbucket";
    displayName = "STR_Item_WaterBucket";
    weight = 5;
    buyPrice = 30;
    sellPrice = 15;
    illegal = false;
    icon = "icons\ico_bucket_full.paa";
  };
  class wool_processed {
    variable = "wool_processed";
    displayName = "STR_Item_WoolProcessed";
    weight = 6;
    buyPrice = 80;
    illegal = false;
    sellPrice = 40;
    edible = -1;
    icon = "icons\ico_wool_processed.paa";
  };
  //////////////////////////////
  // FARMING - FARMING TOOLS
  //////////////////////////////
  class pickaxe {
    variable = "pickaxe";
    displayName = "STR_Item_Pickaxe";
    weight = 2;
    buyPrice = 15;
    sellPrice = 5;
    illegal = false;
    edible = -1;
    icon = "icons\ico_pickaxe.paa";
  };
  class hoe {
    variable = "hoe";
    displayName = "STR_Item_Hoe";
    weight = 2;
    buyPrice = 15;
    sellPrice = 5;
    illegal = false;
    edible = -1;
    icon = "icons\ico_hoe.paa";
  };
  class axe {
    variable = "axe";
    displayName = "STR_Item_Axe";
    weight = 2;
    buyPrice = 15;
    sellPrice = 5;
    illegal = false;
    edible = -1;
    icon = "icons\ico_axe.paa";
  };
  class shears {
    variable = "shears";
    displayName = "STR_Item_Shears";
    weight = 2;
    buyPrice = 20;
    sellPrice = 5;
    illegal = false;
    edible = -1;
    icon = "icons\ico_shears.paa";
  };
  class bucket {
    variable = "bucket";
    displayName = "STR_Item_Bucket";
    weight = 3;
    buyPrice = 5;
    sellPrice = 1;
    illegal = false;
    icon = "icons\ico_bucket.paa";
  };



  //////////////////////////////
  // MISC - INTERACTIVE OBJECTS
  //////////////////////////////
  class campingchair {
    variable = "campingchair";
    displayName = "STR_Item_CampingChair";
    canUse = 1;
    weight = 5;
    buyPrice = 15;
    sellPrice = 5;
    illegal = false;
    edible = 100;
    icon = "icons\ico_chair.paa";
  };
  class defibrillator {
    variable = "defibrillator";
    displayName = "STR_Item_Defibrillator";
    canUse = 1;
    weight = 4;
    buyPrice = 5000;
    sellPrice = 1000;
    illegal = false;
    edible = -1;
    icon = "icons\ico_defibrillator.paa";
  };
  class toolkit {
    variable = "toolkit";
    displayName = "STR_Item_Toolkit";
    canUse = 1;
    weight = 4;
    buyPrice = 100;
    sellPrice = 20;
    illegal = false;
    edible = -1;
    icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
  };
  class fuelEmpty {
    variable = "fuelEmpty";
    displayName = "STR_Item_FuelE";
    weight = 2;
    buyPrice = 5;
    sellPrice = 1;
    illegal = false;
    edible = -1;
    icon = "icons\ico_fuelEmpty.paa";
  };
  class fuelFull {
    variable = "fuelFull";
    displayName = "STR_Item_FuelF";
    canUse = 1;
    weight = 5;
    buyPrice = 50;
    sellPrice = 10;
    illegal = false;
    edible = -1;
    icon = "icons\ico_fuel.paa";
  };
  class spikeStrip {
    variable = "spikeStrip";
    displayName = "STR_Item_SpikeStrip";
    canUse = 1;
    weight = 15;
    buyPrice = 150;
    sellPrice = 30;
    illegal = true;
    edible = -1;
    icon = "icons\ico_spikeStrip.paa";
  };
  class lockpick {
    variable = "lockpick";
    displayName = "STR_Item_Lockpick";
    canUse = 1;
    weight = 1;
    buyPrice = 60;
    sellPrice = 20;
    illegal = true;
    edible = -1;
    icon = "icons\ico_lockpick.paa";
  };
  class pumpwedge {
    variable = "pumpwedge";
    displayName = "STR_Item_Pumpwedge";
    canUse = 1;
    weight = 2;
    buyPrice = 45;
    sellPrice = 15;
    illegal = true;
    edible = -1;
    icon = "icons\ico_lockpick.paa";
  };
  class jaws {
    variable = "jaws";
    displayName = "STR_Item_Jaws";
    canUse = 0;
    weight = 2;
    buyPrice = 500;
    sellPrice = 0;
    illegal = false;
    edible = -1;
    icon = "icons\ico_Jaws.paa";
  };

  class ziptie {
        variable = "ziptie";
        displayName = "STR_Item_Ziptie";
        weight = 1;
        buyPrice = 120;
        sellPrice = 30;
        illegal = true;
        edible = -1;
        icon = "icons\zipties.paa";
    };



  //////////////////////////////
  // MISC - BANK ROBBERY
  //////////////////////////////
  class blastingcharge {
    variable = "blastingCharge";
    displayName = "STR_Item_BCharge";
    canUse = 1;
    weight = 15;
    buyPrice = 600;
    sellPrice = 120;
    illegal = true;
    edible = -1;
    icon = "icons\ico_blastingCharge.paa";
  };
  class boltcutter {
    variable = "boltCutter";
    displayName = "STR_Item_BCutter";
    canUse = 1;
    weight = 5;
    buyPrice = 100;
    sellPrice = 20;
    illegal = true;
    edible = -1;
    icon = "icons\ico_boltCutter.paa";
  };
  class defusekit {
    variable = "defuseKit";
    displayName = "STR_Item_DefuseKit";
    canUse = 1;
    weight = 2;
    buyPrice = 50;
    sellPrice = 10;
    illegal = true;
    edible = -1;
    icon = "icons\ico_defuseKit.paa";
  };
  class goldbar {
    variable = "goldBar";
    displayName = "STR_Item_GoldBar";
    weight = 12;
    buyPrice = 1500;
    sellPrice = 1000;
    illegal = true;
    edible = -1;
    icon = "icons\ico_goldBar.paa";
  };


  //////////////////////////////
  // HOUSING
  //////////////////////////////
  class storagesmall {
    variable = "storageSmall";
    displayName = "STR_Item_StorageBS";
    canUse = 1;
    weight = 5;
    buyPrice = 7500;
    sellPrice = 5000;
    illegal = false;
    edible = -1;
    icon = "icons\ico_storageSmall.paa";
  };
  class storagebig {
    variable = "storageBig";
    displayName = "STR_Item_StorageBL";
    canUse = 1;
    weight = 10;
    buyPrice = 10000;
    sellPrice = 5000;
    illegal = false;
    edible = -1;
    icon = "icons\ico_storageBig.paa";
  };
  //TODO: Add Housing Security Y Item


  //////////////////////////////
  // MINING - MINERALS
  //////////////////////////////

  class copper_unrefined {
    variable = "copper_unrefined";
    displayName = "STR_Item_CopperOre";
    weight = 4;
    buyPrice = 20;
    sellPrice = 5;
    illegal = false;
    edible = -1;
    icon = "icons\ico_copperOre.paa";
  };
  class tin_unrefined {
    variable = "tin_unrefined";
    displayName = "STR_Item_TinOre";
    weight = 4;
    buyPrice = 20;
    sellPrice = 5;
    illegal = false;
    edible = -1;
    icon = "icons\ico_copperOre.paa";
  };
  class iron_unrefined {
    variable = "iron_unrefined";
    displayName = "STR_Item_IronOre";
    weight = 5;
    buyPrice = 25;
    sellPrice = 7;
    illegal = false;
    edible = -1;
    icon = "icons\ico_ironOre.paa";
  };
  class salt_unrefined {
    variable = "salt_refined";
    displayName = "STR_Item_Salt";
    weight = 3;
    buyPrice = 15;
    sellPrice = 4;
    illegal = false;
    edible = -1;
    icon = "icons\ico_saltUnprocessed.paa";
  };
  class sand {
    variable = "sand";
    displayName = "STR_Item_Sand";
    weight = 3;
    buyPrice = 10;
    sellPrice = 2;
    illegal = false;
    edible = -1;
    icon = "icons\ico_sand.paa";
  };
  class diamond_uncut {
    variable = "diamond_uncut";
    displayName = "STR_Item_DiamondU";
    weight = 4;
    buyPrice = 80;
    sellPrice = 40;
    illegal = false;
    edible = -1;
    icon = "icons\ico_diamondUncut.paa";
  };
  class rock {
    variable = "rock";
    displayName = "STR_Item_Rock";
    weight = 6;
    buyPrice = 40;
    sellPrice = 20;
    illegal = false;
    edible = -1;
    icon = "icons\ico_rock.paa";
  };
  class oil_unprocessed {
  variable = "oil_unprocessed";
  displayName = "STR_Item_OilU";
  weight = 7;
  buyPrice = 20;
  sellPrice = 10;
  illegal = false;
  edible = -1;
  icon = "icons\ico_oil_unprocessed.paa";
  };


  //////////////////////////////
  // DRUGS - UNPROCESSED
  //////////////////////////////
  class heroin_unprocessed {
    variable = "heroin_unprocessed";
    displayName = "STR_Item_HeroinU";
    weight = 3;
    buyPrice = 540;
    sellPrice = 360;
    illegal = true;
    edible = -1;
    icon = "icons\ico_heroin_unprocessed.paa";
    processedItem = "heroin_processed";
  };
  class heroin_processed {
    variable = "heroin_processed";
    displayName = "STR_Item_HeroinP";
    weight = 2;
    buyPrice = 850;
    sellPrice = 650;
    illegal = true;
    edible = -1;
    icon = "icons\ico_heroin_processed.paa";
  };
  class cannabis {
    variable = "cannabis";
    displayName = "STR_Item_Cannabis";
    weight = 2;
    buyPrice = 45;
    sellPrice = 25;
    illegal = true;
    edible = -1;
    icon = "icons\ico_cannabis.paa";
    processedItem = "marijuana";
  };
  class marijuana {
    variable = "marijuana";
    displayName = "STR_Item_Marijuana";
    weight = 1;
    buyPrice = 88;
    sellPrice = 56;
    illegal = true;
    edible = -1;
    icon = "icons\ico_marijuana.paa";
  };
  class cocaine_unprocessed {
    variable = "cocaine_unprocessed";
    displayName = "STR_Item_CocaineU";
    weight = 2;
    buyPrice = 80;
    sellPrice = 55;
    illegal = true;
    edible = -1;
    icon = "icons\ico_cocaine_unprocessed.paa";
    processedItem = "cocaine_processed";
  };
  class cocaine_processed {
    variable = "cocaine_processed";
    displayName = "STR_Item_CocaineP";
    weight = 1;
    buyPrice = 150;
    sellPrice = 133;
    illegal = true;
    edible = -1;
    icon = "icons\ico_cocaine_processed.paa";
  };


  //////////////////////////////
  // CONSUMABLES - DRINK
  //////////////////////////////
  class redgull {
    variable = "redgull";
    displayName = "STR_Item_RedGull";
    canUse = 1;
    weight = 1;
    buyPrice = 50;
    sellPrice = 10;
    illegal = false;
    edible = 100;
    icon = "icons\ico_redgull.paa";
  };

  class coffee {
    variable = "coffee";
    displayName = "STR_Item_Coffee";
    canUse = 1;
    weight = 1;
    buyPrice = 2;
    sellPrice = 1;
    illegal = false;
    edible = 50;
    icon = "icons\ico_coffee.paa";
  };

  class waterBottle {
    variable = "waterBottle";
    displayName = "STR_Item_WaterBottle";
    canUse = 1;
    weight = 1;
    buyPrice = 2;
    sellPrice = 1;
    illegal = false;
    edible = 25;
    icon = "icons\ico_waterBottle.paa";
  };

  class cola {
    variable = "cola";
    displayName = "STR_Item_Cola";
    canUse = 1;
    weight = 1;
    buyPrice = 10;
    sellPrice = 5;
    illegal = false;
    edible = 75;
    icon = "icons\ico_cola.paa";
  };

  class orangejuice {
    variable = "orangejuice";
    displayName = "STR_Item_OrangeJuice";
    canUse = 1;
    weight = 1;
    buyPrice = 5;
    sellPrice = 1;
    illegal = false;
    edible = 50;
    icon = "icons\ico_orange_juice.paa";
  };

    //Food
    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        canUse = 1;
        weight = 1;
        buyPrice = 5;
        sellPrice = 1;
        illegal = false;
        edible = 10;
        icon = "icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        canUse = 1;
        weight = 1;
        buyPrice = 6;
        sellPrice = 1;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    class cake {
        variable = "cake";
        displayName = "STR_Item_Cake";
        canUse = 1;
        weight = 2;
        buyPrice = 20;
        sellPrice = 2;
        illegal = false;
        edible = 50;
        icon = "icons\ico_cake.paa";
    };
    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = 20;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        canUse = 1;
        weight = 1;
        buyPrice = 40;
        sellPrice = 30;
        illegal = false;
        edible = 25;
        icon = "icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = 8;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        canUse = 1;
        weight = 1;
        buyPrice = 15;
        sellPrice = 8;
        illegal = false;
        edible = 20;
        icon = "icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        canUse = 1;
        weight = 1;
        buyPrice = 12;
        sellPrice = 10;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = 11;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        canUse = 1;
        weight = 2;
        buyPrice = 16;
        sellPrice = 11;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        canUse = 1;
        weight = 3;
        buyPrice = 120;
        sellPrice = 50;
        illegal = false;
        edible = 90;
        icon = "icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = 30;
        sellPrice = 15;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        canUse = 1;
        weight = 2;
        buyPrice = 40;
        sellPrice = 30;
        illegal = false;
        edible = 50;
        icon = "icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = 120;
        sellPrice = 80;
        illegal = false;
        edible = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        canUse = 1;
        weight = 3;
        buyPrice = 200;
        sellPrice = 120;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = 300;
        sellPrice = 200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        canUse = 1;
        weight = 2;
        buyPrice = 600;
        sellPrice = 300;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        icon = "icons\ico_whole_chickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        canUse = 1;
        weight = 1;
        buyPrice = 15;
        sellPrice = 5;
        illegal = false;
        edible = 2;
        icon = "icons\ico_whole_chicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = 30;
        sellPrice = 15;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chicken_drumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        canUse = 1;
        weight = 115;
        buyPrice = 60;
        sellPrice = 30;
        illegal = false;
        edible = 45;
        icon = "icons\ico_chicken_drumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = 40;
        sellPrice = 20;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        canUse = 1;
        weight = 2;
        buyPrice = 80;
        sellPrice = 40;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = 40;
        sellPrice = 20;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        canUse = 1;
        weight = 2;
        buyPrice = 80;
        sellPrice = 40;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };





};
