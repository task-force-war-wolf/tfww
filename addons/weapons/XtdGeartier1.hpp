#include "script_component.hpp"
class XtdGearModels {
    class CfgWeapons {
        class t1glock19 {
            options[] = { "type", "TB" };
            label = "Glock 19";
            class type {
                label = "Model";
                alwaysSelectable = 1;
                values[] = { "urban", "war"};
                class urban {
                    label = "Urban";
                };
                class war {
                    label = "War";
                };
            };
            class TB {
                label = "TB";
                alwaysSelectable = 1;
                values[] = { "yes", "no"};
                class yes {
                    label = "Yes";
                };
                class no {
                    label = "No";
                };
            };
        };
        class t1glock22 {
            options[] = { "rail", "TB" };
            label = "Glock 22";
            class rail {
                label = "Rail";
                values[] = { "yes", "no"};
                class yes {
                    label = "Yes";
                };
                class no {
                    label = "No";
                };
            };
            class TB {
                label = "TB";
                alwaysSelectable = 1;
                values[] = { "yes", "no"};
                class yes {
                    label = "Yes";
                };
                class no {
                    label = "No";
                };
            };
        };
        class t1m110 {
            options[] = { "kv", "ctr", "c65", "acs" };
            label = "M110";
            class kv {
                label = "Model";
                values[] = { "k1", "k5"};
                class k1 {
                    label = "K1";
                };
                class k5 {
                    label = "k5";
                };
            };
            class ctr {
                label = "CTR";
                alwaysSelectable = 1;
                values[] = { "yes", "no"};
                class yes {
                    label = "Yes";
                };
                class no {
                    label = "No";
                };
            };
            class c65 {
                label = "6.5";
                values[] = { "yes", "no"};
                class yes {
                    label = "Yes";
                };
                class no {
                    label = "No";
                };
            };
            class acs {
                label = "ACS";
                alwaysSelectable = 1;
                values[] = { "yes", "no"};
                class yes {
                    label = "Yes";
                };
                class no {
                    label = "No";
                };
            };
        };

