	class Land_cvp_rock_wreck : Ruins {
        scope = 1;                                      // yes folks, even tho this model might only be local in scope
        displayname="Mineral Rock Ruin";                                   // at least call it something sensible when it shows
        model = "\Covert\minerals\world\cvp_rock_wreck.p3d";
        editorCategory = "cvp";
        editorSubcategory = "cvp_minerals";
    };

    class Land_cvp_rock : House {
        scope = 2;
        model = "\Covert\minerals\world\cvp_rock.p3d";
        icon = "\Covert\minerals\world\cvp_rock_editor.paa";
        displayName = "Mineral Rock";
        faction = "Empty";
        editorCategory = "cvp";
        editorSubcategory = "cvp_minerals";
        armor = 15;
        class DestructionEffects: DestructionEffects {
            class Ruin1 {
            simulation = "ruin";
            type ="\Covert\minerals\world\cvp_rock_wreck.p3d"; // ie select a suitable one
            position = "";
            intensity = 0;
            interval = 1;
            lifeTime = 2;
            };
        };
    };

    class cvp_rockpile : Static {
        scope = 2;
        model = "\Covert\minerals\world\cvp_rock_wreck.p3d";
        icon = "\Covert\minerals\world\cvp_rock_editor.paa";
        displayName = "Mineral Rock Pile";
        faction = "Empty";
        editorCategory = "cvp";
        editorSubcategory = "cvp_minerals";
    };