class uns_Rifle_boltaction_base: Uns_Rifle762 {
    WB_reboltAction = "uns_ba_GestureReloadMosinBolt";
    WB_reboltSoundDistance = 20;
    class Single: Single {};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
    class EventHandlers: EventHandlers {
        class unsung {
            fired = "[(_this select 0), (_this select 1), (_this select 2)] call WB_fnc_pa_fired_fixed";
        };
    };
};
class uns_Rifle_boltaction_clip_base: uns_Rifle_boltaction_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
    class Single: Single {};
};
class uns_mosin_base: uns_Rifle_boltaction_clip_base {
    ACE_barrelLength = 730;
    ACE_barrelTwist = 240;
    magazineReloadTime = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {};
    class Single: Single {
     			class StandardSound {
        				begin1[] = {"\uns_weap_s\sks\sks_fire",2,0.99,500};
        				begin2[] = {"\uns_weap_s\sks\sks_fire",2,1,500};
            begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_short_03",3.98107,1,2000};
            closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
            closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
        				soundBegin[] = {"begin1",0.5,"begin2",0.5};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
     			};
  		};
};
class uns_mosin: uns_mosin_base {
    magazineWell[] += {"CBA_762x54R_Mosin"};
    WB_reboltActionDelay = 0;
    WB_reboltSound = "mosin_fire";
    WB_reboltSoundDelay = 0.5;
    WB_reboltSoundOffsetDelay = 1.2;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 83.8;
    };
};
class uns_kar98k: uns_mosin_base {
    ACE_barrelLength = 600;
    ACE_barrelTwist = 240;
    displayName = "Kar98k";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_792x57_K98"};
    WB_reboltActionDelay = 0;
    WB_reboltSound = "mosin_fire";
    WB_reboltSoundDelay = 0.5;
    WB_reboltSoundOffsetDelay = 1.2;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
    class Single: Single {
     			class StandardSound {
        				begin1[] = {"\uns_weap_s\sks\sks_fire",2,0.99,500};
        				begin2[] = {"\uns_weap_s\sks\sks_fire",2,1,500};
            begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_short_03",3.98107,1,2000};
            closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
            closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
        				soundBegin[] = {"begin1",0.5,"begin2",0.5};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
     			};
  		};
};

class uns_m1903: uns_Rifle_boltaction_clip_base {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 254;
    displayName = "M1903A1 Springfield";
    magazineWell[] += {"CBA_3006_Spring"};
    WB_reboltActionDelay = 0;
    WB_reboltSound = "Enfield_fire";
    WB_reboltSoundDelay = 0.5;
    WB_reboltSoundOffsetDelay = 1.2;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 88;
    };
};

class uns_smle_base: uns_Rifle_boltaction_clip_base {
    ACE_barrelLength = 640;
    ACE_barrelTwist = 254;
    magazineWell[] += {"CBA_303B_LeeEn"};
    WB_reboltActionDelay = 0;
    WB_reboltSound = "Enfield_fire";
    WB_reboltSoundDelay = 0.5;
    WB_reboltSoundOffsetDelay = 1.2;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 87;
    };
    class Single: Single {
        class StandardSound {
            begin1[] = {"\uns_weap_t_s\springfield\snd\1903A1_Fire",1,1,1200};
            begin2[] = {"\uns_weap_t_s\springfield\snd\1903A1_Fire",1,1,1200};
            begin3[] = {"\uns_weap_t_s\springfield\snd\1903A1_Fire",1,1,1200};
            closure1[] = {"\uns_weap_t_s\springfield\snd\1903A1_first",0.7,1,10};
            closure2[] = {"\uns_weap_t_s\springfield\snd\1903A1_first",0.7,1,10};
            soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            soundSetShot[] = {"M1903a1_Shot_SoundSet","M1903a1_Tail_SoundSet"};
            weaponSoundEffect = "DefaultRifle";
        };
    };
};
class uns_smle: uns_smle_base {
    displayName = "Lee-Enfield No.1 Mk.III*";
    magazineReloadTime = 0;
};
class uns_smle_sniper: uns_smle_base {
    displayName = "Lee-Enfield No.1 Mk.III* (Sniper)";
    magazineReloadTime = 0;
    delete mass;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 92;
    };
};

class uns_type99: uns_Rifle_boltaction_clip_base {
    ACE_barrelLength = 657;
    ACE_barrelTwist = 254;
    displayName = "Type 99 Arisaka";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_77x58_Arisaka"};
    WB_reboltActionDelay = 0;
    WB_reboltSound = "mas36_fire";
    WB_reboltSoundDelay = 0.2;
    WB_reboltSoundOffsetDelay = 1.2;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 83.6;
    };
    class Single: Single {
        class StandardSound {
            begin1[] = {"\uns_weap_s\mas4956\mas4956_fire",2,0.99,1200};
            begin2[] = {"\uns_weap_s\mas4956\mas4956_fire",2,1,1200};
            begin3[] = {"\uns_weap_s\mas4956\mas4956_fire",2,1.01,1200};
            closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
            closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
            soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
        };
    };
};
class uns_type99_gl: uns_type99 {
    displayName = "Type 99 Arisaka (Rifle Grenade)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 83.6;
    };
};
class uns_type99_sniper: uns_type99 {
    displayName = "Type 99 Arisaka (Sniper)";
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};

class uns_mas36: uns_Rifle_boltaction_clip_base {
    ACE_barrelLength = 575;
    ACE_barrelTwist = 270;
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_75x54mmFrench_MAS36"};
    WB_reboltActionDelay = 0;
    WB_reboltSound = "mas36_fire";
    WB_reboltSoundDelay = 0.5;
    WB_reboltSoundOffsetDelay = 1;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 82;
    };
    class Single: Single {
        class StandardSound {
            begin1[] = {"\uns_weap_s\mas4956\mas4956_fire",2,0.99,1200};
            begin2[] = {"\uns_weap_s\mas4956\mas4956_fire",2,1,1200};
            begin3[] = {"\uns_weap_s\mas4956\mas4956_fire",2,1.01,1200};
            closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
            closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
            soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
        };
    };
};
class uns_mas36_gl: uns_mas36 {
    displayName = "MAS-36 (Rifle Grenade)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 82;
    };
};
class uns_mas36short: uns_mas36 {
    ACE_barrelLength = 475;
    displayName = "MAS-36 (Carbine)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};
class uns_mas36short_gl: uns_mas36short {
    displayName = "MAS-36 (Carbine/Rifle Grenade)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};

class uns_model70_base: uns_Rifle_boltaction_base {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 254;
    magazineReloadTime = 0;
    WB_reboltActionDelay = 0;
    WB_reboltSound = "model70_fire";
    WB_reboltSoundDelay = 0.45;
    WB_reboltSoundOffsetDelay = 0.45;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
    };
    class Single: Single {
        class StandardSound {
        				begin1[] = {"\uns_weap_s\M1garand\M1garand_fire",2,0.99,1200};
        				begin2[] = {"\uns_weap_s\M1garand\M1garand_fire",2,1,1200};
            closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
            closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
        				soundBegin[] = {"begin1",0.5,"begin2",0.5};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
     			};
    };
};
class uns_model70_iron: uns_model70_base {
    displayName = "Winchester Model 70";
    magazineWell[] += {"CBA_3006_Model70"};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_M40_base: uns_model70_base {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 304.8;
    displayName = "M40 Remington";
    magazineWell[] = {"CBA_762x51_5rnds"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 144.8;
    };
};
