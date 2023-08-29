class CfgAILevelPresets {
    class Custom;
    class GVAR(LevelAI): Custom {
        displayName = CSTRING(DifficultyName);

        skillAI = .5;
        precisionAI = 0.2;
    };
};
