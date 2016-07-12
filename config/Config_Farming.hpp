/*
* @File:   Config_Farming.hpp
* @Author: Ciaran "Ciaran" Langton <email@ciaranlangton.com>
*/
class CfgFarming {

  class Plants {
    growUpdateFrequency = 30; //Update every plant on the client in this time.
    maxPlants = 5; //Max amount of plants a client can have at once.
    levelStep = 5; //Number to divide by to calculate additional plants to harvest based on level

    /*
      class Plant_Type {
        displayName = "";
        lifeTime = 180; (If the plant hasn't been harvested in this time, it will die! (s))
        maturityTime = 60; (Time until the plant can be harvested in S.)
        plantItem = "fishseeds"; (Item used to plant this (seeds))
        harvestItems[] = {{"fish", 2}}; (Items retrieved on harvest)
        rpxpTier = 1; (The xp reward tier of the item)
        rewardAmountArray[] = {1,2,3}; (An array of numbers randomly selected to reward when the plant is farmed)
        farmWait = 5; (The amount in seconds a player must wait before farming is complete)
      };
    */
    class Papaya {
      displayName = "Papaya";
      lifeTime = (2 * 60);
      maturityTime = (1 * 60);
      plantItem = "papayaseeds";
      harvestItems[] = {{"papaya", 5}, {"papayaseeds", 3}};
      rpxpTier = 2;
      rewardAmountArray[] = {1,1,2,2};
      farmWait = 2;

      groundSinkHeight = 20;
      model = "a3\vegetation_f_exp\tree\t_cocosnucifera3s_tall_f.p3d";
      randomSink = 0;
    };

    class Cocoa {
      displayName = "Cocoa";
      lifeTime = (2 * 60);
      maturityTime = (1 * 60);
      plantItem = "cocoaseeds";
      harvestItems[] = {{"cocoa", 4}, {"cocoaseeds", 2}};
      rpxpTier = 3;
      rewardAmountArray[] = {1,1,1,2,2,3};
      farmWait = 4;

      groundSinkHeight = 1;
      model = "a3\vegetation_f_exp\crop\t_cacao_ripe_f.p3d";
      randomSink = 0;
    };

    class Sugarcane {
      displayName = "Sugarcane";
      lifeTime = (2 * 60);
      maturityTime = (1 * 60);
      plantItem = "sugarcaneseeds";
      harvestItems[] = {{"sugarcane", 6}, {"sugarcaneseeds", 4}};
      rpxpTier = 1;
      rewardAmountArray[] = {1,1,1,1,1,2};
      farmWait = 1;

      groundSinkHeight = 1;
      model = "a3\vegetation_f_exp\crop\b_sugarcane_mature_row_f.p3d";
      randomSink = 0;
    };

    class Wheat {
      displayName = "Wheat";
      lifeTime = (2 * 60);
      maturityTime = (1 * 60);
      plantItem = "wheatseeds";
      harvestItems[] = {{"wheat", 6}, {"wheatseeds", 4}};
      rpxpTier = 1;
      rewardAmountArray[] = {1,1,1,1,1,2};
      farmWait = 1;

      groundSinkHeight = 1;
      model = "a3\vegetation_f_exp\crop\b_sugarcane_mature_row_f.p3d";
      randomSink = 0;
    };



    class Banana {
      displayName = "Banana";
      lifeTime = (2 * 60);
      maturityTime = (1 * 60);
      plantItem = "bananaseeds";
      harvestItems[] = {{"banana", 4}, {"bananaseeds", 2}};
      rpxpTier = 2;
      rewardAmountArray[] = {1,1,1,2,2,2,2,3};
      farmWait = 3;

      groundSinkHeight = 1;
      model = "a3\vegetation_f_exp\crop\t_banana_slim_f.p3d";
      randomSink = 0;
    };

    class Orange {
      displayName = "Orange";
      lifeTime = (2 * 60);
      maturityTime = (1 * 60);
      plantItem = "orangeseeds";
      harvestItems[] = {{"orange", 3}, {"orangeseeds", 3}};
      rpxpTier = 1;
      rewardAmountArray[] = {1,1,1,1,1,2};
      farmWait = 3;

      groundSinkHeight = 1;
      model = "a3\vegetation_f_exp\tree\t_millettia_plantation_f.p3d";
      randomSink = 0;
    };



//  Lumber Trees