        class t1mk46 {
            options[] = { "mod", "camo" };
            label = "MK 46";
            class mod {
                label = "Model";
                values[] = { "m0", "m1","m0p", "m1s"};
                class m1 {
                    label = "Mod 1";
                };
                class m0 {
                    label = "Mod 0";
                };
                class m1s {
                    label = "Mod 1 Savit";
                };
                class m0p {
                    label = "Mod 0 para";
                };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = { "blk", "des"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class des {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
        };

        class t1mk48 {
            options[] = { "mod", "camo" };
            label = "MK 48";
            class mod {
                label = "Model";
                values[] = { "m0", "m1","m0p"};
                class m1 {
                    label = "Mod 1";
                };
                class m0 {
                    label = "Mod 0";
                };
                class m0p {
                    label = "Mod 0 para";
                };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = { "blk", "des"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class des {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
        };

        class t1p320 {
            options[] = { "mod"};
            label = "P 320";
            class mod {
                label = "Model";
                values[] = { "base","pmm", "tb"};
                class base {
                    label = "Base";
                };
                class TB {
                    label = "TB";
                };
                class pmm {
                    label = "PMM";
                };
            };
        };
        class t1sr25 {
            options[] = { "mod", "Camo" };
            label = "SR 25";
            class mod {
                label = "Model";
                values[] = { "base", "ec"};
                class base {
                    label = "Base";
                };
                class ec {
                    label = "EC";
                };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = { "blk", "tan"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class tan {
                    label = "Tan";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
        };

        class t1sigmcx {
            options[] = { "caliber", "camo" };
            label = "MCX";
            class caliber {
                label = "Caliber";
                values[] = { "c556", "c300"};
                class c300 {
                    label = ".300 blk";
                };
                class c556 {
                    label = "5.56";
                };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = { "blk", "des", "grey", "fde"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class des {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class gray {
                    label = "Grey";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class fde {
                    label = "FDE";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
        };

        class t1sr16 {
            options[] = { "cqb", "mod", "camo" };
            label = "SR 16";
            class cqb {
                label = "CQB";
                alwaysSelectable = 1;
                values[] = { "yes", "no"};
                class yes {
                    label = "Yes";
                };
                class no {
                    label = "No";
                };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = { "blk","fde"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class fde {
                    label = "FDE";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
            class mod {
                label = "model";
                alwaysSelectable = 1;
                values[] = { "ctr","imod", "lmt", "mft"};
                class ctr {
                    label = "CTR";
                };
                class imod {
                    label = "IMOD";
                };
                class lmt {
                    label = "LMT";
                };
                class mft {
                    label = "MFT";
                };
            };
        };




    };


    class CfgVehicles {};
};

class XtdGearInfos {
    class CfgWeapons {
        class Tier1_Glock19_Urban {
            model = "t1glock19";
            type = "urban";
            tb = "no";
        };
        class Tier1_Glock19_Urban_TB {
            model = "t1glock19";
            type = "urban";
            tb = "yes";
        };
        class Tier1_Glock19_WAR {
            model = "t1glock19";
            type = "war";
            tb = "no";
        };
        class Tier1_Glock19_WAR_TB {
            model = "t1glock19";
            type = "war";
            tb = "yes";
        };
        class Tier1_Glock22 {
            model = "t1glock22";
            rail = "no";
            tb = "no";
        };
        class Tier1_Glock22_Rail {
            model = "t1glock22";
            rail = "rail";
            tb = "no";
        };
        class Tier1_Glock22_TB {
            model = "t1glock22";
            rail = "no";
            tb = "yes";
        };
        class Tier1_Glock22_TB_Rail {
            model = "t1glock22";
            rail = "yes";
            tb = "yes";
        };

        class Tier1_M110k1 {
            model = "t1m110";
            kv = "k1";
            ctr = "no";
            c65 = "no";
            acs = "no";
        };
        class Tier1_M110k1_CTR {
            model = "t1m110";
            kv = "k1";
            ctr = "yes";
            c65 = "no";
            acs = "no";
        };

        class Tier1_M110k5 {
            model = "t1m110";
            kv = "k5";
            ctr = "no";
            c65 = "no";
            acs = "no";
        };
        class Tier1_M110k5_65mm {
            model = "t1m110";
            kv = "k5";
            ctr = "no";
            c65 = "yes";
            acs = "no";
        };
        class Tier1_M110k5_ACS {
            model = "t1m110";
            kv = "k5";
            ctr = "no";
            c65 = "no";
            acs = "yes";
        };
        class Tier1_M110k5_ACS_65mm {
            model = "t1m110";
            kv = "k5";
            ctr = "no";
            c65 = "yes";
            acs = "yes";
        };

        class Tier1_MK46_Mod0 {
            model = "t1mk46";
            mod = "m0";
            camo = "blk";
        };
        class Tier1_MK46_Mod0_Desert {
            model = "t1mk46";
            mod = "m0";
            camo = "des";
        };
        class Tier1_MK46_Mod0_Para {
            model = "t1mk46";
            mod = "m0p";
            camo = "blk";
        };
        class Tier1_MK46_Mod0_Para_Desert {
            model = "t1mk46";
            mod = "m0p";
            camo = "des";
        };
        class Tier1_MK46_Mod1 {
            model = "t1mk46";
            mod = "m1";
            camo = "blk";
        };
        class Tier1_MK46_Mod1_Desert {
            model = "t1mk46";
            mod = "m1";
            camo = "des";
        };
        class Tier1_MK46_Mod1_Savit {
            model = "t1mk46";
            mod = "m1s";
            camo = "blk";
        };
        class Tier1_MK46_Mod1_Savit_Desert {
            model = "t1mk46";
            mod = "m1s";
            camo = "des";
        };

        class Tier1_MK48_Mod0 {
            model = "t1mk48";
            mod = "m0";
            camo = "blk";
        };
        class Tier1_MK48_Mod0_Desert {
            model = "t1mk48";
            mod = "m0";
            camo = "des";
        };
        class Tier1_MK48_Mod0_Para {
            model = "t1mk48";
            mod = "m0p";
            camo = "blk";
        };
        class Tier1_MK48_Mod0_Para_Desert {
            model = "t1mk48";
            mod = "m0p";
            camo = "des";
        };
        class Tier1_MK48_Mod1 {
            model = "t1mk48";
            mod = "m1";
            camo = "blk";
        };
        class Tier1_MK48_Mod1_Desert {
            model = "t1mk48";
            mod = "m1";
            camo = "des";
        };

        class Tier1_P320 {
            model = "t1p320";
            mod = "base";
        };
        class Tier1_P320_PMM {
            model = "t1p320";
            mod = "pmm";
        };
        class Tier1_P320_TB {
            model = "t1p320";
            mod = "tb";
        };

        class Tier1_SR25 {
            model = "t1sr25";
            mod = "base";
            camo = "blk";
        };
        class Tier1_SR25_tan {
            model = "t1sr25";
            mod = "base";
            camo = "tan";
        };
        class Tier1_SR25_EC {
            model = "t1sr25";
            mod = "ec";
            camo = "blk";
        };
        class Tier1_SR25_EC_tan {
            model = "t1sr25";
            mod = "ec";
            camo = "tan";
        };

        class Tier1_SIG_MCX_115_Virtus_300BLK {
            model = "t1sigmcx";
            caliber = "c300";
            camo = "grey";
        };
        class Tier1_SIG_MCX_115_Virtus_300BLK_Black {
            model = "t1sigmcx";
            caliber = "c300";
            camo = "blk";
        };
        class Tier1_SIG_MCX_115_Virtus_300BLK_Desert {
            model = "t1sigmcx";
            caliber = "c300";
            camo = "des";
        };
        class Tier1_SIG_MCX_115_Virtus_300BLK_FDE {
            model = "t1sigmcx";
            caliber = "c300";
            camo = "fde";
        };
        class Tier1_SIG_MCX_115_Virtus {
            model = "t1sigmcx";
            caliber = "c556";
            camo = "grey";
        };
        class Tier1_SIG_MCX_115_Virtus_Black {
            model = "t1sigmcx";
            caliber = "c556";
            camo = "blk";
        };
        class Tier1_SIG_MCX_115_Virtus_Desert {
            model = "t1sigmcx";
            caliber = "c556";
            camo = "des";
        };
        class Tier1_SIG_MCX_115_Virtus_FDE {
            model = "t1sigmcx";
            caliber = "c556";
            camo = "fde";
        };

        class Tier1_SR16_Carbine_Mod2_CTR_Black {
            model = "t1sr16";
            cqb = "no";
            mod = "ctr";
            camo = "blk";
        };
        class Tier1_SR16_Carbine_Mod2_CTR_FDE {
            model = "t1sr16";
            cqb = "no";
            mod = "ctr";
            camo = "fde";
        };
        class Tier1_SR16_Carbine_Mod2_IMOD_Black {
            model = "t1sr16";
            cqb = "no";
            mod = "imod";
            camo = "blk";
        };
        class Tier1_SR16_Carbine_Mod2_IMOD_FDE {
            model = "t1sr16";
            cqb = "no";
            mod = "imod";
            camo = "fde";
        };
        class Tier1_SR16_Carbine_Mod2_LMT_Black {
            model = "t1sr16";
            cqb = "no";
            mod = "lmt";
            camo = "blk";
        };
        class Tier1_SR16_Carbine_Mod2_LMT_FDE {
            model = "t1sr16";
            cqb = "no";
            mod = "lmy";
            camo = "fde";
        };
        class Tier1_SR16_Carbine_Mod2_MFT_Black {
            model = "t1sr16";
            cqb = "no";
            mod = "mft";
            camo = "blk";
        };
        class Tier1_SR16_Carbine_Mod2_MFT_FDE {
            model = "t1sr16";
            cqb = "no";
            mod = "mft";
            camo = "fde";
        };
        class Tier1_SR16_CQB_Mod2_CTR_Black {
            model = "t1sr16";
            cqb = "yes";
            mod = "ctr";
            camo = "blk";
        };
        class Tier1_SR16_CQB_Mod2_CTR_FDE {
            model = "t1sr16";
            cqb = "yes";
            mod = "ctr";
            camo = "fde";
        };
        class Tier1_SR16_CQB_Mod2_IMOD_Black {
            model = "t1sr16";
            cqb = "yes";
            mod = "imod";
            camo = "blk";
        };
        class Tier1_SR16_CQB_Mod2_IMOD_FDE {
            model = "t1sr16";
            cqb = "yes";
            mod = "imod";
            camo = "fde";
        };
        class Tier1_SR16_CQB_Mod2_LMT_Black {
            model = "t1sr16";
            cqb = "yes";
            mod = "lmt";
            camo = "blk";
        };
        class Tier1_SR16_CQB_Mod2_LMT_FDE {
            model = "t1sr16";
            cqb = "yes";
            mod = "lmt";
            camo = "fde";
        };
        class Tier1_SR16_CQB_Mod2_MFT_Black {
            model = "t1sr16";
            cqb = "yes";
            mod = "mft";
            camo = "blk";
        };
        class Tier1_SR16_CQB_Mod2_MFT_FDE {
            model = "t1sr16";
            cqb = "yes";
            mod = "mft";
            camo = "fde";
        };
    };
};
