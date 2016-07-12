
class TIDAL_Processing {
    idd = 56000;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class RscText_1000: Life_RscText
        {
            idc = -1;
            x = 0.355625 * safezoneW + safezoneX;
            y = 0.269 * safezoneH + safezoneY;
            w = 0.28875 * safezoneW;
            h = 0.418 * safezoneH;
            colorBackground[] = {0,0,0,0.7};
        };
    };
    class controls {
        class RscText_1001: Life_RscText
        {
            idc = 1001;
            text = "Processing Title"; //--- ToDo: Localize;
            x = 0.355625 * safezoneW + safezoneX;
            y = 0.269 * safezoneH + safezoneY;
            w = 0.28875 * safezoneW;
            h = 0.033 * safezoneH;
            colorBackground[] = {0,0,0,0.9};
        };
        class RscText_1003: Life_RscText
        {
            idc = 1003;
            text = "Training Required:"; //--- ToDo: Localize;
            x = 0.365937 * safezoneW + safezoneX;
            y = 0.346 * safezoneH + safezoneY;
            w = 0.268125 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class RscText_1004: Life_RscText
        {
            idc = 1004;
            text = "Approx. Experience Gained:"; //--- ToDo: Localize;
            x = 0.365937 * safezoneW + safezoneX;
            y = 0.379 * safezoneH + safezoneY;
            w = 0.268125 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class requireditemslist: Life_RscListbox
        {
            idc = 1500;
            text = "";
            sizeEx = 0.035;
            x = 0.365937 * safezoneW + safezoneX;
            y = 0.467 * safezoneH + safezoneY;
            w = 0.268125 * safezoneW;
            h = 0.077 * safezoneH;
        };
        class finalproductlist: Life_RscListbox
        {
            idc = 1501;
            text = "";
            sizeEx = 0.035;
            x = 0.365937 * safezoneW + safezoneX;
            y = 0.588 * safezoneH + safezoneY;
            w = 0.268125 * safezoneW;
            h = 0.077 * safezoneH;
        };
        class RscButtonMenu_2400: Life_RscButtonMenu
        {
            idc = 2400;
            text = "Process"; //--- ToDo: Localize;
            x = 0.355625 * safezoneW + safezoneX;
            y = 0.687 * safezoneH + safezoneY;
            w = 0.28875 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class RscButtonMenu_2401: Life_RscButtonMenu
        {
            idc = 2401;
            text = "Close"; //--- ToDo: Localize;
            x = 0.592812 * safezoneW + safezoneX;
            y = 0.247 * safezoneH + safezoneY;
            w = 0.0515625 * safezoneW;
            h = 0.022 * safezoneH;
            onButtonClick = "closeDialog 0;";
        };
        class RscStructuredText_1100: Life_RscStructuredText
        {
            idc = 1100;
            text = "<t align='center'>Additional Information</t>"; //--- ToDo: Localize;
            x = 0.355625 * safezoneW + safezoneX;
            y = 0.313 * safezoneH + safezoneY;
            w = 0.28875 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class RscStructuredText_1101: Life_RscStructuredText
        {
            idc = 1101;
            text = "<t align='center'>Required Items</t>"; //--- ToDo: Localize;
            x = 0.355625 * safezoneW + safezoneX;
            y = 0.434 * safezoneH + safezoneY;
            w = 0.28875 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class RscStructuredText_1102: Life_RscStructuredText
        {
            idc = 1102;
            text = "<t align='center'>Product(s)</t>"; //--- ToDo: Localize;
            x = 0.355625 * safezoneW + safezoneX;
            y = 0.555 * safezoneH + safezoneY;
            w = 0.28875 * safezoneW;
            h = 0.033 * safezoneH;
        };
    };
};
