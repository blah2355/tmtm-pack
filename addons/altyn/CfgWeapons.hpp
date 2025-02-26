class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	
	class tmtm_h_altyn_green: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="Altyn (Green)";
		descriptionShort = "Armor Level IV";
		picture="\tmtm\pack\altyn\Data\UI\tmtm_icon_altynNoVisor_olive_ca.paa";
		model="\tmtm\pack\altyn\tmtm_altyn_noVisor.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_green_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\altyn\tmtm_altyn_noVisor.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_green_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_altyn_olive: tmtm_h_altyn_green
	{
		scope=2;
		displayName="Altyn (Olive)";
		hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_olive_co.paa"};
		picture="\tmtm\pack\altyn\Data\UI\tmtm_icon_altynNoVisor_olive_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_olive_co.paa"};
		};
	};
	class tmtm_h_altyn_black: tmtm_h_altyn_green
	{
		scope=2;
		displayName="Altyn (Black)";
		hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_black_co.paa"};
		picture="\tmtm\pack\altyn\Data\UI\tmtm_icon_altynNoVisor_black_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_black_co.paa"};
		};
	};
	class tmtm_h_altynVisorUp_green: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="Altyn (Green/Visor Up)";
		descriptionShort = "Armor Level IV";
		picture="\tmtm\pack\altyn\Data\UI\tmtm_icon_altyn_olive_ca.paa";
		model="\tmtm\pack\altyn\tmtm_altyn.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_green_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\altyn\tmtm_altyn.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_green_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_altynVisorUp_olive: tmtm_h_altynVisorUp_green
	{
		scope=2;
		displayName="Altyn (Olive/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_olive_co.paa"};
		picture="\tmtm\pack\altyn\Data\UI\tmtm_icon_altyn_olive_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_olive_co.paa"};
		};
	};
	class tmtm_h_altynVisorUp_black: tmtm_h_altynVisorUp_green
	{
		scope=2;
		displayName="Altyn (Black/Visor Up)";
		hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_black_co.paa"};
		picture="\tmtm\pack\altyn\Data\UI\tmtm_icon_altyn_black_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_black_co.paa"};
		};
	};
	class tmtm_h_altynVisorDown_green: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="Altyn (Green/Visor Down)";
		descriptionShort = "Armor Level IV";
		picture="\tmtm\pack\altyn\Data\UI\tmtm_icon_altynVisorDown_olive_ca.paa";
		model="\tmtm\pack\altyn\tmtm_altyn_visorDown.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_green_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\tmtm\pack\altyn\tmtm_altyn_visorDown.p3d";
			modelSides[]={6};
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_green_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=10;
					passThrough=0.1;
				};
			};
		};
	};
	class tmtm_h_altynVisorDown_olive: tmtm_h_altynVisorDown_green
	{
		scope=2;
		displayName="Altyn (Olive/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_olive_co.paa"};
		picture="\tmtm\pack\altyn\Data\UI\tmtm_icon_altynVisorDown_olive_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_olive_co.paa"};
		};
	};
	class tmtm_h_altynVisorDown_black: tmtm_h_altynVisorDown_green
	{
		scope=2;
		displayName="Altyn (Black/Visor Down)";
		hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_black_co.paa"};
		picture="\tmtm\pack\altyn\Data\UI\tmtm_icon_altynVisorDown_black_ca.paa";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\tmtm\pack\altyn\Data\tmtm_altyn_black_co.paa"};
		};
	};
};