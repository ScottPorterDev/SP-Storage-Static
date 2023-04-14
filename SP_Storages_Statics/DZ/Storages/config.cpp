class CfgPatches
{
	class SP_Storages_Statics_CfgPatches
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{	
			"DZ_Gear_Containers",
			"DZ_Scripts",
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Container_Base;
	class SP_ItemBase_Static : Container_Base{};

	class SP_Static_Wardrobe: SP_ItemBase_Static
	{
		scope=2;
		displayName="Wardrobe";
		descriptionShort="A rather imposing cupboard that can hold various objects. - Scott Porter";
		model="DZ\structures_bliss\Ruins\Proxy\wardrobe_a.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		attachments[]=
		{
		"Back"
		};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\camping\data\wooden_case_co.paa"
		};
	
		class Cargo
		{
			itemsCargoSize[]={20,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="wood";
	};

	class SP_Static_Locker_Closed: SP_ItemBase_Static
	{
		scope=2;
		displayName="Locker Military";
		descriptionShort="A military locker used to store the soldier. - Scott Porter";
		model="DZ\structures\Furniture\Cases\locker\locker_closed_v1.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		attachments[]=
		{
		"Vest", 
		"Body", 
		"Legs", 
		"Back", 
		"headgear", 
		"mask", 
		"gloves", 
		"Feet" 
		};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[]={3,7};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="metal";
	};

	class SP_Static_Locker_Closed_Blue: SP_ItemBase_Static
	{
		scope=2;
		displayName="Locker Military Blue";
		descriptionShort="A military locker used to store the soldier. - Scott Porter";
		model="DZ\structures\Furniture\Cases\locker\locker_closed_blue_v1.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		attachments[]=
		{
		"Vest", 
		"Body", 
		"Legs", 
		"Back", 
		"headgear", 
		"mask", 
		"gloves", 
		"Feet" 
		};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[]={3,7};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="metal";
	};

	class SP_Static_SeaChest: SP_ItemBase_Static
	{
		scope=2;
		displayName="$STR_CfgVehicles_SeaChest0";
		descriptionShort="$STR_CfgVehicles_SeaChest1";
		model="\DZ\gear\camping\sea_chest.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		attachments[]=
		{
		"shoulder",
		"melee",
		"Vest",
		"Body",
		"hips",
		"Legs",
		"Back",
		"headgear",
		"mask",
		"eyewear",
		"gloves",
		"Feet",
		"armband"
		};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[]={15,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="wood";
	};

	class SP_Static_SeaChest_Without_Attachements: SP_ItemBase_Static
	{
		scope=2;
		displayName="$STR_CfgVehicles_SeaChest0";
		descriptionShort="$STR_CfgVehicles_SeaChest1";
		model="\DZ\gear\camping\sea_chest.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[]={15,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="wood";
	};
	class SP_StaticObj_Furniture_shelfs_small: SP_ItemBase_Static
	{
		scope=2;
		displayName="Small Shelfs";
		descriptionShort="A mini shelf used to store various objects. - Scott Porter";
		model="DZ\structures_bliss\Ruins\Proxy\shelfs_small.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[]={4,3};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="wood";
	};

	class SP_StaticObj_Furniture_office_table_a: SP_ItemBase_Static
	{
		scope=2;
		displayName="Office Table";
		descriptionShort="A working table - Scott Porter";
		model="DZ\structures\Furniture\Tables\office_table_a\office_table_a.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[]={5,4};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="wood";
	};

	class SP_StaticObj_Misc_WoodenCrate: SP_ItemBase_Static
	{
		scope=2;
		displayName="Big Wooden Crate";
		descriptionShort="A simple WoodenCrate - Scott Porter";
		model="DZ\structures_bliss\Residential\Misc\Misc_WoodenCrate.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[]={6,4};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="wood";
	};

	class SP_StaticObj_Furniture_fridge: SP_ItemBase_Static
	{
		scope=2;
		displayName="Fridge";
		descriptionShort="A refrigerator that doesn't seem to work anymore, but you can still store things in it. - Scott Porter";
		model="DZ\structures\Furniture\kitchen\fridge\fridge.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[]={4,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="metal";
	};

	class SP_StaticObj_Furniture_vending_machine: SP_ItemBase_Static
	{
		scope=2;
		displayName="Vending Machine Empty";
		descriptionShort="An old beverage dispenser out of service. - Scott Porter";
		model="DZ\structures\Furniture\Eletrical_appliances\vending_machine\vending_machine.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[]={4,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="metal";
	};

	class SP_StaticObj_Furniture_Box_C: SP_ItemBase_Static
	{
		scope=2;
		displayName="Big Box";
		descriptionShort="A cardboard box for storing various objects - Scott Porter";
		model="DZ\structures\Furniture\Decoration\box_c\box_c.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[]={5,4};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="wood";
	};

	class SP_StaticObj_AmmoBox: SP_ItemBase_Static
	{
		scope=2;
		displayName="Ammobox";
		descriptionShort="Useful for ammunition storage. Formerly used by the army. - Scott Porter";
		model="\dz\gear\containers\300RoundBox.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[]={3,3};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="metal";
	};

	class SP_StaticObj_Case_Cans_B: SP_ItemBase_Static
	{
		scope=2;
		displayName="Case Cans";
		descriptionShort="A large and spacious closet to store a backpack of any size. - Scott Porter";
		model="DZ\structures\Furniture\Cases\case_cans_b\case_cans_b.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		attachments[]=
		{
		"Back"
		};
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[]={5,7};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="metal";
	};

	class SP_StaticObj_Furniture_metalcrate: SP_ItemBase_Static
	{
		scope=2;
		displayName="Metal Crate";
		descriptionShort="A metal box. Nothing special. - Scott Porter";
		model="DZ\structures\Furniture\Cases\metalcrate\metalcrate.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[]={5,3};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="metal";
	};

	class SP_StaticObj_Furniture_class_case_a_closed: SP_ItemBase_Static
	{
		scope=2;
		displayName="School Case";
		descriptionShort="A storage unit used by school teachers to store papers for sure - Scott Porter";
		model="DZ\structures\Furniture\School_equipment\class_case_a_closed.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=10000;
		itemSize[]={0,0};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		physLayer = "item_large";
		class Cargo
		{
			itemsCargoSize[]={6,8};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		soundImpactType="wood";
	};
};