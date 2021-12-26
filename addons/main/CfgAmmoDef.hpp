#define _MASS(ammoType,count,magazine) mass = (ammoType * count + magazine)

// https://www.thefirearmblog.com/blog/2016/04/09/how-much-does-your-ammunition-weigh/
// Converted into Arma units directly
#define AMMO12GAUGE 1.1
#define AMMO3006 0.56129692 // 25.46g
#define AMMO303B 0.5621788 // 25.50g
#define AMMO30CAL 0.2799871 // 12.70g
#define AMMO45ACP 0.4607661 // 20.90g
#define AMMO75X54 0.5224956 // 23.70g
#define AMMO762X25 0.23324907 // 10.58g
#define AMMO762X39 0.3791951 // 17.20g
#define AMMO762X51 0.52293649 // 23.72g
#define AMMO762X54R 0.53858931 // 24.43g
#define AMMO765X20 0.1891566 // 8.58g
#define AMMO77X58 0.60384614 // 27.39g
#define AMMO792X33 0.3880136 // 17.60g
#define AMMO792X57 0.57937483 // 26.28g
#define AMMO8X22 0.24956328 // 11.32g
#define AMMO8X56 0.62633329 // 28.41g
#define AMMO9X18 0.2248715 // 10.20g
#define AMMO9X19 0.2777825 // 12.60g

#define RNDSHOTGUN 0 // 0g
#define RNDCLIP 0 // 0g

#define RND10MAGRIFLE 0.881849 // 40g
#define RND15MAGSMG 0.99208 // 45g

// https://www.zombiehunters.org/forum/viewtopic.php?f=16&t=59410
// 710g - 475g = 235g, FAL technically, however for balancing purposes:
#define RND20MAGLMG 1.7637 // 80g
#define RND20MAGSMG 1.32277 // 60g

#define RND25MAGLMG 2.20462 // 100g
#define RND25MAGSMG 1.65347 // 75g

// https://old.weaponsystems.net/weaponsystem/AA06%20-%20Bren.html
// 1100g - 30 * 25.50g = 370g
// 11.77kg - 10.52kg = 1250g - 30 * 25.50g = 485g, however for balancing purposes:
// 610g - 30 * 16.30g = 120g for 30Rnd mags, LMG
#define RND30MAGLMG 2.64555 // 120g
#define RND30MAGSMG 1.98416 // 90g
#define RND30BELTMG 0 //

#define RND32MAGSMG 2.09439 // 95g

#define RND36MAGSMG 2.20462 // 100g

#define RND50MAGSMG 3.30693 // 150g
#define RND50DRUMSMG 0 //
#define RND50BELTMG -1 //

#define RND71MAGSMG 4.18878 // 190g

#define RND100BELTMG -10 //
#define RND100DRUMMG -5 // need to finish mag weight

#define RND250BELTMG -5 //
