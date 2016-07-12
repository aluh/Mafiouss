/*
*    Format:
*        licences: ARRAY (This is for limiting spawn to certain things)
*           0: Licence Name
*           1: Licence Check Type
*                false: If licence isn't set
*                true: If licence is set
*           Example:
*                licences[] = { { "pilot", true }, { "rebel", false } }; //Shows up for players with pilot and without rebel licence.
*
*        level: ARRAY (This is for limiting spawn to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL / INVERSE)
*                SCALAR: VALUE => VALUE
*                BOOL: VALUE EXISTS
*                EQUAL: VALUE == VALUE
*                INVERSE: VALUE <= VALUE
*            2: What to compare to (-1 = Check Disabled)
*
*/
class CfgSpawnPoints {
    class Civilian {

      class TanoaAirport {
          displayName = "Tanoa Airport - Arrivals";
          spawnMarker = "civ_spawn_airport";
          icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
          licences[] = { { "", true } };
          level[] = { "", "", -1 };
      };

      class Georgetown {
          displayName = "Georgetown";
          spawnMarker = "civ_spawn_georgetown";
          icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
          licences[] = { { "rebel", false } };
          level[] = { "life_introduced", "SCALAR", 1 };
      };

      class Lijhaven {
          displayName = "Lijnhaven";
          spawnMarker = "civ_spawn_lijnhaven";
          icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
          licences[] = { { "", true } };
          level[] = { "life_introduced", "SCALAR", 1 };
      };

      class BluePearl {
          displayName = "Blue Pearl Industrial Port";
          spawnMarker = "civ_spawn_bluepearl";
          icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
          licences[] = { { "", true } };
          level[] = { "life_introduced", "SCALAR", 1 };
      };

      class LaRochelle {
          displayName = "La Rochelle";
          spawnMarker = "civ_spawn_larochelle";
          icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
          licences[] = { { "", true } };
          level[] = { "life_introduced", "SCALAR", 1 };
      };




        /*
        class RebelS {
            displayName = "Northern Rebel Base";
            spawnMarker = "Rebelop";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licences[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };

        class RebelN {
            displayName = "Southern Rebel Base";
            spawnMarker = "Rebelop_1";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licences[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };

        class RebelE {
            displayName = "Eastern Rebel Base";
            spawnMarker = "Rebelop_2";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licences[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };
        */
    };

    class Cop {
        class Georgetown {
            displayName = "Georgetown Sheriff's HQ";
            spawnMarker = "cop_spawn_georgetown";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licences[] = { { "", true } };
            level[] = { "", "", -1 };
        };
        class BluePearl {
            displayName = "Blue Pearl Port Authorities";
            spawnMarker = "cop_spawn_bluepearl";
            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
            licences[] = { { "", true } };
            level[] = { "life_coplevel", "SCALAR", 3 };
        };
        class AirHQ {
            displayName = "Sheriff's Air HQ";
            spawnMarker = "cop_spawn_air";
            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
            licences[] = { { "", true } };
            level[] = { "life_coplevel", "SCALAR", 3 };
        };
        class Lijnhaven {
            displayName = "Lijnhaven Sheriff's Office";
            spawnMarker = "cop_spawn_lijnhaven";
            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
            licences[] = { { "", true } };
            level[] = { "life_coplevel", "SCALAR", 3 };
        };

        class LaRochelle {
            displayName = "La Rochelle Sheriff's Office";
            spawnMarker = "cop_spawn_larochelle";
            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
            licences[] = { { "", true } };
            level[] = { "life_coplevel", "SCALAR", 3 };
        };
    };

    class Medic {
        class Lijnhaven {
            displayName = "Lijnhaven Dispatch";
            spawnMarker = "medic_spawn_lijnhaven";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licences[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Georgetown {
            displayName = "Georgetown Hospital";
            spawnMarker = "medic_spawn_georgetown";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licences[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class BluePearl {
            displayName = "Blue Pearl Port Authorities";
            spawnMarker = "medic_spawn_bluepearl";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licences[] = { { "", true } };
            level[] = { "", "", -1 };
        };
        class Air {
            displayName = "Central Air Dispatch";
            spawnMarker = "medic_spawn_air";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licences[] = { { "", true } };
            level[] = { "", "", -1 };
        };
        class LaRochelle {
            displayName = "La Rochelle Dispatch";
            spawnMarker = "medic_spawn_larochelle";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licences[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };
};
