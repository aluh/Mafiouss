/*
*    class:
*        variable = Variable Name
*        displayName = Licence Name
*        price = Licence Price
*        illegal = Illegal Licence
*        side = side indicator
*/
class Licences {
    //Civilian Licences
    class driver {
        variable = "driver";
        displayName = "STR_Licence_Driver";
        price = 500;
        illegal = false;
        side = "civ";
    };

    class boat {
        variable = "boat";
        displayName = "STR_Licence_Boat";
        price = 1000;
        illegal = false;
        side = "civ";
    };

    class pilot {
        variable = "pilot";
        displayName = "STR_Licence_Pilot";
        price = 25000;
        illegal = false;
        side = "civ";
    };

    class trucking {
        variable = "trucking";
        displayName = "STR_Licence_Truck";
        price = 8000;
        illegal = false;
        side = "civ";
    };

    class gun {
        variable = "gun";
        displayName = "STR_Licence_Firearm";
        price = 10000;
        illegal = false;
        side = "civ";
    };

    class farming {
        variable = "farming";
        displayName = "STR_Licence_Farming";
        price = 2000;
        illegal = false;
        side = "civ";
    };
    class lumbering {
        variable = "lumbering";
        displayName = "STR_Licence_Lumbering";
        price = 2500;
        illegal = false;
        side = "civ";
    };
    class dive {
        variable = "dive";
        displayName = "STR_Licence_Diving";
        price = 2000;
        illegal = false;
        side = "civ";
    };

    class home {
        variable = "home";
        displayName = "STR_Licence_Home";
        price = 75000;
        illegal = false;
        side = "civ";
    };


    //NEW PROCESSING LICENCES
    class grain {
        // Used for Sugarcane, Cocoa, Wheat processing
        variable = "grain";
        displayName = "STR_Licence_GrainP";
        price = 2000;
        illegal = false;
        side = "civ";
    };
    class dairy {
        // Used for Cheese, Butter Processing (Milk does not need to be processed)
        variable = "dairy";
        displayName = "STR_Licence_DairyP";
        price = 2000;
        illegal = false;
        side = "civ";
    };
    class timber {
        // Used for turning lumber into timber
        variable = "timber";
        displayName = "STR_Licence_TimberP";
        price = 2000;
        illegal = false;
        side = "civ";
    };
    class mineral {
        // Used for Iron, Copper, Tin
        variable = "mineral";
        displayName = "STR_Licence_MineralP";
        price = 3000;
        illegal = false;
        side = "civ";
    };
    class rareminerals {
        // Used for Diamond, Uranium, Gold
        variable = "raremineral";
        displayName = "STR_Licence_RareMineralP";
        price = 5000;
        illegal = false;
        side = "civ";
    };
    class commercial {
        // Used for Diamond, Uranium, Gold
        variable = "commercial";
        displayName = "STR_Licence_CommercialP";
        price = 50000;
        illegal = false;
        side = "civ";
    };


    //Processing Licences
    class oil {
        variable = "oil";
        displayName = "STR_Licence_Oil";
        price = 10000;
        illegal = false;
        side = "civ";
    };

    class diamond {
        variable = "diamond";
        displayName = "STR_Licence_Diamond";
        price = 35000;
        illegal = false;
        side = "civ";
    };

    class salt {
        variable = "salt";
        displayName = "STR_Licence_Salt";
        price = 12000;
        illegal = false;
        side = "civ";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Licence_Sand";
        price = 14500;
        illegal = false;
        side = "civ";
    };

    class iron {
        variable = "iron";
        displayName = "STR_Licence_Iron";
        price = 9500;
        illegal = false;
        side = "civ";
    };

    class copper {
        variable = "copper";
        displayName = "STR_Licence_Copper";
        price = 8000;
        illegal = false;
        side = "civ";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Licence_Cement";
        price = 6500;
        illegal = false;
        side = "civ";
    };

    class medmarijuana {
        variable = "medmarijuana";
        displayName = "STR_Licence_Medmarijuana";
        price = 15000;
        illegal = false;
        side = "civ";
    };

    //Illegal Licences
    class cocaine {
        variable = "cocaine";
        displayName = "STR_Licence_Cocaine";
        price = 6900;
        illegal = true;
        side = "civ";
    };

    class heroin {
        variable = "heroin";
        displayName = "STR_Licence_Heroin";
        price = 10000;
        illegal = true;
        side = "civ";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Licence_Marijuana";
        price = 1200;
        illegal = true;
        side = "civ";
    };

    class rebel {
        variable = "rebel";
        displayName = "STR_Licence_Rebel";
        price = 75000;
        illegal = true;
        side = "civ";
    };

    //Cop Licences
    class cAir {
        variable = "cAir";
        displayName = "STR_Licence_Pilot";
        price = 15000;
        illegal = false;
        side = "cop";
    };

    class cg {
        variable = "cg";
        displayName = "STR_Licence_CG";
        price = 8000;
        illegal = false;
        side = "cop";
    };

    //Medic Licences
    class mAir {
        variable = "mAir";
        displayName = "STR_Licence_Pilot";
        price = 4000;
        illegal = false;
        side = "med";
    };
};
