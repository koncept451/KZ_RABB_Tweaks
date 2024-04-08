class CfgPatches
{
	class KZ_RABB_Tweaks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters"};
	};
};
class CfgMods
{
	class KZ_RABB_Tweaks
	{
		dir = "KZ_RABB_Tweaks";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "Jules";
		author = "Jules";
		authorID = "";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
        
        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = {"KZ_RABB_Tweaks/Scripts/4_World"};
            };
        };
	};
};