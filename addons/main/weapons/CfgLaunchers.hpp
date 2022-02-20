class Launcher;
class Launcher_Base_F: Launcher {
    class WeaponSlotsInfo;
};
class launch_RPG32_F: Launcher_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_launcher_base_F: launch_RPG32_F {
    magazineWell[] = {};
    scope = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_launcher_base: uns_launcher_base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uns_rpg2: uns_launcher_base {
    displayName = "RPG-2";
    magazineReloadTime = 0;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 62.4;
    };
};
class uns_B40: uns_rpg2 {
    displayName = "B40";
};
class uns_rpg7: uns_rpg2 {
    ace_reloadlaunchers_enabled = 1;
    displayName = "RPG-7";
    magazineWell[] = {"RPG7","CBA_RPG7"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
       mass = 120;
   };
};
class uns_m1a1_bazooka: uns_rpg2 {
    ace_reloadlaunchers_enabled = 1;
    magazineWell[] = {"CBA_Bazooka"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
       mass = 127.5;
   };
};
