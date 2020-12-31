class uns_akmag_base: uns_Magazine {
    mass = 13.5;
};
class uns_ak47mag: uns_akmag_base {
    displayName = "30Rnd 7.62x39mm AK Mag (Mixed)";
    model = "\A3\weapons_F\ammo\mag_univ.p3d";
    modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_762x39_akm_30rnd.p3d";
    modelSpecialIsProxy = 1;
};
class uns_ak47mag_NT: uns_ak47mag {
    displayName = "30Rnd 7.62x39mm AK Mag";
};
class uns_ak47mag_T: uns_ak47mag {
    displayName = "30Rnd 7.62x39mm AK Mag (Tracer)";
};

class uns_rpkmag: uns_ak47mag {
    displayName = "40Rnd 7.62x39mm RPK Mag";
    mass = 18;
};

class uns_75Rnd_akdr: uns_ak47mag {
    displayName = "75Rnd 7.62x39mm RPK Mag";
    mass = 33.7;
    modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_762x39_akm_75rnd";
};

class uns_sa58mag: uns_ak47mag {
    displayName = "30Rnd 7.62x39mm Sa vz.58 Mag (Mixed)";
};
class uns_sa58mag_NT: uns_ak47mag_NT {
    displayName = "30Rnd 7.62x39mm Sa vz.58 Mag";
};
class uns_sa58mag_T: uns_ak47mag_T {
    displayName = "30Rnd 7.62x39mm Sa vz.58 Mag (Tracer)";
};

class uns_rpdmag: uns_rpkmag {
    displayName = "100Rnd 7.62x39mm RPD Belt";
    _MASS(AMMO762X39,100,RND100DRUMMG);
    modelSpecial = "";
    modelSpecialIsProxy = 0;
};
class uns_rpdsogmag: uns_rpdmag {
    displayName = "125Rnd 7.62x39mm RPD Belt";
    _MASS(AMMO762X39,125,RND100DRUMMG);
};

class uns_sksmag: uns_akmag_base {
    displayName = "10Rnd 7.62x39mm SKS Clip (Mixed)";
    _MASS(AMMO762X39,10,RNDCLIP);
    modelSpecial = "";
    modelSpecialIsProxy = 0;
};
class uns_sksmag_NT: uns_sksmag {
    displayName = "10Rnd 7.62x39mm SKS Clip";
};
class uns_sksmag_T: uns_sksmag {
    displayName = "10Rnd 7.62x39mm SKS Clip (Tracer)";
};

class uns_STANAGmag_base: uns_Magazine {
    mass = 9.35;
};

class uns_40Rnd_556x45_t223: uns_STANAGmag_base {
    displayName = "40Rnd 5.56x45mm T233 Mag (Mixed)";
    mass = 12.4;
};
class uns_40Rnd_556x45_t223_T: uns_40Rnd_556x45_t223 {
    displayName = "40Rnd 5.56x45mm T223 Mag (Tracer)";
};

class uns_20Rnd_556x45_Stanag: uns_STANAGmag_base {
    displayName = "20Rnd 5.56x45mm STANAG Mag (Mixed)";
    mass = 6.25;
};
class uns_20Rnd_556x45_Stanag_NT: uns_20Rnd_556x45_Stanag {
    displayName = "20Rnd 5.56x45mm STANAG Mag";
};
class uns_20Rnd_556x45_Stanag_T: uns_20Rnd_556x45_Stanag {
    displayName = "20Rnd 5.56x45mm STANAG Mag (Tracer)";
};

class uns_30Rnd_556x45_Stanag: uns_STANAGmag_base {
    displayName = "30Rnd 5.56x45mm STANAG Mag (Mixed)";
};
class uns_30Rnd_556x45_Stanag_NT: uns_30Rnd_556x45_Stanag {
    displayName = "30Rnd 5.56x45mm STANAG Mag";
};
class uns_30Rnd_556x45_Stanag_T: uns_30Rnd_556x45_Stanag {
    displayName = "30Rnd 5.56x45mm STANAG Mag (Tracer)";
};

