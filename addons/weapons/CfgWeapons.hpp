#include "script_component.hpp"
class CfgWeapons {
    class Rifle_Long_Base_F;
	class SMA_AssaultBase;
	class SMA_M4_BASE;
	class SMA_MK16;
	class SMA_MK17;
	class SMA_ACRREM_BASE;
	class SMA_MK18_BASE;
	class SMA_HK416_BASE;
	class SMA_A3_BASE_F;
	class SMA_556_RIFLEBASE: SMA_AssaultBase {
		scope = 1;
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STANAG_2D"};
	};
	class SMA_762_RIFLEBASE: SMA_AssaultBase {
		scope = 1;
        magazineWell[] = {};
	};

    //AAC 7.62x35 (.300 Blackout)
    class SMA_AAC_MPW_BASE: SMA_556_RIFLEBASE {
        magazineWell[] = {"CBA_300BLK_STANAG"};
    };


    //ACR 6.8 SPC
    class SMA_ACRREM: SMA_ACRREM_BASE {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class SMA_ACRREMAFG: SMA_ACRREM_BASE {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class SMA_ACRREMAFBCQB: SMA_ACRREM_BASE {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class SMA_ACRREMCQBGL: SMA_ACRREM_BASE {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class SMA_ACRREMCQBGL_B: SMA_ACRREM_BASE {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class ACRREMGL: SMA_ACRREM_BASE {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class ACRREMGL_B: SMA_ACRREM_BASE {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class ACRREMMOE: SMA_ACRREM_BASE {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class ACRREMMOECQB: SMA_ACRREM_BASE {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };


    //AUG
    class SMA_AUG_A3_F: SMA_A3_BASE_F {
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STEYR"};
    };
    class SMA_CTar_BASE_F: SMA_556_RIFLEBASE {
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STEYR"};
    };
    class SMA_Tavor_BASE_F: SMA_556_RIFLEBASE {
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STEYR"};
    };
    class SMA_STG_BASE_F: SMA_556_RIFLEBASE {
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STEYR"};
    };
    class SMA_Steyr_AUG_BASE_F: SMA_556_RIFLEBASE {
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STEYR"};
    };
    class SMA_SAR21_BASE_F: SMA_556_RIFLEBASE {
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STEYR"};
    };


    //HK417
    class SMA_HK417: SMA_762_RIFLEBASE {
        magazineWell[] = {"CBA_762x51_HK417","CBA_762x51_HK417_L","CBA_762x51_HK417_XL"};
    };


    //L85
    class SMA_L85RIS_BASE: SMA_556_RIFLEBASE {
        magazineWell[] = {"CBA_556x45_STANAG"};
    };


    //Minimi
    class sma_minimi_762_base_F: Rifle_Long_Base_F {
        magazineWell[] = {"CBA_762x51_LINKS"};
    };


    //SCAR-H
	class SMA_Mk17: SMA_762_RIFLEBASE {
        magazineWell[] = {"CBA_762x51_SCAR"};
	};
    class SMA_Mk17_EGLM: SMA_MK17 {
        magazineWell[] = {"CBA_762x51_SCAR_EGLM"};
    };


    //SCAR-L
    class SMA_MK16;
    class SMA_Mk16_EGLM: SMA_MK16 {
        magazineWell[] = {"CBA_556x45_SCAR_EGLM"};
    };


    //SKS
    class SMA_SKS_BASE_F: SMA_762_RIFLEBASE {
        magazineWell[] = {"CBA_762x39_AK"};
    };
};
