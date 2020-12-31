class CfgPatches {
    class WB_fix_unsung {
        name = "Weapons balance - Fix Unsung";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
            "cba_main",
            "uns_ammo_c",
            "uns_base",
            "uns_compat",
            "uns_main",
            "uns_weap_a",
            "uns_weap_c",
            "uns_weap_e",
            "uns_weap_s",
            "uns_weap_t",
            "uns_weap_t_s",
            "uns_weap_w"
        };
        author = "johnb43";
    };
};

#include "CfgAmmoDef.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazineWells.hpp"
#include "Rsc.hpp"

class CfgFunctions {
    class WB {
        class common {
            class pa_fired_fixed {
                file = "\fix_unsung\fnc_pa_fired_fixed.sqf";
            };
        };
    };
};

//TODO: pistols
class CfgSounds {
   	class model70_fire {
      		name = "model70_fire";
        sound[] = {"\uns_weap_s\model70\model70_fire",2,0.99,600};
      		titles[] = {};
   	};

    class mas36_fire {
      		name = "mas36_fire";
        sound[] = {"\uns_weap_s\mas36\mas36_fire",2,0.99,1200};
      		titles[] = {};
   	};

    class Enfield_fire {
      		name = "Enfield_fire";
        sound[] = {"\uns_weap_s\LeeEnfield\Enfield_fire",2,1,1500};
      		titles[] = {};
   	};

    class mosin_fire {
      		name = "mosin_fire";
        sound[] = {"\uns_weap_s\mosin\mosin_fire",2,0.99,600};
      		titles[] = {};
   	};
};

class Mode_SemiAuto;
class Eventhandlers;
class CfgWeapons {
    class UGL_F;
    class uns_UGL: UGL_F {
        magazineReloadTime = 0;
    };

    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };
    class Uns_Rifle: Rifle_Base_F {
        magazineReloadSwitchPhase = 0.3;
        magazineReloadTime = 0;
        rhs_fold_sound[] = {"rhsafrf\addons\rhs_c_weapons\sounds\stock_folding.wss",1.42,1,20};
        class WeaponSlotsInfo: WeaponSlotsInfo {};
        class Single: Mode_SemiAuto {};
    };
    class Uns_Rifle762: Uns_Rifle {
        magazineReloadTime = 0;
        class WeaponSlotsInfo: WeaponSlotsInfo {};
        class Single: Single {};
    };

    #include "CfgWeapAK.hpp"
    #include "CfgWeapAR15.hpp"
    #include "CfgWeapBoltAction.hpp"
    #include "CfgWeapFAL.hpp"
    #include "CfgWeapM1Carb.hpp"
    #include "CfgWeapMG.hpp"
    #include "CfgWeapShotgun.hpp"
    #include "CfgWeapSMG.hpp"
    #include "CfgWeapMisc.hpp"
};

class CfgMagazines {
    class CA_Magazine;
    class uns_Magazine: CA_Magazine {};

    #include "CfgMagMG.hpp"
    #include "CfgMagRifle.hpp"
    #include "CfgMagSMG.hpp"
    #include "CfgMagMisc.hpp"
};
