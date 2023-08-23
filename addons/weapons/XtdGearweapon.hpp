#include "script_component.hpp"
class XtdGearModels {
    class CfgWeapons {
        class arifle_mx {
            options[] = { "type", "color" };
            label = "MX's";
            class type {
                alwaysSelectable = 1;
                values[] = { "mx", "mxc","mxgl", "mxm", "mxsw"};
                class mx {
                    label = "MX";
                };
                class mxc {
                    label = "MXC";
                };
                class mxgl {
                    label = "MX GL";
                };
                class mxm {
                    label = "MXM";
                };
                class mxsw {
                    label = "MX SW";
                };
            };
            class color {
                alwaysselectable = 1;
                values[] = { "blk", "khk","snd"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class snd {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class khk {
                    label = "Khaki ";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class arifle_g36 {
            options[] = { "type"};
            label = "G36's";
            class type {
                alwaysSelectable = 1;
                values[] = { "G36", "G36C","G36_GL"};
                class G36 {
                    label = "G36";
                };
                class G36C {
                    label = "G36C";
                };
                class G36_GL {
                    label = "G36 GL";
                };
            };
        };
        class HK417A2 {
            options[] = { "color"};
            label = "HK417A2 20 inch";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "khk","snd"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class snd {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class khk {
                    label = "Khaki ";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class HK416A514 {
            options[] = { "color"};
            label = "HK416A5 14.5 inch";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "khk","snd"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class snd {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class khk {
                    label = "Khaki ";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class HK416A511 {
            options[] = { "color"};
            label = "HK416A5 11 inch";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "khk","snd"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class snd {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class khk {
                    label = "Khaki ";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class HK416A511gl {
            options[] = { "model"};
            label = "HK416A5 GL 11 inch";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "khk","snd"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class snd {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class khk {
                    label = "Khaki ";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class scarh {
            options[] = { "type", "color" };
            label = "SCAR";
            class type {
                alwaysSelectable = 1;
                values[] = { "basic", "gl","grip"};
                class basic {
                    label = "Basic";
                };
                class gl {
                    label = "GL";
                };
                class grip {
                    label = "Grip";
                };

            };
            class color {
                alwaysselectable = 1;
                values[] = { "blk", "khk","snd"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class snd {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class khk {
                    label = "Khaki ";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class scar {
            options[] = { "type", "color" };
            label = "SCAR Heavy";
            class type {
                alwaysSelectable = 1;
                values[] = { "basic", "gl","grip", "cqb"};
                class basic {
                    label = "Basic";
                };
                class gl {
                    label = "GL";
                };
                class grip {
                    label = "Grip";
                };
                class cqb {
                    label = "CQB";
                };

            };
            class color {
                alwaysselectable = 1;
                values[] = { "blk", "khk","snd"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class snd {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class khk {
                    label = "Khaki ";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };

        class glx {
            options[] = { "color"};
            label = "GLX";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "camo","snd", "snake"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class snd {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class camo {
                    label = "Khaki ";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class snake {
                    label = "Khaki ";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
        };
        class smg {
            options[] = { "color"};
            label = "MP7";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "khk","snd"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class snd {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class khk {
                    label = "Khaki ";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class LWMMG {
            options[] = { "color"};
            label = "LWMMG";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "khk","snd","mtp"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class snd {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class khk {
                    label = "Khaki";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class mtp {
                    label = "MTP";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
            };
        };
        class noreen {
            options[] = { "color"};
            label = "Noreen";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "camo","sniper","tna"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class sniper {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class camo {
                    label = "Khaki";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class winttnaer {
                    label = "MTP";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
            };
        };
        class pisth {
            options[] = { "color"};
            label = "FNX-45 Tactical";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "norm","green"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class norm {
                    label = "Default";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class green {
                    label = "Green";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class pist99 {
            options[] = { "color"};
            label = "P99";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "khk","green"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class khk {
                    label = "Khaki";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class green {
                    label = "Default";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class pistg17 {
            options[] = { "color"};
            label = "Glock 17";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "khk","norm"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class khk {
                    label = "Khaki";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class norm {
                    label = "Default";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class aa40 {
            options[] = { "color"};
            label = "AA 40";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "tan","norm","snake"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class tan {
                    label = "Khaki";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class norm {
                    label = "Default";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class snake {
                    label = "Default";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class lmg200 {
            options[] = { "color"};
            label = "LMG 200";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "khk","plan", "norm"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class khk {
                    label = "Khaki";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class plan {
                    label = "Plan";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class norm {
                    label = "Default";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class pglx {
            options[] = { "color"};
            label = "GLX";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "camo","snd", "snake"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class snd {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class camo {
                    label = "Khaki ";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class snake {
                    label = "Khaki ";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
        };
        class M320 {
            options[] = { "color"};
            label = "M320";
            class color {
                alwaysSelectable = 1;
                values[] = { "blk", "trp","camo"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class trp {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class camo {
                    label = "Khaki ";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
    };

    class CfgVehicles {
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class arifle_MXC_Black_F {
            model = "arifle_mx";
            type = "mxc";
            color = "blk";
        };
        class arifle_MXC_F {
            model = "arifle_mx";
            type = "mxc";
            color = "snd";
        };
        class arifle_MXC_khk_F {
            model = "arifle_mx";
            type = "mxc";
            color = "khk";
        };
        class arifle_MXM_Black_F {
            model = "arifle_mx";
            type = "mxm";
            color = "blk";
        };
        class arifle_MXM_F {
            model = "arifle_mx";
            type = "mxm";
            color = "snd";
        };
        class arifle_MXM_khk_F {
            model = "arifle_mx";
            type = "mxm";
            color = "khk";
        };
        class arifle_MX_Black_F {
            model = "arifle_mx";
            type = "mx";
            color = "blk";
        };
        class arifle_MX_F {
            model = "arifle_mx";
            type = "mx";
            color = "snd";
        };
        class arifle_MX_GL_Black_F {
            model = "arifle_mx";
            type = "mxgl";
            color = "blk";
        };
        class arifle_MX_GL_F {
            model = "arifle_mx";
            type = "mxgl";
            color = "snd";
        };
        class arifle_MX_GL_khk_F {
            model = "arifle_mx";
            type = "mxgl";
            color = "khk";
        };
        class arifle_MX_SW_Black_F {
            model = "arifle_mx";
            type = "mxsw";
            color = "blk";
        };
        class arifle_MX_SW_F {
            model = "arifle_mx";
            type = "mxsw";
            color = "snd";
        };
        class arifle_MX_SW_khk_F {
            model = "arifle_mx";
            type = "mxsw";
            color = "khk";
        };
        class arifle_MX_khk_F {
            model = "arifle_mx";
            type = "mx";
            color = "khk";
        };
        class arifle_G36C_F {
            model = "arifle_g36";
            type = "G36C";
        };
        class arifle_G36_F {
            model = "arifle_g36";
            type = "G36";
        };
        class arifle_G36_GL_F {
            model = "arifle_g36";
            type = "G36_GL";
        };
        class SMG_04_blk_F {
            model = "smg";
            color = "blk";
        };
        class SMG_04_khk_F {
            model = "smg";
            color = "khk";
        };
        class SMG_04_snd_F {
            model = "smg";
            color = "blsndk";
        };
        class arifle_SCAR_L_F {
            model = "scarh";
            type = "basic";
            color = "snd";
        };
        class arifle_SCAR_L_khaki_F {
            model = "scarh";
            type = "basic";
            color = "khk";
        };
        class arifle_SCAR_L_black_F {
            model = "scarh";
            type = "basic";
            color = "blk";
        };
        class arifle_SCAR_L_GL_F {
            model = "scarh";
            type = "gl";
            color = "snd";
        };
        class arifle_SCAR_L_GL_black_F {
            model = "scarh";
            type = "gl";
            color = "blk";
        };
        class arifle_SCAR_L_GL_khaki_F {
            model = "scarh";
            type = "gl";
            color = "khk";
        };
        class arifle_SCAR_L_grip_F {
            model = "scarh";
            type = "grip";
            color = "snd";
        };
        class arifle_SCAR_L_grip_black_F {
            model = "scarh";
            type = "grip";
            color = "blk";
        };
        class arifle_SCAR_L_grip_khaki_F {
            model = "scarh";
            type = "grip";
            color = "khk";
        };
        class arifle_SCAR_L_short_F {
            model = "scarh";
            type = "cqb";
            color = "snd";
        };
        class arifle_SCAR_L_short_black_F {
            model = "scarh";
            type = "cqb";
            color = "cqb";
        };
        class arifle_SCAR_L_short_khaki_F {
            model = "scarh";
            type = "grip";
            color = "khk";
        };
        class arifle_SCAR_F {
            model = "scar";
            type = "basic";
            color = "snd";
        };
        class arifle_SCAR_khaki_F {
            model = "scar";
            type = "basic";
            color = "khk";
        };
        class arifle_SCAR_black_F {
            model = "scar";
            type = "basic";
            color = "blk";
        };
        class arifle_SCAR_GL_F {
            model = "scar";
            type = "gl";
            color = "snd";
        };
        class arifle_SCAR_GL_black_F {
            model = "scar";
            type = "gl";
            color = "blk";
        };
        class arifle_SCAR_GL_khaki_F {
            model = "scar";
            type = "gl";
            color = "khk";
        };
        class arifle_SCAR_grip_F {
            model = "scar";
            type = "grip";
            color = "snd";
        };
        class arifle_SCAR_grip_black_F {
            model = "scar";
            type = "grip";
            color = "blk";
        };
        class arifle_SCAR_grip_khaki_F {
            model = "scar";
            type = "grip";
            color = "khk";
        };
        class arifle_SCAR_short_F {
            model = "scar";
            type = "cqb";
            color = "snd";
        };
        class arifle_SCAR_short_black_F {
            model = "scar";
            type = "cqb";
            color = "cqb";
        };
        class arifle_SCAR_short_khaki_F {
            model = "scar";
            type = "grip";
            color = "khk";
        };
        class arifle_SPAR_01_GL_blk_F {
            model = "HK416A511gl";
            color = "blk";
        };
        class arifle_SPAR_01_GL_khk_F {
            model = "HK416A511gl";
            color = "khk";
        };
        class arifle_SPAR_01_GL_snd_F {
            model = "HK416A511gl";
            color = "snd";
        };
        class arifle_SPAR_01_blk_F {
            model = "HK416A511";
            color = "blk";
        };
        class arifle_SPAR_01_khk_F {
            model = "HK416A511";
            color = "khk";
        };
        class arifle_SPAR_01_snd_F {
            model = "HK416A511";
            color = "snd";
        };
        class arifle_SPAR_02_blk_F {
            model = "HK416A514";
            color = "blk";
        };
        class arifle_SPAR_02_khk_F {
            model = "HK416A514";
            color = "khk";
        };
        class arifle_SPAR_02_snd_F {
            model = "HK416A514";
            color = "snd";
        };
        class arifle_SPAR_03_blk_F {
            model = "HK417A2";
            color = "blk";
        };
        class arifle_SPAR_03_khk_F {
            model = "HK417A2";
            color = "khk";
        };
        class arifle_SPAR_03_snd_F {
            model = "HK417A2";
            color = "snd";
        };
        class glaunch_GLX_camo_lxWS {
            model = "glx";
            color = "camo";
        };
        class glaunch_GLX_lxWS {
            model = "glx";
            color = "blk";
        };
        class glaunch_GLX_snake_lxWS {
            model = "glx";
            color = "snake";
        };
        class glaunch_GLX_tan_lxWS {
            model = "glx";
            color = "snd";
        };
        class MMG_02_black_F {
            model = "LWMMG";
            color = "blk";
        };
        class MMG_02_camo_F {
            model = "LWMMG";
            color = "mtp";
        };
        class MMG_02_khaki_F {
            model = "LWMMG";
            color = "khk";
        };
        class MMG_02_sand_F {
            model = "LWMMG";
            color = "snd";
        };
        class srifle_DMR_02_F {
            model = "noreen";
            color = "blk";
        };
        class srifle_DMR_02_camo_F {
            model = "noreen";
            color = "camo";
        };
        class srifle_DMR_02_sniper_F {
            model = "noreen";
            color = "sniper";
        };
        class srifle_DMR_02_tna_F {
            model = "noreen";
            color = "tna";
        };
        class hgun_G17_F {
            model = "pistg17";
            color = "norm";
        };
        class hgun_G17_black_F {
            model = "pistg17";
            color = "blk";
        };
        class hgun_G17_khaki_F {
            model = "pistg17";
            color = "khk";
        };
        class hgun_P07_F {
            model = "pist99";
            color = "green";
        };
        class hgun_P07_blk_F {
            model = "pist99";
            color = "blk";
        };
        class hgun_P07_khk_F {
            model = "pist99";
            color = "khk";
        };
        class hgun_Pistol_heavy_01_F {
            model = "pisth";
            color = "norm";
        };
        class hgun_Pistol_heavy_01_black_F {
            model = "pisth";
            color = "blk";
        };
        class hgun_Pistol_heavy_01_green_F {
            model = "pisth";
            color = "green";
        };

        class sgun_AA40_F {
            model = "aa40";
            color = "norm";
        };
        class sgun_aa40_lxWS {
            model = "aa40";
            color = "blk";
        };
        class sgun_aa40_snake_lxWS {
            model = "aa40";
            color = "snake";
        };
        class sgun_aa40_tan_lxWS {
            model = "aa40";
            color = "tan";
        };

        class LMG_Mk200_khk_F {
            model = "lmg200";
            color = "khk";
        };
        class LMG_Mk200_plain_F {
            model = "lmg200";
            color = "plan";
        };

        class LMG_Mk200_black_F {
            model = "lmg200";
            color = "blk";
        };
        class LMG_Mk200_F {
            model = "lmg200";
            color = "norm";
        };

        class GVAR(glaunch_GLX_camo_lxWS) {
            model = "glx";
            color = "camo";
        };
        class GVAR(glaunch_GLX_lxWS) {
            model = "glx";
            color = "blk";
        };
        class GVAR(glaunch_GLX_snake_lxWS) {
            model = "glx";
            color = "snake";
        };
        class GVAR(glaunch_GLX_tan_lxWS) {
            model = "glx";
            color = "snd";
        };

        class srifle_LRR_tna_F{
            model = "m320";
            color = "trp";
        };
        class srifle_LRR_camo_F{
            model = "m320";
            color = "camo";
        };
        class srifle_LRR_F{
            model = "m320";
            color = "blk";
        };
    };
};
