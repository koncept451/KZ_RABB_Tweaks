modded class PluginRecipesManager 
{
    override void RegisterRecipies()
    {
        super.RegisterRecipies();
		RegisterRecipe(new pack_territoryhq );
        RegisterRecipe(new KZCraftTerritoryHQKit );
    }
}