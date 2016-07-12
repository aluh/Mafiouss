/*
EXAMPLE:
class CfgProcess
{
    class oil
    {
        licence = "oil"; //Licence Required
        title = "Oil Refinery"; //Title for Dialog
        text = "Refining Oil"; //Text for Progress Bar
        exp = 200; //EXP Received on Finish
        // ACTION ON MISSION.SQM  -- this addAction["Refine Oil",life_fnc_processMenu,"oil",0,false,false,"",'!life_is_processing'];
        class needed {
            class oilu {amount = 1;};
            class rock {amount = 1;};
        };
        class product {
            class oilp {amount = 1;};
        };
    };
};
*/

class CfgProcess
{

    ////////////////////////////////////////////////////////////////////////////
    /// Tier 1 Processing
    ////////////////////////////////////////////////////////////////////////////

    class sugarcane
    {
      licence = "grain";
      title = "Sugarcane Processing";
      text = "Processing Sugarcane";
      exp = 25;
      // this addAction["Process Sugarcane",life_fnc_processMenu,"sugarcane",0,false,false,"",'!life_is_processing && !life_action_inUse'];  this addAction[format["%1 ($%2)",getText(missionConfigFile >> "Licences" >> "grain" >> "displayName"), [(getNumber(missionConfigFile >> "Licences" >> "grain" >> "price"))] call life_fnc_numberText],life_fnc_buyLicence,"grain",0,false,false,"",' !licence_civ_grain && playerSide isEqualTo civilian '];
      class needed {
          class sugarcane {amount = 5;};
      };
      class product {
          class sugar {amount = 1;};
      };
    };

    class cocoa
    {
      licence = "grain";
      title = "Cocoa Processing";
      text = "Processing Cocoa";
      exp = 25;
      //this addAction["Process Cocoa",life_fnc_processMenu,"cocoa",0,false,false,"",'!life_is_processing && !life_action_inUse'];
      class needed {
          class cocoa {amount = 4;};
      };
      class product {
          class cocoapowder {amount = 1;};
      };
    };
    class flour
    {
      licence = "grain";
      title = "Flour Processing";
      text = "Processing Wheat";
      exp = 25;
      //this addAction["Process Wheat",life_fnc_processMenu,"flour",0,false,false,"",'!life_is_processing && !life_action_inUse'];
      class needed {
          class wheat {amount = 5;};
      };
      class product {
          class flour {amount = 1;};
      };
    };
    class butter
    {
      licence = "dairy";
      title = "Butter Churning";
      text = "Churning Butter";
      exp = 25;
      //this addAction["Churn Butter",life_fnc_processMenu,"butter",0,false,false,"",'!life_is_processing && !life_action_inUse'];      this addAction[format["%1 ($%2)",getText(missionConfigFile >> "Licences" >> "dairy" >> "displayName"), [(getNumber(missionConfigFile >> "Licences" >> "dairy" >> "price"))] call life_fnc_numberText],life_fnc_buyLicence,"dairy",0,false,false,"",' !licence_civ_dairy && playerSide isEqualTo civilian '];
      class needed {
          class milkbucket {amount = 1;};
      };
      class product {
          class butter {amount = 2;};
          class bucket {amount = 1;};
      };
    };
    class cheese
    {
      licence = "dairy";
      title = "Cheesemaking";
      text = "Making Cheese";
      exp = 25;
      //this addAction["Make Cheese",life_fnc_processMenu,"cheese",0,false,false,"",'!life_is_processing && !life_action_inUse'];      this addAction[format["%1 ($%2)",getText(missionConfigFile >> "Licences" >> "dairy" >> "displayName"), [(getNumber(missionConfigFile >> "Licences" >> "dairy" >> "price"))] call life_fnc_numberText],life_fnc_buyLicence,"dairy",0,false,false,"",' !licence_civ_dairy && playerSide isEqualTo civilian '];
      class needed {
          class milkbucket {amount = 1;};
      };
      class product {
          class cheese {amount = 4;};
          class bucket {amount = 1;};
      };
    };
    class wool
    {
      licence = "farming";
      title = "Wool Processing";
      text = "Processing Wool";
      exp = 25;
      //this addAction["Process Wool",life_fnc_processMenu,"wool",0,false,false,"",'!life_is_processing && !life_action_inUse'];      this addAction[format["%1 ($%2)",getText(missionConfigFile >> "Licences" >> "farming" >> "displayName"), [(getNumber(missionConfigFile >> "Licences" >> "farming" >> "price"))] call life_fnc_numberText],life_fnc_buyLicence,"farming",0,false,false,"",' !licence_civ_farming && playerSide isEqualTo civilian '];
      class needed {
          class wool {amount = 1;};
      };
      class product {
          class wool_processed {amount = 4;};
      };
    };


