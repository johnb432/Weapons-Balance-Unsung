class uns_sks: Uns_Rifle762 {
    ACE_barrelLength = 520;
    ACE_barrelTwist = 240;
    displayName = "SKS";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_762x39_SKS","CBA_762x39_SKS_Clip"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 85;
    };
};

class uns_STG_44: Uns_Rifle762 {
    ACE_barrelLength = 420;
    ACE_barrelTwist = 240;
    displayName = "StG 44";
    magazineWell[] += {"CBA_792x33_StG"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101.2;
    };
};

class uns_mas4956_muzzle: Uns_Rifle762 {
    ACE_barrelLength = 525;
    ACE_barrelTwist = 270;
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_75x54mmFrench_MAS49"};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_mas4956: uns_mas4956_muzzle {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 90;
    };
};
class uns_mas4956_gl: uns_mas4956 {
    displayName = "MAS-49/56 (Rifle Grenade)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 90;
    };
};

//https://en.wikipedia.org/wiki/Dragunov_sniper_rifle#Barrel
class uns_svd_base: Uns_Rifle762 {
    ACE_barrelLength = 620;
    ACE_barrelTwist = 320;
    displayName = "SVD";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_762x54R_SVD"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
};
class uns_SVD_CAMO_base: uns_svd_base {
    displayName = "SVD (Camo)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
};

class uns_svt: Uns_Rifle762 {
    ACE_barrelLength = 625;
    ACE_barrelTwist = 240;
    displayName = "SVT-40";
    magazineWell[] += {"CBA_762x54R_SVT","CBA_762x54R_Mosin"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 85;
    };
};

class uns_M14_base: Uns_Rifle762 {
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_762x51_M14","CBA_762x51_M14_L"};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_m14: uns_M14_base {
    displayName = "M14";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 90.2;
    };
};
class uns_M21: uns_m14 {
    baseWeapon = "uns_M21";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 116;
    };
};

class uns_t233: Uns_Rifle {
    ACE_barrelLength = 390;
    ACE_barrelTwist = 177.8;
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_556x45_HK33"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.5;
    };
};

class uns_m79: Uns_Rifle {
    displayName = "M79";
    magazineReloadTime = 0;
    class uns_M79Muzzle: uns_UGL {
        magazineReloadTime = 0;
        magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 59.4;
    };
};
class uns_ex41: uns_m79 {
    magazineReloadTime = 0;
    class uns_EX41Muzzle: uns_M79Muzzle {
        magazineReloadTime = 0;
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 82;
    };
};
