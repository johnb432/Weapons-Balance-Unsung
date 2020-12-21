class CfgVehicles {
    class UK3CB_B_Knapsack_Blk;
    class UK3CB_B_Knapsack_Med_Blk;
    class UK3CB_B_Knapsack_K;
    class UK3CB_B_Knapsack_Med_K;
    class UK3CB_TKP_O_B_ASS_BLK: UK3CB_B_Knapsack_Blk {
        mass = 20;
        maximumLoad = 160;
    };
    class UK3CB_TKP_O_B_ASS_MED_BLK: UK3CB_B_Knapsack_Med_Blk {
        mass = 20;
        maximumLoad = 160;
    };
    class UK3CB_CPD_B_B_ASS_BLU: UK3CB_B_Knapsack_Blk {
        mass = 20;
        maximumLoad = 160;
    };
    class UK3CB_UN_B_B_ASS: UK3CB_B_Knapsack_K {
        mass = 20;
        maximumLoad = 160;
    };
    class UK3CB_TKP_I_B_ASS_MED_TAN: UK3CB_B_Knapsack_Med_K {
        mass = 20;
        maximumLoad = 160;
    };

    class TFAR_anprc155;
    class TFAR_mr3000;
    class TFAR_rt1523g_big;
    class UK3CB_B_I_Radio_Backpack: TFAR_anprc155 {
        displayName = "Radio Backpack AN/PRC-155";
        mass = 85;
        maximumLoad = 120;
        tf_range = 40000;
    };
    class UK3CB_B_O_Radio_Backpack: TFAR_mr3000 {
        mass = 85;
        maximumLoad = 120;
        tf_range = 40000;
    };
    class UK3CB_B_B_Radio_Backpack: TFAR_rt1523g_big {
        displayName = "Radio Backpack RT-1523G";
        mass = 85;
        maximumLoad = 120;
    };

    class B_Bergen_Base;
    class UK3CB_B_Bedroll_Backpack: B_Bergen_Base {
        mass = 16;
    };
};
