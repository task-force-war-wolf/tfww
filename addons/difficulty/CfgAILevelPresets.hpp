class CfgAILevelPresets {
    class Custom;
    class GVAR(LevelAI): Custom {
        displayName = CSTRING(DifficultyName);

        skillAI = .6;
        precisionAI = 0.4;
    };
};
