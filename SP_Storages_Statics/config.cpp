class CfgPatches
{
	class SP_Simple_Storages_Statics_CfgPatches
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
class CfgMods
{
	class SP_Simple_Storages_Statics_CfgMods
	{	
		
		dir = "SP_Simple_Storages_Statics";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "SP_Simple_Storages_Statics";
		author = "Scott Porter";
		authorID = "0";
		version = "1.5";
		extra = 0;
		
		type = "mod";
		dependencies[]=
		{
			"World"
		};
		
		class defs
		{

           class worldScriptModule
            {
                value = "";
                files[] = {"SP_Storages_Statics\DZ_Scripts\4_World"};
			};
		};
	};
};