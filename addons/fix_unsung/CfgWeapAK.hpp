class uns_ak47_base: Uns_Rifle762 {
    ACE_barrelLength = 415;
    ACE_barrelTwist = 240;
    magazineReloadTime = 0;
    magazineWell[] += {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_ak47: uns_ak47_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76.5;
    };
};

class uns_aks47: uns_ak47 {
    baseWeapon = "uns_aks47";
    rhs_fold = "uns_aks47f";
    rhs_fold_anim = "RHS_GestureFoldAKMS";
    weaponInfoType = "rhs_rscOptics_uns_aks47";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
    };
};
class uns_aks47f: uns_aks47 {
    baseWeapon = "uns_aks47f";
    displayName = "AKS-47 (Folded)";
    rhs_fold = "uns_aks47";
    rhs_fold_anim = "RHS_GestureUnfoldAKMS";
};

class uns_akm: uns_ak47 {
    magazineReloadTime = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 69.1;
    };
};
class uns_akm_drum: uns_akm {
    magazineReloadTime = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 69.1;
    };
};

class uns_akms: uns_akm {
    baseWeapon = "uns_akms";
    rhs_fold = "uns_akmsf";
    rhs_fold_anim = "RHS_GestureFoldAKMS";
    weaponInfoType = "rhs_rscOptics_uns_akms";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72.6;
    };
};
class uns_akmsf: uns_akms {
    baseWeapon = "uns_akmsf";
    displayName = "AKMS (Folded)";
    rhs_fold = "uns_akms";
    rhs_fold_anim = "RHS_GestureUnfoldAKMS";
};
class uns_akms_drum: uns_akms {
    baseWeapon = "uns_akms_drum";
    magazineReloadTime = 0;
    rhs_fold = "uns_akmsf_drum";
    rhs_fold_anim = "RHS_GestureFoldAKMS";
    weaponInfoType = "rhs_rscOptics_uns_akms_drum";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72.6;
    };
};
class uns_akmsf_drum: uns_akms_drum {
    baseWeapon = "uns_akmsf_drum";
    displayName = "AKMS (Drum/Folded)";
    rhs_fold = "uns_akms_drum";
    rhs_fold_anim = "RHS_GestureUnfoldAKMS";
};

class uns_type56: uns_ak47 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 83.8;
    };
};

class uns_sa58p: uns_ak47 {
    ACE_barrelLength = 390;
    ACE_barrelTwist = 240;
    displayName = "Sa vz. 58 P";
    magazineWell[] = {"CBA_762x39_VZ58"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.2;
    };
};
class uns_sa58p_camo: uns_sa58p {
    displayName = "Sa vz. 58 P (Camo)";
};
class uns_sa58v: uns_sa58p {
    baseWeapon = "uns_sa58v";
    displayName = "Sa vz. 58 V";
    rhs_fold = "uns_sa58vf";
    rhs_fold_anim = "RHS_GestureFoldSCAR";
    weaponInfoType = "rhs_rscOptics_uns_sa58v";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.2;
    };
};
class uns_sa58vf: uns_sa58v {
    baseWeapon = "uns_sa58vf";
    displayname = "Sa vz. 58 V (Folded)";
    rhs_fold = "uns_sa58v";
    rhs_fold_anim = "RHS_GestureUnfoldSCAR";
};
