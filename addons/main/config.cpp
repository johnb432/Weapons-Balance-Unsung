#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "cba_xeh",
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
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Weapons-Balance-Unsung";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgAmmoBelts.hpp"
#include "CfgAmmoDef.hpp"
#include "CfgMagazineWells.hpp"
#include "Rsc.hpp"

// TODO: pistols, side arms, launchers have reload time
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
        magazineWell[] = {};
    };

    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };
    class Uns_Rifle: Rifle_Base_F {
        magazineReloadTime = 0;
        rhs_fold_sound[] = {"rhsafrf\addons\rhs_c_weapons\sounds\stock_folding.wss",1.42,1,20};
        class Single: Mode_SemiAuto {};
        class WeaponSlotsInfo: WeaponSlotsInfo {};
        class Uns_M203Muzzle: uns_UGL {
            magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
        };
        class uns_22mm_gl_muzzle: Uns_M203Muzzle {
            magazineWell[] = {"CBA_22mm_GL_M1"};
        };
        class uns_30mm_gl_muzzle: Uns_M203Muzzle {
            magazineWell[] = {"CBA_30mm_GL_Type99"};
        };
    };
    class Uns_Rifle762: Uns_Rifle {
        magazineReloadTime = 0;
        class Single: Single {};
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };

    #include "weapons\CfgLaunchers.hpp"
    #include "weapons\CfgWeapAK.hpp"
    #include "weapons\CfgWeapAR15.hpp"
    #include "weapons\CfgWeapBoltAction.hpp"
    #include "weapons\CfgWeapFAL.hpp"
    #include "weapons\CfgWeapM1Carb.hpp"
    #include "weapons\CfgWeapMG.hpp"
    #include "weapons\CfgWeapShotgun.hpp"
    #include "weapons\CfgWeapSMG.hpp"
    #include "weapons\CfgWeapMisc.hpp"
};

class CfgMagazines {
    class CA_Magazine;
    class uns_Magazine: CA_Magazine {};

    #include "magazines\CfgMagMG.hpp"
    #include "magazines\CfgMagRifle.hpp"
    #include "magazines\CfgMagSMG.hpp"
    #include "magazines\CfgMagMisc.hpp"
};
