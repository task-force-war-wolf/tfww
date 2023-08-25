#define MAINPREFIX z
#define PREFIX tfww
#define QPREFIX "tfww"

#define AUTHOR Tfww
#define QAUTHOR QUOTE(AUTHOR)
#define LOGO_PATH QUOTE(z\tfww\addons\media\images\tfww512.paa)
#define URL "https://github.com/task-force-war-wolf"


#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH
#define VERSION_AR  MAJOR,MINOR,PATCH

#define REQUIRED_VERSION 2.00

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(Task Force War Wolf  - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(Task Force War Wolf  - COMPONENT)
#endif
