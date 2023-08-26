#define COMPONENT ratelmarker
#define COMPONENT_BEAUTIFIED RATEL Marker
#include "\z\tfww\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_RATELMARKER
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_RATELMARKER
    #define DEBUG_SETTINGS DEBUG_SETTINGS_RATELMARKER
#endif

#include "\z\tfww\addons\main\script_macros.hpp"


/* To be added to dev documentation
 * TFWW Tag 3-ID = 213
 * Project 2-ID = 32
 * Control 2-ID = XY
 * IDs: <TFWW Tag 6-ID> + <Project 2-ID> + <Control 2-ID>
 */
#define GUI_ID_INPUT_X 2133201
#define GUI_ID_INPUT_Y 2133202
