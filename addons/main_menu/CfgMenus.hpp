
class EMM_mainMenu_CfgMenus {
    class VN {
        class menus {
            class MainMenu;
            class MultiplayerVN: MainMenu {
                items[] = {"tfwwsofbattle1", "Exit"};

                class ServerBrowser;
                class tfwwsofbattle1: ServerBrowser {
                    action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join1)));
                    text = CSTRING(SpotlightHeader1);
                };
                class tfwwsofbattle2: ServerBrowser {
                    action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join2)));
                    text = CSTRING(SpotlightHeader2);
                };
                // class tfwwsofbattle3: ServerBrowser {
                //     action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join3)));
                //     text = CSTRING(SpotlightHeader3);
                // };
                class tfwwsofbattle4: ServerBrowser {
                    action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join4)));
                    text = CSTRING(SpotlightHeade4r);
                };
                class tfwwsofbattle5: ServerBrowser {
                    action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join5)));
                    text = CSTRING(SpotlightHeader5);
                };
            };
        };
    };
};
