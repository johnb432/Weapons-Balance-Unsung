class uns_m1carbine: Uns_Rifle762 {
    ACE_barrelLength = 460;
    ACE_barrelTwist = 254;
    displayName = "M1 Carbine";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_30Carbine_M1Carbine"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 52;
    };
};
class uns_m1carbine_pouch: uns_m1carbine {
    magazineReloadTime = 0;
};
class uns_m1carbine_gl: uns_m1carbine {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 52;
    };
};
class uns_m1carbine_pouch_gl: uns_m1carbine_gl {
    magazineReloadTime = 0;
};

class uns_m2carbine: uns_m1carbine {
    displayName = "M2 Carbine";
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_m2carbine_gl: uns_m2carbine {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 52;
    };
};
class uns_m2carbine_shorty: uns_m2carbine {
    ACE_barrelLength = 250;
    displayName = "M2 Carbine (Sawn-off)";
};

class uns_m3carbine: uns_m1carbine {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 95;
    };
};

class uns_m1garand: Uns_Rifle762 {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 254;
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_3006_Garand"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 94.8;
    };
};
class uns_m1garand_gl: uns_m1garand {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 94.8;
    };
};