    class seawater
    {
      licence = "";
      title = "Desalinization Plant";
      text = "Desalinization in progress";
      exp = 10;
      //this addAction["Desalinate Seawater",life_fnc_processMenu,"seawater",0,false,false,"",'!life_is_processing && !life_action_inUse'];
      class needed {
          class seawaterbucket {amount = 1;};
      };
      class product {
          class waterbucket {amount = 1;};
          class salt {amount = 2;};
      };
    };
    ////////////////////////////////////////////////////////////////////////////
    /// Tier 2 Processing
    ////////////////////////////////////////////////////////////////////////////
    class timber
    {
      licence = "timber";
      title = "Timber Processor";
      text = "Cutting Lumber";
      exp = 25;
      // this addAction["Timber Processor",life_fnc_processMenu,"timber",0,false,false,"",'!life_is_processing && !life_action_inUse'];      this addAction[format["%1 ($%2)",getText(missionConfigFile >> "Licences" >> "timber" >> "displayName"), [(getNumber(missionConfigFile >> "Licences" >> "timber" >> "price"))] call life_fnc_numberText],life_fnc_buyLicence,"timber",0,false,false,"",' !licence_civ_timber && playerSide isEqualTo civilian '];
      class needed {
          class lumber {amount = 2;};
      };
      class product {
          class timber {amount = 1;};
      };
    };

    class cake
    {
      licence = "commercial";
      title = "Bakery - Cake";
      text = "Baking a Cake";
      exp = 25;
      //this addAction["Bake a Cake",life_fnc_processMenu,"cake",0,false,false,"",'!life_is_processing && !life_action_inUse'];      this addAction[format["%1 ($%2)",getText(missionConfigFile >> "Licences" >> "commercial" >> "displayName"), [(getNumber(missionConfigFile >> "Licences" >> "commercial" >> "price"))] call life_fnc_numberText],life_fnc_buyLicence,"commercial",0,false,false,"",' !licence_civ_commercial && playerSide isEqualTo civilian '];
      class needed {
          class flour {amount = 5;};
          class sugar {amount = 4;};
          class egg {amount = 2;};
          class butter {amount = 1;};
      };
      class product {
          class cake {amount = 2;};
      };
    };

    class donuts
    {
      licence = "commercial";
      title = "Bakery - Donuts";
      text = "Frying Donut";
      exp = 50;
      //this addAction["Bake Donuts",life_fnc_processMenu,"donuts",0,false,false,"",'!life_is_processing && !life_action_inUse'];      this addAction[format["%1 ($%2)",getText(missionConfigFile >> "Licences" >> "commercial" >> "displayName"), [(getNumber(missionConfigFile >> "Licences" >> "commercial" >> "price"))] call life_fnc_numberText],life_fnc_buyLicence,"commercial",0,false,false,"",' !licence_civ_commercial && playerSide isEqualTo civilian '];
      class needed {
          class salt {amount = 1;};
          class flour {amount = 3;};
          class sugar {amount = 2;};
          class milkbucket {amount = 1;};
          class butter {amount = 1;};
          class egg {amount = 3;};
      };
      class product {
          class donut {amount = 8;};
      };
    };

