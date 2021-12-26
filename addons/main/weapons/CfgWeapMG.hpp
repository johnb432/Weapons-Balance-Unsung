class Uns_LMG: Uns_Rifle {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class Uns_HMG: Uns_LMG {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_rpk_base: Uns_HMG {
    ACE_barrelLength = 590;
    ACE_barrelTwist = 240;
    ACE_Overheating_allowSwapBarrel = 0;
    magazineReloadTime = 0;
    magazineWell[] += {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 106;
    };
};
class uns_RPK_40: uns_rpk_base {
    displayName = "RPK";
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_RPK_drum: uns_rpk_base {
    displayName = "RPK (Drum)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 106;
    };
};

class uns_rpd_base: Uns_HMG {
    ACE_barrelLength = 520;
    ACE_barrelTwist = 240;
    ACE_Overheating_allowSwapBarrel = 0;
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_762x39_RPD"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 163.1;
    };
};
class uns_rpd: uns_rpd_base {
    displayName = "RPD";
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_rpdsog: uns_rpd_base {
    ACE_barrelLength = 420;
    displayName = "RPD (Sawn-off)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 146.1;
    };
};
class uns_RPDsupport: uns_rpd {
    displayName = "RPD (Support)";
};

class uns_PK_base: Uns_HMG {
    ACE_barrelLength = 605;
    ACE_barrelTwist = 240;
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_762x54R_LINKS"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 198;
    };
};
class uns_PK: uns_PK_base {
    displayName = "PK";
};
class uns_PKsupport: uns_PK {
    displayName = "PK (Support)";
};

class uns_ukvz59: uns_PK_base {
    ACE_barrelLength = 650;
    magazineReloadTime = 0;
    magazineWell[] = {"CBA_762x54R_Vz59_LINKS"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 205;
    };
};

class uns_DP28_base: Uns_HMG {
    ACE_barrelLength = 605;
    ACE_barrelTwist = 240;
    ACE_Overheating_allowSwapBarrel = 0;
    baseWeapon = "uns_DP28_base";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_762x54R_DPM"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 201.1;
    };
};
class uns_DP28: uns_DP28_base {
    baseWeapon = "uns_DP28";
    displayName = "DP-27";
};

class uns_MG42_base: Uns_HMG {
    ACE_barrelLength = 530;
    ACE_barrelTwist = 240;
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_792x57_LINKS"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 254.5;
    };
};
class uns_MG42: uns_MG42_base {
    displayName = "MG 42";
};
class uns_mg42_bakelite: uns_MG42 {
    displayName = "MG 42 (Bakelite)";
};
class uns_MG42support: uns_MG42 {
    displayName = "MG 42 (Support)";
};

class uns_m60_base: Uns_HMG {
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_762x51_LINKS","M240_762x51"};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_m60: uns_m60_base {
    displayName = "M60";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 231;
    };
};
class uns_m60support: uns_m60 {
    displayName = "M60 (Support)";
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_m60grip: uns_m60_base {
    ACE_barrelLength = 431.8;
    displayName = "M60 (Grip)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 178.4;
    };
};
class uns_m60shorty: uns_m60grip {
    displayName = "M60 (Shorty)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 178.4;
    };
};

class uns_m1919a6: Uns_HMG {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 254;
    displayName = "M1919A6";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_3006_Belt"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 330.7;
    };
};

class uns_bar_base: Uns_LMG {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 254;
    ACE_Overheating_allowSwapBarrel = 0;
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_3006_BAR"};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_bar: uns_bar_base {
    displayName = "M1918A2 BAR (Bipod)";
    magazineReloadTime = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 194;
    };
};
