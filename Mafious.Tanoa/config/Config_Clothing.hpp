/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        licence = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 12, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 15, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 17, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 25, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 25, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 27, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 30, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 65, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 75, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 40, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 62, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 65, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 95, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_4_F", "", 25, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_1_F", "", 20, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_2_F", "", 10, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_5_F", "", 50, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_3_F", "", 25, { "", "", -1 } },
            { "U_C_Man_casual_2_F", "", 45, { "", "", -1 } },
            { "U_C_Man_casual_3_F", "", 45, { "", "", -1 } },
            { "U_C_Man_casual_1_F", "", 45, { "", "", -1 } },
            { "U_C_man_sport_1_F", "", 35, { "", "", -1 } },
            { "U_C_man_sport_3_F", "", 35, { "", "", -1 } },
            { "U_C_man_sport_2_F", "", 35, { "", "", -1 } },
            { "U_C_Man_casual_4_F", "", 45, { "", "", -1 } },
            { "U_C_Man_casual_5_F", "", 45, { "", "", -1 } },
            { "U_C_Man_casual_6_F", "", 45, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 150, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 12, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 10, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 13, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 14, { "", "", -1 } },
            { "H_Cap_blu", "", 15, { "", "", -1 } },
            { "H_Cap_grn", "", 15, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 15, { "", "", -1 } },
            { "H_Cap_oli", "", 15, { "", "", -1 } },
            { "H_Cap_red", "", 15, { "", "", -1 } },
            { "H_Cap_tan", "", 15, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 15, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 16, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 16, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 22, { "", "", -1 } },
            { "H_Hat_tan", "", 26, { "", "", -1 } },
            { "H_Hat_brown", "", 27, { "", "", -1 } },
            { "H_Hat_grey", "", 28, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 30, { "", "", -1 } },
            { "H_Hat_blue", "", 31, { "", "", -1 } },
            { "H_Hat_checker", "", 34, { "", "", -1 } },
            { "H_Booniehat_tan", "", 42, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 10, { "", "", -1 } },
            { "G_Combat", "", 15, { "", "", -1 } },
            { "G_Lady_Mirror", "", 10, { "", "", -1 } },
            { "G_Lady_Dark", "", 10, { "", "", -1 } },
            { "G_Lady_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Press_F", "", 1000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 50, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 200, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 200, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 200, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 200, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 200, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 200, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 200, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 250, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 350, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 350, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 350, { "", "", -1 } },
            { "B_FieldPack_blk", "", 500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 500, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 650, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 650, { "", "", -1 } },
            { "B_Bergen_rgr", "", 650, { "", "", -1 } },
            { "B_Bergen_blk", "", 650, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 750, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 750, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 750, { "", "", -1 } },
            { "B_Carryall_oli", "", 750, { "", "", -1 } },
            { "B_Carryall_khk", "", 750, { "", "", -1 } },
            { "B_Carryall_cbr", "", 750, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        licence = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "Public Officer/Sheriff Uniform", 25, { "", "", -1 } },
            { "U_B_CTRG_1", "Sergeant's Uniform", 35, { "life_coplevel", "SCALAR", 5 } },
            { "U_B_CombatUniform_mcam_worn", "Police Tactical Uniform", 50, { "life_coplevel", "SCALAR", 2 } },
            { "U_B_Wetsuit", "Police Diving Suit", 50, { "life_coplevel", "SCALAR", 2 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 25, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "", 50, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetB_plain_blk", "", 50, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetSpecB_blk", "", 75, { "life_coplevel", "SCALAR", 1 } },
            { "H_Booniehat_khk", "", 10, { "life_coplevel", "SCALAR", 2 } },
            { "H_Booniehat_tan", "", 12, { "life_coplevel", "SCALAR", 2 } },
            { "H_Helmet_Skate", "", 12, { "life_coplevel", "SCALAR", 2 } },
            { "H_Beret_gen_F", "", 10, { "life_coplevel", "SCALAR", 1 } },
            { "H_MilCap_gen_F", "", 12, { "life_coplevel", "SCALAR", 1 } },
            { "H_Booniehat_tna_F", "", 12, { "life_coplevel", "SCALAR", 1 } },
            { "H_Watchcap_blk", "", 12, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 50, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            { "G_Aviator", "", 10, { "", "", -1 } },
            { "G_Lady_Mirror", "", 15, { "", "", -1 } },
            { "G_Lady_Dark", "", 15, { "", "", -1 } },
            { "G_Lady_Blue", "", 15, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 80, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 100, { "", "", -1 } },
            { "V_TacVest_blk", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "V_TacVest_brn", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "V_PlateCarrier1_blk", "", 150, { "life_coplevel", "SCALAR", 2 } },
            { "V_PlateCarrier1_rgr", "", 150, { "life_coplevel", "SCALAR", 2 } },
            { "V_PlateCarrier2_rgr", "", 150, { "life_coplevel", "SCALAR", 2 } },
            { "V_PlateCarrier2_blk", "", 150, { "life_coplevel", "SCALAR", 2 } },
            { "V_RebreatherB", "", 150, { "life_coplevel", "SCALAR", 2 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_cbr", "", 50, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 70, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 80, { "", "", -1 } },
            { "B_Bergen_sgg", "", 25, { "", "", -1 } },
            { "B_Carryall_cbr", "", 35, { "", "", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        licence = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 200, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 50, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        licence = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 90, { "", "", -1 } },
            { "V_TacVest_brn", "", 500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };


    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        licence = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "EMS Uniform", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "EMS Backpack", 300, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        licence = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 500, {"", "", -1} },
            { "U_I_G_Story_Protagonist_F", "", 750, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 110, { "", "", -1 } },
            { "U_IG_leader", "Guerilla Leader", 150, { "", "", -1 } },
            { "U_O_PilotCoveralls", "", 150, { "", "", -1 } },
            { "U_O_SpecopsUniform_ocamo", "", 170, { "", "", -1 } },
            { "U_O_GhillieSuit", "", 500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "", 65, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 80, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 85, { "", "", -1 } },
            { "H_Shemag_olive", "", 85, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 120, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 250, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Balaclava_blk", "", 15, { "", "", -1 } },
            { "G_Balaclava_combat", "", 15, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 15, { "", "", -1 } },
            { "G_Balaclava_oli", "", 15, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 15, { "", "", -1 } },
            { "G_Bandanna_beast", "", 15, { "", "", -1 } },
            { "G_Bandanna_blk", "", 10, { "", "", -1 } },
            { "G_Bandanna_khk", "", 15, { "", "", -1 } },
            { "G_Bandanna_oli", "", 15, { "", "", -1 } },
            { "G_Bandanna_shades", "", 10, { "", "", -1 } },
            { "G_Bandanna_sport", "", 15, { "", "", -1 } },
            { "G_Bandanna_tan", "", 15, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 450, { "", "", -1 } },
            { "V_HarnessO_brn", "", 750, { "", "", -1 } },
            { "V_TacVest_khk", "", 250, { "", "", -1 } },
            { "V_BandollierB_khk", "", 250, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 250, { "", "", -1 } },
            { "V_BandollierB_rgr", "", 250, { "", "", -1 } },
            { "V_BandollierB_oli", "", 250, { "", "", -1 } },
            { "V_Chestrig_khk", "", 250, { "", "", -1 } },
            { "V_Chestrig_rgr", "", 250, { "", "", -1 } },
            { "V_Chestrig_oli", "", 250, { "", "", -1 } },
            { "V_TacVest_oli", "", 250, { "", "", -1 } },
            { "V_TacVest_camo", "", 250, { "", "", -1 } },
            { "V_TacVestCamo_khk", "", 250, { "", "", -1 } },
            { "V_HarnessO_brn", "", 250, { "", "", -1 } },
            { "V_HarnessOGL_brn", "", 250, { "", "", -1 } },
            { "V_HarnessO_gry", "", 250, { "", "", -1 } },
            { "V_HarnessOGL_gry", "", 250, { "", "", -1 } },
            { "V_HarnessOSpec_brn", "", 250, { "", "", -1 } },
            { "V_HarnessOSpec_gry", "", 250, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 200, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 200, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 200, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 200, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 200, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 200, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 200, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 350, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 350, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 350, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 500, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 650, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 650, { "", "", -1 } },
            { "B_Bergen_rgr", "", 650, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 700, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 750, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 750, { "", "", -1 } },
            { "B_Carryall_oli", "", 750, { "", "", -1 } },
            { "B_Carryall_khk", "", 750, { "", "", -1 } },
            { "B_Carryall_cbr", "", 750, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        licence = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 150, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 150, { "", "", -1 } },
            { "U_C_Driver_2", "", 350, { "", "", -1 } },
            { "U_C_Driver_1", "", 360, { "", "", -1 } },
            { "U_C_Driver_3", "", 370, { "", "", -1 } },
            { "U_C_Driver_4", "", 370, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 250, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 250, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 250, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 250, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
