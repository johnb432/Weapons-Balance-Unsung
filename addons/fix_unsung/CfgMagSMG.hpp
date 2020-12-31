class uns_SMGmag_base: uns_Magazine {};
class uns_stenmag: uns_SMGmag_base {
    displayName = "32Rnd 9x19mm Sten Mag";
    _MASS(AMMO9X19,32,RND32MAGSMG);
};
class uns_stenmag_T: uns_stenmag {
    displayName = "32Rnd 9x19mm Sten Mag (Tracer)";
};

class uns_m50mag: uns_stenmag {
    displayName = "32Rnd 9x19mm M-50 Mag";
};

class uns_owenmag: uns_stenmag {
    displayName = "33Rnd 9x19mm Owen Mag (Mixed)";
    _MASS(AMMO9X19,33,RND32MAGSMG);
};
class uns_owenmag_T: uns_owenmag {
    displayName = "33Rnd 9x19mm Owen Mag (Tracer)";
};

class uns_m3a1mag: uns_SMGmag_base {
    displayName = "30Rnd .45ACP M3 Mag";
    _MASS(AMMO45ACP,30,RND30MAGSMG);
};
class uns_m3a1mag_T: uns_m3a1mag {
    displayName = "30Rnd .45ACP M3 Mag (Tracer)";
};

class uns_m45mag: uns_SMGmag_base {
    displayName = "36Rnd 9x19mm m/45 Mag (Mixed)";
    _MASS(AMMO9X19,36,RND36MAGSMG);
};
class uns_m45mag_NT: uns_m45mag {
    displayName = "36Rnd 9x19mm m/45 Mag";
};
class uns_m45mag_T: uns_m45mag {
    displayName = "36Rnd 9x19mm m/45 Mag (Tracer)";
};

class uns_mac10mag: uns_SMGmag_base {
    displayName = "32Rnd 9x19mm MAC-10 Mag";
    _MASS(AMMO9X19,32,RND32MAGSMG);
};
class uns_32Rnd_uzi: uns_mac10mag {
    displayName = "32Rnd 9x19mm UZI Mag";
};
class uns_32Rnd_uzi_pa: uns_32Rnd_uzi {
    displayName = "32Rnd 9x19mm UZI Mag (Sidearm)";
};

class uns_mat49mag: uns_SMGmag_base {
    displayName = "32Rnd 7.62x25mm MAT-49 Mag (Mixed)";
    _MASS(AMMO762X25,32,RND32MAGSMG);
};
class uns_mat49mag_NT: uns_mat49mag {
    displayName = "32Rnd 7.62x25mm MAT-49 Mag";
};
class uns_mat49mag_T: uns_mat49mag {
    displayName = "32Rnd 7.62x25mm MAT-49 Mag (Tracer)";
};
class uns_mat49_20_mag: uns_mat49mag {
    displayName = "20Rnd 7.62x25mm MAT-49 Mag (Mixed)";
    _MASS(AMMO762X25,20,RND20MAGSMG);
};

class uns_mk4mag: uns_SMGmag_base {
    displayName = "34Rnd 9x19mm Sterling Mag";
    _MASS(AMMO9X19,34,RND32MAGSMG);
};
class uns_mk4mag_T: uns_mk4mag {
    displayName = "34Rnd 9x19mm Sterling Mag (Tracer)";
};
class uns_f1_smg_mag: uns_mk4mag {
    displayName = "34Rnd 9x19mm F1 Mag";
};

class uns_mp40mag: uns_SMGmag_base {
    displayName = "32Rnd 9x19mm MP 40 Mag (Mixed)";
    _MASS(AMMO9X19,32,RND32MAGSMG);
};

class uns_k50mag: uns_SMGmag_base {
    displayName = "35Rnd 7.62x25mm PPsh-41 Mag (Mixed)";
    _MASS(AMMO762X25,35,RND36MAGSMG);
};
class uns_k50mag_NT: uns_k50mag {
    displayName = "35Rnd 7.62x25mm PPsh-41 Mag";
};
class uns_k50mag_T: uns_k50mag {
    displayName = "35Rnd 7.62x25mm PPsh-41 Mag (Tracer)";
};

class uns_ppshmag: uns_k50mag {
    displayName = "71Rnd 7.62x25mm PPsh-41 Drum (Mixed)";
    _MASS(AMMO762X25,71,RND71MAGSMG);
};
class uns_ppshmag_NT: uns_ppshmag {
    displayName = "71Rnd 7.62x25mm PPsh-41 Drum";
};
class uns_ppshmag_T: uns_ppshmag {
    displayName = "71Rnd 7.62x25mm PPsh-41 Drum (Tracer)";
};

class uns_thompsonmag_20: uns_SMGmag_base {
    displayName = "20Rnd .45ACP Thompson Mag (Mixed)";
    _MASS(AMMO45ACP,20,RND20MAGSMG);
};
class uns_thompsonmag_20_NT: uns_thompsonmag_20 {
    displayName = "20Rnd .45ACP Thompson Mag";
};
class uns_thompsonmag_20_T: uns_thompsonmag_20 {
    displayName = "20Rnd .45ACP Thompson Mag (Tracer)";
};

class uns_thompsonmag_30: uns_thompsonmag_20 {
    displayName = "30Rnd .45ACP Thompson Mag (Mixed)";
    _MASS(AMMO45ACP,30,RND30MAGSMG);
};
class uns_thompsonmag_30_NT: uns_thompsonmag_30 {
    displayName = "30Rnd .45ACP Thompson Mag";
};
class uns_thompsonmag_30_T: uns_thompsonmag_30 {
    displayName = "30Rnd .45ACP Thompson Mag (Tracer)";
};

class uns_type100mag: uns_SMGmag_base {
    displayName = "30Rnd 8x22mm Type 100 Mag (Mixed)";
    _MASS(AMMO8X22,30,RND30MAGSMG);
};
class uns_type100_NT: uns_type100mag {
    displayName = "30Rnd 8x22mm Type 100 Mag";
};
class uns_type100_T: uns_type100mag {
    displayName = "30Rnd 8x22mm Type 100 Mag (Tracer)";
};
