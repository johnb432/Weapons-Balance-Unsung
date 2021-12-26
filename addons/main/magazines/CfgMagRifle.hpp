class uns_Riflemag_base: uns_Magazine {};
class uns_m14mag: uns_Riflemag_base {
    displayName = "20Rnd 7.62x51mm M14 Mag (Mixed)";
    mass = 16.24;
    model = "\A3\weapons_F\ammo\mag_univ.p3d";
    modelSpecial = "a3\Weapons_F_Mark\MagazineProxies\mag_762x51_mk14_20rnd";
    modelSpecialIsProxy = 1;
};
class uns_m14mag_NT: uns_m14mag {
    displayName = "20Rnd 7.62x51mm M14 Mag";
};
class uns_m14mag_T: uns_m14mag {
    displayName = "20Rnd 7.62x51mm M14 Mag (Tracer)";
};

class uns_l1a1mag: uns_Riflemag_base {
    displayName = "20Rnd 7.62x51mm L1A1 Mag (Mixed)";
    mass = 16.24;
    model = "\A3\weapons_F\ammo\mag_univ.p3d";
    modelSpecial = "a3\Weapons_F_Mark\MagazineProxies\mag_762x51_mk14_20rnd";
    modelSpecialIsProxy = 1;
};
class uns_l1a1mag_NT: uns_l1a1mag {
    displayName = "20Rnd 7.62x51mm L1A1 Mag";
};
class uns_l1a1mag_T: uns_l1a1mag {
    displayName = "20Rnd 7.62x51mm L1A1 Mag (Tracer)";
};


class uns_m1carbinemag: uns_Riflemag_base {
    displayName = "15Rnd .30 M1 Carbine Mag (Mixed)";
    _MASS(AMMO30CAL,15,RND15MAGSMG);
};
class uns_m1carbinemag_NT: uns_m1carbinemag {
    displayName = "15Rnd .30 M1 Carbine Mag";
};
class uns_m1carbinemag_T: uns_m1carbinemag {
    displayName = "15Rnd .30 M1 Carbine Mag (Tracer)";
};

class uns_m2carbinemag: uns_m1carbinemag {
    displayName = "30Rnd .30 M1 Carbine Mag (Mixed)";
    _MASS(AMMO30CAL,30,RND30MAGSMG);
};
class uns_m2carbinemag_NT: uns_m2carbinemag {
    displayName = "30Rnd .30 M1 Carbine Mag";
};
class uns_m2carbinemag_T: uns_m2carbinemag {
    displayName = "30Rnd .30 M1 Carbine Mag (Tracer)";
};

class uns_m1garandmag: uns_Riflemag_base {
    displayName = "8Rnd .30-06 M1 Garand Clip";
    _MASS(AMMO3006,8,RNDCLIP);
};
class uns_m1garandmag_T: uns_m1garandmag {
    displayName = "8Rnd .30-06 M1 Garand Clip (Tracer)";
};

class uns_springfieldmag: uns_Riflemag_base {
    displayName = "5Rnd .30-06 M1903 Clip";
    _MASS(AMMO3006,5,RNDCLIP);
};
class uns_springfieldmag_T: uns_springfieldmag {
    displayName = "5Rnd .30-06 M1903 Clip (Tracer)";
};

class uns_smlemag: uns_Riflemag_base {
    displayName = "10Rnd .303 Lee-Enfield Clip";
    _MASS(AMMO303B,10,RNDCLIP);
};
class uns_smlemag_T: uns_smlemag {
    displayName = "10Rnd .303 Lee-Enfield Clip (Tracer)";
};

class uns_mas36mag: uns_Riflemag_base {
    displayName = "5Rnd 7.5x54mm MAS-36 Clip";
    _MASS(AMMO75X54,5,RNDCLIP);
};
class uns_mas36mag_T: uns_mas36mag {
    displayName = "5Rnd 7.5x54mm MAS-36 Clip (Tracer)";
};
class uns_mas4956mag: uns_mas36mag {
    displayName = "10Rnd 7.5x54mm MAS-49/56 Mag";
    _MASS(AMMO75X54,10,RND10MAGRIFLE);
};
class uns_mas4956mag_T: uns_mas4956mag {
    displayName = "10Rnd 7.5x54mm MAS-49/56 Mag (Tracer)";
};
class uns_type99mag: uns_mas36mag {
    displayName = "5Rnd 7.7x58mm Arisaka Clip";
    _MASS(AMMO77X58,5,RNDCLIP);
};
class uns_type99mag_T: uns_type99mag {
    displayName = "5Rnd 7.7x58mm Arisaka Clip (Tracer)";
};

class uns_model70mag: uns_Riflemag_base {
    displayName = "5Rnd .30-06 Model 70 Clip";
    _MASS(AMMO3006,5,RNDCLIP);
};
class uns_model70mag_T: uns_model70mag {
    displayName = "5Rnd .30-06 Model 70 Clip (Tracer)";
};
class uns_m40mag: uns_model70mag {
    displayName = "5Rnd 7.62x51mm M40 Clip";
    _MASS(AMMO762X51,5,RNDCLIP);
};
class uns_m40mag_T: uns_m40mag {
    displayName = "5Rnd 7.62x51mm M40 Clip (Tracer)";
};

class uns_mosinmag: uns_Riflemag_base {
    displayName = "5Rnd 7.62x54Rmm Mosin Clip";
    _MASS(AMMO762X54R,5,RNDCLIP);
};
class uns_mosinmag_T: uns_mosinmag {
    displayName = "5Rnd 7.62x54Rmm Mosin Clip (Tracer)";
};

class uns_kar98kmag: uns_mosinmag {
    displayName = "5Rnd 7.92x57mm Mauser Clip";
    _MASS(AMMO792X57,5,RNDCLIP);
};
class uns_kar98kmag_T: uns_kar98kmag {
    displayName = "5Rnd 7.92x57mm Mauser Clip (Tracer)";
};

class uns_svdmag: uns_mosinmag {
    displayName = "10Rnd 7.62x54Rmm SVD Mag";
    mass = 5.1;
};
class uns_svdmag_T: uns_svdmag {
    displayName = "10Rnd 7.62x54Rmm SVD Mag (Tracer)";
};

class uns_svtmag: uns_svdmag {
    displayName = "10Rnd 7.62x54Rmm SVT-40 Mag";
    _MASS(AMMO762X54R,10,RND10MAGRIFLE);
};
class uns_svtmag_T: uns_svtmag {
    displayName = "10Rnd 7.62x54Rmm SVT-40 Mag (Tracer)";
};

class uns_30Rnd_kurtz_stg: uns_Riflemag_base {
    displayName = "30Rnd 7.92x33mm StG 44 Mag";
    _MASS(AMMO792X33,30,RND30MAGSMG);
};
