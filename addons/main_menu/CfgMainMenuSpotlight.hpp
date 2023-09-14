
class CfgMainMenuSpotlight {

    class GVAR(server1) {
        text = CSTRING(SpotlightJoin1);
        textIsQuote = 0;
        picture = QUOTE(z\tfww\addons\media\images\tfww512.paa);
        action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join1)));
        actionText = CSTRING(SpotlightHeader1);
        condition = QUOTE(true);
    };
    class GVAR(server2) {
        text = CSTRING(SpotlightJoin2);
        textIsQuote = 0;
        picture = QUOTE(z\tfww\addons\media\images\tfww512.paa);
        action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join2)));
        actionText = CSTRING(SpotlightHeader2);
        condition = QUOTE(true);
    };
    // class GVAR(server3) {
    //     text = CSTRING(SpotlightJoin3);
    //     textIsQuote = 0;
    //     picture = QUOTE(z\tfww\addons\media\images\tfww512.paa);
    //     action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join3)));
    //     actionText = CSTRING(SpotlightHeader3);
    //     condition = QUOTE(true);
    // };
    class GVAR(server4) {
        text = CSTRING(SpotlightJoin4);
        textIsQuote = 0;
        picture = QUOTE(z\tfww\addons\media\images\tfww512.paa);
        action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join4)));
        actionText = CSTRING(SpotlightHeader4);
        condition = QUOTE(true);
    };
    class GVAR(server5) {
        text = CSTRING(SpotlightJoin5);
        textIsQuote = 0;
        picture = QUOTE(z\tfww\addons\media\images\tfww512.paa);
        action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join5)));
        actionText = CSTRING(SpotlightHeader5);
        condition = QUOTE(true);
    };

    delete ApexProtocol;
    delete BootCamp;
    delete EastWind;

    delete Orange_CampaignGerman;
    delete Orange_Showcase_IDAP;
    delete Orange_Showcase_LoW;
    delete Orange_Campaign;

    delete Showcase_TankDestroyers;

    delete Tacops_Campaign_03;
    delete Tacops_Campaign_02;
    delete Tacops_Campaign_01;

    delete Tanks_Campaign_01;

    delete OldMan;

    delete Contact_Campaign;

    delete gm_campaign_01;

    delete SP_FD14;

    delete AoW_Showcase_AoW;
    delete AoW_Showcase_Future;

    delete Extraction_lxWS;
    delete Showcase_VR_lxWS;
    delete Showcase_Alchemist_lxWS;
};
