class CfgPatches
{
	class KZTerritoryHQ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters"};
	};
};
class CfgVehicles
{
    class Container_Base;
	class TerritoryHQ: Container_Base
	{
		scope = 2;
		displayName = "$STR_RA_TERRITORYHQ";
		descriptionShort = "$STR_DES_RA_TERRITORYHQ";
		model = "RearmedServer\BaseBuilding\Territory\TerritoryHQ.p3d";
		inventorySlot[] = {"StorageContainer"};
		itemSize[] = {5,5};
		weight = 100;
		canBeDigged = 0;
		alignHologramToTerain = 1;
		itemBehaviour = 2;
		carveNavmesh = 1;
		physLayer = "item_large";
		simulation = "inventoryItem";
		hiddenSelections[] = {"computer"};
		hiddenSelectionsTextures[] = {"KZ_RABB_Tweaks\Data\Images\Computer_logos_co.paa"};
		attachments[] = {"CodeLock","HQ_Nails"};
		class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name = "CodeLock";
				description = "Secure your HQ";
				attachmentSlots[] = {"CodeLock"};
				icon = "cat_bb_base";
			};
			class Upkeep_1
			{
				name = "Upkeep";
				description = "Base will decay without Nails";
				attachmentSlots[] = {"HQ_Nails"};
				icon = "nails";
			};
			class Upgrades
			{
				name = "";
				description = "";
				attachmentSlots[] = {};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Territory\data\Computer.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Territory\data\Computer.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Territory\data\Computer_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Territory\data\Computer_damage.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Territory\data\Computer_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.03;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.3;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.1;
					};
				};
			};
		};
		class AnimationSources
		{
			class Placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class hidestart
			{
				source = "start";
				animPeriod = 1;
				initPhase = 0;
			};
			class hidewb
			{
				source = "wb";
				animPeriod = 1;
				initPhase = 1;
			};
		};
	};
	class Inventory_Base;
	class TerritoryHQ_Hologram: Inventory_Base
	{
		scope = 2;
		displayName = "This is a hologram";
		descriptionShort = "Nothing to see here, move along";
		model = "RearmedServer\BaseBuilding\Territory\TerritoryHQ.p3d";
		class AnimationSources
		{
			class hidewb
			{
				source = "wb";
				animPeriod = 1;
				initPhase = 1;
			};
		};
	};
	class RA_BoxKit_Base: Container_Base
	{
		scope = 0;
		model = "\RearmedServer\BaseBuilding\Storage\KitBox\KitBox.p3d";
		itemSize[] = {4,3};
		carveNavmesh = 1;
		canBeDigged = 0;
		simulation = "inventoryItem";
		itemBehaviour = 0;
		physLayer = "item_large";
		rotationFlags = 2;
		weight = 300;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KZ_RABB_Tweaks\Data\Images\carrierbox_applekz_co.paa"};
	};
	class TerritoryHQ_Kit: RA_BoxKit_Base
	{
		scope = 2;
		displayName = "$STR_RA_TERRITORYHQKIT";
		descriptionShort = "$STR_DES_RA_TERRITORYHQKIT";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KZ_RABB_Tweaks\Data\Images\carrierbox_applekz_co.paa"};
	};
};