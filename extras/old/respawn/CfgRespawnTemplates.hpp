class CfgRespawnTemplates
{
    // Class used in respawnTemplates entry
    class GVAR(default)
    {
        displayName = CSTRING(DisplayName);
        onPlayerKilled = QFUNC(onPlayerKilled);
        onPlayerRespawn = QFUNC(onPlayerRespawn);
        respawnDelay = 120;
        respawnOnStart = -1;
        respawnButton = 1;
        respawnDialog = 0;
        respawnTypes[] = {3};
        isCall = 1;
    };
    class TFWWB_RespawnOnStartPosition {
        displayName = "Task Force War Wolf  - Respawn on Start Position";
        onPlayerKilled = QFUNC(onPlayerKilled);
        onPlayerRespawn = QFUNC(RespawnOnStartPosition);
        respawnDelay = 10;
        respawnOnStart = -1;
    };
};
