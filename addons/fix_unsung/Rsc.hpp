class RscPicture;
class RscInGameUI {
    class RscWeaponZeroing;
    class rhs_rscOptics_uns_akms: RscWeaponZeroing {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_fold_AK";
        controls[] = {"CA_Zeroing","RHS_ak_fold_handler"};
        class RHS_ak_fold_handler: RscPicture {
            idc = 9899;
        };
    };
    class rhs_rscOptics_uns_akms_drum: rhs_rscOptics_uns_akms {};
    class rhs_rscOptics_uns_aks47: rhs_rscOptics_uns_akms {};

    class rhs_rscOptics_uns_sa58v: rhs_rscOptics_uns_akms {};

    class rhs_rscOptics_uns_m45: rhs_rscOptics_uns_akms {};

    class rhs_rscOptics_uns_m50: rhs_rscOptics_uns_akms {};

    class rhs_rscOptics_uns_pm63f: rhs_rscOptics_uns_akms {};

    class rhs_rscOptics_uns_PPS43: rhs_rscOptics_uns_akms {};

    class rhs_rscOptics_uns_sa61f: rhs_rscOptics_uns_akms {};

    class rhs_rscOptics_uns_Sterling: rhs_rscOptics_uns_akms {};
    class rhs_rscOptics_uns_SterlingSD: rhs_rscOptics_uns_akms {};

    class rhs_rscOptics_uns_uzif: rhs_rscOptics_uns_akms {};
};