    class FicusS {
      displayName = "Lumber";
      plantItem = "ficus_small_sapling";
      harvestItems[] = {{"lumber", 4}};
      rpxpTier = 2;
      rewardAmountArray[] = {1,2,2,2,2,3};
      farmWait = 4;

    };

    class FicusM {
      displayName = "Lumber";
      plantItem = "ficus_med_sapling";
      harvestItems[] = {{"lumber", 4}};
      rpxpTier = 2;
      rewardAmountArray[] = {2,4,4,5,5,6};
      farmWait = 8;
    };

    class FicusB {
      displayName = "Lumber";
      plantItem = "ficus_big_sapling";
      harvestItems[] = {{"lumber", 4}};
      rpxpTier = 2;
      rewardAmountArray[] = {4,6,6,6,8,9};
      farmWait = 24;
    };

    class Palaquium {
      displayName = "Lumber";
      plantItem = "palaquium_sapling";
      harvestItems[] = {{"lumber", 4}};
      rpxpTier = 2;
      rewardAmountArray[] = {1,2,2,2,2,4};
      farmWait = 8;
    };

    class Cyathea {
      displayName = "Lumber";
      plantItem = "cyathea_sapling";
      harvestItems[] = {{"lumber", 4}};
      rpxpTier = 2;
      rewardAmountArray[] = {1,1,2,2,2,3};
      farmWait = 4;
    };

    class Inocarpus {
      displayName = "Lumber";
      plantItem = "incarpus_sapling";
      harvestItems[] = {{"lumber", 4}};
      rpxpTier = 2;
      rewardAmountArray[] = {2,3,4,4,4,5};
      farmWait = 12;
    };


    //Illegal Plants

    class Cannabis {
      displayName = "Cannabis";
      plantItem = "cannabisseeds";
      lifeTime = (2 * 60);
      maturityTime = (1 * 60);
      harvestItems[] = {{"cannabis", 4}, {"cannabisseeds", 2}};
      rpxpTier = 6;
      rewardAmountArray[] = {1,1,1,2,2,4};
      farmWait = 8;

      groundSinkHeight = 1;
      model = "a3\plants_f\bush\b_neriumo2d_f.p3d";
      randomSink = 0;

    };

    class Cocaine {
      displayName = "Cocaine";
      plantItem = "cocaineseeds";
      lifeTime = (4 * 60);
      maturityTime = (3 * 60);
      harvestItems[] = {{"cocaine_unprocessed", 4}, {"cocaineseeds", 2}};
      rpxpTier = 6;
      rewardAmountArray[] = {1,1,1,2,2,4};
      farmWait = 8;

      groundSinkHeight = 1;
      model = "a3\plants_f\bush\b_ficusc1s_f.p3d";
      randomSink = 0;
    };

    class Poppy {
      displayName = "Poppy";
      plantItem = "poppyseeds";
      lifeTime = (4 * 60);
      maturityTime = (3 * 60);
      harvestItems[] = {{"heroin_unprocessed", 4}, {"poppyseeds", 2}};
      rpxpTier = 6;
      rewardAmountArray[] = {1,1,1,2,2,4};
      farmWait = 8;

      groundSinkHeight = 0.5;
      model = "a3\plants_f\bush\b_neriumo2s_f.p3d";
      randomSink = 0;
    };
  };

  class Animals {
    class Goat_Random_F {
      action = "Milking";
      neededItems[] = {{"bucket", true}/*, {"stool", false}*/};
      products[] = {{"milkbucket", 1}};
      timeoutTime = (5 * 60);
      timeoutMsg = "This goat is not yet ready to be milked again yet.";
    };

    class Hen_random_F {
      action = "Collecting eggs";
      neededItems[] = {};
      products[] = {{"eggs", 1}};
      timeoutTime = (5 * 60);
      timeoutMsg = "This hen does not have any eggs for you to collect.";
    };

    class Sheep_random_F {
      action = "Shearing Sheep";
      neededItems[] = {{"shears", false}};
      products[] = {{"wool", 2}};
      timeoutTime = (10 * 60);
      timeoutMsg = "This sheep does not have any coat left!";
    };
  };

  class PlantZones {

  };
};
