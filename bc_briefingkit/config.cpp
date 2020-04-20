class CfgPatches
{
	class bc_briefingkit
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"cba_main"
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class bc_briefingkit
	{
		clientinit="call compile preprocessFileLineNumbers '\bba\bc\addons\briefingkit\xeh_postInit.sqf'";
	};
};
