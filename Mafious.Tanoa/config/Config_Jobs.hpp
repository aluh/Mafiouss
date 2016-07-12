/*

    Author: noms;

*/
/*
Example:

class ShopAssistant {
  displayName = "Shop Assistant"; //Name to be displayed
  rpxpReward = 10;  //RPXP reward to be rewarded every 5 minutes.
  cashReward = 10;  //Cash reward to be rewarded every 5 minutes.
  grantedItems[] = {{"shopItem", 1}, {"shopItem2", 1}}; //List of granted vItems (if required) to grant the player upon taking the job (items that help them do their job)
  grantedEquipment[] = {{"Weapon_ClassName",1},{"Clothing_ClassName",1 }};  //List of granted equipment (weapons, clothing, etc)
  grantedVehicleClass = "Vehicle_Class";  //Granted Vehicle Class (if one is required)
  requiredDeposit = 20; //The required deposit in order to start the job (to cover the cost of items/vehicles)

};

*/

class CfgJobs {
  class ShopAssistant
  {
    displayName = "Shop Assistant";
    description = "You are a shop assistant. Stay within 20m of the shop or you'll be fired!";
    rpxpReward = 10;
    cashReward = 10;
    requiredDeposit = 0;
  };










};