    class orange
    {
      licence = "commercial";
      title = "Orange Processing";
      text = "Processing Orange";
      exp = 25;
      //this addAction["Process Oranges",life_fnc_processMenu,"orange",0,false,false,"",'!life_is_processing && !life_action_inUse'];      this addAction[format["%1 ($%2)",getText(missionConfigFile >> "Licences" >> "commercial" >> "displayName"), [(getNumber(missionConfigFile >> "Licences" >> "commercial" >> "price"))] call life_fnc_numberText],life_fnc_buyLicence,"commercial",0,false,false,"",' !licence_civ_commercial && playerSide isEqualTo civilian '];
      class needed {
          class orange {amount = 4;};
      };
      class product {
          class orangejuice {amount = 1;};
      };
    };

    class cola
    {
      licence = "commercial";
      title = "Cola Processing";
      text = "Processing Cola";
      exp = 25;
      //this addAction["Make Cola",life_fnc_processMenu,"cola",0,false,false,"",'!life_is_processing && !life_action_inUse'];      this addAction[format["%1 ($%2)",getText(missionConfigFile >> "Licences" >> "commercial" >> "displayName"), [(getNumber(missionConfigFile >> "Licences" >> "commercial" >> "price"))] call life_fnc_numberText],life_fnc_buyLicence,"commercial",0,false,false,"",' !licence_civ_commercial && playerSide isEqualTo civilian '];
      class needed {
          class waterbucket {amount = 1;};
          class sugar {amount = 5;};
      };
      class product {
          class cola {amount = 5;};
      };
    };

    class redgull
    {
      licence = "commercial";
      title = "RedGull Processing";
      text = "Processing Redgull";
      exp = 25;
      //this addAction["Make RedGull",life_fnc_processMenu,"redgull",0,false,false,"",'!life_is_processing && !life_action_inUse'];      this addAction[format["%1 ($%2)",getText(missionConfigFile >> "Licences" >> "commercial" >> "displayName"), [(getNumber(missionConfigFile >> "Licences" >> "commercial" >> "price"))] call life_fnc_numberText],life_fnc_buyLicence,"commercial",0,false,false,"",' !licence_civ_commercial && playerSide isEqualTo civilian '];
      class needed {
          class waterbucket {amount = 2;};
          class sugar {amount = 15;};
      };
      class product {
          class cola {amount = 5;};
      };
    };

    class cement
    {
      licence = "mineral";
      title = "Cement Factory";
      text = "Mixing Cement";
      exp = 10;
      //this addAction["Mix Cement",life_fnc_processMenu,"cement",0,false,false,"",'!life_is_processing && !life_action_inUse'];      this addAction[format["%1 ($%2)",getText(missionConfigFile >> "Licences" >> "mineral" >> "displayName"), [(getNumber(missionConfigFile >> "Licences" >> "mineral" >> "price"))] call life_fnc_numberText],life_fnc_buyLicence,"mineral",0,false,false,"",' !licence_civ_mineral && playerSide isEqualTo civilian '];
      class needed {
          class rock {amount = 4;};
          class waterbucket {amount = 1;};
      };
      class product {
          class cement
          {amount = 1;};
      };
    };

