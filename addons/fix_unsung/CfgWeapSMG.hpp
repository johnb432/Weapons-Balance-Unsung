class Uns_SMG: Uns_Rifle {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_PPS43: Uns_SMG {
    ACE_barrelLength = 243;
    ACE_barrelTwist = 250;
    baseWeapon = "uns_PPS43";
    magazineWell[] += {"CBA_762x25_PPSh_Drum","CBA_762x25_PPSh_Stick"};
    rhs_fold = "uns_PPS43f";
    rhs_fold_anim = "RHS_GestureFoldAKMS";
    weaponInfoType = "rhs_rscOptics_uns_PPS43";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 67;
    };
};
class uns_PPS43f: uns_PPS43 {
    baseWeapon = "uns_PPS43f";
    displayName = "PPS-43 (Folded)";
    rhs_fold = "uns_PPS43";
    rhs_fold_anim = "RHS_GestureUnfoldAKMS";
};

class uns_PPS52: uns_PPS43 {
    baseWeapon = "uns_PPS52";
    displayName = "PPS wz. 1943/1952";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70;
    };
};

class uns_k50m: uns_PPS43 {
    baseWeapon = "uns_k50m";
    magazineWell[] = {"UNS_762x25_PPSh"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 75;
    };
};
class uns_k50mdrum: uns_k50m {
    baseWeapon = "uns_k50mdrum";
    scope = 1;
    scopeArsenal = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 75;
    };
};

class uns_ppsh41: uns_k50mdrum {
    ACE_barrelLength = 266;
    baseWeapon = "uns_ppsh41";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
    };
};
class uns_type50: uns_ppsh41 {
    baseWeapon = "uns_type50";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
    };
};

class uns_sten: Uns_SMG {
    ACE_barrelLength = 196;
    ACE_barrelTwist = 250;
    displayName = "Sten Mk.II";
    magazineWell[] += {"CBA_9x19_STEN"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70.5;
    };
};

class uns_owen: uns_sten {
    ACE_barrelLength = 250;
    ACE_barrelTwist = 250;
    displayName = "Owen Machine Carbine";
    magazineReloadTime = 0;
    magazineWell[] = {"CBA_9x19_Owen"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 93.3;
    };
};

class uns_Sterling: uns_sten {
    baseWeapon = "uns_Sterling";
    displayName = "Sterling L2A3 (Mk.4)";
    rhs_fold = "uns_Sterling_f";
    rhs_fold_anim = "RHS_GestureFoldAKMS";
    weaponInfoType = "rhs_rscOptics_uns_Sterling";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 60;
    };
};
class uns_Sterling_f: uns_Sterling {
    baseWeapon = "uns_Sterling_f";
    displayName = "Sterling L2A3 (Mk.4/Folded)";
    rhs_fold = "uns_Sterling";
    rhs_fold_anim = "RHS_GestureUnfoldAKMS";
};
class uns_SterlingSD: uns_Sterling {
    baseWeapon = "uns_SterlingSD";
    displayName = "Sterling L34A1 (Mk.5)";
    rhs_fold = "uns_SterlingSD_f";
    rhs_fold_anim = "RHS_GestureFoldAKMS";
    weaponInfoType = "rhs_rscOptics_uns_SterlingSD";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68;
    };
};
class uns_SterlingSD_f: uns_SterlingSD {
    ACE_barrelLength = 250;
    baseWeapon = "uns_SterlingSD_f";
    displayName = "Sterling L34A1 (Mk.5/Folded)";
    rhs_fold = "uns_SterlingSD";
    rhs_fold_anim = "RHS_GestureUnfoldAKMS";
};

class uns_f1_smg: uns_Sterling {
    baseWeapon = "uns_f1_smg";
    displayName = "F1";
    magazineReloadTime = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.5;
    };
};

class uns_m3a1: Uns_SMG {
    ACE_barrelLength = 203.2;
    ACE_barrelTwist = 406;
    displayName = "M3A1 Grease Gun";
    magazineWell[] += {"CBA_45ACP_Grease"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 79.4;
    };
};

