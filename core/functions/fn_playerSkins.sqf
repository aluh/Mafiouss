#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private["_skinName"];

switch (playerSide) do {
    case civilian: {
      if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
        switch(uniform player) do
        {
          case "U_C_Scientist":
      		{
            player setObjectTextureGlobal [0, "textures\civilian\clothes\prisoner\prisoner.paa"];
      		};
        };
      };
    };

    case west: {
      if (LIFE_SETTINGS(getNumber,"cop_extendedSkins") isEqualTo 1) then {
        switch (uniform player) do {
          case "U_Rangemaster":
          {
            if (FETCH_CONST(life_coplevel) >= 1) then {
              _skinName = "textures\cop\uniform\cop_tisd.paa";
              player setObjectTextureGlobal [0, _skinName];
            } else {
              _skinName = "textures\cop\uniform\cop_pubbie.paa";
              player setObjectTextureGlobal [0, _skinName];
            };
          };
          case "U_B_CombatUniform_mcam_worn":
          {
            if (FETCH_CONST(life_coplevel) >= 1) then {
              _skinName = "textures\cop\uniform\cop_tactical.paa";
              player setObjectTextureGlobal [0, _skinName];
            };
          };
          case "U_B_survival_uniform":
          {
            if (FETCH_CONST(life_coplevel) >= 1) then {
              _skinName = "textures\cop\uniform\cop_tactical.paa";
              player setObjectTextureGlobal [0, _skinName];
            };
          };
          case "U_B_CTRG_1":
          {
            if (FETCH_CONST(life_coplevel) >= 5) then {
              _skinName = "textures\cop\uniform\cop_officer.paa";
              player setObjectTextureGlobal [0, _skinName];
            };
          };
        };
        _backpack = unitBackpack player;
        _backpack setObjectTextureGlobal [0,""];
      };
    };


    case independent: {
        if (uniform player isEqualTo "U_Rangemaster") then {
          if (FETCH_CONST(life_mediclevel) >= 1) then {
            _skinName="textures\medic\uniform\med_fr.paa";
            player setObjectTextureGlobal [0, _skinName];
          };
          if (FETCH_CONST(life_mediclevel) >= 2) then {
            _skinName="textures\medic\uniform\med_emt.paa";
            player setObjectTextureGlobal [0, _skinName];
          };
          if (FETCH_CONST(life_mediclevel) >= 3) then {
            _skinName="textures\medic\uniform\med_paramedic.paa";
            player setObjectTextureGlobal [0, _skinName];
          };
        };
        _backpack = unitBackpack player;
    	_backpack setObjectTextureGlobal [0,""];
    };


  };
