
class cvp_forge : Static {
	scope = 2;
	model = "\Covert\minerals\model\forge.p3d";
	displayName = "Refining Forge";
	maximumLoad = 1200;
    transportMaxItems = 5;
    transportMaxWeapons = 0;
    transportMaxMagazines = 0;
    editorCategory = "cvp";
    editorSubcategory = "cvp_minerals";
	
	// displayName= "<t color='#ffff00'>Turn On FLIR MFD</t>";

	class UserActions {
		
		class RefineMaterials
			{
				displayNameDefault = "<img image='\Covert\minerals\inventory\refine.paa' size='1' /> Refine Materials"; // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayName = "Refine Materials"; // Label of the action used in the action menu itself.
				position = actions_loc; // Point in Memory lod in p3d around which the action is available.
				priority = 100; // Priority coefficient used for sorting action in the action menu.
				radius = 3.5; // Range around the above defined point in which you need to be to access the action.
				onlyForPlayer = true; // Defines if the action is available only to players or AI as well.
				condition = alive this; // Condition for showing the action in action menu. In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen); // Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
			};

    };
};