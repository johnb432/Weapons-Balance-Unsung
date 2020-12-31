class uns_fal_base: Uns_Rifle762 {
    ACE_barrelLength = 554;
    ACE_barrelTwist = 304.8;
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_762x51_FAL","CBA_762x51_FAL_L"};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_l1a1_blk: uns_fal_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 95;
    };
};
class uns_l1a1: uns_fal_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 95;
    };
};
class uns_l1a1_enfield: uns_l1a1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 95;
    };
};
class uns_l2a1: uns_l1a1 {
    ACE_barrelLength = 457.2;
    ACE_barrelTwist = 304.8;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 90;
    };
};
class uns_l2a1_shorty: uns_l2a1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 92;
    };
};
class uns_l1a1gl: uns_l2a1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 123;
    };
};