class uns_m45: Uns_SMG {
    ACE_barrelLength = 212;
    ACE_barrelTwist = 250;
    baseWeapon = "uns_m45";
    displayName = "Kpist m/45";
    magazineWell[] += {"CBA_9x19_M45CarlG"};
    rhs_fold = "uns_m45f";
    rhs_fold_anim = "RHS_GestureFoldSCAR";
    weaponInfoType = "rhs_rscOptics_uns_m45";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73.8;
    };
};
class uns_m45f: uns_m45 {
    baseWeapon = "uns_m45f";
    displayName = "Kpist m/45 (Folded)";
    rhs_fold = "uns_m45";
    rhs_fold_anim = "RHS_GestureUnfoldSCAR";
};

class uns_m50: Uns_SMG {
    ACE_barrelLength = 212;
    ACE_barrelTwist = 250;
    baseWeapon = "uns_m50";
    displayName = "Madsen M-50";
    magazineWell[] += {"CBA_9x19_M50Madsen"};
    rhs_fold = "uns_m50f";
    rhs_fold_anim = "RHS_GestureFoldSCAR";
    weaponInfoType = "rhs_rscOptics_uns_m50";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 69;
    };
};
class uns_m50f: uns_m50 {
    baseWeapon = "uns_m50f";
    displayName = "Madsen M-50 (Folded)";
    rhs_fold = "uns_m50";
    rhs_fold_anim = "RHS_GestureUnfoldSCAR";
};

class uns_mac10: Uns_SMG {
    ACE_barrelLength = 146;
    ACE_barrelTwist = 406;
    magazineWell[] += {"CBA_9x19_MAC10"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 62.6;
    };
};

class uns_mat49: Uns_SMG {
    ACE_barrelLength = 230;
    ACE_barrelTwist = 250;
    magazineWell[] += {"CBA_762x25_MAT49"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
    };
};

class uns_pm63f: Uns_SMG {
    ACE_barrelLength = 152;
    ACE_barrelTwist = 250;
    baseWeapon = "uns_pm63f";
    displayName = "PM-63 RAK (Folded)";
    magazineWell[] += {"CBA_9x18_PM63"};
    rhs_fold = "uns_pm63";
    rhs_fold_anim = "RHS_GestureUnfoldAKMS";
    weaponInfoType = "rhs_rscOptics_uns_pm63f";
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_pm63: uns_pm63f {
    baseWeapon = "uns_pm63";
    rhs_fold = "uns_pm63f";
    rhs_fold_anim = "RHS_GestureFoldAKMS";
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};

class uns_sa61f: uns_pm63f {
    ACE_barrelLength = 115;
    ACE_barrelTwist = 250;
    baseWeapon = "uns_sa61f";
    displayName = "Sa vz. 61 Skorpion (Folded)";
    magazineWell[] = {"CBA_32ACP_Vz61"};
    rhs_fold = "uns_sa61";
    rhs_fold_anim = "RHS_GestureUnfoldAKMS";
    weaponInfoType = "rhs_rscOptics_uns_sa61f";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 28.2;
    };
};
class uns_sa61: uns_sa61f {
    baseWeapon = "uns_sa61";
    displayName = "Sa vz. 61 Skorpion";
    rhs_fold = "uns_sa61f";
    rhs_fold_anim = "RHS_GestureFoldAKMS";
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};

class uns_mp40: Uns_SMG {
    ACE_barrelLength = 250;
    ACE_barrelTwist = 250;
    displayName = "MP 40";
    magazineWell[] += {"CBA_9x19_MP40"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 87.5;
    };
};

class uns_thompson: Uns_SMG {
    ACE_barrelLength = 267;
    ACE_barrelTwist = 406;
    magazineWell[] += {"CBA_45ACP_Thompson_Stick"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 100;
    };
};
class uns_thompsonvc: uns_thompson {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 85;
    };
};

class uns_type100: Uns_SMG {
    ACE_barrelLength = 230;
    ACE_barrelTwist = 240;
    displayName = "Type 100 SMG";
    magazineWell[] += {"CBA_8x22_Type100"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 85;
    };
};

class uns_uzif: Uns_SMG {
    ACE_barrelLength = 260;
    ACE_barrelTwist = 250;
    baseWeapon = "uns_uzif";
    displayName = "UZI (Folded)";
    magazineWell[] += {"CBA_9x19_UZI"};
    rhs_fold = "uns_uzi";
    rhs_fold_anim = "RHS_GestureUnfoldAKMS";
    weaponInfoType = "rhs_rscOptics_uns_uzif";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
    };
};
class uns_uzi: uns_uzif {
    baseWeapon = "uns_uzi";
    rhs_fold = "uns_uzif";
    rhs_fold_anim = "RHS_GestureFoldAKMS";
};
