#include "script_component.hpp"
class CBA_Extended_EventHandlers;
class CfgVehicles {
    class Lamps_base_F;
    class Headlamp_light_white_low: Lamps_base_F {
        scope=1;
        scopeCurator=1;
        displayName="Headlamp Light Object";
        model="Vestarr_Headlamps\data\models\Light.p3d";

        class Hitpoints {};
        class AnimationSources {};
        class Reflectors {
            class Light_1 {
                color[]={180,156,120};
                ambient[]={0.89,0.78,0.6};
                intensity=8;
                size=1;
                innerAngle=45;
                outerAngle=85;
                coneFadeCoef=5;
                position="Light_1_pos";
                direction="Light_1_dir";
                hitpoint="";
                selection="";
                useFlare=1;
                flareSize=0.4;
                flareMaxDistance=150;
                class Attenuation {
                    start=0.5;
                    constant=0;
                    linear=0;
                    quadratic=1;
                    hardLimitStart=45;
                    hardLimitEnd=60;
                };
            };
        };
    };

    class Headlamp_light_red_low: Headlamp_light_white_low {
        class Reflectors: Reflectors {
            class Light_1: Light_1 {
                color[]={255,10,10};
                intensity=6.8;

                class Attenuation: Attenuation {
                    hardLimitStart=38;
                    hardLimitEnd=54;
                };
            };
        };
    };

    class Headlamp_light_blue_low: Headlamp_light_red_low {
        class Reflectors: Reflectors {
            class Light_1: Light_1 {
                color[]={10,10,255};
            };
        };
    };
};
