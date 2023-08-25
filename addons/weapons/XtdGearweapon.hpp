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
		class SMA_Tavor {
			options[] = { "camo", "Variant" };
			label = "Tavor";
			class camo {
				alwaysSelectable = 1;
				values[] = { 
				"BLK",
				"Tan",
				"OD" 
				}; 
			};
			class Variant {
				alwaysSelectable = 1;
				values[] = { 
				"21", 
				"CTAR"
				}; 
			};
		};		
		
		class SMA_SteyrAUG {
			options[] = { "camo" }; 
			label = "Steyr AUG";
			class camo {
				alwaysSelectable = 1;
				values[] = { "BLK", "OD" };
			};
		};
		
		class SMA_SKS {
			options[] = { "camo" }; 
			label = "SKS SG Works";
			class camo {
				alwaysSelectable = 1;
				values[] = { "BLK", "TAN" };
			};
		};
		
		class SMA_AUG_A3 {
			options[] = { "camo", "Variant" }; 
			label = "AUG A3";
			class camo {
				alwaysSelectable = 1;
				values[] = { "BLK", "OD", "TAN" };
			};
			class Variant {
				alwaysSelectable = 1;
				values[] = { "STD", "GL" };
			};
		};		
		
		class SMA_Mk16 {
			options[] = { "camo", "Variant" }; 
			label = "Scar L";
			class camo {
				alwaysSelectable = 1;
				values[] = { 
				"TAN", 
				"BLK", 
				"OD" 
				};
			};
			class Variant {
				alwaysSelectable = 1;
				values[] = { 
				"CQB",
				"STD",
				"EGML"
				};
			};
			
		};	
		
		class SMA_Mk17 {
			options[] = { "camo", "Variant" }; 
			label = "Scar H";
			class camo {
				alwaysSelectable = 1;
				values[] = { 
				"TAN", 
				"BLK", 
				"OD" 
				};
			};
			class Variant {
				alwaysSelectable = 1;
				values[] = { 
				"CQB",
				"STD",
				"EGML"
				};
			};
			
		};	
		
		class SMA_SAR21 {
			options[] = { "Grip", "Variant" }; 
			label = "SAR";
			class Grip {
				alwaysSelectable = 1;
				values[] = { 
				"Vertical", 
				"Angled"
				};
			};
			class Variant {
				alwaysSelectable = 1;
				values[] = { 
				"STD",
				"MMS"
				};
			};
			
		};
		
		class SMA_MSAR {
			options[] = { "camo"}; 
			label = "MSAR";
			class camo {
				alwaysSelectable = 1;
				values[] = { 
				"OD", 				
				"OD 1",
				"BLK"
				};
			};			
		};
		
		class SMA_Minimi {
			options[] = { "camo", "Barrel" }; 
			label = "Minimi";
			class camo {
				alwaysSelectable = 1;
				values[] = { 
				"BLK", 				
				"DESERT",
				"WOODLAND"
				};
			};
			class Barrel {
				alwaysSelectable = 1;
				values[] = { 
				"Short", 				
				"Long"
				};
			};		
		};
		
		class SMA_Magpul {
			options[] = { "camo", "Grip" }; 
			label = "Magpul";
			class camo {
				alwaysSelectable = 1;
				values[] = { 
				"TAN",
				"BLK" 				
				};
			};
			class Grip {
				alwaysSelectable = 1;
				values[] = { 
				"None", 				
				"Vertical",
				"GL"
				};
			};		
		};
		
		class SMA_L86 {
			options[] = { "Variant" }; 
			label = "L86";			
			class Variant {
				alwaysSelectable = 1;
				values[] = { 
				"STD", 				
				"STD AFG",
				"STD STK",
				"AFG STK"
				};
			};		
		};
		
		class SMA_HK417 {
			options[] = { "Variant" }; 
			label = "HK417";			
			class Variant {
				alwaysSelectable = 1;
				values[] = { 
				"12in", 				
				"12in VFG",
				"16in"
				};
			};		
		};
		
		class SMA_AACMPW {
			options[] = { "camo", "Variant" }; 
			label = "AAC MPW";
			class camo {
				alwaysSelectable = 1;
				values[] = { 
				"BLK",
				"DESERT",
 				"OD",
				"TAN",
				"WOODLAND",
				};
			};
			class Variant {
				alwaysSelectable = 1;
				values[] = { 
				"CARBINE", 				
				"LONG",
				"SHORT"
				};
			};		
		};
		
		class SMA_ACR {
			options[] = { "camo", "Barrel", "Grip" }; 
			label = "ACR";
			class camo {
				alwaysSelectable = 1;
				values[] = { 
				"BLK",				
				"TAN"
				};
			};
			class Barrel {
				alwaysSelectable = 0;
				values[] = { 
				"STD", 				
				"CQB"
				};
			};
			class Grip {
				alwaysSelectable = 0;
				values[] = { 
				"None",
				"Angled", 				
				"Vertical",
				"GL"
				};
			};	
			
		};
		
		class SMA_ACR556 {
			options[] = { "camo", "Barrel", "Grip" }; 
			label = "ACR 556";
			class camo {
				alwaysSelectable = 1;
				values[] = { 
				"BLK",				
				"TAN"
				};
			};
			class Barrel {
				alwaysSelectable = 0;
				values[] = { 
				"STD", 				
				"CQB"
				};
			};
			class Grip {
				alwaysSelectable = 0;
				values[] = { 
				"None",
				"Angled", 				
				"Vertical",
				"GL"
				};
			};	
			
		};
		
		class SMA_MK18 {
			options[] = { "camo", "Grip", "Magazine" }; 
			label = "MK 18";
			class camo {
				alwaysSelectable = 1;
				values[] = { 
				"TAN",				
				"OD",
				"OD BLK",
				"BLK",
				"BLK TAN",
				"BLK BRN"
				};
			};			
			class Grip {
				alwaysSelectable = 1;
				values[] = { 
				"Angled", 				
				"Vertical",
				"M203"
				};
			};
			class Magazine {
				alwaysSelectable = 1;
				values[] = { 
				"STANAG", 				
				"PMAG"
				};
			};
			
		};
		
		class SMA_M4A1 {
			options[] = { "camo", "Grip", "Barrel" }; 
			label = "M4A1 Tac";
			class camo {
				alwaysSelectable = 0;
				values[] = { 
				"TAN",				
				"OD",
				"BLK",
				"BLK 2"
				};
			};			
			class Grip {
				alwaysSelectable = 0;
				values[] = { 
				"Angled", 				
				"Vertical",
				"M203"
				};
			};
			class Barrel {
				alwaysSelectable = 0;
				values[] = { 
				"STD",				
				"CQB",
				};
			};			
		};
		
		class SMA_M4A1SM {
			options[] = { "camo", "Grip" }; 
			label = "M4A1 Tac SM";
			class camos {
				alwaysSelectable = 0;
				values[] = { 
				"TAN",				
				"OD",
				"BLK",
				"BLK 2"
				};
			};			
			class Grip {
				alwaysSelectable = 0;
				values[] = { 
				"Angled", 				
				"Vertical",
				"M203"
				};
			};	
		};
		
		
		class SMA_HK416 {
			options[] = { "camo", "Grip", "Barrel" }; 
			label = "HK416";
			class camo {
				alwaysSelectable = 0;
				values[] = { 
				"None",
				"TAN",
				"OD",
				"OD PAINTED",
				"BLK",
				"BLK 2"
				};
			};			
			class Grip {
				alwaysSelectable = 0;
				values[] = { 
				"None",
				"Angled", 				
				"Vertical",
				"GL"
				};
			};
			class Barrel {
				alwaysSelectable = 0;
				values[] = { 
				"STD",				
				"CQB",
				};
			};			
		};
		
		class SMA_HK416CUS {
			options[] = { "camo", "Grip", "Barrel" }; 
			label = "HK416 CUS";
			class camo {
				alwaysSelectable = 0;
				values[] = { 
				"None",
				"TAN",
				"TAN PAINTED",
				"OD",
				"OD PAINTED",
				"BLK",
				"BLK 2"
				};
			};			
			class Grip {
				alwaysSelectable = 0;
				values[] = { 
				"None",
				"Angled", 				
				"Vertical",
				"GL"
				};
			};
			class Barrel {
				alwaysSelectable = 0;
				values[] = { 
				"STD",				
				"CQB",
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

        	
		class SMA_Tavor_F {
			model = "SMA_Tavor";
			camo = "Tan";
			Variant = "21";
		};
		class SMA_TavorOD_F {
			model = "SMA_Tavor";
			camo = "OD";
			Variant = "21";
		};
		class SMA_TavorBLK_F {
			model = "SMA_Tavor";
			camo = "BLK";
			Variant = "21";
		};		
		class SMA_CTAR_F {
			model = "SMA_Tavor";
			camo = "Tan";
			Variant = "CTAR";
		};
		class SMA_CTAROD_F {
			model = "SMA_Tavor";
			camo = "OD";
			Variant = "CTAR";
		};
		class SMA_CTARBLK_F {
			model = "SMA_Tavor";
			camo = "BLK";
			Variant = "CTAR";
		};		
			
		class SMA_Steyr_AUG_BLACK_F {
			model = "SMA_SteyrAUG";
			camo = "BLK";
		};
		class SMA_Steyr_AUG_F {
			model = "SMA_SteyrAUG";
			camo = "OD";
		};
			
		class SMA_SKS_F {
			model = "SMA_SKS";
			camo = "BLK";
		};
		class SMA_SKS_TAN_F {
			model = "SMA_SKS";
			camo = "TAN";
		};
			
		class SMA_AUG_A3_F {
			model = "SMA_AUG_A3";
			camo = "BLK";
			Variant = "STD";
		};
		class SMA_AUG_A3_MCAM_F {
			model = "SMA_AUG_A3";
			camo = "OD";
			Variant = "STD";
		};
		class SMA_AUG_A3_KRYPT_F {
			model = "SMA_AUG_A3";
			camo = "TAN";
			Variant = "STD";
		};
		class SMA_AUG_EGLM {
			model = "SMA_AUG_A3";
			camo = "BLK";
			Variant = "GL";
		};
		class SMA_AUG_EGLM_Olive {
			model = "SMA_AUG_A3";
			camo = "OD";
			Variant = "GL";
		};
		class SMA_AUG_EGLM_tan {
			model = "SMA_AUG_A3";
			camo = "TAN";
			Variant = "GL";
		};
			
		class SMA_Mk16QCB {
			model = "SMA_Mk16";
			camo = "TAN";
			Variant = "CQB";
		};
		class SMA_Mk16_blackQCB {
			model = "SMA_Mk16";
			camo = "BLK";
			Variant = "CQB";
		};
		class SMA_Mk16_GreenQCB {
			model = "SMA_Mk16";
			camo = "OD";
			Variant = "CQB";
		};
		class SMA_MK16 {
			model = "SMA_Mk16";
			camo = "TAN";
			Variant = "STD";
		};
		class SMA_Mk16_black {
			model = "SMA_Mk16";
			camo = "BLK";
			Variant = "STD";
		};
		class SMA_Mk16_Green {
			model = "SMA_Mk16";
			camo = "OD";
			Variant = "STD";
		};
		class SMA_Mk16_EGLM {
			model = "SMA_Mk16";
			camo = "TAN";
			Variant = "EGML";
		};
		class SMA_MK16_EGLM_black {
			model = "SMA_Mk16";
			camo = "BLK";
			Variant = "EGML";
		};
		class SMA_MK16_EGLM_Green {
			model = "SMA_Mk16";
			camo = "OD";
			Variant = "EGML";
		};
			
		class SMA_Mk17 {
			model = "SMA_Mk17";
			camo = "TAN";
			Variant = "CQB";
		};
		class SMA_Mk17_black {
			model = "SMA_Mk17";
			camo = "BLK";
			Variant = "CQB";
		};
		class SMA_Mk17_Green {
			model = "SMA_Mk17";
			camo = "OD";
			Variant = "CQB";
		};
		class SMA_Mk17_16 {
			model = "SMA_Mk17";
			camo = "TAN";
			Variant = "STD";
		};
		class SMA_Mk17_16_black {
			model = "SMA_Mk17";
			camo = "BLK";
			Variant = "STD";
		};
		class SMA_Mk17_16_Green {
			model = "SMA_Mk17";
			camo = "OD";
			Variant = "STD";
		};
		class SMA_Mk17_EGLM {
			model = "SMA_Mk17";
			camo = "TAN";
			Variant = "EGML";
		};
		class SMA_MK17_EGLM_black {
			model = "SMA_Mk17";
			camo = "BLK";
			Variant = "EGML";
		};
		class SMA_MK17_EGLM_Green {
			model = "SMA_Mk17";
			camo = "OD";
			Variant = "EGML";
		};
			
		class SMA_SAR21_F {
			model = "SMA_SAR21";
			Grip = "Vertical";
			Variant = "STD";
		};
		class SMA_SAR21_AFG_F {
			model = "SMA_SAR21";
			Grip = "Angled";
			Variant = "STD";
		};
		class SMA_SAR21MMS_F {
			model = "SMA_SAR21";
			Grip = "Vertical";
			Variant = "MMS";
		};
		class SMA_SAR21MMS_AFG_F {
			model = "SMA_SAR21";
			Grip = "Angled";
			Variant = "MMS";
		};
			
		class SMA_STG_E4_F {
			model = "SMA_MSAR";
			camo = "OD";
		};
		class SMA_STG_E4_OD_F {
			model = "SMA_MSAR";
			camo = "OD 1";
		};
		class SMA_STG_E4_BLACK_F {
			model = "SMA_MSAR";
			camo = "BLK";
		};
			
		class SMA_minimi_mk3_762tsb {
			model = "SMA_Minimi";
			camo = "BLK";
			Barrel = "Short";
		};
		class SMA_minimi_mk3_762tsb_des {
			model = "SMA_Minimi";
			camo = "DESERT";
			Barrel = "Short";
		};
		class SMA_minimi_mk3_762tsb_wdl {
			model = "SMA_Minimi";
			camo = "WOODLAND";
			Barrel = "Short";
		};
		class SMA_minimi_mk3_762tlb {
			model = "SMA_Minimi";
			camo = "BLK";
			Barrel = "Long";
		};
		class SMA_minimi_mk3_762tlb_des {
			model = "SMA_Minimi";
			camo = "DESERT";
			Barrel = "Long";
		};
		class SMA_minimi_mk3_762tlb_wdl {
			model = "SMA_Minimi";
			camo = "WOODLAND";
			Barrel = "Long";
		};
			
		class SMA_ACR {
			model = "SMA_Magpul";
			camo = "TAN";
			Grip = "None";
		};
		class SMA_ACRblk {
			model = "SMA_Magpul";
			camo = "BLK";
			Grip = "None";
		};
		class SMA_ACRMOE {
			model = "SMA_Magpul";
			camo = "TAN";
			Grip = "Vertical";
		};
		class SMA_ACRMOE_Blk {
			model = "SMA_Magpul";
			camo = "BLK";
			Grip = "Vertical";
		};
		class SMA_ACRGL {
			model = "SMA_Magpul";
			camo = "TAN";
			Grip = "GL";
		};
		class SMA_ACRGL_B {
			model = "SMA_Magpul";
			camo = "BLK";
			Grip = "GL";
		};
			
		class SMA_L85RIS {
			model = "SMA_L86";
			Variant = "STD";
		};
		class SMA_L85RISafg {
			model = "SMA_L86";
			Variant = "STD AFG";
		};
		class SMA_L85RISNR {
			model = "SMA_L86";
			Variant = "STD STK";
		};
		class SMA_L85RISafgNR {
			model = "SMA_L86";
			Variant = "AFG STK";
		};
			
		class SMA_HK417 {
			model = "SMA_HK417";
			Variant = "12in";
		};
		class SMA_HK417vfg {
			model = "SMA_HK417";
			Variant = "12in VFG";
		};
		class SMA_HK417_16in {
			model = "SMA_HK417";
			Variant = "16in";
		};
			
		class SMA_AAC_MPW_12_Black {
			model = "SMA_AACMPW";
			camo = "BLK";
			Variant = "CARBINE";
		};
		class SMA_AAC_MPW_12_Desert {
			model = "SMA_AACMPW";
			camo = "DESERT";
			Variant = "CARBINE";
		};
		class SMA_AAC_MPW_12_OD {
			model = "SMA_AACMPW";
			camo = "OD";
			Variant = "CARBINE";
		};
		class SMA_AAC_MPW_12_Tan {
			model = "SMA_AACMPW";
			camo = "TAN";
			Variant = "CARBINE";
		};
		class SMA_AAC_MPW_12_Woodland {
			model = "SMA_AACMPW";
			camo = "WOODLAND";
			Variant = "CARBINE";
		};
			
		class SMA_AAC_MPW_16_Black {
			model = "SMA_AACMPW";
			camo = "BLK";
			Variant = "LONG";
		};
		class SMA_AAC_MPW_16_Desert {
			model = "SMA_AACMPW";
			camo = "DESERT";
			Variant = "LONG";
		};
		class SMA_AAC_MPW_16_OD {
			model = "SMA_AACMPW";
			camo = "OD";
			Variant = "LONG";
		};
		class SMA_AAC_MPW_16_Tan {
			model = "SMA_AACMPW";
			camo = "TAN";
			Variant = "LONG";
		};
		class SMA_AAC_MPW_16_Woodland {
			model = "SMA_AACMPW";
			camo = "WOODLAND";
			Variant = "LONG";
		};
			
		class SMA_AAC_MPW_9_Black {
			model = "SMA_AACMPW";
			camo = "BLK";
			Variant = "SHORT";
		};
		class SMA_AAC_MPW_9_Desert {
			model = "SMA_AACMPW";
			camo = "DESERT";
			Variant = "SHORT";
		};
		class SMA_AAC_MPW_9_OD {
			model = "SMA_AACMPW";
			camo = "OD";
			Variant = "SHORT";
		};
		class SMA_AAC_MPW_9_Tan {
			model = "SMA_AACMPW";
			camo = "TAN";
			Variant = "SHORT";
		};
		class SMA_AAC_MPW_9_Woodland {
			model = "SMA_AACMPW";
			camo = "WOODLAND";
			Variant = "SHORT";
		};
			
			// ACR
		class SMA_ACRREM {
			model = "SMA_ACR";
			camo = "TAN";
			Barrel = "STD";
			Grip = "None";
		};
		class SMA_ACRREMAFG {
			model = "SMA_ACR";
			camo = "TAN";
			Barrel = "STD";
			Grip = "Angled";
		};
		class SMA_ACRREMMOE {
			model = "SMA_ACR";
			camo = "TAN";
			Barrel = "STD";
			Grip = "Vertical";
		};
		class SMA_ACRREMGL {
			model = "SMA_ACR";
			camo = "TAN";
			Barrel = "STD";
			Grip = "GL";
		};
			
		class SMA_ACRREMblk {
			model = "SMA_ACR";
			camo = "BLK";
			Barrel = "STD";
			Grip = "None";
		};
		class SMA_ACRREMAFGblk {
			model = "SMA_ACR";
			camo = "BLK";
			Barrel = "STD";
			Grip = "Angled";
		};
		class SMA_ACRREMMOEblk {
			model = "SMA_ACR";
			camo = "BLK";
			Barrel = "STD";
			Grip = "Vertical";
		};
		class SMA_ACRREMGL_B {
			model = "SMA_ACR";
			camo = "BLK";
			Barrel = "STD";
			Grip = "GL";
		};	
					
		class SMA_ACRREMAFGCQB {
			model = "SMA_ACR";
			camo = "TAN";
			Barrel = "CQB";
			Grip = "Angled";
		};
		class SMA_ACRREMMOECQB {
			model = "SMA_ACR";
			camo = "TAN";
			Barrel = "CQB";
			Grip = "Vertical";
		};
		class SMA_ACRREMCQBGL {
			model = "SMA_ACR";
			camo = "TAN";
			Barrel = "CQB";
			Grip = "GL";
		};
			
		class SMA_ACRREMAFGCQBblk {
			model = "SMA_ACR";
			camo = "BLK";
			Barrel = "CQB";
			Grip = "Angled";
		};
		class SMA_ACRREMMOECQBblk {
			model = "SMA_ACR";
			camo = "BLK";
			Barrel = "CQB";
			Grip = "Vertical";
		};
		class SMA_ACRREMCQBGL_B {
			model = "SMA_ACR";
			camo = "BLK";
			Barrel = "CQB";
			Grip = "GL";
		};
			
			// ACR 556
		class SMA_ACRREM_N {
			model = "SMA_ACR556";
			camo = "TAN";
			Barrel = "STD";
			Grip = "None";
		};
		class SMA_ACRREMAFG_N {
			model = "SMA_ACR556";
			camo = "TAN";
			Barrel = "STD";
			Grip = "Angled";
		};
		class SMA_ACRREMMOE_N {
			model = "SMA_ACR556";
			camo = "TAN";
			Barrel = "STD";
			Grip = "Vertical";
		};
		class SMA_ACRREMGL_N {
			model = "SMA_ACR556";
			camo = "TAN";
			Barrel = "STD";
			Grip = "GL";
		};
			
		class SMA_ACRREMblk_N {
			model = "SMA_ACR556";
			camo = "BLK";
			Barrel = "STD";
			Grip = "None";
		};
		class SMA_ACRREMAFGblk_N {
			model = "SMA_ACR556";
			camo = "BLK";
			Barrel = "STD";
			Grip = "Angled";
		};
		class SMA_ACRREMMOEblk_N {
			model = "SMA_ACR556";
			camo = "BLK";
			Barrel = "STD";
			Grip = "Vertical";
		};
		class SMA_ACRREMGL_B_N {
			model = "SMA_ACR556";
			camo = "BLK";
			Barrel = "STD";
			Grip = "GL";
		};	
					
		class SMA_ACRREMAFGCQB_N {
			model = "SMA_ACR556";
			camo = "TAN";
			Barrel = "CQB";
			Grip = "Angled";
		};
		class SMA_ACRREMMOECQB_N {
			model = "SMA_ACR556";
			camo = "TAN";
			Barrel = "CQB";
			Grip = "Vertical";
		};
		class SMA_ACRREMCQBGL_N {
			model = "SMA_ACR556";
			camo = "TAN";
			Barrel = "CQB";
			Grip = "GL";
		};
			
		class SMA_ACRREMAFGCQBblk_N {
			model = "SMA_ACR556";
			camo = "BLK";
			Barrel = "CQB";
			Grip = "Angled";
		};
		class SMA_ACRREMMOECQBblk_N {
			model = "SMA_ACR556";
			camo = "BLK";
			Barrel = "CQB";
			Grip = "Vertical";
		};
		class SMA_ACRREMCQBGL_B_N {
			model = "SMA_ACR556";
			camo = "BLK";
			Barrel = "CQB";
			Grip = "GL";
		};
			
			
			// HK, M4 and MK18 START
			
			// MK18 START
			
		class SMA_MK18afgTAN_SM {
			model = "SMA_MK18";
			camo = "TAN";
			Grip = "Angled";
			Magazine = "STANAG";		
		};
		class SMA_MK18MOETAN_SM {
			model = "SMA_MK18";
			camo = "TAN";
			Grip = "Vertical";
			Magazine = "STANAG";
		};
		class SMA_MK18TAN_GL_SM {
			model = "SMA_MK18";
			camo = "TAN";
			Grip = "M203";
			Magazine = "STANAG";
		};
			
		class SMA_MK18afgOD_SM {
			model = "SMA_MK18";
			camo = "OD";
			Grip = "Angled";
			Magazine = "STANAG";
		};
		class SMA_MK18MOEOD_SM {
			model = "SMA_MK18";
			camo = "OD";
			Grip = "Vertical";
			Magazine = "STANAG";
		};
		class SMA_MK18OD_GL_SM {
			model = "SMA_MK18";
			camo = "OD";
			Grip = "M203";
			Magazine = "STANAG";
		};
			
		class SMA_MK18afgODBLK_SM {
			model = "SMA_MK18";
			camo = "OD BLK";
			Grip = "Angled";
			Magazine = "STANAG";
		};
		class SMA_MK18MOEODBLK_SM {
			model = "SMA_MK18";
			camo = "OD BLK";
			Grip = "Vertical";
			Magazine = "STANAG";
		};
		class SMA_MK18ODBLK_GL_SM {
			model = "SMA_MK18";
			camo = "OD BLK";
			Grip = "M203";
			Magazine = "STANAG";
		};
			
		class SMA_MK18afgBLK_SM {
			model = "SMA_MK18";
			camo = "BLK";
			Grip = "Angled";
			Magazine = "STANAG";
		};
		class SMA_MK18MOEBLK_SM {
			model = "SMA_MK18";
			camo = "BLK";
			Grip = "Vertical";
			Magazine = "STANAG";
		};
		class SMA_MK18BLK_GL_SM {
			model = "SMA_MK18";
			camo = "BLK";
			Grip = "M203";
			Magazine = "STANAG";
		};
			
		class SMA_MK18afgTANBLK_SM {
			model = "SMA_MK18";
			camo = "BLK TAN";
			Grip = "Angled";
			Magazine = "STANAG";
		};
		class SMA_MK18MOEBLKTAN_SM {
			model = "SMA_MK18";
			camo = "BLK TAN";
			Grip = "Vertical";
			Magazine = "STANAG";
		};
		class SMA_MK18TANBLK_GL_SM {
			model = "SMA_MK18";
			camo = "BLK TAN";
			Grip = "M203";
			Magazine = "STANAG";
		};
			
		class SMA_MK18afg_SM {
			model = "SMA_MK18";
			camo = "BLK BRN";
			Grip = "Angled";
			Magazine = "STANAG";
		};
		class SMA_MK18MOE_SM {
			model = "SMA_MK18";
			camo = "BLK BRN";
			Grip = "Vertical";
			Magazine = "STANAG";
		};
		class SMA_MK18_GL_SM {
			model = "SMA_MK18";
			camo = "BLK BRN";
			Grip = "M203";
			Magazine = "STANAG";
		};
			
			
			
		class SMA_MK18afgTAN {
			model = "SMA_MK18";
			camo = "TAN";
			Grip = "Angled";
			Magazine = "PMAG";
		};
		class SMA_MK18MOETAN {
			model = "SMA_MK18";
			camo = "TAN";
			Grip = "Vertical";
			Magazine = "PMAG";
		};
		class SMA_MK18TAN_GL {
			model = "SMA_MK18";
			camo = "TAN";
			Grip = "M203";
			Magazine = "PMAG";
		};
			
		class SMA_MK18afgOD {
			model = "SMA_MK18";
			camo = "OD";
			Grip = "Angled";
			Magazine = "PMAG";
		};
		class SMA_MK18MOEOD {
			model = "SMA_MK18";
			camo = "OD";
			Grip = "Vertical";
			Magazine = "PMAG";
		};
		class SMA_MK18OD_GL {
			model = "SMA_MK18";
			camo = "OD";
			Grip = "M203";
			Magazine = "PMAG";
		};
			
		class SMA_MK18afgODBLK {
			model = "SMA_MK18";
			camo = "OD BLK";
			Grip = "Angled";
			Magazine = "PMAG";
		};
		class SMA_MK18MOEODBLK {
			model = "SMA_MK18";
			camo = "OD BLK";
			Grip = "Vertical";
			Magazine = "PMAG";
		};
		class SMA_MK18ODBLK_GL {
			model = "SMA_MK18";
			camo = "OD BLK";
			Grip = "M203";
			Magazine = "PMAG";
		};
			
		class SMA_MK18afgBLK {
			model = "SMA_MK18";
			camo = "BLK";
			Grip = "Angled";
			Magazine = "PMAG";
		};
		class SMA_MK18MOEBLK {
			model = "SMA_MK18";
			camo = "BLK";
			Grip = "Vertical";
			Magazine = "PMAG";
		};
		class SMA_MK18BLK_GL {
			model = "SMA_MK18";
			camo = "BLK";
			Grip = "M203";
			Magazine = "PMAG";
		};
			
		class SMA_MK18afgTANBLK {
			model = "SMA_MK18";
			camo = "BLK TAN";
			Grip = "Angled";
			Magazine = "PMAG";
		};
		class SMA_MK18MOEBLKTAN {
			model = "SMA_MK18";
			camo = "BLK TAN";
			Grip = "Vertical";
			Magazine = "PMAG";
		};
		class SMA_MK18TANBLK_GL {
			model = "SMA_MK18";
			camo = "BLK TAN";
			Grip = "M203";
			Magazine = "PMAG";
		};
			
		class SMA_MK18afg {
			model = "SMA_MK18";
			camo = "BLK BRN";
			Grip = "Angled";
			Magazine = "PMAG";
		};
		class SMA_MK18MOE {
			model = "SMA_MK18";
			camo = "BLK BRN";
			Grip = "Vertical";
			Magazine = "PMAG";
		};
		class SMA_MK18_GL {
			model = "SMA_MK18";
			camo = "BLK BRN";
			Grip = "M203";
			Magazine = "PMAG";
		};
			
			// MK18 END
			
			// M4AI STANDARD START
			
		class SMA_M4afg_Tan {
			model = "SMA_M4A1";
			camo = "TAN";
			Grip = "Angled";
			Barrel = "STD";
		};
		class SMA_M4MOE_Tan {
			model = "SMA_M4A1";
			camo = "TAN";
			Grip = "Vertical";
			Barrel = "STD";
		};

		class SMA_M4afg_OD {
			model = "SMA_M4A1";
			camo = "OD";
			Grip = "Angled";
			Barrel = "STD";
		};
		class SMA_M4MOE_OD {
			model = "SMA_M4A1";
			camo = "OD";
			Grip = "Vertical";
			Barrel = "STD";
		};
			
		class SMA_M4afg {
			model = "SMA_M4A1";
			camo = "BLK";
			Grip = "Angled";
			Barrel = "STD";
		};
		class SMA_M4MOE {
			model = "SMA_M4A1";
			camo = "BLK";
			Grip = "Vertical";
			Barrel = "STD";
		};
		class SMA_M4_GL {
			model = "SMA_M4A1";
			camo = "BLK";
			Grip = "M203";
			Barrel = "STD";
		};
			
		class SMA_M4afg_BLK1 {
			model = "SMA_M4A1";
			camo = "BLK 2";
			Grip = "Angled";
			Barrel = "STD";
		};
		class SMA_M4MOE_BLK1 {
			model = "SMA_M4A1";
			camo = "BLK 2";
			Grip = "Vertical";
			Barrel = "STD";
		};
			
		class SMA_M4CQBR {
			model = "SMA_M4A1";
			camo = "BLK";
			Grip = "Angled";
			Barrel = "CQB";
		};
		class SMA_M4CQBRMOE {
			model = "SMA_M4A1";
			camo = "BLK";
			Grip = "Vertical";
			Barrel = "CQB";
		};
			// M4AI STANDARD END
			
			
			// M4AI SM START
		class SMA_M4afg_Tan_SM {
			model = "SMA_M4A1SM";
			camo = "TAN";
			Grip = "Angled";
		};
		class SMA_M4MOE_Tan_SM {
			model = "SMA_M4A1SM";
			camo = "TAN";
			Grip = "Vertical";
		};

		class SMA_M4afg_OD_SM {
			model = "SMA_M4A1SM";
			camo = "OD";
			Grip = "Angled";
		};
		class SMA_M4MOE_OD_SM {
			model = "SMA_M4A1SM";
			camo = "OD";
			Grip = "Vertical";
		};
			
		class SMA_M4afg_SM {
			model = "SMA_M4A1SM";
			camo = "BLK";
			Grip = "Angled";
		};
		class SMA_M4MOE_SM {
			model = "SMA_M4A1SM";
			camo = "BLK";
			Grip = "Vertical";
		};
		class SMA_M4_GL_SM {
			model = "SMA_M4A1SM";
			camo = "BLK";
			Grip = "M203";
		};
			
		class SMA_M4afg_BLK1_SM {
			model = "SMA_M4A1SM";
			camo = "BLK 2";
			Grip = "Angled";
		};
		class SMA_M4MOE_BLK1_SM {
			model = "SMA_M4A1SM";
			camo = "BLK 2";
			Grip = "Vertical";
		};		
			
			// M4AI SM END
			
			
			// HK416 START
			
		class SMA_HK416afg {
			model = "SMA_HK416";
			camo = "None";
			Barrel = "STD";
			Grip = "Angled";
		};
		class SMA_HK416vfg {
			model = "SMA_HK416";
			camo = "None";
			Barrel = "STD";
			Grip = "Vertical";
		};
		class SMA_HK416GL {
			model = "SMA_HK416";
			camo = "None";
			Barrel = "STD";
			Grip = "GL";
		};
			
		class SMA_HK416afgOD {
			model = "SMA_HK416";
			camo = "OD";
			Barrel = "STD";
			Grip = "Angled";
		};
		class SMA_HK416MOEOD {
			model = "SMA_HK416";
			camo = "OD";
			Barrel = "STD";
			Grip = "Vertical";
		};
		class SMA_HK416GLOD {
			model = "SMA_HK416";
			camo = "OD";
			Barrel = "STD";
			Grip = "GL";
		};
			
		class SMA_HK416_afg_ODPAINTED {
			model = "SMA_HK416";
			camo = "OD PAINTED";
			Barrel = "STD";
			Grip = "Angled";
		};
		class SMA_HK416_vfg_ODPAINTED {
			model = "SMA_HK416";
			camo = "OD PAINTED";
			Barrel = "STD";
			Grip = "Vertical";
		};
		class SMA_HK416_GL_ODPAINTED {
			model = "SMA_HK416";
			camo = "OD PAINTED";
			Barrel = "STD";
			Grip = "GL";
		};
			
			
			//CQB
			
			
		class SMA_HK416afgQCB {
			model = "SMA_HK416";
			camo = "None";
			Barrel = "CQB";
			Grip = "Vertical";
		};
		class SMA_HK416CQBafgOD {
			model = "SMA_HK416";
			camo = "OD";
			Barrel = "CQB";
			Grip = "Angled";
		};
		class SMA_HK416CQBMOEOD {
			model = "SMA_HK416";
			camo = "OD";
			Barrel = "CQB";
			Grip = "Vertical";
		};
		class SMA_HK416CQBGLOD {
			model = "SMA_HK416";
			camo = "OD";
			Barrel = "CQB";
			Grip = "GL";
		};
		class SMA_HK416CQB_vfg_ODPAINTED {
			model = "SMA_HK416";
			camo = "OD PAINTED";
			Barrel = "STD";
			Grip = "Vertical";
		};	
			
			// HK416 END
			
			
			
			// HK416 CUSTOM START
			
		class SMA_HK416CUSTOMafgB {
			model = "SMA_HK416CUS";
			camo = "None";
			Barrel = "STD";
			Grip = "Angled";
		};
		class SMA_HK416CUSTOMvfgB {
			model = "SMA_HK416CUS";
			camo = "None";
			Barrel = "STD";
			Grip = "Vertical";
		};
		class SMA_HK416CUSTOMafg {
			model = "SMA_HK416CUS";
			camo = "TAN PAINTED";
			Barrel = "STD";
			Grip = "Angled";
		};
		class SMA_HK416CUSTOMvfg {
			model = "SMA_HK416CUS";
			camo = "TAN PAINTED";
			Barrel = "STD";
			Grip = "Vertical";
		};
		class SMA_HK416CUSTOMafgODP {
			model = "SMA_HK416CUS";
			camo = "OD PAINTED";
			Barrel = "STD";
			Grip = "Angled";
		};
		class SMA_HK416CUSTOMvfgODP {
			model = "SMA_HK416CUS";
			camo = "OD PAINTED";
			Barrel = "STD";
			Grip = "Vertical";
		};
		class SMA_HK416CUSTOMCQBafgB {
			model = "SMA_HK416CUS";
			camo = "None";
			Barrel = "CQB";
			Grip = "Angled";
		};
		class SMA_HK416CUSTOMCQBvfgB {
			model = "SMA_HK416CUS";
			camo = "None";
			Barrel = "CQB";
			Grip = "Vertical";
		};
		class SMA_HK416GLCQB_B {
			model = "SMA_HK416CUS";
			camo = "None";
			Barrel = "CQB";
			Grip = "GL";
		};
		class SMA_HK416CUSTOMCQBafg {
			model = "SMA_HK416CUS";
			camo = "TAN PAINTED";
			Barrel = "CQB";
			Grip = "Angled";
		};
		class SMA_HK416CUSTOMCQBvfg {
			model = "SMA_HK416CUS";
			camo = "TAN PAINTED";
			Barrel = "CQB";
			Grip = "Vertical";
		};
		class SMA_HK416GLCQB {
			model = "SMA_HK416CUS";
			camo = "TAN PAINTED";
			Barrel = "CQB";
			Grip = "GL";
		};
			
		class SMA_HK416CUSTOMCQBafgODP {
			model = "SMA_HK416CUS";
			camo = "OD PAINTED";
			Barrel = "CQB";
			Grip = "Angled";
		};
		class SMA_HK416CUSTOMCQBvfgODP {
			model = "SMA_HK416CUS";
			camo = "OD PAINTED";
			Barrel = "CQB";
			Grip = "Vertical";
		};
		class SMA_HK416GLCQB_ODP {
			model = "SMA_HK416CUS";
			camo = "OD PAINTED";
			Barrel = "CQB";
			Grip = "GL";
		};
		
    };
};
