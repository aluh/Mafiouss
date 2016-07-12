#define ST_CENTER         0x02
#define ST_LEFT           0x00
#define ST_RIGHT          0x01

class statusBar {
	idd = -1;
	onLoad = "uiNamespace setVariable ['statusBar', _this select 0]";
	onUnload = "uiNamespace setVariable ['statusBar', objNull]";
	onDestroy = "uiNamespace setVariable ['statusBar', objNull]";
	fadein = 0;
	fadeout = 0;
	duration = 10e10;
	movingEnable = 0;
	controlsBackground[] = {};
	objects[] = {};
	class controls {
		class statusBarText {
			idc = 1000;
			x = safezoneX + safezoneW - 1;
			y = safezoneY + safezoneH - 0.08;
			w = 1;
			h = 0.04;
	//		shadow = 2;
			colorBackground[] = { 0.2, 0.2, 0.2, 0.2 };
	//		font = "PuristaSemibold";
			size = 0.03;
			type = 13;
			style = ST_CENTER;
			text="Loading server info...";
			class Attributes {
				align="right";
				color = "#FFFFF";
			}; 
		};
	};
};
