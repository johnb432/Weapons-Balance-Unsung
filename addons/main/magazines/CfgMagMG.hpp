class uns_LMGmag_base: uns_Magazine {};
class uns_m60mag: uns_LMGmag_base {
    ACE_isBelt = 1;
    displayName = "100Rnd 7.62x51mm M60 Belt (Mixed)";
    mass = 32.3;
};
class uns_m60mag_200: uns_m60mag {
    displayName = "200Rnd 7.62x51mm M60 Belt (Mixed)";
    mass = 62;
};

class uns_barmag: uns_LMGmag_base {
    displayName = "20Rnd .30-06 BAR Mag (Mixed)";
    _MASS(AMMO3006,20,RND20MAGLMG);
};
class uns_barmag_NT: uns_barmag {
    displayName = "20Rnd .30-06 BAR Mag";
};
class uns_barmag_T: uns_barmag {
    displayName = "20Rnd .30-06 BAR Mag (Tracer)";
};

class uns_47Rnd_DP28: uns_LMGmag_base {
    displayName = "47Rnd 7.62x54Rmm DP-27 Pan";
    mass = 23;
};
class uns_100Rnd_762x54_PK: uns_47Rnd_DP28 {
    ACE_isBelt = 1;
    displayName = "100Rnd 7.62x54Rmm PK Box";
    mass = 43;
};
class uns_100Rnd_762x54_ukvz59: uns_100Rnd_762x54_PK {
    displayName = "100Rnd 7.62x54Rmm vz.59 Box";
};

class uns_50Rnd_792x57_Mg42: uns_LMGmag_base {
    ACE_isBelt = 1;
    displayName = "50Rnd 7.92x57mm MG 42 Drum";
    mass = 31;
};
class uns_250Rnd_792x57_Mg42: uns_50Rnd_792x57_Mg42 {
    displayName = "250Rnd 7.92x57mm MG 42 Belt";
    type = "2 * 256";
    mass = 88;
};

class uns_250Rnd_m1919;
class uns_100Rnd_m1919: uns_250Rnd_m1919 {
    ACE_isBelt = 1;
    displayName = "100Rnd .30-06 M1919 Belt (Mixed)";
    //_MASS(AMMO3006,100,RND100BELTMG);
    mass = 37.3;
};
