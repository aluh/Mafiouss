#define ST_CENTER         0x02
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define WATERMARK_Y       0.435
#define EXP_Y             0.325
#define HEALTH_Y          0.280
#define FOOD_Y            0.235
#define WATER_Y           0.190
#define BAR_W             0.35
#define BAR_H             0.035
/*
    Author: Daniel Stuart

    File: hud_stats.hpp

    Edited by: noms
*/

class playerHUD {
    idd = -1;
    duration = 10e10;
    movingEnable = 0;
    fadein = 0;
    fadeout = 0;
    name = "playerHUD";
    onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
    objects[] = {};
    controls[] = {
        Life_RscBackground_HUD,
        Life_RscProgress_HUDFood,
        Life_RscProgress_HUDHealth,
        Life_RscProgress_HUDWater,
        Life_RscProgress_HUDFoodBack,
        Life_RscProgress_HUDHealthBack,
        Life_RscProgress_HUDWaterBack,
        Life_RscText_HUDFood,
        Life_RscText_HUDHealth,
        Life_RscText_HUDWater,
        Life_RscText_HUDFoodVal,
        Life_RscText_HUDHealthVal,
        Life_RscText_HUDWaterVal,
        Life_RscPicture_Watermark
    };

    /* Background */
    class Life_RscBackground_HUD: Life_RscBackground {
        colorBackground[] = {0,0,0,0};
        x = 0.414815 * safezoneW + safezoneX;
        y = 0.966667 * safezoneH + safezoneY;
        w = 0.170371 * safezoneW;
        h = 0.0333333 * safezoneH;
    };

    /* Progress Bars */
    class LIFE_RscProgress_HUDCommon: Life_RscProgress {
        colorFrame[] = {0,0,0,0};
        x = safeZoneX + safeZoneW - (BAR_W + 0.01);
        y = safeZoneY + safeZoneH - 0.325;
        w = BAR_W;
        h = BAR_H;
    };


    class Life_RscProgress_HUDHealth: LIFE_RscProgress_HUDCommon {
        idc = 2201;
        colorBar[] = {0.8,0.2,0.2,0.6};

        //x = 0.476852 * safezoneW + safezoneX;
        x = safeZoneX + safeZoneW - (BAR_W + 0.01);
        y = safeZoneY + safeZoneH - HEALTH_Y;
        w = BAR_W;
        h = BAR_H;

    };

    class Life_RscProgress_HUDFood: LIFE_RscProgress_HUDCommon {
        idc = 2200;
        colorBar[] = {0.2,0.8,0.2,0.6};

        x = safeZoneX + safeZoneW - (BAR_W + 0.01);
        y = safeZoneY + safeZoneH - FOOD_Y;
        w = BAR_W;
        h = BAR_H;

    };


    class Life_RscProgress_HUDWater: LIFE_RscProgress_HUDCommon {
        idc = 2202;
        colorBar[] = {0.2,0.2,0.8,0.6};

        x = safeZoneX + safeZoneW - (BAR_W + 0.01);
        y = safeZoneY + safeZoneH - WATER_Y;
        w = BAR_W;
        h = BAR_H;
    };

    class Life_RscProgress_HUDExperience: LIFE_RscProgress_HUDCommon {
        idc = 2203;
        colorBar[] = {0.2,0.2,0.2,0.6};

        x = safeZoneX + safeZoneW - (BAR_W + 0.01);
        y = safeZoneY + safeZoneH - EXP_Y;
        w = BAR_W;
        h = BAR_H;
    };

