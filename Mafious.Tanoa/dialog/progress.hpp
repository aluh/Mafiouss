#define ST_CENTER         0x02
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define EXP_Y             0.325
#define HEALTH_Y          0.280
#define FOOD_Y            0.235
#define WATER_Y           0.190
#define BAR_W             0.35
#define BAR_H             0.035

class life_progress {
    name = "life_progress";
    idd = 38200;
    fadein=0;
    duration = 99999999999;
    fadeout=0;
    movingEnable = 0;
    onLoad="uiNamespace setVariable ['life_progress',_this select 0]";
    objects[]={};

    class controlsBackground {
        class background: Life_RscText {
            idc = -1;
            colorBar[] = {0,0,0,0};
            x = 0.38140 * safezoneW + safezoneX;
            y = 0.06 * safezoneH + safezoneY;
            w = 0.65;
            h = 0.04;
        };
        class ProgressBar: Life_RscProgress {
          colorFrame[] = {0,0,0,0};
            colorBar[] = {0.2,0.2,0.2,0.6};
            idc = 38201;
            x = 0.38140 * safezoneW + safezoneX;
            y = 0.06 * safezoneH + safezoneY;
            w = 0.65;
            h = 0.04;
        };
        class ProgressBarBack: Life_RscProgress {
            colorFrame[] = {0,0,0,0};
            colorBar[] = {0.2,0.2,0.2,0.2};
            idc = 38204;
            x = 0.38140 * safezoneW + safezoneX;
            y = 0.06 * safezoneH + safezoneY;
            w = 0.65;
            h = 0.04;
        };
        class ProgressText: Life_RscText {
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            idc = 38202;
            style = ST_LEFT;
            text = "Servicing Chopper";
            x = 0.38140 * safezoneW + safezoneX;
            y = 0.06 * safezoneH + safezoneY;
            w = 0.65;
            h = 0.035;

        };
        class ProgressTextVal: Life_RscText {
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            idc = 38203;
            style = ST_RIGHT;
            x = 0.38140 * safezoneW + safezoneX;
            y = 0.06 * safezoneH + safezoneY;
            w = 0.65;
            h = 0.035;

        };
    };
};

class life_timer {
    name = "life_timer";
    idd = 38300;
    fadeIn = 1;
    duration = 99999999999;
    fadeout = 1;
    movingEnable = 0;
    onLoad = "uiNamespace setVariable ['life_timer',_this select 0]";
    objects[] = {};

    class controlsBackground {
        class TimerIcon: life_RscPicture {
            idc = -1;
            text = "\a3\ui_f\data\IGUI\RscTitles\MPProgress\timer_ca.paa";
            x = 0.00499997 * safezoneW + safezoneX;
            y = 0.291 * safezoneH + safezoneY;
            w = 0.04;
            h = 0.045;
        };

        class TimerText: Life_RscText {
            colorBackground[] = {0,0,0,0};
            idc = 38301;
            text = "";
            x = 0.0204688 * safezoneW + safezoneX;
            y = 0.2778 * safezoneH + safezoneY;
            w = 0.09125 * safezoneW;
            h = 0.055 * safezoneH;
        };
    };
};
