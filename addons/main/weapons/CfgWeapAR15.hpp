class uns_m16: Uns_Rifle {
    ACE_barrelLength = 508;
    ACE_barrelTwist = 177.8;
    magazineReloadTime = 0;
    magazineWell[] += {"UNS_556x45_STANAG"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.5;
    };
};
class uns_m16_camo: uns_m16 {
    displayName = "M16 (Camo)";
    class WeaponSlotsInfo;
};
class uns_M16_dm: uns_m16 {
    magazineReloadTime = 0;
    scope = 1;
    scopeArsenal = 1;
};
class uns_m16_m203: uns_m16 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101.5;
    };
};
class uns_m16_xm148;
class uns_m16_xm148_camo: uns_m16_xm148 {
    displayName = "M16 (Camo/XM148)";
};

class uns_M16A1: uns_m16 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.5;
    };
};
class uns_m16A1_camo: uns_M16A1 {
    displayName = "M16A1 (Camo)";
};
class uns_M16A1_HBAR_base: uns_M16A1 {
    class WeaponSlotsInfo;
};
class uns_M16A1_HBAR: uns_M16A1_HBAR_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 74.5;
    };
};

class uns_m16a1_m203: uns_M16A1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101.5;
    };
};

class uns_xm177e1: uns_m16 {
    ACE_barrelLength = 254;
    displayName = "XM177E1";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 65;
    };
};
class uns_xm177e1_dm: uns_xm177e1 {
    displayName = "XM177E1 (Dual Mag)";
    scope = 1;
    scopeArsenal = 0;
};

class uns_xm177e1_m203: uns_m16_m203 {
    ACE_barrelLength = 292.1;
    displayName = "XM177E1 (M203)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 98;
    };
};
class uns_xm177e1_xm148: uns_xm177e1_m203 {
    displayName = "XM177E1 (XM148)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 98;
    };
};
class uns_xm177e2_m203: uns_xm177e1_m203 {
    displayName = "XM177E2 (M203)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 98;
    };
};
class uns_xm177e2_xm148: uns_xm177e2_m203 {
    displayName = "XM177E2 (XM148)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 98;
    };
};

class uns_xm177e2: uns_xm177e1 {
    ACE_barrelLength = 292.1;
    displayName = "XM177E2";
    class WeaponSlotsInfo;
};
class uns_xm177e2_grip: uns_xm177e2 {
    displayName = "XM177E2 (Grip)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68;
    };
};
class uns_xm177e2_stock: uns_xm177e2 {
    displayName = "XM177E2 (M16 Stock)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 65;
    };
};
class uns_xm177e2_short: uns_xm177e2 {
    ACE_barrelLength = 254;
    displayName = "XM177E2 (Short)";
};

//https://en.wikipedia.org/wiki/Stoner_63
class uns_m63a_base: Uns_Rifle {
    ACE_barrelLength = 508;
    ACE_barrelTwist = 230;
    magazineReloadTime = 0;
    class WeaponSlotsInfo;
};
class uns_M63a_AR_base: uns_m63a_base {
    displayName = "Stoner 63A Rifle";
    magazineReloadTime = 0;
    magazineWell[] += {"STANAG_556x45"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77.5;
    };
};
class uns_M63a_drum_base: uns_M63a_AR_base {
    ACE_barrelLength = 399;
    displayName = "Stoner 63A Commando";
    magazineReloadTime = 0;
    magazineWell[] = {};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 105;
        class PointerSlot {};
    };
};
class uns_M63a_LMG: uns_M63a_drum_base {
    ACE_barrelLength = 508;
    ACE_Overheating_allowSwapBarrel = 1;
    displayName = "Stoner 63A LMG";
    magazineReloadTime = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 116.8;
    };
};
class uns_m63asupport: uns_M63a_LMG {
    displayName = "Stoner 63A LMG (Support)";
};
