class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};
class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};
class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};

class Extended_init_Eventhandlers {
    class GVAR(vs17_base);
};

class Extended_InitPost_EventHandlers {
    class ReammoBox_F {
        class Storage_MedicalSupplies {
            init = "[_this select 0] call TFWW_fnc_MedicalSupplies";
        };
        class Storage_Ammobox {
            init = "[_this select 0] call TFWW_fnc_Ammobox";
        };
    };
    class Car {
        class Car_MedicalSupplies {
            init = "[_this select 0] call TFWW_fnc_MedicalSupplies";
        };
        class Car_Ammobox {
            init = "[_this select 0] call TFWW_fnc_Ammobox";
        };
    };
    class Tank {
        class Tank_MedicalSupplies {
            init = "[_this select 0] call TFWW_fnc_MedicalSupplies";
        };
        class Tank_Ammobox {
            init = "[_this select 0] call TFWW_fnc_Ammobox";
        };
    };
    class Motorcycle {
        class Motorcycle_MedicalSupplies {
            init = "[_this select 0] call TFWW_fnc_MedicalSupplies";
        };
        class Motorcycle_Ammobox {
            init = "[_this select 0] call TFWW_fnc_Ammobox";
        };
    };
    class Helicopter {
        class Helicopter_MedicalSupplies {
            init = "[_this select 0] call TFWW_fnc_MedicalSupplies";
        };
        class Helicopter_Ammobox {
            init = "[_this select 0] call TFWW_fnc_Ammobox";
        };
    };
    class Plane {
        class Plane_MedicalSupplies {
            init = "[_this select 0] call TFWW_fnc_MedicalSupplies";
        };
        class Plane_Ammobox {
            init = "[_this select 0] call TFWW_fnc_Ammobox";
        };
    };
    class Ship_F {
        class Ship_MedicalSupplies {
            init = "[_this select 0] call TFWW_fnc_MedicalSupplies";
        };
        class Ship_Ammobox {
            init = "[_this select 0] call TFWW_fnc_Ammobox";
        };
    };
};
