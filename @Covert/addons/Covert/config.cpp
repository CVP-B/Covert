class CfgPatches
{
    class Covert
    {
        name = "Covert";
        author = "CVP Brett";
        requiredVersion = 1;
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles 
{
    
    class Ruins;
    class NonStrategic;
    class House: NonStrategic {class DestructionEffects;};
    class Static;

    #include "minerals\world\rock.cpp"
    #include "minerals\forge.cpp"

};

class CfgWeapons 
{
    class ItemCore;
    class InventoryItem_Base_F;
        
    #include "minerals\ores.cpp"
    #include "minerals\gems.cpp"
   // #include "minerals\shards.cpp"

};

class CfgEditorCategories
{
	class cvp
	{
		displayName = "Covert";
	};
};

class CfgEditorSubcategories
{
	class cvp_minerals
	{
		displayName = "Minerals";
	};
};