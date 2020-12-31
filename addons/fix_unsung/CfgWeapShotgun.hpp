class Uns_Shotgun: Uns_Rifle {
    magazineReloadTime = 0;
    WB_reboltAction = "uns_pa_GestureReloadPump";
    WB_reboltActionDelay = 0;
    WB_reboltSound = "uns_pa_shotgunfired";
    WB_reboltSoundDelay = 0;
    WB_reboltSoundDistance = 20;
    WB_reboltSoundOffsetDelay = 0;
    class Single: Single {
        recoil = "recoil_single_primary_3outof10";
        recoilProne = "recoil_single_primary_prone_3outof10";
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {};
    class EventHandlers: EventHandlers {
        class unsung {
            fired = "[(_this select 0), (_this select 1), (_this select 2)] call WB_fnc_pa_fired_fixed";
        };
    };
};

class uns_m870: Uns_Shotgun {
    displayName = "M870 (Express)";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_12g_1rnd","CBA_12g_2rnds","CBA_12g_3rnds","CBA_12g_4rnds","CBA_12g_5rnds","CBA_12g_6rnds","CBA_12g_7rnds","CBA_12g_8rnds"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72.1;
    };
    class Single: Single {
     			class StandardSound {
            soundSetShot[] = {"HunterShotgun_01_Shot_SoundSet","HunterShotgun_01_Tail_SoundSet"};
     			};
  		};
};

class uns_m870_mk1: uns_m870 {
    displayName = "M870 (Mark 1)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 79.3;
    };
};

class uns_m1897: Uns_Shotgun {
    displayName = "M97";
    magazineWell[] = {"CBA_12g_1rnd","CBA_12g_2rnds","CBA_12g_3rnds","CBA_12g_4rnds","CBA_12g_5rnds","CBA_12g_6rnds"};
    modes[] = {"Single"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
    };
    class EventHandlers: EventHandlers {};
    class Single: Single {
        reloadTime = 0.5;
        soundEnd[] = {"sound",1};
     			class StandardSound {
            soundSetShot[] = {"HunterShotgun_01_Shot_SoundSet","HunterShotgun_01_Tail_SoundSet"};
     			};
  		};
};
class uns_m1897riot: uns_m1897 {
    displayName = "M97 (Riot)";
    class WeaponSlotsInfo: WeaponSlotsInfo {};
    class EventHandlers: EventHandlers {};
    class Single: Single {};
};

class uns_baikal: uns_m1897 {
    displayName = "Baikal";
    magazineReloadTime = 0;
    magazineWell[] = {"CBA_12g_1rnd","CBA_12g_2rnds"};
    modes[] = {"Single"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 64;
    };
    class EventHandlers: EventHandlers {
        class unsung {};
    };
    class Single: Single {
        reloadTime = 0.15;
    };
};
class uns_baikal_sawnoff: uns_baikal {
    displayName = "Baikal (Sawn-off)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 49;
    };
    class Single: Single {
        aiRateOfFireDistance = 50;
        maxRange = 50;
        midRange = 30;
     			class StandardSound {
            soundSetShot[] = {"HunterShotgun_01_SawedOff_Shot_SoundSet","HunterShotgun_01_Tail_SoundSet"};
     			};
  		};
};

class uns_ithaca37: Uns_Shotgun {
    displayName = "Ithaca 37";
    magazineWell[] = {"CBA_12g_1rnd","CBA_12g_2rnds","CBA_12g_3rnds","CBA_12g_4rnds"};
    modes[] = {"Single"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.1;
    };
    class Single: Single {
        soundEnd[] = {"sound",1};
     			class StandardSound {
            soundSetShot[] = {"HunterShotgun_01_Shot_SoundSet","HunterShotgun_01_Tail_SoundSet"};
     			};
  		};
};
class uns_ithaca37_grip: uns_ithaca37 {
    displayName = "Ithaca 37 (Grip)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 61.7;
    };
    class Single: Single {};
};
class uns_model12: uns_ithaca37 {
    displayName = "M12";
    magazineWell[] += {"CBA_12g_5rnds","CBA_12g_6rnds"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 75.5;
    };
    class Single: Single {
     			class StandardSound {
            soundSetShot[] = {"HunterShotgun_01_SawedOff_Shot_SoundSet","HunterShotgun_01_Tail_SoundSet"};
     			};
  		};
};
