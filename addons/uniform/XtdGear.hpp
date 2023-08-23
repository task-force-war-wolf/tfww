class XtdGearModels {
    class CfgWeapons {
        class tfww_uniform_Soldier {
            options[] = { "camo" }; // Always computed, do not edit
            label = "Stealth Uniform";
            class camo {
                alwaysSelectable = 1;
                values[] = { "Multicam_F", "Multicam_Snow_F", "Multicam_Woodland_F", "Solid_Black_F", "US_DCU_F", "US_M81_F", "US_Tigerstripe_F" };
                class Solid_Black_F {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Multicam_F {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Multicam_Snow_F {
                    label = "MCA";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Multicam_Woodland_F {
                    label = "MCW";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class US_DCU_F {
                    label = "DCU";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class US_M81_F {
                    label = "M81";
                    image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
                class US_Tigerstripe_F {
                    label = "Tiger";
                    image = "z\aceax\addons\gearinfo\data\camo\tsw.paa";
                };
            };
        };
        class tfww_uniform_Soldier_3 {
            options[] = { "camo" }; // Always computed, do not edit
            label = "Stealth Uniform (Rolled-up)";
            class camo {
                alwaysSelectable = 1;
                values[] = { "Multicam_F", "Multicam_Snow_F", "Multicam_Woodland_F", "Solid_Black_F", "US_DCU_F", "US_M81_F", "US_Tigerstripe_F" };
                class Solid_Black_F {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Multicam_F {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Multicam_Snow_F {
                    label = "MCA";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Multicam_Woodland_F {
                    label = "MCW";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class US_DCU_F {
                    label = "DCU";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class US_M81_F {
                    label = "M81";
                    image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
                class US_Tigerstripe_F {
                    label = "Tiger";
                    image = "z\aceax\addons\gearinfo\data\camo\tsw.paa";
                };
            };
        };

        class acucrye {
            options[] = { "camo","type","sh" };
            label = "ACU CRYE";
            class camo {
                alwaysSelectable = 1;
                values[] = { "ocp", "wdl" };
                class ocp {
                    label = "OCP";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class wdl {
                    label = "Woodland";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = { "norm", "tshirt", "vest" };
                class norm {
                    label = "Default";
                };
                class tshirt {
                    label = "T Shirt";
                };
                class vest {
                    label = "Vest";
                };
            };
            class sh {
                alwaysSelectable = 1;
                values[] = { "yes", "no" };
                class yes {
                    label = "Short Sleeve ";
                };
                class no {
                    label = "Long Sleeve ";
                };
            };


        };
        class acumassif {
            options[] = { "camo","type" };
            label = "ACU Massif";
            class camo {
                alwaysSelectable = 1;
                values[] = { "ocp", "wdl" };
                class ocp {
                    label = "OCP";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class wdl {
                    label = "Woodland";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = { "norm", "tshirt", "vest","sw","cs","csvest" };
                class norm {
                    label = "Default";
                };
                class tshirt {
                    label = "T Shirt";
                };
                class vest {
                    label = "Vest";
                };
                class sw {
                    label = "SW";
                };
                class cs {
                    label = "CS";
                };
                class csvest {
                    label = "CS Vest";
                };

            };
        };

        class cwu {
            options[] = { "camo","type" };
            label = "ACU Massif";
            class camo {
                alwaysSelectable = 1;
                values[] = { "od", "tan" };
                class od {
                    label = "OD Green";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class tan {
                    label = "Tan";
                    image = "z\aceax\addons\gearinfo\data\camo\tan.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = { "norm", "ag", "np" };
                class norm {
                    label = "Default";
                };
                class ag {
                    label = "AG";
                };
                class np {
                    label = "NP";
                };
            };
        };

        class wrp_uniform_g3c {
            options[] = { "camo" }; // Always computed, do not edit
            label = "G3C Uniform";
            class camo {
                alwaysSelectable = 1;
                values[] = { "aor1", "aor2", "blk", "khk", "mc", "mca", "mcb", "mct", "rgr", "tgr","tgrd" };
                class aor1 {
                    label = "AOR1";
                    image = "z\aceax\addons\gearinfo\data\camo\aor1.paa";
                };
                class aor2 {
                    label = "AOR2";
                    image = "z\aceax\addons\gearinfo\data\camo\aor2.paa";
                };
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class mc {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class khk {
                    label = "KHK";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class mca {
                    label = "MCA";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class mcb {
                    label = "MCB";
                    image = "z\aceax\addons\gearinfo\data\camo\mcb.paa";
                };
                class mct {
                    label = "MCT";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class rgr {
                    label = "RGR";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class tgrd {
                    label = "Tiger D";
                    image = "z\aceax\addons\gearinfo\data\camo\tsd.paa";
                };
                class tgr {
                    label = "Tiger";
                    image = "z\aceax\addons\gearinfo\data\camo\tsw.paa";
                };
            };
        };
    };
};
class XtdGearInfos {
    class CfgWeapons {
        class tfww_uniform_Soldier_Multicam_Snow_F {
            model = "tfww_uniform_Soldier";
            camo = "Multicam_Snow_F";
        };
        class tfww_uniform_Soldier_Multicam_F {
            model = "tfww_uniform_Soldier";
            camo = "Multicam_F";
        };
        class tfww_uniform_Soldier_Multicam_Woodland_F {
            model = "tfww_uniform_Soldier";
            camo = "Multicam_Woodland_F";
        };
        class tfww_uniform_Soldier_Solid_Black_F {
            model = "tfww_uniform_Soldier";
            camo = "Solid_Black_F";
        };
        class tfww_uniform_Soldier_US_Tigerstripe_F {
            model = "tfww_uniform_Soldier";
            camo = "US_Tigerstripe_F";
        };
        class tfww_uniform_Soldier_US_DCU_F {
            model = "tfww_uniform_Soldier";
            camo = "US_DCU_F";
        };
        class tfww_uniform_Soldier_US_M81_F {
            model = "tfww_uniform_Soldier";
            camo = "US_M81_F";
        };
        class tfww_uniform_Soldier_3_Multicam_Snow_F {
            model = "tfww_uniform_Soldier_3";
            camo = "Multicam_Snow_F";
        };
        class tfww_uniform_Soldier_3_Multicam_F {
            model = "tfww_uniform_Soldier_3";
            camo = "Multicam_F";
        };
        class tfww_uniform_Soldier_3_Multicam_Woodland_F {
            model = "tfww_uniform_Soldier_3";
            camo = "Multicam_Woodland_F";
        };
        class tfww_uniform_Soldier_3_Solid_Black_F {
            model = "tfww_uniform_Soldier_3";
            camo = "Solid_Black_F";
        };
        class tfww_uniform_Soldier_3_US_Tigerstripe_F {
            model = "tfww_uniform_Soldier_3";
            camo = "US_Tigerstripe_F";
        };
        class tfww_uniform_Soldier_3_US_DCU_F {
            model = "tfww_uniform_Soldier_3";
            camo = "US_DCU_F";
        };
        class tfww_uniform_Soldier_3_US_M81_F {
            model = "tfww_uniform_Soldier_3";
            camo = "US_M81_F";
        };


        class B_ACU_crye_ocp_1 {
            model = "acucrye";
            camo = "ocp";
            type = "norm";
            sr = "no";
        };
        class B_ACU_crye_ocp_tshirt_1 {
            model = "acucrye";
            camo = "ocp";
            type = "tshirt";
            sr = "no";
        };
        class B_ACU_crye_ocp_vest_1 {
            model = "acucrye";
            camo = "ocp";
            type = "vest";
            sr = "no";
        }; 
        class B_ACU_crye_ocp_SH_1 {
            model = "acucrye";
            camo = "ocp";
            type = "norm";
            sr = "yes";
        };
        class B_ACU_crye_ocp_SH_tshirt_1 {
            model = "acucrye";
            camo = "ocp";
            type = "tshirt";
            sr = "yes";
        };
        class B_ACU_crye_ocp_SH_vest_1 {
            model = "acucrye";
            camo = "ocp";
            type = "vest";
            sr = "yes";
        };


        class B_ACU_crye_wdl_1 {
            model = "acucrye";
            camo = "wdl";
            type = "norm";
            sr = "no";
        };
        class B_ACU_crye_wdl_tshirt_1 {
            model = "acucrye";
            camo = "wdl";
            type = "tshirt";
            sr = "no";
        };
        class B_ACU_crye_wdl_vest_1 {
            model = "acucrye";
            camo = "wdl";
            type = "vest";
            sr = "no";
        };
        class B_ACU_crye_wdl_SH_1 {
            model = "acucrye";
            camo = "wdl";
            type = "norm";
            sr = "yes";
        };
        class B_ACU_crye_wdl_SH_tshirt_1 {
            model = "acucrye";
            camo = "wdl";
            type = "tshirt";
            sr = "yes";
        };
        class B_ACU_crye_wdl_SH_vest_1 {
            model = "acucrye";
            camo = "wdl";
            type = "vest";
            sr = "yes";
        };

        class B_ACU_massif_ocp_1 {
            model = "acumassif";
            camo = "ocp";
            type = "norm";
        };
        class B_ACU_massif_ocp_SW_1 {
            model = "acumassif";
            camo = "ocp";
            type = "sw";
        };
        class B_ACU_massif_ocp_CS_1 {
            model = "acumassif";
            camo = "ocp";
            type = "cs";
        };
        class B_ACU_massif_ocp_CS_vest_1 {
            model = "acumassif";
            camo = "ocp";
            type = "csvest";
        };
        class B_ACU_massif_ocp_tshirt_1 {
            model = "acumassif";
            camo = "ocp";
            type = "tshirt";
        };
        class B_ACU_massif_ocp_vest_1 {
            model = "acumassif";
            camo = "ocp";
            type = "vest";
        };

        class B_ACU_massif_wdl_1 {
            model = "acumassif";
            camo = "wdl";
            type = "norm";
        };
        class B_ACU_massif_wdl_CS_1 {
            model = "acumassif";
            camo = "wdl";
            type = "cs";
        };
        class B_ACU_massif_wdl_CS_vest_1 {
            model = "acumassif";
            camo = "wdl";
            type = "csvest";
        };
        class B_ACU_massif_wdl_SW_1 {
            model = "acumassif";
            camo = "wdl";
            type = "sw";
        };
        class B_ACU_massif_wdl_tshirt_1 {
            model = "acumassif";
            camo = "wdl";
            type = "tshirt";
        };
        class B_ACU_massif_wdl_vest_1 {
            model = "acumassif";
            camo = "wdl";
            type = "vest";
        };


        class B_CWU_coverall_od_AG_usaf {
            model = "cwu";
            camo = "od";
            type = "ag";
        };
        class B_CWU_coverall_od_np_usaf {
            model = "cwu";
            camo = "od";
            type = "np";
        };
        class B_CWU_coverall_od_usaf {
            model = "cwu";
            camo = "od";
            type = "norm";
        };

        class B_CWU_coverall_tn_AG_usaf {
            model = "cwu";
            camo = "tan";
            type = "ag";
        };
        class B_CWU_coverall_tn_np_usaf {
            model = "cwu";
            camo = "tan";
            type = "np";
        };
        class B_CWU_coverall_tn_usaf {
            model = "cwu";
            camo = "tan";
            type = "norm";
        };

                class wrp_uniform_g3c_aor1 {
            model = "wrp_uniform_g3c";
            camo = "aor1";
        };
        class wrp_uniform_g3c_aor2 {
            model = "wrp_uniform_g3c";
            camo = "aor2";
        };
        class wrp_uniform_g3c_blk {
            model = "wrp_uniform_g3c";
            camo = "blk";
        };
        class wrp_uniform_g3c_khk {
            model = "wrp_uniform_g3c";
            camo = "khk";
        };
        class wrp_uniform_g3c_mc {
            model = "wrp_uniform_g3c";
            camo = "mc";
        };
        class wrp_uniform_g3c_mcA {
            model = "wrp_uniform_g3c";
            camo = "mca";
        };
        class wrp_uniform_g3c_mcB {
            model = "wrp_uniform_g3c";
            camo = "mcb";
        };
        class wrp_uniform_g3c_mcT {
            model = "wrp_uniform_g3c";
            camo = "mct";
        };
        class wrp_uniform_g3c_rgr {
            model = "wrp_uniform_g3c";
            camo = "rgr";
        };
        class wrp_uniform_g3c_tgr {
            model = "wrp_uniform_g3c";
            camo = "tgr";
        };
        class wrp_uniform_g3c_tgrD {
            model = "wrp_uniform_g3c";
            camo = "tgrd";
        };
    };
};
