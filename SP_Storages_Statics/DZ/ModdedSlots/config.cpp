class CfgPatches
{
	class SP_Modded_Slots_CfgPatches
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{	
			"DZ_Scripts",
			"DZ_Data"
		};
	};
};
class CfgSlots
{
	class Slot_SP_Water_Bottle
	{
		name="SP_Water_Bottle";
		displayName="Water Bottle";
		selection="SP_Water_Bottle";
		ghostIcon="set:dayz_inventory image:waterbottle";
		stackMax=1;
	};

    class Slot_SP_Nail_InBox
	{
		name="SP_Nail_InBox";
		displayName="NailBox";
		selection="SP_Nail_InBox";
		ghostIcon="set:dayz_inventory image:nails";
		stackMax=1;
	};
};