#include "script_component.hpp"
class CfgWeapons {

    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore: CBA_MiscItem {};

    // MEDICAL SUPPLIES

    class GVAR(FirstAid): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        displayName = "Boo Boo Bag";
        descriptionShort = "Contains material for first aid";
        editorPreview = QPATHTOF(data\previews\firstaid.jpg);
        picture = QPATHTOF(data\ui\firstaid_ca.paa);
        model = "\a3\weapons_f\ammo\mag_firstaidkit.p3d";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };

    class GVAR(MedicKit): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        displayName = "Medic Bag";
        descriptionShort = "Contains materials to resupply medics";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        picture = QPATHTOF(data\ui\medickit_ca.paa);
        model = "\a3\props_f_orange\humanitarian\camps\firstaidkit_01_closed_f.p3d";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 24;
        };
    };

    class GVAR(Trauma): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        displayName = "Trauma Kit";
        descriptionShort = "Contains materials for medics";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        picture = QPATHTOF(data\ui\medickit_ca.paa);
        model = "\a3\props_f_orange\humanitarian\camps\firstaidkit_01_closed_f.p3d";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 50;
        };
    };

        class GVAR(Fluid): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        displayName = "Fluid Kit";
        descriptionShort = "Box of Water";
        editorPreview = QPATHTOF(data\previews\medickit.jpg);
        picture = QPATHTOF(data\ui\medickit_ca.paa);
        model = "\a3\props_f_orange\humanitarian\camps\firstaidkit_01_closed_f.p3d";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 35;
        };
    };

    class GVAR(DrugKit): ACE_ItemCore {
        scope = 2;
        author = QAUTHOR;
        displayName = "Drug Kit";
        descriptionShort = "Contains DURGS!";
        editorPreview = QPATHTOF(data\previews\booboo_ca.paa);
        picture = QPATHTOF(data\previews\booboo_ca.paa);
        model = "\a3\props_f_orange\humanitarian\camps\firstaidkit_01_closed_f.p3d";
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 12;
        };
    };

    class ACE_fieldDressing: ACE_ItemCore {
        scope=2;
        picture= QPATHTOF(data\icon\IB.paa);
        displayName="Pressure Bandage";
        descriptionShort="Quickly stanches haemorrhaging from injuries";
        descriptionUse="Quickly stanches haemorrhaging from injuries";
    };

    class ACE_quikclot: ACE_ItemCore {
        scope=2;
        displayName="Quikclot Combat Gauze";
        picture= QPATHTOF(data\icon\Quikclot.paa);
    };

};