class uns_30Rnd_556x45_Stanag_xm177: uns_30Rnd_556x45_Stanag {
    displayName = "30Rnd 5.56x45mm STANAG Mag (Black/Mixed)";
};
class uns_30Rnd_556x45_Stanag_xm177_NT: uns_30Rnd_556x45_Stanag_NT {
    displayName = "30Rnd 5.56x45mm STANAG Mag (Black)";
};
class uns_30Rnd_556x45_Stanag_xm177_T: uns_30Rnd_556x45_Stanag_T {
    displayName = "30Rnd 5.56x45mm STANAG Mag (Black/Tracer)";
};

class uns_40Rnd_556x45_Stanag: uns_30Rnd_556x45_Stanag {
    displayName = "40Rnd 5.56x45mm STANAG Mag (Mixed)";
    count = 40;
    mass = 12.4;
};
class uns_40Rnd_556x45_Stanag_NT: uns_30Rnd_556x45_Stanag_NT {
    displayName = "40Rnd 5.56x45mm STANAG Mag";
    count = 40;
    mass = 12.4;
};
class uns_40Rnd_556x45_Stanag_T: uns_30Rnd_556x45_Stanag_T {
    displayName = "40Rnd 5.56x45mm STANAG Mag (Tracer)";
    count = 40;
    mass = 12.4;
};

class uns_m63amag: uns_STANAGmag_base {};
class uns_m63abox: uns_m63amag {
    mass = 26.9;
};

class uns_shotgunmag_base: uns_Magazine {};
class uns_12gaugemag_2: uns_shotgunmag_base {
    displayName = "2Rnd 12 Gauge Buckshot";
    _MASS(AMMO12GAUGE,2,RNDSHOTGUN);
};
class uns_12gaugemag_2f: uns_12gaugemag_2 {
    ammo = "uns_12gauge_flechette";
    displayName = "2Rnd 12 Gauge Flechette";
};

class uns_12gaugemag_4: uns_shotgunmag_base {
    displayName = "4Rnd 12 Gauge Buckshot";
    _MASS(AMMO12GAUGE,4,RNDSHOTGUN);
};
class uns_12gaugemag_4f: uns_12gaugemag_4 {
    displayName = "4Rnd 12 Gauge Flechette";
};

class uns_12gaugemag_6: uns_12gaugemag_4 {
    displayName = "6Rnd 12 Gauge Buckshot";
    _MASS(AMMO12GAUGE,6,RNDSHOTGUN);
};
class uns_12gaugemag_6f: uns_12gaugemag_6 {
    displayName = "6Rnd 12 Gauge Flechette";
};

class uns_m870mag: uns_12gaugemag_6 {
    displayName = "8Rnd 12 Gauge Buckshot";
    _MASS(AMMO12GAUGE,8,RNDSHOTGUN);
};
class uns_m870mag_8f: uns_m870mag {
    ammo = "uns_12gauge_flechette";
    displayName = "8Rnd 12 Gauge Flechette";
};

class uns_pistolmag_base: uns_Magazine {};
class uns_20Rnd_sa61_pa: uns_pistolmag_base {
    displayName = "20Rnd 7.65x17mm Sa vz.61 Mag (Sidearm)";
    _MASS(AMMO9X18,25,RND25MAGSMG);
};
class uns_20Rnd_sa61: uns_20Rnd_sa61_pa {
    displayName = "20Rnd 7.65x17mm Sa vz.61 Mag";
};

class uns_25Rnd_pm_pa: uns_pistolmag_base {
    displayName = "25Rnd 9x18mm PM-63 Mag (Sidearm)";
    _MASS(AMMO765X20,20,RND20MAGSMG);
};
class uns_25Rnd_pm: uns_25Rnd_pm_pa {
    displayName = "25Rnd 9x18mm PM-63 Mag";
};

class uns_rpg2grenade;
class uns_rpg7grenade: uns_rpg2grenade {
   displayName = "PG-7V (HEAT)";
   mass = 31.5;
   model = "\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7_item.p3d";
   modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_RPG7_PG7V_1rnd.p3d";
   modelSpecialIsProxy = 1;
};
