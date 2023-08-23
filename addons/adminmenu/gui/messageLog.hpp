class Controls
{
    class BackgroundMessagesList: RscText
    {
        x = 0;
        y = 0;
        w = QUOTE(TFWW_ADMINMENU_MSGS_W_LIST);
        h = QUOTE(TFWW_ADMINMENU_MSGS_H_LIST);
        colorBackground[] = {0, 0, 0, 0.3};
        style = "0x02";
    };

    class ListMessages: RscListBox
    {
        idc = IDC_TFWW_ADMINMENU_MSGS_LIST;
        //style = 32 + 16; // LB_MULTI + ST_MULTI
        sizeEx = QUOTE(TFWW_ADMINMENU_STD_SIZEX);
        sizeEx2 = QUOTE(TFWW_ADMINMENU_STD_SIZEX);
        pictureColor[] = {1,1,1,1}; // Picture color
        pictureColorSelect[] = {1,1,1,1}; // Selected picture color
        pictureColorDisabled[] = {1,1,1,1}; // Disabled picture color
        rowHeight = QUOTE(TFWW_ADMINMENU_STD_HEIGHT);
        colorText[] = {1,1,1,1};
        colorBackground[] = {1,0,0,0};
        itemBackground[] = {1,1,1,0.2};
        itemSpacing = 0;
        x = 0;
        y = 0;
        w = QUOTE(TFWW_ADMINMENU_MSGS_W_LIST);
        h = QUOTE(TFWW_ADMINMENU_MSGS_H_LIST);
    };

    class ButtonPrintSelected: GVAR(RscButtonMenu)
    {
        idc = IDC_TFWW_ADMINMENU_MSGS_COPY;
        text = "PRINT SELECTED TO RPT";
        onButtonClick = QUOTE(_this call FUNC(messageLog_print));
        tooltip = "Prints currently selected log entry to RPT.";
        colorBackground[] = {0, 0, 0, 1};
        x = QUOTE(0 * TFWW_ADMINMENU_STD_WIDTH);
        y = QUOTE(19.5 * TFWW_ADMINMENU_STD_HEIGHT);
        w = QUOTE(9 * TFWW_ADMINMENU_STD_WIDTH);
    };

    class ButtonPrintAll: GVAR(RscButtonMenu)
    {
        idc = IDC_TFWW_ADMINMENU_MSGS_COPYALL;
        text = "PRINT ALL TO RPT";
        tooltip = "Prints all logged entries to RPT.";
        onButtonClick = QUOTE(_this call FUNC(messageLog_printAll));
        colorBackground[] = {0, 0, 0, 1};
        x = QUOTE(9.1 * TFWW_ADMINMENU_STD_WIDTH);
        y = QUOTE(19.5 * TFWW_ADMINMENU_STD_HEIGHT);
        w = QUOTE(7 * TFWW_ADMINMENU_STD_WIDTH);
    };
};
