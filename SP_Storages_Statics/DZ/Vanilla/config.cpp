class CfgPatches
{
	class SP_Vanilla_Items_Modified
	{
		units[]=
		{
			"Drink_WaterBottle"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
            "DZ_Gear_Consumables",
            "DZ_Gear_Drinks",
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Bottle_Base;

    class WaterBottle: Bottle_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_WaterBottle0";
		descriptionShort="$STR_CfgVehicles_WaterBottle1";
		model="\dz\gear\drinks\WaterBottle.p3d";
		debug_ItemCategory=6;
		weight=50;
		itemSize[]={1,3};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
         inventorySlot[]+=
		{
			"SP_Water_Bottle"
		};
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterBottle_in_B
				{
					soundSet="WaterBottle_in_B_SoundSet";
					id=202;
				};
				class WaterBottle_in_C
				{
					soundSet="WaterBottle_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class WaterBottle_out_A
				{
					soundSet="WaterBottle_out_A_SoundSet";
					id=205;
				};
				class WaterBottle_out_B
				{
					soundSet="WaterBottle_out_B_SoundSet";
					id=206;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="WaterBottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
    class Box_Base;
    class NailBox: Box_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_NailBox0";
		descriptionShort="$STR_CfgVehicles_NailBox1";
		model="\dz\gear\consumables\Nails_box.p3d";
		weight=2540;
		absorbency=0.80000001;
		itemSize[]={1,1};
        inventorySlot[]+=
		{
			"SP_Nail_InBox"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\consumables\data\Box_of_Nails.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\consumables\data\Box_of_Nails.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\consumables\data\Box_of_Nails_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\consumables\data\Box_of_Nails_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\consumables\data\Box_of_Nails_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Resources
		{
			class Nail
			{
				value=70;
				variable="quantity";
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
};