    class iron
    {
      licence = "mineral";
      title = "Iron Smelting Plant";
      text = "Smelting Iron";
      exp = 10;
      //this addAction["Process Iron",life_fnc_processMenu,"iron",0,false,false,"",'!life_is_processing && !life_action_inUse'];
      class needed {
          class iron_unrefined {amount = 1;};
      };
      class product {
          class iron_refined
          {amount = 1;};
      };
    };
    class copper
    {
      licence = "mineral";
      title = "Copper Smelting Plant";
      text = "Smelting Copper";
      exp = 10;
      //this addAction["Process Copper",life_fnc_processMenu,"copper",0,false,false,"",'!life_is_processing && !life_action_inUse'];
      class needed {
          class copper_unrefined {amount = 1;};
      };
      class product {
          class copper_refined
          {amount = 1;};
      };
    };
    class tin
    {
      licence = "mineral";
      title = "Tin Smelting Plant";
      text = "Smelting Tin";
      exp = 10;
      //this addAction["Process Tin",life_fnc_processMenu,"tin",0,false,false,"",'!life_is_processing && !life_action_inUse'];
      class needed {
          class tin_unrefined {amount = 1;};
      };
      class product {
          class tin_refined
          {amount = 1;};
      };
    };
    class salt
    {
      licence = "mineral";
      title = "Salt Refining Plant";
      text = "Refine Salt";
      exp = 10;
      //this addAction["Refine Salt",life_fnc_processMenu,"salt",0,false,false,"",'!life_is_processing && !life_action_inUse'];
      class needed {
          class salt_unrefined {amount = 1;};
      };
      class product {
          class salt_refined
          {amount = 1;};
      };
    };
    class sand
    {
      licence = "mineral";
      title = "Glassworks";
      text = "Processing Sand";
      exp = 10;
      //this addAction["Process Sand",life_fnc_processMenu,"sand",0,false,false,"",'!life_is_processing && !life_action_inUse'];
      class needed {
          class sand {amount = 1;};
      };
      class product {
          class glass
          {amount = 1;};
      };
    };
    class diamond
    {
      licence = "mineral";
      title = "Diamond Processing";
      text = "Cutting Diamonds";
      exp = 10;
      //this addAction["Cut Diamonds",life_fnc_processMenu,"diamond",0,false,false,"",'!life_is_processing && !life_action_inUse'];
      class needed {
          class diamond_uncut {amount = 1;};
      };
      class product {
          class diamond_cut
          {amount = 1;};
      };
    };
    ////////////////////////////////////////////////////////////////////////////
    /// Tier 3 Processing
    ////////////////////////////////////////////////////////////////////////////



    ////////////////////////////////////////////////////////////////////////////
    /// Tier 4 Processing
    ////////////////////////////////////////////////////////////////////////////




    ////////////////////////////////////////////////////////////////////////////
    /// Tier 5 Processing
    ////////////////////////////////////////////////////////////////////////////




    ////////////////////////////////////////////////////////////////////////////
    /// Illegal Processing
    ////////////////////////////////////////////////////////////////////////////
    class weed
    {
      licence = "";
      title = "Cannabis Dryer";
      text = "Drying Cannabis";
      exp = 25;
      // this addAction["<t color='#FF0000'>Dry Cannabis</t>",life_fnc_processMenu,"weed",0,false,false,"",'!life_is_processing && !life_action_inUse'];
      class needed {
          class cannabis {amount = 1;};
      };
      class product {
          class marijuana {amount = 1;};
      };
    };
    class cocaine
    {
      licence = "";
      title = "Cocaine Processing";
      text = "Processing Cocaine Leaves";
      exp = 25;
      // this addAction["<t color='#FF0000'>Process Cocaine</t>",life_fnc_processMenu,"cocaine",0,false,false,"",'!life_is_processing && !life_action_inUse'];
      class needed {
          class cocaine_unprocessed {amount = 1;};
      };
      class product {
          class cocaine_processed {amount = 1;};
      };
    };
    class heroin
    {
      licence = "";
      title = "Cocaine Processing";
      text = "Processing Cocaine Leaves";
      exp = 25;
      // this addAction["<t color='#FF0000'>Process Poppies</t>",life_fnc_processMenu,"heroin",0,false,false,"",'!life_is_processing && !life_action_inUse'];
      class needed {
          class heroin_unprocessed {amount = 1;};
      };
      class product {
          class heroin_processed {amount = 1;};
      };
    };























};
