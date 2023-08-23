#include "script_component.hpp"
class CfgWeapons {
    class ItemCore;
    class Vest_NoCamo_Base;
    class Vest_Camo_Base: ItemCore     {
        class ItemInfo;
    };
    class V_PlateCarrierSpec_rgr: Vest_Camo_Base {
        class ItemInfo;
    };
    class V_PlateCarrierGL_rgr: Vest_Camo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier1_blk: Vest_Camo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
        class ItemInfo;
    };    
    class V_PlateCarrierSpec_blk: V_PlateCarrierSpec_rgr {
        class ItemInfo;
    };
    class V_PlateCarrierGL_blk: V_PlateCarrierGL_rgr {
        class ItemInfo;
    };
    class V_PlateCarrier2_blk: V_PlateCarrier2_rgr {
        class ItemInfo;
    };
    class V_BandollierB_blk: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier_Kerry: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_base_F: Vest_Camo_Base {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_heavy_base_F: V_CarrierRigKBT_01_base_F {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_heavy_Olive_F: V_CarrierRigKBT_01_heavy_base_F {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_light_base_F: Vest_Camo_Base {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_light_Olive_F: V_CarrierRigKBT_01_light_base_F {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_Olive_F: V_CarrierRigKBT_01_base_F {
        class ItemInfo;
    };

    class Crye_AVS_1: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class Crye_AVS_1_1: Crye_AVS_1 {
        class ItemInfo;
    };
    class Crye_AVS_1_2: Crye_AVS_1 {
        class ItemInfo;
    };
    class Crye_AVS_1_3: Crye_AVS_1 {
        class ItemInfo;
    };
    class Crye_AVS_2: Crye_AVS_1 {
        class ItemInfo;
    };

    class GVAR(PlateCarrierSpec_Multicam): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName="[TFWW] Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Multicam.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_spec_rig_Multicam.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierGL_Multicam): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName="[TFWW] Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Multicam.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_gl_rig_Multicam.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier1_Multicam): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName="[TFWW] Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Multicam_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier2_Multicam): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName="[TFWW] Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_2_Multicam_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    // class GVAR(BandollierB_Multicam): V_BandollierB_blk {
    //     author = QAUTHOR;
    //     displayName="[TFWW] Slash Bandolier";
    //     hiddenSelectionsTextures[]= {
    //         QPATHTOF(data\vests_multicam_co.paa)
    //     };
    //     picture=QPATHTOF(data\ui\icon_V_bandollierB_Multicam_CA.paa);
    //     MACRO_ITEM_COMMON
    //     hiddenSelections[]= {
    //         "camo"
    //     };
    //     class ItemInfo: ItemInfo {
    //         containerClass = "Supply300";
    //         hiddenSelections[]= {
    //             "camo"
    //         };
    //     };
    // };
    class GVAR(PlateCarrier_Kerry_Multicam): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName="[TFWW] Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Multicam_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierSpec_Multicam_Snow): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Snow) Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Multicam_Snow.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_spec_rig_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierGL_Multicam_Snow): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Snow) Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Multicam_Snow.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_gl_rig_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier1_Multicam_Snow): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Snow) Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Multicam_Snow_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier2_Multicam_Snow): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Snow) Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_2_Multicam_Snow_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    // class GVAR(BandollierB_Multicam_Snow): V_BandollierB_blk {
    //     author = QAUTHOR;
    //     displayName="[TFWW] (Multicam Snow) Slash Bandolier";
    //     hiddenSelectionsTextures[]= {
    //         QPATHTOF(data\vests_Multicam_Snow_co.paa)
    //     };
    //     picture=QPATHTOF(data\ui\icon_V_bandollierB_Multicam_Snow_CA.paa);
    //     MACRO_ITEM_COMMON
    //     hiddenSelections[]= {
    //         "camo"
    //     };
    //     class ItemInfo: ItemInfo {
    //         containerClass = "Supply300";
    //         hiddenSelections[]= {
    //             "camo"
    //         };
    //     };
    // };
    class GVAR(PlateCarrier_Kerry_Multicam_Snow): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Snow) Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Multicam_Snow_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierSpec_Multicam_Woodland): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Woodland) Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Multicam_Woodland.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_spec_rig_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierGL_Multicam_Woodland): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Woodland) Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Multicam_Woodland.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_gl_rig_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier1_Multicam_Woodland): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Woodland) Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Multicam_Woodland_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier2_Multicam_Woodland): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Woodland) Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_2_Multicam_Woodland_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    // class GVAR(BandollierB_Multicam_Woodland): V_BandollierB_blk {
    //     author = QAUTHOR;
    //     displayName="[TFWW] (Multicam Woodland) Slash Bandolier";
    //     hiddenSelectionsTextures[]= {
    //         QPATHTOF(data\vests_Multicam_Woodland_co.paa)
    //     };
    //     picture=QPATHTOF(data\ui\icon_V_bandollierB_Multicam_Woodland_CA.paa);
    //     MACRO_ITEM_COMMON
    //     hiddenSelections[]= {
    //         "camo"
    //     };
    //     class ItemInfo: ItemInfo {
    //         containerClass = "Supply300";
    //         hiddenSelections[]= {
    //             "camo"
    //         };
    //     };
    // };
    class GVAR(PlateCarrier_Kerry_Multicam_Woodland): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Woodland) Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Multicam_Woodland_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierSpec_Solid_Black): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Black) Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Black.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_spec_rig_Solid_Black.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierGL_Solid_Black): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Black) Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Black.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_gl_rig_Solid_Black.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier1_Solid_Black): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Black) Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Solid_Black_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier2_Solid_Black): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Black) Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_2_Solid_Black_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    // class GVAR(BandollierB_Solid_Black): V_BandollierB_blk {
    //     author = QAUTHOR;
    //     displayName="[TFWW] (Black) Slash Bandolier";
    //     hiddenSelectionsTextures[]= {
    //         QPATHTOF(data\vests_Solid_Black_co.paa)
    //     };
    //     picture=QPATHTOF(data\ui\icon_V_bandollierB_Solid_Black_CA.paa);
    //     MACRO_ITEM_COMMON
    //     hiddenSelections[]= {
    //         "camo"
    //     };
    //     class ItemInfo: ItemInfo {
    //         containerClass = "Supply300";
    //         hiddenSelections[]= {
    //             "camo"
    //         };
    //     };
    // };
    class GVAR(PlateCarrier_Kerry_Solid_Black): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName="[TFWW] (Black) Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Solid_Black_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierSpec_Solid_CoyoteBrown): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Coyote) Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_CoyoteBrown.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_spec_rig_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierGL_Solid_CoyoteBrown): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Coyote) Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_CoyoteBrown.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_gl_rig_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier1_Solid_CoyoteBrown): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Coyote) Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Solid_CoyoteBrown_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier2_Solid_CoyoteBrown): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Coyote) Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_2_Solid_CoyoteBrown_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    // class GVAR(BandollierB_Solid_CoyoteBrown): V_BandollierB_blk {
    //     author = QAUTHOR;
    //     displayName="[TFWW] (Coyote) Slash Bandolier";
    //     hiddenSelectionsTextures[]= {
    //         QPATHTOF(data\vests_Solid_CoyoteBrown_co.paa)
    //     };
    //     picture=QPATHTOF(data\ui\icon_V_bandollierB_Solid_CoyoteBrown_CA.paa);
    //     MACRO_ITEM_COMMON
    //     hiddenSelections[]= {
    //         "camo"
    //     };
    //     class ItemInfo: ItemInfo {
    //         containerClass = "Supply300";
    //         hiddenSelections[]= {
    //             "camo"
    //         };
    //     };
    // };
    class GVAR(PlateCarrier_Kerry_Solid_CoyoteBrown): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName="[TFWW] (Coyote) Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Solid_CoyoteBrown_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierSpec_Solid_Ranger_Green): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Ranger Green) Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Ranger_Green.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_spec_rig_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierGL_Solid_Ranger_Green): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Ranger Green) Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Ranger_Green.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_gl_rig_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier1_Solid_Ranger_Green): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Ranger Green) Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Solid_Ranger_Green_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier2_Solid_Ranger_Green): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Ranger Green) Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_2_Solid_Ranger_Green_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    // class GVAR(BandollierB_Solid_Ranger_Green): V_BandollierB_blk {
    //     author = QAUTHOR;
    //     displayName="[TFWW] (Ranger Green) Slash Bandolier";
    //     hiddenSelectionsTextures[]= {
    //         QPATHTOF(data\vests_Solid_Ranger_Green_co.paa)
    //     };
    //     picture=QPATHTOF(data\ui\icon_V_bandollierB_Solid_Ranger_Green_CA.paa);
    //     MACRO_ITEM_COMMON
    //     hiddenSelections[]= {
    //         "camo"
    //     };
    //     class ItemInfo: ItemInfo {
    //         containerClass = "Supply300";
    //         hiddenSelections[]= {
    //             "camo"
    //         };
    //     };
    // };
    class GVAR(PlateCarrier_Kerry_Solid_Ranger_Green): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName="[TFWW] (Ranger Green) Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Solid_Ranger_Green_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierSpec_US_Tigerstripe): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Tigerstripe) Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_Tigerstripe.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_spec_rig_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierGL_US_Tigerstripe): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Tigerstripe) Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_Tigerstripe.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_gl_rig_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier1_US_Tigerstripe): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Tigerstripe) Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_US_Tigerstripe_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier2_US_Tigerstripe): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Tigerstripe) Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_2_US_Tigerstripe_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    // class GVAR(BandollierB_US_Tigerstripe): V_BandollierB_blk {
    //     author = QAUTHOR;
    //     displayName="[TFWW] (Tigerstripe) Slash Bandolier";
    //     hiddenSelectionsTextures[]= {
    //         QPATHTOF(data\vests_US_Tigerstripe_co.paa)
    //     };
    //     picture=QPATHTOF(data\ui\icon_V_bandollierB_US_Tigerstripe_CA.paa);
    //     MACRO_ITEM_COMMON
    //     hiddenSelections[]= {
    //         "camo"
    //     };
    //     class ItemInfo: ItemInfo {
    //         containerClass = "Supply300";
    //         hiddenSelections[]= {
    //             "camo"
    //         };
    //     };
    // };
    class GVAR(PlateCarrier_Kerry_US_Tigerstripe): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName="[TFWW] (Tigerstripe) Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_US_Tigerstripe_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierSpec_Solid_Olive): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Olive) Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Olive.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_spec_rig_Solid_Olive.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierGL_Solid_Olive): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Olive) Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Olive.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_gl_rig_Solid_Olive.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier1_Solid_Olive): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Olive) Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Solid_Olive_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier2_Solid_Olive): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Olive) Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_2_Solid_Olive_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    // class GVAR(BandollierB_Solid_Olive): V_BandollierB_blk {
    //     author = QAUTHOR;
    //     displayName="[TFWW] (Olive) Slash Bandolier";
    //     hiddenSelectionsTextures[]= {
    //         QPATHTOF(data\vests_Solid_Olive_co.paa)
    //     };
    //     picture=QPATHTOF(data\ui\icon_V_bandollierB_Solid_Olive_CA.paa);
    //     MACRO_ITEM_COMMON
    //     hiddenSelections[]= {
    //         "camo"
    //     };
    //     class ItemInfo: ItemInfo {
    //         containerClass = "Supply300";
    //         hiddenSelections[]= {
    //             "camo"
    //         };
    //     };
    // };
    class GVAR(PlateCarrier_Kerry_Solid_Olive): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName="[TFWW] (Olive) Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Solid_Olive_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierSpec_Solid_Tan): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Tan) Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Tan.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_spec_rig_Solid_Tan.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierGL_Solid_Tan): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Tan) Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Tan.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_gl_rig_Solid_Tan.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier1_Solid_Tan): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Tan) Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Solid_Tan_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier2_Solid_Tan): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName="[TFWW] (Tan) Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_2_Solid_Tan_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    // class GVAR(BandollierB_Solid_Tan): V_BandollierB_blk {
    //     author = QAUTHOR;
    //     displayName="[TFWW] (Tan) Slash Bandolier";
    //     hiddenSelectionsTextures[]= {
    //         QPATHTOF(data\vests_Solid_Tan_co.paa)
    //     };
    //     picture=QPATHTOF(data\ui\icon_V_bandollierB_Solid_Tan_CA.paa);
    //     MACRO_ITEM_COMMON
    //     hiddenSelections[]= {
    //         "camo"
    //     };
    //     class ItemInfo: ItemInfo {
    //         containerClass = "Supply300";
    //         hiddenSelections[]= {
    //             "camo"
    //         };
    //     };
    // };
    class GVAR(PlateCarrier_Kerry_Solid_Tan): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName="[TFWW] (Tan) Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Solid_Tan_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierSpec_Solid_White): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName="[TFWW] (White) Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_White.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_spec_rig_Solid_White.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierGL_Solid_White): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName="[TFWW] (White) Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_White.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_gl_rig_Solid_White.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier1_Solid_White): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName="[TFWW] (White) Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Solid_White_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier2_Solid_White): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName="[TFWW] (White) Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_2_Solid_White_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    // class GVAR(BandollierB_Solid_White): V_BandollierB_blk {
    //     author = QAUTHOR;
    //     displayName="[TFWW] (White) Slash Bandolier";
    //     hiddenSelectionsTextures[]= {
    //         QPATHTOF(data\vests_Solid_White_co.paa)
    //     };
    //     picture=QPATHTOF(data\ui\icon_V_bandollierB_Solid_White_CA.paa);
    //     MACRO_ITEM_COMMON
    //     hiddenSelections[]= {
    //         "camo"
    //     };
    //     class ItemInfo: ItemInfo {
    //         containerClass = "Supply300";
    //         hiddenSelections[]= {
    //             "camo"
    //         };
    //     };
    // };
    class GVAR(PlateCarrier_Kerry_Solid_White): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName="[TFWW] (White) Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_Solid_White_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierSpec_US_DCU): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName="[TFWW] (DCU) Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_DCU.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_spec_rig_US_DCU.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierGL_US_DCU): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName="[TFWW] (DCU) Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_DCU.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_gl_rig_US_DCU.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier1_US_DCU): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName="[TFWW] (DCU) Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_US_DCU_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier2_US_DCU): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName="[TFWW] (DCU) Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_2_US_DCU_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    // class GVAR(BandollierB_US_DCU): V_BandollierB_blk {
    //     author = QAUTHOR;
    //     displayName="[TFWW] (DCU) Slash Bandolier";
    //     hiddenSelectionsTextures[]= {
    //         QPATHTOF(data\vests_US_DCU_co.paa)
    //     };
    //     picture=QPATHTOF(data\ui\icon_V_bandollierB_US_DCU_CA.paa);
    //     MACRO_ITEM_COMMON
    //     hiddenSelections[]= {
    //         "camo"
    //     };
    //     class ItemInfo: ItemInfo {
    //         containerClass = "Supply300";
    //         hiddenSelections[]= {
    //             "camo"
    //         };
    //     };
    // };
    class GVAR(PlateCarrier_Kerry_US_DCU): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName="[TFWW] (DCU) Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_US_DCU_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierSpec_US_M81): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName="[TFWW] (M81) Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_M81.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_spec_rig_US_M81.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrierGL_US_M81): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName="[TFWW] (M81) Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_M81.paa)
        };
        picture=QPATHTOF(data\ui\icon_carrier_gl_rig_US_M81.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier1_US_M81): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName="[TFWW] (M81) Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_US_M81_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(PlateCarrier2_US_M81): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName="[TFWW] (M81) Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_2_US_M81_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    // class GVAR(BandollierB_US_M81): V_BandollierB_blk {
    //     author = QAUTHOR;
    //     displayName="[TFWW] (M81) Slash Bandolier";
    //     hiddenSelectionsTextures[]= {
    //         QPATHTOF(data\vests_US_M81_co.paa)
    //     };
    //     picture=QPATHTOF(data\ui\icon_V_bandollierB_US_M81_CA.paa);
    //     MACRO_ITEM_COMMON
    //     hiddenSelections[]= {
    //         "camo"
    //     };
    //     class ItemInfo: ItemInfo {
    //         containerClass = "Supply300";
    //         hiddenSelections[]= {
    //             "camo"
    //         };
    //     };
    // };
    class GVAR(PlateCarrier_Kerry_US_M81): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName="[TFWW] (M81) Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_plate_carrier_1_US_M81_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_heavy_Multicam_F): V_CarrierRigKBT_01_heavy_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrierrigkbt_01_multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_heavy_Multicam_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_light_Multicam_F): V_CarrierRigKBT_01_light_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrierrigkbt_01_multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_light_Multicam_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_Multicam_F): V_CarrierRigKBT_01_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrierrigkbt_01_multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_Multicam_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_heavy_Multicam_Snow_F): V_CarrierRigKBT_01_heavy_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Snow) Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrierrigkbt_01_multicam_snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_heavy_Multicam_Snow_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_light_Multicam_Snow_F): V_CarrierRigKBT_01_light_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Snow) Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrierrigkbt_01_multicam_snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_light_Multicam_Snow_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_Multicam_Snow_F): V_CarrierRigKBT_01_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Snow) Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrierrigkbt_01_multicam_snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_Multicam_Snow_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_heavy_Multicam_Woodland_F): V_CarrierRigKBT_01_heavy_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Woodland) Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Woodland_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_heavy_Multicam_Woodland_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_light_Multicam_Woodland_F): V_CarrierRigKBT_01_light_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Woodland) Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Woodland_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_light_Multicam_Woodland_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_Multicam_Woodland_F): V_CarrierRigKBT_01_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Multicam Woodland) Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Woodland_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_Multicam_Woodland_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_heavy_Solid_Black_F): V_CarrierRigKBT_01_heavy_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Black) Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Black_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_heavy_Solid_Black_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_light_Solid_Black_F): V_CarrierRigKBT_01_light_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Black) Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Black_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_light_Solid_Black_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_Solid_Black_F): V_CarrierRigKBT_01_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Black) Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Black_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_Solid_Black_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_heavy_Solid_CoyoteBrown_F): V_CarrierRigKBT_01_heavy_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Coyote) Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_CoyoteBrown_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_heavy_Solid_CoyoteBrown_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_light_Solid_CoyoteBrown_F): V_CarrierRigKBT_01_light_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Coyote) Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_CoyoteBrown_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_light_Solid_CoyoteBrown_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_Solid_CoyoteBrown_F): V_CarrierRigKBT_01_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Coyote) Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_CoyoteBrown_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_Solid_CoyoteBrown_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_heavy_Solid_Ranger_Green_F): V_CarrierRigKBT_01_heavy_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Ranger Green) Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Ranger_Green_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_heavy_Solid_Ranger_Green_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_light_Solid_Ranger_Green_F): V_CarrierRigKBT_01_light_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Ranger Green) Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Ranger_Green_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_light_Solid_Ranger_Green_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_Solid_Ranger_Green_F): V_CarrierRigKBT_01_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Ranger Green) Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Ranger_Green_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_Solid_Ranger_Green_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_heavy_US_Tigerstripe_F): V_CarrierRigKBT_01_heavy_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Tigerstripe) Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_Tigerstripe_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_heavy_US_Tigerstripe_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_light_US_Tigerstripe_F): V_CarrierRigKBT_01_light_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Tigerstripe) Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_Tigerstripe_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_light_US_Tigerstripe_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_US_Tigerstripe_F): V_CarrierRigKBT_01_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Tigerstripe) Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_Tigerstripe_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_US_Tigerstripe_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_heavy_Solid_Olive_F): V_CarrierRigKBT_01_heavy_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Olive) Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Olive_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_heavy_Solid_Olive_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_light_Solid_Olive_F): V_CarrierRigKBT_01_light_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Olive) Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Olive_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_light_Solid_Olive_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_Solid_Olive_F): V_CarrierRigKBT_01_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Olive) Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Olive_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_Solid_Olive_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_heavy_Solid_Tan_F): V_CarrierRigKBT_01_heavy_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Tan) Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Tan_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_heavy_Solid_Tan_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_light_Solid_Tan_F): V_CarrierRigKBT_01_light_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Tan) Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Tan_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_light_Solid_Tan_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_Solid_Tan_F): V_CarrierRigKBT_01_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (Tan) Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Tan_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_Solid_Tan_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_heavy_Solid_White_F): V_CarrierRigKBT_01_heavy_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (White) Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_White_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_heavy_Solid_White_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_light_Solid_White_F): V_CarrierRigKBT_01_light_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (White) Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_White_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_light_Solid_White_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_Solid_White_F): V_CarrierRigKBT_01_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (White) Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_White_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_Solid_White_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_heavy_US_DCU_F): V_CarrierRigKBT_01_heavy_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (DCU) Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_DCU_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_heavy_US_DCU_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_light_US_DCU_F): V_CarrierRigKBT_01_light_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (DCU) Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_DCU_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_light_US_DCU_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_US_DCU_F): V_CarrierRigKBT_01_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (DCU) Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_DCU_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_US_DCU_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_heavy_US_M81_F): V_CarrierRigKBT_01_heavy_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (M81) Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_M81_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_heavy_US_M81_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_light_US_M81_F): V_CarrierRigKBT_01_light_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (M81) Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_M81_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_light_US_M81_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class GVAR(CarrierRigKBT_01_US_M81_F): V_CarrierRigKBT_01_Olive_F {
        author = QAUTHOR;
        displayName="[TFWW] (M81) Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_M81_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_CarrierRigKBT_01_US_M81_F_ca.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    ////////////////////////

    class GVAR(Crye_AVS_1_Multicam): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam.paa),
            QPATHTOF(data\AVS_AVSPouch_Multicam.paa),
            QPATHTOF(data\AVS_Belt556_Multicam.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam.paa),
            QPATHTOF(data\AVS_Radio_Multicam.paa),
            QPATHTOF(data\AVS_glockMags_Multicam.paa),
            QPATHTOF(data\AVS_pouch556_Multicam.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam.paa),
            QPATHTOF(data\AVS_S20_Multicam.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Multicam): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam.paa),
            QPATHTOF(data\AVS_Belt556_Multicam.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam.paa),
            QPATHTOF(data\AVS_Radio_Multicam.paa),
            QPATHTOF(data\AVS_Kangaroo_Multicam.paa),
            QPATHTOF(data\AVS_glockMags_Multicam.paa),
            QPATHTOF(data\AVS_pouch556_Multicam.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam.paa),
            QPATHTOF(data\AVS_S20_Multicam.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Multicam): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam.paa),
            QPATHTOF(data\AVS_Mk4_Multicam.paa),
            QPATHTOF(data\AVS_Belt556_Multicam.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam.paa),
            QPATHTOF(data\AVS_Radio_Multicam.paa),
            QPATHTOF(data\AVS_glockMags_Multicam.paa),
            QPATHTOF(data\AVS_pouch556_Multicam.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam.paa),
            QPATHTOF(data\AVS_S20_Multicam.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Multicam): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam.paa),
            QPATHTOF(data\AVS_AVSPouchT_Multicam.paa),
            QPATHTOF(data\AVS_Belt556_Multicam.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam.paa),
            QPATHTOF(data\AVS_Radio_Multicam.paa),
            QPATHTOF(data\AVS_glockMags_Multicam.paa),
            QPATHTOF(data\AVS_pouch556_Multicam.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam.paa),
            QPATHTOF(data\AVS_S20_Multicam.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_Multicam): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam.paa),
            QPATHTOF(data\AVS_AVSPouch_Multicam.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam.paa),
            QPATHTOF(data\AVS_Radio_Multicam.paa),
            QPATHTOF(data\AVS_LMGpouches_Multicam.paa),
            QPATHTOF(data\AVS_glockMags_Multicam.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam.paa),
            QPATHTOF(data\AVS_S20_Multicam.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_Multicam_Snow): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Multicam Snow) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Snow.paa),
            QPATHTOF(data\AVS_AVSPouch_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Snow.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Snow.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Snow.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Snow.paa),
            QPATHTOF(data\AVS_S20_Multicam_Snow.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Snow.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Multicam_Snow): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Multicam Snow) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Snow.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Kangaroo_Multicam_Snow.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Snow.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Snow.paa),
            QPATHTOF(data\AVS_S20_Multicam_Snow.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Snow.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Multicam_Snow): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Multicam Snow) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Mk4_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Snow.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Snow.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Snow.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Snow.paa),
            QPATHTOF(data\AVS_S20_Multicam_Snow.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Snow.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Multicam_Snow): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Multicam Snow) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Snow.paa),
            QPATHTOF(data\AVS_AVSPouchT_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Snow.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Snow.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Snow.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Snow.paa),
            QPATHTOF(data\AVS_S20_Multicam_Snow.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Crye_AVS_2_Multicam_Snow): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Multicam Snow) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Snow.paa),
            QPATHTOF(data\AVS_AVSPouch_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Snow.paa),
            QPATHTOF(data\AVS_LMGpouches_Multicam_Snow.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Snow.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Snow.paa),
            QPATHTOF(data\AVS_S20_Multicam_Snow.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Snow.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_Multicam_Woodland): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Multicam Woodland) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_AVSPouch_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_S20_Multicam_Woodland.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Multicam_Woodland): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Multicam Woodland) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Kangaroo_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_S20_Multicam_Woodland.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Multicam_Woodland): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Multicam Woodland) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Mk4_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_S20_Multicam_Woodland.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Multicam_Woodland): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Multicam Woodland) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_AVSPouchT_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_S20_Multicam_Woodland.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_Multicam_Woodland): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Multicam Woodland) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_AVSPouch_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_LMGpouches_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_S20_Multicam_Woodland.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_Solid_CoyoteBrown): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Coyote) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Belt556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Radio_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_glockMags_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_pouch556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_S20_Solid_CoyoteBrown.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Solid_CoyoteBrown): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Coyote) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Belt556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Radio_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Kangaroo_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_glockMags_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_pouch556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_S20_Solid_CoyoteBrown.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Solid_CoyoteBrown): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Coyote) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Mk4_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Belt556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Radio_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_glockMags_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_pouch556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_S20_Solid_CoyoteBrown.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Solid_CoyoteBrown): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Coyote) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_AVSPouchT_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Belt556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Radio_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_glockMags_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_pouch556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_S20_Solid_CoyoteBrown.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_Solid_CoyoteBrown): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Coyote) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Radio_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_LMGpouches_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_glockMags_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_S20_Solid_CoyoteBrown.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_Solid_Ranger_Green): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Ranger) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Radio_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_S20_Solid_Ranger_Green.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Solid_Ranger_Green): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Ranger) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Radio_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Kangaroo_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_S20_Solid_Ranger_Green.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Solid_Ranger_Green): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Ranger) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Mk4_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Radio_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_S20_Solid_Ranger_Green.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Solid_Ranger_Green): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Ranger) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_AVSPouchT_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Radio_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_S20_Solid_Ranger_Green.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_Solid_Ranger_Green): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Ranger) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Radio_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_LMGpouches_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_S20_Solid_Ranger_Green.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_US_Tigerstripe): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Tigerstripe) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_AVSPouch_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Belt556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BluforMed_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Cumberbands_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_GPpouch_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Radio_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_glockMags_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_pouch556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Sideplate_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_S20_US_Tigerstripe.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_US_Tigerstripe): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Tigerstripe) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Belt556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BluforMed_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Cumberbands_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_GPpouch_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Radio_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Kangaroo_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_glockMags_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_pouch556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Sideplate_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_S20_US_Tigerstripe.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_US_Tigerstripe): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Tigerstripe) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Mk4_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Belt556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BluforMed_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Cumberbands_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_GPpouch_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Radio_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_glockMags_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_pouch556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Sideplate_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_S20_US_Tigerstripe.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_US_Tigerstripe): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Tigerstripe) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_AVSPouchT_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Belt556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BluforMed_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Cumberbands_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_GPpouch_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Radio_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_glockMags_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_pouch556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Sideplate_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_S20_US_Tigerstripe.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_US_Tigerstripe): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Tigerstripe) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_AVSPouch_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BluforMed_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Cumberbands_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Radio_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_LMGpouches_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_glockMags_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Sideplate_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_S20_US_Tigerstripe.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_Solid_Olive): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Olive) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Olive.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_Olive.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Olive.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Olive.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Olive.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Olive.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Olive.paa),
            QPATHTOF(data\AVS_Radio_Solid_Olive.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Olive.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Olive.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Olive.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Olive.paa),
            QPATHTOF(data\AVS_S20_Solid_Olive.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Olive.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Solid_Olive): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Olive) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Olive.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Olive.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Olive.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Olive.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Olive.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Olive.paa),
            QPATHTOF(data\AVS_Radio_Solid_Olive.paa),
            QPATHTOF(data\AVS_Kangaroo_Solid_Olive.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Olive.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Olive.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Olive.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Olive.paa),
            QPATHTOF(data\AVS_S20_Solid_Olive.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Olive.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Solid_Olive): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Olive) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Olive.paa),
            QPATHTOF(data\AVS_Mk4_Solid_Olive.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Olive.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Olive.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Olive.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Olive.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Olive.paa),
            QPATHTOF(data\AVS_Radio_Solid_Olive.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Olive.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Olive.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Olive.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Olive.paa),
            QPATHTOF(data\AVS_S20_Solid_Olive.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Olive.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Solid_Olive): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Olive) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Olive.paa),
            QPATHTOF(data\AVS_AVSPouchT_Solid_Olive.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Olive.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Olive.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Olive.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Olive.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Olive.paa),
            QPATHTOF(data\AVS_Radio_Solid_Olive.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Olive.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Olive.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Olive.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Olive.paa),
            QPATHTOF(data\AVS_S20_Solid_Olive.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Olive.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_Solid_Olive): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Olive) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Olive.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_Olive.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Olive.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Olive.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Olive.paa),
            QPATHTOF(data\AVS_Radio_Solid_Olive.paa),
            QPATHTOF(data\AVS_LMGpouches_Solid_Olive.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Olive.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Olive.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Olive.paa),
            QPATHTOF(data\AVS_S20_Solid_Olive.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Olive.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_Solid_Tan): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Tan) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Tan.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_Tan.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Tan.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Tan.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Tan.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Tan.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Tan.paa),
            QPATHTOF(data\AVS_Radio_Solid_Tan.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Tan.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Tan.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Tan.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Tan.paa),
            QPATHTOF(data\AVS_S20_Solid_Tan.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Tan.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Solid_Tan): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Tan) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Tan.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Tan.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Tan.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Tan.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Tan.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Tan.paa),
            QPATHTOF(data\AVS_Radio_Solid_Tan.paa),
            QPATHTOF(data\AVS_Kangaroo_Solid_Tan.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Tan.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Tan.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Tan.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Tan.paa),
            QPATHTOF(data\AVS_S20_Solid_Tan.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Tan.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Solid_Tan): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Tan) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Tan.paa),
            QPATHTOF(data\AVS_Mk4_Solid_Tan.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Tan.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Tan.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Tan.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Tan.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Tan.paa),
            QPATHTOF(data\AVS_Radio_Solid_Tan.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Tan.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Tan.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Tan.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Tan.paa),
            QPATHTOF(data\AVS_S20_Solid_Tan.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Tan.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Solid_Tan): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Tan) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Tan.paa),
            QPATHTOF(data\AVS_AVSPouchT_Solid_Tan.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Tan.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Tan.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Tan.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Tan.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Tan.paa),
            QPATHTOF(data\AVS_Radio_Solid_Tan.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Tan.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Tan.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Tan.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Tan.paa),
            QPATHTOF(data\AVS_S20_Solid_Tan.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Tan.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_Solid_Tan): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (Tan) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Tan.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_Tan.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Tan.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Tan.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Tan.paa),
            QPATHTOF(data\AVS_Radio_Solid_Tan.paa),
            QPATHTOF(data\AVS_LMGpouches_Solid_Tan.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Tan.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Tan.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Tan.paa),
            QPATHTOF(data\AVS_S20_Solid_Tan.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Tan.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_Solid_White): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (White) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_White.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_White.paa),
            QPATHTOF(data\AVS_Belt556_Solid_White.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_White.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_White.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_White.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_White.paa),
            QPATHTOF(data\AVS_Radio_Solid_White.paa),
            QPATHTOF(data\AVS_glockMags_Solid_White.paa),
            QPATHTOF(data\AVS_pouch556_Solid_White.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_White.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_White.paa),
            QPATHTOF(data\AVS_S20_Solid_White.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_White.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Solid_White): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (White) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_White.paa),
            QPATHTOF(data\AVS_Belt556_Solid_White.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_White.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_White.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_White.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_White.paa),
            QPATHTOF(data\AVS_Radio_Solid_White.paa),
            QPATHTOF(data\AVS_Kangaroo_Solid_White.paa),
            QPATHTOF(data\AVS_glockMags_Solid_White.paa),
            QPATHTOF(data\AVS_pouch556_Solid_White.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_White.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_White.paa),
            QPATHTOF(data\AVS_S20_Solid_White.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_White.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Solid_White): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (White) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_White.paa),
            QPATHTOF(data\AVS_Mk4_Solid_White.paa),
            QPATHTOF(data\AVS_Belt556_Solid_White.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_White.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_White.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_White.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_White.paa),
            QPATHTOF(data\AVS_Radio_Solid_White.paa),
            QPATHTOF(data\AVS_glockMags_Solid_White.paa),
            QPATHTOF(data\AVS_pouch556_Solid_White.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_White.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_White.paa),
            QPATHTOF(data\AVS_S20_Solid_White.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_White.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Solid_White): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (White) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_White.paa),
            QPATHTOF(data\AVS_AVSPouchT_Solid_White.paa),
            QPATHTOF(data\AVS_Belt556_Solid_White.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_White.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_White.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_White.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_White.paa),
            QPATHTOF(data\AVS_Radio_Solid_White.paa),
            QPATHTOF(data\AVS_glockMags_Solid_White.paa),
            QPATHTOF(data\AVS_pouch556_Solid_White.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_White.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_White.paa),
            QPATHTOF(data\AVS_S20_Solid_White.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_White.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_Solid_White): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (White) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_White.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_White.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_White.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_White.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_White.paa),
            QPATHTOF(data\AVS_Radio_Solid_White.paa),
            QPATHTOF(data\AVS_LMGpouches_Solid_White.paa),
            QPATHTOF(data\AVS_glockMags_Solid_White.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_White.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_White.paa),
            QPATHTOF(data\AVS_S20_Solid_White.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_White.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_US_DCU): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (DCU) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_DCU.paa),
            QPATHTOF(data\AVS_AVSPouch_US_DCU.paa),
            QPATHTOF(data\AVS_Belt556_US_DCU.paa),
            QPATHTOF(data\AVS_BluforMed_US_DCU.paa),
            QPATHTOF(data\AVS_Cumberbands_US_DCU.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_DCU.paa),
            QPATHTOF(data\AVS_GPpouch_US_DCU.paa),
            QPATHTOF(data\AVS_Radio_US_DCU.paa),
            QPATHTOF(data\AVS_glockMags_US_DCU.paa),
            QPATHTOF(data\AVS_pouch556_US_DCU.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_DCU.paa),
            QPATHTOF(data\AVS_Sideplate_US_DCU.paa),
            QPATHTOF(data\AVS_S20_US_DCU.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_DCU.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_US_DCU): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (DCU) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_DCU.paa),
            QPATHTOF(data\AVS_Belt556_US_DCU.paa),
            QPATHTOF(data\AVS_BluforMed_US_DCU.paa),
            QPATHTOF(data\AVS_Cumberbands_US_DCU.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_DCU.paa),
            QPATHTOF(data\AVS_GPpouch_US_DCU.paa),
            QPATHTOF(data\AVS_Radio_US_DCU.paa),
            QPATHTOF(data\AVS_Kangaroo_US_DCU.paa),
            QPATHTOF(data\AVS_glockMags_US_DCU.paa),
            QPATHTOF(data\AVS_pouch556_US_DCU.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_DCU.paa),
            QPATHTOF(data\AVS_Sideplate_US_DCU.paa),
            QPATHTOF(data\AVS_S20_US_DCU.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_DCU.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_US_DCU): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (DCU) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_DCU.paa),
            QPATHTOF(data\AVS_Mk4_US_DCU.paa),
            QPATHTOF(data\AVS_Belt556_US_DCU.paa),
            QPATHTOF(data\AVS_BluforMed_US_DCU.paa),
            QPATHTOF(data\AVS_Cumberbands_US_DCU.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_DCU.paa),
            QPATHTOF(data\AVS_GPpouch_US_DCU.paa),
            QPATHTOF(data\AVS_Radio_US_DCU.paa),
            QPATHTOF(data\AVS_glockMags_US_DCU.paa),
            QPATHTOF(data\AVS_pouch556_US_DCU.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_DCU.paa),
            QPATHTOF(data\AVS_Sideplate_US_DCU.paa),
            QPATHTOF(data\AVS_S20_US_DCU.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_DCU.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_US_DCU): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (DCU) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_DCU.paa),
            QPATHTOF(data\AVS_AVSPouchT_US_DCU.paa),
            QPATHTOF(data\AVS_Belt556_US_DCU.paa),
            QPATHTOF(data\AVS_BluforMed_US_DCU.paa),
            QPATHTOF(data\AVS_Cumberbands_US_DCU.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_DCU.paa),
            QPATHTOF(data\AVS_GPpouch_US_DCU.paa),
            QPATHTOF(data\AVS_Radio_US_DCU.paa),
            QPATHTOF(data\AVS_glockMags_US_DCU.paa),
            QPATHTOF(data\AVS_pouch556_US_DCU.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_DCU.paa),
            QPATHTOF(data\AVS_Sideplate_US_DCU.paa),
            QPATHTOF(data\AVS_S20_US_DCU.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_DCU.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_US_DCU): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (DCU) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_DCU.paa),
            QPATHTOF(data\AVS_AVSPouch_US_DCU.paa),
            QPATHTOF(data\AVS_BluforMed_US_DCU.paa),
            QPATHTOF(data\AVS_Cumberbands_US_DCU.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_DCU.paa),
            QPATHTOF(data\AVS_Radio_US_DCU.paa),
            QPATHTOF(data\AVS_LMGpouches_US_DCU.paa),
            QPATHTOF(data\AVS_glockMags_US_DCU.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_DCU.paa),
            QPATHTOF(data\AVS_Sideplate_US_DCU.paa),
            QPATHTOF(data\AVS_S20_US_DCU.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_DCU.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_US_M81): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (M81) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_M81.paa),
            QPATHTOF(data\AVS_AVSPouch_US_M81.paa),
            QPATHTOF(data\AVS_Belt556_US_M81.paa),
            QPATHTOF(data\AVS_BluforMed_US_M81.paa),
            QPATHTOF(data\AVS_Cumberbands_US_M81.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_M81.paa),
            QPATHTOF(data\AVS_GPpouch_US_M81.paa),
            QPATHTOF(data\AVS_Radio_US_M81.paa),
            QPATHTOF(data\AVS_glockMags_US_M81.paa),
            QPATHTOF(data\AVS_pouch556_US_M81.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_M81.paa),
            QPATHTOF(data\AVS_Sideplate_US_M81.paa),
            QPATHTOF(data\AVS_S20_US_M81.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_M81.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(Crye_AVS_1_1_US_M81): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (M81) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_M81.paa),
            QPATHTOF(data\AVS_Belt556_US_M81.paa),
            QPATHTOF(data\AVS_BluforMed_US_M81.paa),
            QPATHTOF(data\AVS_Cumberbands_US_M81.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_M81.paa),
            QPATHTOF(data\AVS_GPpouch_US_M81.paa),
            QPATHTOF(data\AVS_Radio_US_M81.paa),
            QPATHTOF(data\AVS_Kangaroo_US_M81.paa),
            QPATHTOF(data\AVS_glockMags_US_M81.paa),
            QPATHTOF(data\AVS_pouch556_US_M81.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_M81.paa),
            QPATHTOF(data\AVS_Sideplate_US_M81.paa),
            QPATHTOF(data\AVS_S20_US_M81.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_M81.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(Crye_AVS_1_2_US_M81): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (M81) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_M81.paa),
            QPATHTOF(data\AVS_Mk4_US_M81.paa),
            QPATHTOF(data\AVS_Belt556_US_M81.paa),
            QPATHTOF(data\AVS_BluforMed_US_M81.paa),
            QPATHTOF(data\AVS_Cumberbands_US_M81.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_M81.paa),
            QPATHTOF(data\AVS_GPpouch_US_M81.paa),
            QPATHTOF(data\AVS_Radio_US_M81.paa),
            QPATHTOF(data\AVS_glockMags_US_M81.paa),
            QPATHTOF(data\AVS_pouch556_US_M81.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_M81.paa),
            QPATHTOF(data\AVS_Sideplate_US_M81.paa),
            QPATHTOF(data\AVS_S20_US_M81.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_M81.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Crye_AVS_1_3_US_M81): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (M81) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_M81.paa),
            QPATHTOF(data\AVS_AVSPouchT_US_M81.paa),
            QPATHTOF(data\AVS_Belt556_US_M81.paa),
            QPATHTOF(data\AVS_BluforMed_US_M81.paa),
            QPATHTOF(data\AVS_Cumberbands_US_M81.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_M81.paa),
            QPATHTOF(data\AVS_GPpouch_US_M81.paa),
            QPATHTOF(data\AVS_Radio_US_M81.paa),
            QPATHTOF(data\AVS_glockMags_US_M81.paa),
            QPATHTOF(data\AVS_pouch556_US_M81.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_M81.paa),
            QPATHTOF(data\AVS_Sideplate_US_M81.paa),
            QPATHTOF(data\AVS_S20_US_M81.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_M81.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(Crye_AVS_2_US_M81): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[TFWW] (M81) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_M81.paa),
            QPATHTOF(data\AVS_AVSPouch_US_M81.paa),
            QPATHTOF(data\AVS_BluforMed_US_M81.paa),
            QPATHTOF(data\AVS_Cumberbands_US_M81.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_M81.paa),
            QPATHTOF(data\AVS_Radio_US_M81.paa),
            QPATHTOF(data\AVS_LMGpouches_US_M81.paa),
            QPATHTOF(data\AVS_glockMags_US_M81.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_M81.paa),
            QPATHTOF(data\AVS_Sideplate_US_M81.paa),
            QPATHTOF(data\AVS_S20_US_M81.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_M81.paa);
        MACRO_ITEM_COMMON
    };
    ////////////////////////////////////////////

    class JPC2_MC: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
            };
    };
    class JPC22: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
    class JPC23: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
    class JPC24: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
    class JPC25: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
    ////////////////////////////////
    class LV119: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
    class LV1192: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
    class LV1193: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
    class LV1194: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
};
