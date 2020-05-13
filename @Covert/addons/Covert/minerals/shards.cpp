 class gemBase: ItemCore 
{
	    author = "CVP";
        displayName = "Gem";
        model = "\Covert\minerals\model\gem.p3d";
		picture = "\Covert\minerals\inventory\rock_base.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        simulation= "ItemMineDetector";

		hiddenSelections[] = {"ObjTexture"};
		hiddenSelectionsTextures[] = 	{		"\Covert\minerals\textures\gem_base_tx.paa"	};
		hiddenSelectionsMaterials[] =	{		"\Covert\minerals\textures\gem_base.rvmat"	};
	
	class ItemInfo: InventoryItem_Base_F
        {
            mass = 100;
        };
};

class cvp_gem_amethyst : gemBase 
    {
        displayName = "Amethyst Gem";
        descriptionShort = "Precisely Cut Amethyst Gem";

        picture = "\Covert\minerals\inventory\iron_ore.paa";
    };