    /* Bar Backgrounds */
    class Life_RscProgress_HUDHealthBack: LIFE_RscProgress_HUDCommon {
        idc = 9401;
        colorBar[] = {0.2,0.2,0.2,0.2};
        //x = 0.476852 * safezoneW + safezoneX;
        x = safeZoneX + safeZoneW - (BAR_W + 0.01);
        y = safeZoneY + safeZoneH - HEALTH_Y;
        w = 0.35;
        h = 0.035;
    };
    class Life_RscProgress_HUDFoodBack: LIFE_RscProgress_HUDCommon {
        idc = 9400;
        colorBar[] = {0.2,0.2,0.2,0.2};
        x = safeZoneX + safeZoneW - (BAR_W + 0.01);
        y = safeZoneY + safeZoneH - FOOD_Y;
        w = 0.35;
        h = 0.035;
    };
    class Life_RscProgress_HUDWaterBack: LIFE_RscProgress_HUDCommon {
        idc = 9402;
        colorBar[] = {0.2,0.2,0.2,0.2};
        x = safeZoneX + safeZoneW - (BAR_W + 0.01);
        y = safeZoneY + safeZoneH - WATER_Y;
        w = 0.35;
        h = 0.035;
    };
    class Life_RscProgress_HUDExperienceBack: LIFE_RscProgress_HUDCommon {
        idc = 9403;
        colorBar[] = {0.2,0.2,0.2,0.2};
        x = safeZoneX + safeZoneW - (BAR_W + 0.01);
        y = safeZoneY + safeZoneH - EXP_Y;
        w = 0.35;
        h = 0.035;
    };
    /* Bar Texts */
    class Life_RscText_HUDCommon: Life_RscText {
        SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
        x = safeZoneX + safeZoneW - (BAR_W + 0.01);
        w = BAR_W;
        h = BAR_H;
    };
    class Life_RscText_HUDHealth: Life_RscText_HUDCommon {
        idc = 1201;
        style = ST_LEFT;
        text = "$STR_HUD_Health";
        y = safeZoneY + safeZoneH - HEALTH_Y;
    };
    class Life_RscText_HUDFood: Life_RscText_HUDCommon {
        idc = 1200;
        style = ST_LEFT;
        text = "$STR_HUD_Food";
        y = safeZoneY + safeZoneH - FOOD_Y;
    };
    class Life_RscText_HUDWater: Life_RscText_HUDCommon {
        idc = 1202;
        style = ST_LEFT;
        text = "$STR_HUD_Water";
        y = safeZoneY + safeZoneH - WATER_Y;
    };
    class Life_RscText_HUDExperience: Life_RscText_HUDCommon {
        idc = 1203;
        style = ST_LEFT;
        text = "$STR_HUD_Experience";
        y = safeZoneY + safeZoneH - EXP_Y;
    };

    class Life_RscText_HUDHealthVal: Life_RscText_HUDCommon {
        idc = 9601;
        text = "";
        style = ST_RIGHT;
        y = safeZoneY + safeZoneH - HEALTH_Y;
    };
    class Life_RscText_HUDFoodVal: Life_RscText_HUDCommon {
        idc = 9600;
        text = "";
        style = ST_RIGHT;
        y = safeZoneY + safeZoneH - FOOD_Y;
    };
    class Life_RscText_HUDWaterVal: Life_RscText_HUDCommon {
        idc = 9602;
        text = "";
        style = ST_RIGHT;
        y = safeZoneY + safeZoneH - WATER_Y;
    };
    class Life_RscText_HUDExperienceVal: Life_RscText_HUDCommon {
        idc = 9603;
        text = "";
        style = ST_RIGHT;
        y = safeZoneY + safeZoneH - EXP_Y;
    };
    class Life_RscText_HUDExperienceVal2: Life_RscText_HUDCommon {
        idc = 9604;
        text = "";
        style = ST_CENTER;
        y = safeZoneY + safeZoneH - EXP_Y;
    };

    // TIDAL Watermark
    class Life_RscPicture_Watermark: Life_RscPicture
    {
      idc = 9900;
      text = "textures\watermark.paa";
    //  style = ST_CENTER;
      x = safeZoneX + safeZoneW -  (BAR_W + 0.01);
      y = safeZoneY + safeZoneH - WATERMARK_Y;
      w = BAR_W;
      h = 0.15;
    };
};
