class oreBase: ItemCore 
{
	    author = "CVP";
        displayName = "Ore";
        model = "\Covert\minerals\model\ore.p3d";
		picture = "\Covert\minerals\inventory\rock_base.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        simulation= "ItemMineDetector";

		hiddenSelections[] = {"ObjTexture"};
		hiddenSelectionsTextures[] = 	{		"\Covert\minerals\textures\rock_base_tx.paa"	};
		hiddenSelectionsMaterials[] =	{		"\Covert\minerals\textures\iron_ore.rvmat"		};
	
	class ItemInfo: InventoryItem_Base_F
        {
            mass = 100;
        };
};

class cvp_iron_ore : oreBase 
{
    displayName = "Iron Ore";
	descriptionShort = "<t color='#ffff00'>Unrefined Iron Ore</t>";

	picture = "\Covert\minerals\inventory\iron_ore.paa";

    hiddenSelectionsTextures[] = 	{	"\Covert\minerals\textures\iron_ore_tx.paa"	};
	hiddenSelectionsMaterials[] =	{	"\Covert\minerals\textures\iron_ore.rvmat"	};
};

class cvp_silver_ore : oreBase 
{
    displayName = "Silver Ore";
	descriptionShort = "Unrefined Silver Ore";

	picture = "\Covert\minerals\inventory\silver_ore.paa";

    hiddenSelectionsTextures[] = 	{	"\Covert\minerals\textures\silver_ore_tx.paa"   };
	hiddenSelectionsMaterials[] =	{	"\Covert\minerals\textures\silver_ore.rvmat"    };
};

class cvp_gold_ore : oreBase 
{
    displayName = "Gold Ore";
	descriptionShort = "Unrefined Gold Ore";

	picture = "\Covert\minerals\inventory\gold_ore.paa";

    hiddenSelectionsTextures[] = 	{	"\Covert\minerals\textures\gold_ore_tx.paa"	};
	hiddenSelectionsMaterials[] =	{	"\Covert\minerals\textures\gold_ore.rvmat"	};
};

class cvp_emerald_ore : oreBase 
{
    displayName = "Emerald Ore";
	descriptionShort = "Unrefined Emerald Ore";

	picture = "\Covert\minerals\inventory\emerald_ore.paa";

    hiddenSelectionsTextures[] = 	{	"\Covert\minerals\textures\emerald_ore_tx.paa"  };
	hiddenSelectionsMaterials[] =	{	"\Covert\minerals\textures\emerald_ore.rvmat"	};
};

class cvp_ruby_ore : oreBase 
{
    displayName = "Ruby Ore";
	descriptionShort = "Unrefined Ruby Ore";

	picture = "\Covert\minerals\inventory\ruby_ore.paa";

    hiddenSelectionsTextures[] = 	{	"\Covert\minerals\textures\ruby_ore_tx.paa"	};
	hiddenSelectionsMaterials[] =	{	"\Covert\minerals\textures\ruby_ore.rvmat"	};
};

class cvp_amethyst_ore : oreBase 
{
    displayName = "Amethyst Ore";
	descriptionShort = "Unrefined Amethyst Ore";

	picture = "\Covert\minerals\inventory\amethyst_ore.paa";

    hiddenSelectionsTextures[] = 	{	"\Covert\minerals\textures\amethyst_ore_tx.paa"	};
	hiddenSelectionsMaterials[] =	{	"\Covert\minerals\textures\amethyst_ore.rvmat"	};
};