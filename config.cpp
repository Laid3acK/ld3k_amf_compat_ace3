class CfgPatches
{
    class ld3k_amf_compat_ace3
    {
        requiredAddons[]=
        {
            "A3_Weapons_F",
            "AMF_HK_417_F",
            "amf_MachineGuns",
            "AMF_PGM_Hecate_II",
            "AMF_PGM_ULTIMA_RATIO",
            "AMF_Pistols",
            "AMF_RFF2",
            "AMF_SIG552_F",
            "amf_weapons_acc_01_f",
            "AMF_weapon_F",
            "AMF_weapon_F_scar",
            "AMF_Weapons_HK_MP5_01",
            "Famas",
            "cba_main"
        };
        requiredVersion=0.1;
        units[]={};
        weapons[]=
        {
            "AMF_specter_762",
            "AMF_specter_tan_762",
            "AMF_specter_painted_762",
            "ScromeJ8_MilDot",
            "ScromeJ8_NoCover_MilDot",
            "ScromeJ10_MilDot",
            "ScromeJ10_NoCover_MilDot"
        };
    };
};
class CowsSlot;
class MuzzleSlot;
class MuzzleSlot_762;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_FrontSideRail;
class asdg_MuzzleSlot_556;
class asdg_OpticRail;
class CowsSlot_Rail: CowsSlot
{
    class compatibleItems
    {
        optic_Yorris=0;
        AMF_specter_762=1;
        AMF_specter_tan_762=1;
        AMF_specter_painted_762=1;
    };
};
class asdg_OpticRail1913: asdg_OpticRail
{
    class compatibleItems
    {
        optic_Yorris=0;
        AMF_specter_762=1;
        AMF_specter_tan_762=1;
        AMF_specter_painted_762=1;
    };
};
// Official BI tool All-in-one Config Arma3 2.21.153691 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
class CfgAmmo
{
    class BulletBase;
    class ld3k_B_9x19_Ball_MAC50_FMJ: BulletBase // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33}; // Same curve default ACE_ammoTempMuzzleVelocityShifts, values /10. Muzzle velocity shift 0m/s ICAO (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.194}; // ICAO G1 BC exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={365,397,429}; // 365m/s (1198fps) barrel length 4", 377m/s barrel length 111mm ICAO (15°C, 1013.25 hPa, 0%) according to AMF magazines initSpeed
        hit=4.8; // Full Metal Jacket, 571 Joules, B_9x21_Ball 5
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=377; // AMF magazines initSpeed, 380
        airFriction=-0.00185968; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=1.2; // Full Metal Jacket
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class ld3k_B_9x19_Ball_MAC50_JHP: ld3k_B_9x19_Ball_MAC50_FMJ // M17 Sig Sauer NATO 9x19mm +P 124gr V-Crown https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_ballisticCoefficients[]={0.166}; // ICAO G1 BC exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        hit=8; // Jacketed Hollow Point, 571 Joules, B_9x21_Ball 5
        airFriction=-0.00216839; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
    };
    class ld3k_B_9x19_Ball_MAC50_SUB: ld3k_B_9x19_Ball_MAC50_FMJ // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_bulletLength=14.859; // 0.585" 9mm 147gr Elite V-Crown JHP https://www.sigsauer.com/9mm-147gr-elite-v-crown-jhp-20ct.html
        ACE_bulletMass=9.525; // 147gr
        ACE_ballisticCoefficients[]={0.193}; // ICAO G1 BC exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_muzzleVelocities[]={300,326,353}; // 300m/s (985fps) barrel length 4", 310m/s barrel length 111mm ICAO (15°C, 1013.25 hPa, 0%) according to AMF magazines initSpeed
        hit=7.1; // Jacketed Hollow Point, 458 Joules, B_9x21_Ball 5
        typicalSpeed=310; // AMF magazines initSpeed
        airFriction=-0.0011316; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
        visibleFire=1; // Subsonic, B_127x54_Ball, BulletBase 3
        audibleFire=5; // Subsonic, B_127x54_Ball, B_9x21_Ball 30
    };
    class ld3k_B_9x19_Ball_Glock17_FMJ: BulletBase // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33}; // Same curve default ACE_ammoTempMuzzleVelocityShifts, values /10. Muzzle velocity shift 0m/s ICAO (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.194}; // ICAO G1 BC exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={365,397,429}; // 365m/s (1198fps) barrel length 4", 381m/s barrel length 114mm ICAO (15°C, 1013.25 hPa, 0%) according to AMF magazines initSpeed
        hit=4.8; // Full Metal Jacket, 583 Joules, B_9x21_Ball 5
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=381; // AMF magazines initSpeed
        airFriction=-0.0018914; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=1.2; // Full Metal Jacket
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class ld3k_B_9x19_Ball_Glock17_JHP: ld3k_B_9x19_Ball_Glock17_FMJ // M17 Sig Sauer NATO 9x19mm +P 124gr V-Crown https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_ballisticCoefficients[]={0.166}; // ICAO G1 BC exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        hit=8; // Jacketed Hollow Point, 583 Joules, B_9x21_Ball 5
        airFriction=-0.00220444; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
    };
    class ld3k_B_9x19_Ball_Glock17_SUB: ld3k_B_9x19_Ball_Glock17_FMJ // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_bulletLength=14.859; // 0.585" 9mm 147gr Elite V-Crown JHP https://www.sigsauer.com/9mm-147gr-elite-v-crown-jhp-20ct.html
        ACE_bulletMass=9.525; // 147gr
        ACE_ballisticCoefficients[]={0.193}; // ICAO G1 BC exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_muzzleVelocities[]={300,326,353}; // 300m/s (985fps) barrel length 4", 313m/s barrel length 114mm ICAO (15°C, 1013.25 hPa, 0%) according to AMF magazines initSpeed
        hit=7.2; // Jacketed Hollow Point, 467 Joules, B_9x21_Ball 5
        typicalSpeed=311; // AMF magazines initSpeed
        airFriction=-0.0011739; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
        visibleFire=1; // Subsonic, B_127x54_Ball, BulletBase 3
        audibleFire=5; // Subsonic, B_127x54_Ball, B_9x21_Ball 30
    };
    class ld3k_B_9x19_Ball_PAMAS_FMJ: BulletBase // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33}; // Same curve default ACE_ammoTempMuzzleVelocityShifts, values /10. Muzzle velocity shift 0m/s ICAO (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.212}; // ICAO G1 BC exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={365,397,429}; // 365m/s (1198fps) barrel length 4", 394m/s barrel length 125mm ICAO (15°C, 1013.25 hPa, 0%) according to AMF magazines initSpeed
        hit=5; // Full Metal Jacket, 624 Joules, B_9x21_Ball 5
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=394; // AMF magazines initSpeed
        airFriction=-0.00179466; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=1.2; // Full Metal Jacket
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class ld3k_B_9x19_Ball_PAMAS_JHP: ld3k_B_9x19_Ball_PAMAS_FMJ // M17 Sig Sauer NATO 9x19mm +P 124gr V-Crown https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_ballisticCoefficients[]={0.181}; // ICAO G1 BC exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        hit=8.3; // Jacketed Hollow Point, 624 Joules, B_9x21_Ball 5
        airFriction=-0.00209318; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
    };
    class ld3k_B_9x19_Ball_PAMAS_SUB: ld3k_B_9x19_Ball_PAMAS_FMJ // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_bulletMass=9.525; // 147gr
        ACE_ballisticCoefficients[]={0.217}; // ICAO G1 BC exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_muzzleVelocities[]={300,326,353}; // 300m/s (985fps) barrel length 4", 324m/s barrel length 125mm ICAO (15°C, 1013.25 hPa, 0%) according to AMF magazines initSpeed
        hit=7.5; // Jacketed Hollow Point, 500 Joules, B_9x21_Ball 5
        typicalSpeed=324; // AMF magazines initSpeed
        airFriction=-0.00116626; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
        visibleFire=1; // Subsonic, B_127x54_Ball, BulletBase 3
        audibleFire=5; // Subsonic, B_127x54_Ball, B_9x21_Ball 30
    };
    class ld3k_B_9x19_Ball_MP5_FMJ: BulletBase // M17 Sig Sauer NATO 9x19mm +P 124gr FMJ https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33}; // Same curve default ACE_ammoTempMuzzleVelocityShifts, values /10. Muzzle velocity shift 0m/s ICAO (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.235}; // ICAO G1 BC exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={365,397,429}; // 365m/s (1198fps) barrel length 4", 428m/s 225mm ICAO (15°C, 1013.25hPa, 0%) according to AMF magazines initSpeed
        hit=5.4; // Full Metal Jacket, 736 Joules, B_9x21_Ball 5
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=428; // AMF magazines initSpeed
        airFriction=-0.00173436; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=1.2; // Full Metal Jacket
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class ld3k_B_9x19_Ball_MP5_JHP: ld3k_B_9x19_Ball_MP5_FMJ // M17 Sig Sauer NATO 9x19mm +P 124gr V-Crown https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_ballisticCoefficients[]={0.204}; // ICAO G1 BC exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        hit=9; // Jacketed Hollow Point, 736 Joules, B_9x21_Ball 5
        airFriction=-0.00199741; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
    };
    class ld3k_B_556x45_Ball: BulletBase // M855, ACE3 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L130
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=23.01; // ACE3
        ACE_bulletMass=4.018; // 62gr
        ACE_ammoTempMuzzleVelocityShifts[]={-18.7,-18.2,-16.6,-14,-10.4,-5.7,0,6.8,14.6,23.4,33.3}; // Same curve default ACE_ammoTempMuzzleVelocityShifts. Muzzle velocity shift 0m/s ICAO (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.149}; // US Army's Ballistic Research Laboratory ASM BC 0.151, ICAO 0.149012
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        // ACE_barrelLengths[]={210.82,238.76,269.24,299.72,330.2,360.68,391.16,419.1,449.58,480.06,508,609.6}; // default ACE3 barrel lengths https://en.wikipedia.org/wiki/5.56%C3%9745mm_NATO
        // ACE_muzzleVelocities[]={723,764,796,825,843,866,878,892,906,915,922,900}; // default ACE3 MVs 4m https://en.wikipedia.org/wiki/5.56%C3%9745mm_NATO
        // ACE_muzzleVelocities[]={715,784,832,873,890,912,926,904}; // MVs V0 Strelok Pro 15°C
        // ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508,609.6}; // 8", 10", 12", 14.5", 16", 18", 20", 24" barrels lengths
        ACE_muzzleVelocities[]={715,784,832,873,890,912,926};
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508};
        airLock=1;
        hit=9.16; // 1723 Joules, B_556x45_Ball 9 1693 Joules
        indirectHit=0;
        indirectHitRange=0;
        cost=1;
        typicalSpeed=926; // 1723 Joules, B_556x45_Ball 920 1693 Joules
        airFriction=-0.00133644; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        waterFriction=-0.3;
        caliber=0.869565; // B_556x45_Ball, M995 AP3 52gr: 12mm RHA 100m MV 1030m/s https://www.nammo.com, effective perforation in-game 12mm RHA "armour_plate_12mm.bisurf" 100m ~900m/s: caliber ~0.9
        // M855: 1020 steel plate (Hardness=50/70 Rb; thickness=3mm) 570m (MV 910m/s), effective perforation in-game 3mm RHA "armour_plate_3mm.bisurf" 570m ~400m/s: caliber ~0.55
        model="\A3\Weapons_f\Data\bullettracer\tracer_white"; // B_762x51_Ball, B_556x45_Ball tracer_yellow
        tracerScale=1;
        tracerStartTime=0.17; // Visible 140m 600m (typically 800m) 4g MV 920m/s ICAO according to https://www.nammo.com,  ToF 140m 0.17s (Strelok Pro), B_556x45_Ball 0.05
        tracerEndTime=1.62; // Visible 140m 600m (typically 800m) 4g MV 920m/s ICAO according to https://www.nammo.com, ToF 800m 1.62s (Strelok Pro), B_556x45_Ball 1
        nvgOnly=0; // B_556x45_Ball w/o nvgOnly
        audibleFire=35;
        dangerRadiusBulletClose=8;
        dangerRadiusHit=12;
        suppressionRadiusBulletClose=6;
        suppressionRadiusHit=8;
        aiAmmoUsageFlags=64;
        class CamShakeExplode
        {
            power=2.23607;
            duration=0.4;
            frequency=20;
            distance=6.7082;
        };
        class CamShakeHit
        {
            power=5;
            duration=0.2;
            frequency=20;
            distance=1;
        };
    };
    class ld3k_B_556x45_Ball_M193: ld3k_B_556x45_Ball // M193 RUAG Ammotec AG https://www.armemilitare.ro/wp-content/uploads/2020/04/ruag-pdf.pdf#page=48
    {
        ACE_bulletLength=19; // average value
        ACE_bulletMass=3.6; // 55gr
        ACE_ballisticCoefficients[]={0.280}; // M193 RUAG Ammotec AG
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={764,838,890,933,952,975,990}; // 990 m/s 20" (508 mm) ICAO
        hit=9.38; // 1764 Joules, B_556x45_Ball 9 1693 Joules
        typicalSpeed=990; // 1764 Joules, B_556x45_Ball 920 1693 Joules
        airFriction=-0.00139457; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
    };
    class ld3k_B_556x45_Ball_M193_Tracer_Red: ld3k_B_556x45_Ball_M193
    {
        visibleFire=5; // B_556x45_Ball 3, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5, BulletBase 3, BulletCore 16
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class ld3k_B_556x45_Ball_M995_AP3: ld3k_B_556x45_Ball // https://www.yugoimport.com/sites/default/files/documents/2024-09/5.56%20x%2045%20mm%20AP%20M995.pdf
    {
        ACE_bulletLength=20.6; // AP3, AP4 22.7mm
        ACE_bulletMass=3.37; // 52gr AP3, AP4 70gr
        ACE_ballisticCoefficients[]={0.260};
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={795,864,921,975,999,1020,1030}; // 1030 m/s 20" (508 mm) ICAO
        hit=9.5; // 1788 Joules, B_556x45_Ball 9 1693 Joules
        typicalSpeed=1030; // 1788 Joules, B_556x45_Ball 9 1693 Joules
        airFriction=-0.00148799; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=1.2; // ACE_556x45_Ball_M995_AP 1.6, B_556x45_Ball 0.869565
        // M995 AP4 69gr: 7mm RHA 200m MV 900m/s https://www.nammo.com, effective perforation in-game 7mm RHA "armour_plate_7mm.bisurf" 200m ~700m/s: caliber ~0.7
        // M995 AP3 52gr: 12mm RHA 100m MV 1030m/s https://www.nammo.com, effective perforation in-game 12mm RHA "armour_plate_12mm.bisurf" 100m ~900m/s: caliber ~0.9
    };
    /*class B_556x45_dual: B_556x45_Ball // official BI tool All-in-one Config Arma3 2.21.153691 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        cartridge="FxCartridge_65";
        audibleFire=20;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
        typicalSpeed=270;
        airFriction=-0.02;
        waterFriction=-0.01;
        effectFly="AmmoUnderwater";
        nvgOnly=1;
        aiAmmoUsageFlags="64 + 32";
    };*/
    class ld3k_B_556x45_Ball_Dual: ld3k_B_556x45_Ball // 5.56mm underwater subsonic DSG Technology https://dsgtec.com https://www.youtube.com/@DSGTechnology/videos https://www.thefirearmblog.com/blog/2017/04/20/dsg-technology-underwater-ammo
    {
        ACE_ammoTempMuzzleVelocityShifts[]={-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33}; // Same curve default ACE_ammoTempMuzzleVelocityShifts. Muzzle velocity shift 0m/s ICAO (15°C, 1013.25hPa, 0%)
        ACE_muzzleVelocities[]={219,240,254,267,272,279,283}; // 283 m/s 20" (508 mm) ICAO
        // cartridge="FxCartridge_65";
        visibleFire=1; // B_127x54_Ball, BulletBase 3
        audibleFire=5; // B_127x54_Ball, B_556x45_Ball 35, B_556x45_dual 20
        dangerRadiusBulletClose=4; // B_556x45_Ball 8
        dangerRadiusHit=8; // B_556x45_Ball 12
        suppressionRadiusBulletClose=2; // B_556x45_Ball 6
        suppressionRadiusHit=4; // B_556x45_Ball 8
        typicalSpeed=283; // B_556x45_dual 270
        airFriction=-0.00065329; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder, https://github.com/acemod/ACE3/pull/7982
        waterFriction=-0.01;
        effectFly="AmmoUnderwater";
        nvgOnly=1;
        aiAmmoUsageFlags="64 + 32";
    };
    class ld3k_B_556x45_Ball_Tracer_Red: ld3k_B_556x45_Ball
    {
        visibleFire=5; // B_556x45_Ball 3, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5, BulletBase 3, BulletCore 16
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class ld3k_B_556x45_Ball_Tracer_Green: ld3k_B_556x45_Ball_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class ld3k_B_556x45_Ball_Tracer_Yellow: ld3k_B_556x45_Ball_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class ld3k_B_556x45_Ball_Tracer_Ir: ld3k_B_556x45_Ball
    {
        tracerScale=0.5; // IR dim tracer, B_556x45_Ball 1
        tracerStartTime=0.01; // Visible 13m 600m (typically 950m) 3.9g MV 930m/s ICAO according to https://www.nammo.com, ToF 13m 0.01s (Strelok Pro), B_556x45_Ball 0.05
        tracerEndTime=2.12; // Visible 13m 600m (typically 950m) 3.9g MV 930m/s ICAO according to https://www.nammo.com, ToF 950m 2.12s (Strelok Pro), B_556x45_Ball 1
        nvgOnly=1;
    };
    class ld3k_B_762x51_Ball_Men_147gr_FMJ: BulletBase // B_762x51_Ball, MEN Balle Precision https://www.edrmagazine.eu/wp-content/uploads/2020/06/MEN_762x51mm_Match_.pdf
    {
        ACE_caliber=7.82; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/tabical-en-page125.pdf
        ACE_bulletLength=29.63;
        ACE_bulletMass=9.525; // 147 gr
        ACE_ammoTempMuzzleVelocityShifts[]={-18.7,-18.2,-16.6,-14,-10.4,-5.7,0,6.8,14.6,23.4,33.3}; // Same curve default ACE_ammoTempMuzzleVelocityShifts. Muzzle velocity shift 0m/s ICAO (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.181};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={704,751,789,825,846,850}; // 825 m/s 508 mm ICAO
        ACE_barrelLengths[]={254,330.2,406.4,508,609.6,660.4}; // 10", 13", 16", 20", 24", 26"
        hit=13.1; // 3425 Joules, B_762x51_Ball 11.6 3040 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_762";
        visibleFire=3; // B_762x51_Ball
        audibleFire=45; // B_762x51_Ball, BulletBase 40
        visibleFireTime=2; // BulletBase
        dangerRadiusBulletClose=8;
        dangerRadiusHit=12;
        suppressionRadiusBulletClose=6;
        suppressionRadiusHit=8;
        cost=1.2;
        timeToLive=6; // BulletBase
        airLock=1;
        typicalSpeed=848; // 3425 Joules, B_762x51_Ball 800 3040 Joules
        caliber=1.2; // B_762x51_Ball 1.6
        // M993 AP 128gr: 18mm RHA 100m MV 930m/s https://www.nammo.com, effective perforation in-game 18mm RHA "armour.bisurf" thickness .p3d 18mm 100m ~840m/s: caliber ~1.4
        // M993 AP 128gr: 7mm RHA 500m MV 930m/s https://www.nammo.com, effective perforation in-game 7mm RHA "armour_plate_7mm.bisurf" 500m ~530m/s: caliber ~0.9
        model="\A3\Weapons_f\Data\bullettracer\tracer_white"; // B_762x51_Ball
        tracerScale=1; // B_556x45_Ball 1, B_65x39_Caseless 1, B_762x39_Ball_F 1, B_762x51_Ball 0.6
        tracerStartTime=0.18; // Visible 140m 775m (typically 900m) 9g 820m/s ICAO according to https://www.nammo.com, ToF 140m 0.18s (Strelok Pro), B_762x51_Ball 0.0075
        tracerEndTime=1.87; // Visible 140m 775m (typically 900m) 9g 820m/s ICAO according to https://www.nammo.com, ToF 900m 1.87s (Strelok Pro), B_762x51_Ball 5
        nvgOnly=0; // B_762x51_Ball w/o nvgOnly
        airFriction=-0.00114597; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt (docs folder), B_762x51_Ball 0.001
        class CamShakeExplode
        {
            power=2.82843;
            duration=0.6;
            frequency=20;
            distance=8.48528;
        };
        class CamShakeHit
        {
            power=5;
            duration=0.2;
            frequency=20;
            distance=1;
        };
    };
    class ld3k_B_762x51_Ball_Men_147gr_FMJ_NoCartridge: ld3k_B_762x51_Ball_Men_147gr_FMJ
    {
        cartridge="";
    };
    class ld3k_B_762x51_Ball_Men_151gr_AP: ld3k_B_762x51_Ball_Men_147gr_FMJ // B_762x51_Ball, MEN Balle Perforante https://www.edrmagazine.eu/wp-content/uploads/2020/06/MEN_762x51mm_AP_.pdf
    {
        ACE_bulletLength=30.15;
        ACE_bulletMass=9.785; // 151 gr
        ACE_ballisticCoefficients[]={0.199};
        ACE_muzzleVelocities[]={709,755,794,830,851,855}; // 830 m/s 508 mm ICAO
        hit=13.1; // 3444 Joules, B_762x51_Ball 11.6 3040 Joules
        typicalSpeed=839; // 3444 Joules, B_762x51_Ball 800 3040 Joules
        caliber=2; // B_762x51_Ball 1.6
        // M993 AP 128gr: 18mm RHA 100m MV 930m/s https://www.nammo.com, effective perforation in-game 18mm RHA "armour.bisurf" thickness .p3d 18mm 100m ~840m/s: caliber ~1.4
        // M993 AP 128gr: 7mm RHA 500m MV 930m/s https://www.nammo.com, effective perforation in-game 7mm RHA "armour_plate_7mm.bisurf" 500m ~530m/s: caliber ~0.9
        airFriction=-0.00103985; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt (docs folder)
    };
    class ld3k_B_762x51_Ball_Men_151gr_AP_NoCartridge: ld3k_B_762x51_Ball_Men_151gr_AP
    {
        cartridge="";
    };
    class ld3k_B_762x51_Ball_Sierra_168gr_HPBT: ld3k_B_762x51_Ball_Men_147gr_FMJ // https://sierrabullets.com/30-cal-168-gr-hpbt-matchking-smk/
    {
        ACE_bulletLength=30.86; // 1.215" https://www.jbmballistics.com
        ACE_bulletMass=10.89; // 168 gr
        ACE_ballisticCoefficients[]={0.462}; // ASM, ICAO 0.456 airFriction and dispersion calculation
        ACE_standardAtmosphere="ASM"; // https://sierrabullets.com
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={691,736,774,809,830,834}; // 830 m/s ASM, 838 m/s (2750fps) 609.6 mm (24") SAAMI 70°F (21°C) https://sierrabullets.com/content/load-data/rifle/308/308-winchester.pdf#page=7
        hit=14.2; // 3734 Joules, B_762x51_Ball 11.6 3040 Joules
        typicalSpeed=828; // 3734 Joules, B_762x51_Ball 800 3040 Joules
        caliber=1.4; // B_762x51_Ball 1.6
        // M993 AP 128gr: 18mm RHA 100m MV 930m/s https://www.nammo.com, effective perforation in-game 18mm RHA "armour.bisurf" thickness .p3d 18mm 100m ~840m/s: caliber ~1.4
        // M993 AP 128gr: 7mm RHA 500m MV 930m/s https://www.nammo.com, effective perforation in-game 7mm RHA "armour_plate_7mm.bisurf" 500m ~530m/s: caliber ~0.9
        airFriction=-0.00090448; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt (docs folder)
    };
    class ld3k_B_762x51_Ball_Sierra_168gr_HPBT_NoCartridge: ld3k_B_762x51_Ball_Sierra_168gr_HPBT
    {
        cartridge="";
    };
    class ld3k_B_762x51_Ball_Berger_175gr_OTM: ld3k_B_762x51_Ball_Men_147gr_FMJ // https://bergerbullets.com/product/308-winchester-175gr-otm-tactical/
    {
        ACE_bulletLength=32.03; // 1.261" https://bergerbullets.com/product/30-caliber-175-grain-otm-tactical/
        ACE_bulletMass=11.34; // 175 gr
        ACE_ballisticCoefficients[]={0.512}; // ICAO https://bergerbullets.com
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={673,718,754,789,809,813}; // 813 m/s (2668fps) 660.4 mm (26") ICAO
        hit=14.1; // 3693 Joules, B_762x51_Ball 11.6 3040 Joules
        typicalSpeed=807; // 3693 Joules, B_762x51_Ball 800 3040 Joules
        caliber=1.6; // B_762x51_Ball 1.6
        // M993 AP 128gr: 18mm RHA 100m MV 930m/s https://www.nammo.com, effective perforation in-game 18mm RHA "armour.bisurf" thickness .p3d 18mm 100m ~840m/s: caliber ~1.4
        // M993 AP 128gr: 7mm RHA 500m MV 930m/s https://www.nammo.com, effective perforation in-game 7mm RHA "armour_plate_7mm.bisurf" 500m ~530m/s: caliber ~0.9
        airFriction=-0.00081113; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt (docs folder)
    };
    class ld3k_B_762x51_Ball_Berger_175gr_OTM_NoCartridge: ld3k_B_762x51_Ball_Berger_175gr_OTM
    {
        cartridge="";
    };
    class ld3k_B_762x51_Ball_Lapua_200gr_FMJBT: ld3k_B_762x51_Ball_Men_147gr_FMJ // https://www.lapua.com/product/308-win-subsonic-fmjbt-tactical-cartridge-13g-200gr-4317340/
    {
        ACE_bulletLength=34.04; // 1.340" https://www.jbmballistics.com
        ACE_bulletMass=12.96; // 200 gr
        ACE_ammoTempMuzzleVelocityShifts[]={-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33}; // Same curve default ACE_ammoTempMuzzleVelocityShifts, values /10. Muzzle velocity shift 0m/s ICAO (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.518}; // ICAO https://www.lapua.com
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={290,309,325,340,349,350}; // 325 m/s 406.4 mm (16") ICAO, 344 m/s 550 mm
        caliber=1; // B_762x51_Ball 1.6
        visibleFire=1; // B_127x54_Ball, B_762x51_Ball: 3
        audibleFire=5; // B_127x54_Ball, B_762x51_Ball: 45
        dangerRadiusBulletClose=4; // B_127x54_Ball, B_762x51_Ball: 8
        suppressionRadiusBulletClose=2; // B_127x54_Ball, B_762x51_Ball: 6
        airFriction=-0.00049496; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt (docs folder)
        class CamShakeExplode
        {
            power=2.23607; // B_127x54_Ball, B_762x51_Ball: 2.8284299
            duration=0.4; // B_127x54_Ball, B_762x51_Ball: 0.6
            frequency=20; // B_127x54_Ball ,B_762x51_Ball: 20
            distance=6.7082; // B_127x54_Ball, B_762x51_Ball: 8.48528
        };
    };
    class ld3k_B_762x51_Ball_Lapua_200gr_FMJBT_NoCartridge: ld3k_B_762x51_Ball_Lapua_200gr_FMJBT
    {
        cartridge="";
    };
    class ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Red: ld3k_B_762x51_Ball_Men_147gr_FMJ
    {
        visibleFire=5; // B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5, BulletBase 3, BulletCore 16
        model="\A3\Weapons_f\Data\bullettracer\tracer_red"; // B_762x51_Tracer_Red
    };
    class ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Red_NoCartridge: ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Red
    {
        cartridge="";
    };
    class ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Ir: ld3k_B_762x51_Ball_Men_147gr_FMJ
    {
        tracerScale=0.5; // IR dim tracer, B_762x51_Ball
        tracerStartTime=0.02; // Visible 13m 775m (typically 1250m) 9g 840m/s ICAO according to https://www.nammo.com, ToF 13m 0.02s (Strelok Pro), B_762x51_Ball 0.0075
        tracerEndTime=3.03; // Visible 13m 775m (typically 1250m) 9g 840m/s ICAO according to https://www.nammo.com, ToF 1250m 3.03s (Strelok Pro), B_762x51_Ball 5
        nvgOnly=1;
    };
    class ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Ir_NoCartridge: ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Ir
    {
        cartridge="";
    };
    class ld3k_B_762x51_Ball_FRF2_AP: ld3k_B_762x51_Ball_Men_151gr_AP
    {
        ACE_ballisticCoefficients[]={0.398}; // G7 BC 0.199 converted to G1
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={820}; // 820 m/s ICAO according to FRF2 muzzle velocity
        ACE_barrelLengths[]={600};
        cartridge="";
        airFriction=-0.00103619; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt (docs folder)
    };
    class ld3k_B_762x51_Ball_FRF2_AP_Tracer_Red: ld3k_B_762x51_Ball_FRF2_AP
    {
        visibleFire=5; // B_556x45_Ball 3, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5, BulletBase 3, BulletCore 16
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class ld3k_B_762x51_Ball_FRF2_AP_Tracer_Ir: ld3k_B_762x51_Ball_FRF2_AP
    {
        tracerScale=0.5; // IR dim tracer, B_556x45_Ball 1
        tracerStartTime=0.01; // Visible 13m 600m (typically 950m) 3.9g MV 930m/s ICAO according to https://www.nammo.com, ToF 13m 0.01s (Strelok Pro), B_556x45_Ball 0.05
        tracerEndTime=2.12; // Visible 13m 600m (typically 950m) 3.9g MV 930m/s ICAO according to https://www.nammo.com, ToF 950m 2.12s (Strelok Pro), B_556x45_Ball 1
        nvgOnly=1;
    };
    class ld3k_B_127x99_Ball_PGM_Hecate2: BulletBase // B_127x99_Ball, M33 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L660
    {
        ACE_caliber=12.95;
        ACE_bulletLength=58.67;
        ACE_bulletMass=41.93;
        ACE_ammoTempMuzzleVelocityShifts[]={-18.91,-17.83,-15.21,-12.48,-09.34,-05.16,0, 6.11,13.60,22.81,33.83}; // Muzzle Velocity shift 0 at 15°C
        ACE_ballisticCoefficients[]={0.67}; // ASM, ICAO 0.661 airFriction and dispersion calculation
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={780}; // 780 m/s ASM according to Hecate2 muzzle velocity
        ACE_barrelLengths[]={700};
        ace_vehicle_damage_incendiary=0.2;
        hit=30; // B_127x99_Ball (armor=30 : AllVehicles, Car_F, Truck_F, Offroad_02_base_F, Offroad_01_base_F, Quadbike_01_base_F, Heli_Light_01_base_F)
        indirectHit=0;
        indirectHitRange=0;
        cartridge="";
        visibleFire=5; // B_408_Ball, B_127x108_Ball, B_127x99_Ball_Tracer_Red 8, BulletBase 3, BulletCore 16
        audibleFire=120; // B_127x99_Ball
        visibleFireTime=2; // BulletBase
        dangerRadiusBulletClose=12;
        dangerRadiusHit=16;
        suppressionRadiusBulletClose=8;
        suppressionRadiusHit=12;
        cost=5;
        airLock=1;
        caliber=1.3; // 2.6/2, M33 perforation 4mm Steel plate 1200m, effective perforation in-game 5mm RHA "armour_plate_5mm.bisurf" 1200m ~370m/s: caliber ~0.9
        // data "Marine Corps Warfighting Publication (MCWP) 3-15.1", 8mm 500m ~610m/s: caliber ~0.9, 4mm 1200m ~370m/s: caliber ~0.7
        typicalSpeed=780;
        timeToLive=10;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale=1.2;
        tracerStartTime=0.23; // Visible 200m 1500m 43g MV 903m/s ICAO according to https://www.nammo.com, ToF 200m 0.23s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=2.71; // Visible 200m 1500m 43g MV 903m/s ICAO according to https://www.nammo.com, ToF 1500m 2.71s (Strelok Pro), B_127x99_Ball 1
        nvgOnly=0; // B_127x99_Ball w/o nvgOnly
        airFriction=-0.00063112; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt (docs folder)
        class CamShakeExplode
        {
            power=3.60555;
            duration=0.8;
            frequency=20;
            distance=10.8167;
        };
        class CamShakeHit
        {
            power=13;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class ld3k_B_127x99_Ball_PGM_Hecate2_Tracer_Red: ld3k_B_127x99_Ball_PGM_Hecate2
    {
        visibleFire=8; // B_127x99_Ball_Tracer_Red, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class ld3k_B_127x99_Ball_PGM_Hecate2_Tracer_Ir: ld3k_B_127x99_Ball_PGM_Hecate2
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.23; // Visible 200m 1000m 43g MV 903m/s ICAO according to https://www.nammo.com, ToF 200m 0.23s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=1.51; // Visible 200m 1000m 43g MV 903m/s ICAO according to https://www.nammo.com, ToF 1000m 1.51s (Strelok Pro), B_127x99_Ball 1
        nvgOnly=1;
    };
    class ld3k_B_127x99_Ball_PGM_Hecate2_AP: ld3k_B_127x99_Ball_PGM_Hecate2
    {
        hit=55; // FIA Van armor, B_20mm_AP 60 (armor=60 : Heli_Attack_02_base_F, Plane_Fighter_01_Base_F, Plane_Fighter_04_Base_F)
        caliber=2.6; // B_127x99_Ball, 12.7x99mm AP perforation 22mm 700m ~560m/s (https://www.nammo.com), SD 0.362 lb/in2
    };
    class ld3k_B_127x99_Ball_PGM_Hecate2_API: ld3k_B_127x99_Ball_PGM_Hecate2 // B_20mm_AP (BulletBase)
    {
        ace_vehicle_damage_incendiary=1;
        hit=60; // B_20mm_AP 60 (armor=60 : Heli_Attack_02_base_F, Plane_Fighter_01_Base_F, Plane_Fighter_04_Base_F)
        indirectHit=8; // B_20mm_AP
        indirectHitRange=0.2; // B_20mm_AP
        caliber=3; // Perforation 22mm RHA 700m (https://www.nammo.com), effective perforation in-game 23mm RHA "armour_plate_23mm.bisurf" 700m ~510m/s: caliber ~3
        cost=35; // B_20mm_AP
        CraterEffects="ExploAmmoCrater";
        class HitEffects // B_30mm_APFSDS. Observable flash at hard targets. Ignition of vaporized fuel. Material/light armor targets https://www.nammo.com
        {
            hitMetal="ImpactMetalSabotSmall";
            hitMetalPlate="ImpactMetalSabotSmall";
            hitBuilding="ImpactConcreteSabotSmall";
            hitConcrete="ImpactConcreteSabotSmall";
            hitGroundSoft="ImpactEffectsGroundSabot";
            hitGroundRed="ImpactEffectsGroundSabot"; // BulletBase ImpactEffectsRed
            hitGroundHard="ImpactEffectsGroundSabot";
            Hit_Foliage_green="ImpactLeavesGreen";
            Hit_Foliage_Dead="ImpactLeavesDead";
            Hit_Foliage_Green_big="ImpactLeavesGreenBig";
            Hit_Foliage_Palm="ImpactLeavesPalm";
            Hit_Foliage_Pine="ImpactLeavesPine";
            hitFoliage="ImpactLeaves";
            hitGlass="ImpactGlass";
            hitGlassArmored="ImpactGlassThin";
            hitWood="ImpactWood";
            hitHay="ImpactHay";
            hitPlastic="ImpactPlastic";
            hitRubber="ImpactRubber";
            hitTyre="ImpactTyre";
            hitMan="ImpactEffectsBlood";
            hitWater="ImpactEffectsWater";
            hitVirtual="ImpactMetal"; // BulletBase
            default_mat="ImpactEffectsGroundSabot";
        };
    };
    class ld3k_B_127x99_Ball_PGM_Hecate2_PEI: ld3k_B_127x99_Ball_PGM_Hecate2
    {
        ACE_damageType="explosive"; // B_20mm medical_damage/CfgAmmo.hpp https://github.com/acemod/ACE3/blob/9c946727cce62913cf3ab0eb59e1b9521dbdd99d/addons/medical_damage/CfgAmmo.hpp#L79
        ace_vehicle_damage_incendiary=1;
        hit=80; // FIA truck armor, B_20mm 60, (armor=80 : Plane_CAS_01_base_F, Van_01_base_F, LSV_01_base_F, Plane_CAS_02_base_F, Land_Shed_04_F, AAA_System_01_base_F, SAM_System_01_base_F, Radar_System_01_base_F, Tractor_01_base_F)
        indirectHit=6; // B_20mm
        indirectHitRange=1.6; // B_20mm
        explosive=0.4; // B_20mm
        explosionSoundEffect="DefaultExplosion"; // B_20mm
        CraterEffects="ExploAmmoCrater"; // B_20mm
        explosionEffects="ExploAmmoExplosion"; // B_20mm
        dangerRadiusBulletClose=16; // B_20mm
        dangerRadiusHit=40; // B_20mm
        suppressionRadiusBulletClose=10; // B_20mm
        suppressionRadiusHit=14; // B_20mm
        aiAmmoUsageFlags="64 + 128"; // B_20mm
        cost=30; // B_20mm
        caliber=2; // Raufoss Mk 211 perforation requirement 22mm RHA 0° 200m, perforation 10.6mm steel 321–375 HB 30° 1000m (https://www.nammo.com)
        // effective perforation in-game 23mm RHA "armour_plate_23mm.bisurf" 200m ~735m/s: caliber ~2, effective perforation in-game 12mm RHA "armour_plate_12mm.bisurf" 1000m ~430m/s: caliber ~1.9
        soundHit1[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",
            1.7782794,
            1,
            1300
        };
        soundHit2[]=
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",
            1.7782794,
            1,
            1300
        };
        soundHit3[]=
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",
            1.7782794,
            1,
            1300
        };
        soundHit4[]=
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",
            1.7782794,
            1,
            1300
        };
        multiSoundHit[]=
        {
            "soundHit1",
            0.25,
            "soundHit2",
            0.25,
            "soundHit3",
            0.25,
            "soundHit4",
            0.25
        };
        class CamShakeExplode // B_20mm
        {
            power=4;
            duration=0.8;
            frequency=20;
            distance=43.7771;
        };
        class CamShakeHit // B_20mm
        {
            power=20;
            duration=0.4;
            frequency=20;
            distance=1;
        };
        SoundSetExplosion[]= // B_20mm
        {
            "Shell19mm25mm_Exp_SoundSet"
        };
    };
    class ld3k_B_127x99_Ball_PGM_Hecate2_PEI_Tracer_Red: ld3k_B_127x99_Ball_PGM_Hecate2_PEI // B_20mm (BulletBase), B_127x99_Ball, M33 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L646
    {
        visibleFire=8; // B_127x99_Ball_Tracer_Red, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class ld3k_B_127x99_Ball_PGM_Hecate2_AMAX: ld3k_B_127x99_Ball_PGM_Hecate2 // https://www.hornady.com/ammunition/rifle/50-bmg-750-gr-a-max-match#!/
    {
        ACE_caliber=12.98; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/50-browning-en.pdf
        ACE_bulletLength=64.77; // 2.550" https://static.hornady.media/presscenter/docs/1410998610-50-BMG-750gr-AMAX.pdf
        ACE_bulletMass=48.6; // 750gr
        ACE_muzzleVelocityVariationSD=0.2; // ACE3 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L702
        ACE_ballisticCoefficients[]={1.0362}; // ASM BC 1.050 2815fps (36"), ICAO 1.03618 826m/s (29") https://static.hornady.media/presscenter/docs/1410998610-50-BMG-750gr-AMAX.pdf
        ACE_standardAtmosphere="ICAO";
        ACE_barrelLengths[]={508,736.6,812.8,914.4,1143}; // 20, 29, 32, 36, 45" https://barrett.net/products/accessories/ammunition/50-bmg-archive/
        ACE_muzzleVelocities[]={751,826,840,858,889}; // 2463, 2709, 2757, 2815, 2917fps
        hit=37.9; // 16104 Joules, 30 12748 Joules
        caliber=1.4; // SD 0.41 lb/in2, should be caliber ~1
        typicalSpeed=814; // 16104 Joules, 780 12748 Joules
        airFriction=-0.00039742; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
    };
    class ld3k_B_127x99_Ball_PGM_Hecate2_M903_SLAP: ld3k_B_127x99_Ball_PGM_Hecate2_AMAX // M903 SLAP, B_127x99_SLAP
    { // Very high M903 SLAP BC 1.101 with data below, change for M962 SLAP-T BC 0.735 more coherent with .30" projectile and 29" barrel muzzle velocity.
        // ACE_caliber=7.7; // 0.303" https://www.1919a4.com/cdn-cgi/image/format=auto,onerror=redirect,width=1920,height=1920,fit=scale-down/https://www.1919a4.com/attachments/4-83-png.134461/
        // ACE_bulletLength=37; // 1.457" https://www.reddit.com/media?url=https%3A%2F%2Fpreview.redd.it%2F89pc3p78cm561.jpg%3Fauto%3Dwebp%26s%3Db42d11b49565e34f7adb561f3fab6821ac34d6b0
        // ACE_bulletMass=22.6; // 348.77gr https://www.1919a4.com/cdn-cgi/image/format=auto,onerror=redirect,width=1920,height=1920,fit=scale-down/https://www.1919a4.com/attachments/4-83-png.134461/
        // ACE_ammoTempMuzzleVelocityShifts[]={-18.7,-18.2,-16.6,-14,-10.4,-5.7,0,6.8,14.6,23.4,33.3}; // Same curve default ACE_ammoTempMuzzleVelocityShifts. Muzzle velocity shift 0m/s ICAO (15°C, 1013.25hPa, 0%)
        // ACE_ballisticCoefficients[]={1.101}; // muzzle velocity 4000fps barrel length 45", ToF 1200m 1.2s, ToF 2500m 3.2s (1.082 ASM) "Marine Corps Warfighting Publication (MCWP) 3-15.1, Machine Guns and Machine Gun Gunnery" https://www.1919a4.com/cdn-cgi/image/format=auto,onerror=redirect,width=1920,height=1920,fit=scale-down/https://www.1919a4.com/attachments/4-83-png.134461/
        // ACE_ballisticCoefficients[]={0.866}; // for test distance in Yards: muzzle velocity 4000fps barrel length 45", ToF 1200yards 1.14s, ToF 2500yards 3.2s (0.851 ASM)
        // ACE_ballisticCoefficients[]={0.703}; // for test distance in Yards: muzzle velocity 4000fps barrel length 45", ToF 1200yards 1.2s, ToF 2500yards 3.74s (0.690 ASM)
        // ACE_velocityBoundaries[]={};
        // ACE_standardAtmosphere="ICAO";
        // ACE_dragModel=1;
        // ACE_muzzleVelocities[]={1029,1132,1152,1177,1219}; // 3377, 3715, 3781, 3860, 4000fps (1219m/s) 45"
        // ACE_barrelLengths[]={508,736.6,812.8,914.4,1143}; // 20, 29, 32, 36, 45"
        // airFriction=-0.00034015; // ICAO (15°C, 1013.25hPa, 0%), B_127x99_SLAP 00036
        ACE_caliber=7.5; // 0.295" https://www.reddit.com/media?url=https%3A%2F%2Fpreview.redd.it%2F89pc3p78cm561.jpg%3Fauto%3Dwebp%26s%3Db42d11b49565e34f7adb561f3fab6821ac34d6b0
        ACE_bulletLength=36.8; // 1.409" https://www.reddit.com/media?url=https%3A%2F%2Fpreview.redd.it%2F89pc3p78cm561.jpg%3Fauto%3Dwebp%26s%3Db42d11b49565e34f7adb561f3fab6821ac34d6b0
        ACE_bulletMass=23.166; // 357.5gr (355, 360gr) "Army Ammunition, Data Sheets Small Caliber Ammunition" https://www.inetres.com/gp/military/infantry/mg/50_ammo.html
        ACE_ballisticCoefficients[]={0.735}; // M962 SLAP-T, ballistic app EBC V2 estimated muzzle velocity 3720fps (1134m/s) (ASM 0.723), ballistic data https://static.wikia.nocookie.net/guns/images/8/83/Slaptrajectory.jpg/revision/latest?cb=20110101063514
        ACE_muzzleVelocities[]={1029,1132,1152,1177,1219}; // 3377, 3715, 3781, 3860, 4000fps (1219m/s) 45"
        ace_vehicle_damage_incendiary=0.8; // ACE3
        hit=43.2; // 14428 Joules, B_127x99_SLAP 50 16684 Joules
        caliber=2.8; // 19mm 1500 Yards (~1400m) ~540m/s https://en.wikipedia.org/wiki/.50_BMG: caliber ~2.35, effective perforation in-game 23mm RHA "armour_plate_23mm.bisurf" 1400m ~540m/s: caliber ~2.8
        // data above "Marine Corps Warfighting Publication (MCWP) 3-15.1", 34mm 500m ~1040m/s: caliber ~2.2, 23mm 1200m ~830m/s: caliber ~1.85
        typicalSpeed=1116; // 14428 Joules, B_127x99_SLAP 1215 16684 Joules
        airFriction=-0.00051753; // ICAO (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        cost=15;
        class CamShakeExplode
        {
            power=4.47214;
            duration=0.8;
            frequency=20;
            distance=13.4164;
        };
        class CamShakeHit
        {
            power=20;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class ld3k_B_127x99_Ball_PGM_Hecate2_M962_SLAP_Tracer_Red: ld3k_B_127x99_Ball_PGM_Hecate2_M903_SLAP // M962 SLAP-T
    {
        ACE_bulletLength=41.4; // 1.63" https://www.snipershide.com/shooting/threads/slap-rounds.7149881/
        ACE_bulletMass=23.004; // 355gr (350, 360gr) "Army Ammunition, Data Sheets Small Caliber Ammunition" https://www.inetres.com/gp/military/infantry/mg/50_ammo.html
        hit=42.9; // 14327 Joules, B_127x99_SLAP 50 16684 Joules
        visibleFire=8; // B_127x99_Ball_Tracer_Red, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerScale=1; // .30" projectile, B_556x45_Ball 1, B_65x39_Caseless 1, B_762x39_Ball_F 1, B_762x51_Ball 0.6
        tracerStartTime=0.01; // No start tracer, "from muzzle". Visible 13m, ToF 13m 0.01s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=1.62; // "Trace not less than 1370m from muzzle", 1190m/s @24m: 1204m/s @0m ICAO, ToF 1370m 1.62s (Strelok Pro), B_127x99_Ball 1 https://us1.discourse-cdn.com/flex016/uploads/cartridgecollectors/original/3X/7/f/7f02a4d46fdf84650d794110ee26d19f9c119c40.jpeg
    };
};
class CfgMagazines
{
    class CA_magazine;
    // 9x19mm
    class AMF_9Rnd_9x19_PAMC50: CA_Magazine
    {
        picture="\AMF_MagazineProxies\Datas\UI\AMF_Mag_PAMAC50.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_9rnd_9x19_mac50_m17_fmj_n";
        displayNameShort="FMJ 124gr";
        descriptionShort="$STR_ld3k_amf_9rnd_9x19_mac50_ds";
        ammo="ld3k_B_9x19_Ball_MAC50_FMJ";
        count=9;
        mass=6; // 16Rnd_9x21_Mag, empty magazine 75g + NATO 9x19 cartridge weight 12.3g x9
        initSpeed=377;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_9Rnd_9x19_MAC50.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_9Rnd_9x19_JHP_PAMC50: AMF_9Rnd_9x19_PAMC50
    {
        author="Laid3acK";
        displayName="$STR_ld3k_amf_9rnd_9x19_mac50_m17_jhp_n";
        displayNameShort="JHP 124gr";
        ammo="ld3k_B_9x19_Ball_MAC50_JHP";
    };
    class AMF_9Rnd_9x19_SUB_PAMC50: AMF_9Rnd_9x19_PAMC50
    {
        author="Laid3acK";
        displayName="$STR_ld3k_amf_9rnd_9x19_mac50_m1153_jhp_n";
        displayNameShort="JHP 147gr";
        ammo="ld3k_B_9x19_Ball_MAC50_SUB";
        initSpeed=310;
    };
    class AMF_17Rnd_9x19_Glock: CA_Magazine
    {
        picture="\AMF_MagazineProxies\Datas\UI\AMF_Mag_Glock.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_17rnd_9x19_g17_m17_fmj_n";
        displayNameShort="FMJ 124gr";
        descriptionShort="$STR_ld3k_amf_17rnd_9x19_g17_ds";
        ammo="ld3k_B_9x19_Ball_Glock17_FMJ";
        count=17;
        mass=6; // 16Rnd_9x21_Mag, empty magazine 78g + NATO 9x19 cartridge weight 12.3g x17
        initSpeed=381;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_17Rnd_9x19_Glock.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_17Rnd_9x19_JHP_Glock: AMF_17Rnd_9x19_Glock
    {
        author="Laid3acK";
        displayName="$STR_ld3k_amf_17rnd_9x19_g17_m17_jhp_n";
        displayNameShort="JHP 124gr";
        ammo="ld3k_B_9x19_Ball_Glock17_JHP";
    };
    class AMF_17Rnd_9x19_SUB_Glock: AMF_17Rnd_9x19_Glock
    {
        author="Laid3acK";
        displayName="$STR_ld3k_amf_17rnd_9x19_g17_m1153_jhp_n";
        displayNameShort="JHP 147gr";
        ammo="ld3k_B_9x19_Ball_Glock17_SUB";
        initSpeed=313;
    };
    class AMF_15Rnd_9x19_PAMAS: CA_Magazine
    {
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_15rnd_9x19_pamas_m17_fmj_n";
        picture="\AMF_MagazineProxies\Datas\UI\Mag_9x19_PAMAS.paa";
        displayNameShort="FMJ 124gr";
        descriptionShort="$STR_ld3k_amf_15rnd_9x19_pamas_ds";
        ammo="ld3k_B_9x19_Ball_PAMAS_FMJ";
        count=15;
        mass=6; // 16Rnd_9x21_Mag, empty magazine 95g + NATO 9x19 cartridge weight 12.3g x15
        initSpeed=394;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_15Rnd_9x19_PAMAS.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_15Rnd_9x19_JHP_PAMAS: AMF_15Rnd_9x19_PAMAS
    {
        author="Laid3acK";
        displayName="$STR_ld3k_amf_15rnd_9x19_pamas_m17_jhp_n";
        displayNameShort="JHP 124gr";
        ammo="ld3k_B_9x19_Ball_PAMAS_JHP";
    };
    class AMF_15Rnd_9x19_SUB_PAMAS: AMF_15Rnd_9x19_PAMAS
    {
        author="Laid3acK";
        displayName="$STR_ld3k_amf_15rnd_9x19_pamas_m1153_jhp_n";
        displayNameShort="JHP 147gr";
        ammo="ld3k_B_9x19_Ball_PAMAS_SUB";
        initSpeed=324;
    };
    class AMF_30Rnd_9x19_MP5_BO_123GR: CA_Magazine
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_9x19_MP5.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_30rnd_9x19_mp5_m17_fmj_n";
        displayNameShort="FMJ";
        descriptionShort="$STR_ld3k_amf_30rnd_9x19_mp5_ds";
        ammo="ld3k_B_9x19_Ball_MP5_FMJ";
        count=30;
        mass=10; // 30Rnd_9x21_Mag, empty magazine 170g + NATO 9x19 cartridge weight 12.3g x30
        initSpeed=428;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_30Rnd_9x19_MP5.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_30Rnd_9x19_MP5_JHP_123GR: AMF_30Rnd_9x19_MP5_BO_123GR
    {
        author="Laid3acK";
        displayName="$STR_ld3k_amf_30rnd_9x19_mp5_m17_jhp_n";
        displayNameShort="JHP";
        ammo="ld3k_B_9x19_Ball_MP5_JHP";
    };
    // 5.56x45mm 25Rnd
    class AMF_25Rnd_BO_MEN_M193: CA_Magazine
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_556x45_FAMAS.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_25rnd_556x45_famas_m193_n";
        displayNameShort="M193";
        descriptionShort="$STR_ld3k_amf_25rnd_556x45_famas_ds";
        ammo="ld3k_B_556x45_Ball_M193";
        count=25;
        mass=8; // 30Rnd_556x45_Stanag, empty magazine 250g + SS109 cartridge weight 12g x25
        initSpeed=990;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_25Rnd_556x45_Famas.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_25Rnd_BO_BT_MEN_M193: AMF_25Rnd_BO_MEN_M193
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_556x45_FAMAS.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_25rnd_556x45_famas_m193_trr_n";
        displayNameShort="M193-T";
        descriptionShort="$STR_ld3k_amf_25rnd_556x45_famas_ds";
        ammo="ld3k_B_556x45_Ball_M193_Tracer_Red";
        count=25;
        mass=8;
        initSpeed=990;
        tracersEvery=5;
        lastRoundsTracer=3;
        modelSpecial="AMF_MagazineProxies\AMF_25Rnd_556x45_Famas.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_25Rnd_BO_MEN_SS109: CA_Magazine
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_556x45_FAMAS.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_25rnd_556x45_famas_ss109_n";
        displayNameShort="SS109";
        descriptionShort="$STR_ld3k_amf_25rnd_556x45_famas_ds";
        ammo="ld3k_B_556x45_Ball";
        count=25;
        mass=8;
        initSpeed=926;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_25Rnd_556x45_Famas.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_25Rnd_BO_BT_MEN_SS109: AMF_25Rnd_BO_MEN_SS109
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_556x45_FAMAS.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_25rnd_556x45_famas_ss109_trr_n";
        displayNameShort="SS109-T";
        descriptionShort="$STR_ld3k_amf_25rnd_556x45_famas_ds";
        ammo="ld3k_B_556x45_Ball_Tracer_Red";
        count=25;
        mass=8;
        initSpeed=926;
        tracersEvery=5;
        lastRoundsTracer=3;
        modelSpecial="AMF_MagazineProxies\AMF_25Rnd_556x45_Famas.p3d";
        modelSpecialIsProxy=1;
    };
    // 5.56x45mm 30Rnd
    class 30Rnd_556x45_Stanag;
    class AMF_30Rnd_556x45_SS109_Stanag: 30Rnd_556x45_Stanag
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_556x45_Stanag.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_30rnd_556x45_ss109_n";
        displayNameShort="SS109";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_stanag_ds";
        ammo="ld3k_B_556x45_Ball";
        count=30;
        mass=8; // 30Rnd_556x45_Stanag, empty magazine 250 g + SS109 cartridge weight 12 g x30
        initSpeed=926;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_30Rnd_556x45_Stanag.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_30Rnd_556x45_SS109_Tracer_Stanag: AMF_30Rnd_556x45_SS109_Stanag
    {
        author="AMF";
        displayName="$STR_ld3k_amf_30rnd_556x45_ss109_trr_n";
        displayNameShort="SS109-T";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_stanag_ds";
        ammo="ld3k_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer=5;
        tracersEvery=10;
    };
    class AMF_30Rnd_556x45_M193_Stanag: 30Rnd_556x45_Stanag
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_556x45_Stanag.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_30rnd_556x45_m193_n";
        displayNameShort="M193";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_stanag_ds";
        ammo="ld3k_B_556x45_Ball_M193";
        count=30;
        mass=8;
        initSpeed=990;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_30Rnd_556x45_Stanag.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_30Rnd_556x45_M196_Tracer_Stanag: AMF_30Rnd_556x45_M193_Stanag
    {
        author="AMF";
        displayName="$STR_ld3k_amf_30rnd_556x45_m193_trr_n";
        displayNameShort="M193-T";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_stanag_ds";
        ammo="ld3k_B_556x45_Ball_M193_Tracer_Red";
        lastRoundsTracer=5;
        tracersEvery=10;
    };
    class AMF_30Rnd_556x45_SS109_PMAG1: 30Rnd_556x45_Stanag
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_556x45_PMAG1.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_30rnd_556x45_ss109_pmag_n";
        displayNameShort="SS109";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_stanag_ds";
        ammo="ld3k_B_556x45_Ball";
        count=30;
        mass=8;
        initSpeed=926;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_30Rnd_556x45_PMAG_01.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_30Rnd_556x45_SS109_Tracer_PMAG1: AMF_30Rnd_556x45_SS109_PMAG1
    {
        author="AMF";
        displayName="$STR_ld3k_amf_30rnd_556x45_ss109_trr_pmag_n";
        displayNameShort="SS109-T";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_stanag_ds";
        ammo="ld3k_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer=5;
        tracersEvery=10;
    };
    class AMF_30Rnd_556x45_SS109_PMAG2: AMF_30Rnd_556x45_SS109_PMAG1
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_556x45_PMAG2.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_30rnd_556x45_ss109_pmag_r_n";
        displayNameShort="SS109";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_stanag_ds";
        ammo="ld3k_B_556x45_Ball";
        count=30;
        mass=8;
        initSpeed=926;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_30Rnd_556x45_PMAG_02.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_30Rnd_556x45_SS109_Tracer_PMAG2: AMF_30Rnd_556x45_SS109_PMAG2
    {
        author="AMF";
        displayName="$STR_ld3k_amf_30rnd_556x45_ss109_trr_pmag_r_n";
        displayNameShort="SS109-T";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_stanag_ds";
        ammo="ld3k_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer=5;
        tracersEvery=10;
    };
    class AMF_30Rnd_556x45_SS109_PMAG3: AMF_30Rnd_556x45_SS109_PMAG2
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_556x45_PMAG3.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_30rnd_556x45_ss109_pmag_mp_n";
        displayNameShort="SS109";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_stanag_ds";
        ammo="ld3k_B_556x45_Ball";
        count=30;
        mass=8;
        initSpeed=926;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_30Rnd_556x45_PMAG_03.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_30Rnd_556x45_SS109_Tracer_PMAG3: AMF_30Rnd_556x45_SS109_PMAG3
    {
        author="AMF";
        displayName="$STR_ld3k_amf_30rnd_556x45_ss109_trr_pmag_mp_n";
        displayNameShort="SS109-T";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_stanag_ds";
        ammo="ld3k_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer=5;
        tracersEvery=10;
    };
    // 5.56x45mm 30Rnd SIG
    class AMF_30Rnd_556x45_SIG_BO_M193: CA_Magazine
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_556x45_SIG.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_30rnd_556x45_m193_n";
        displayNameShort="M193";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_sigsauer_ds";
        ammo="ld3k_B_556x45_Ball_M193";
        count=30;
        mass=8;
        initSpeed=990;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_30Rnd_556x45_Sig.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_30Rnd_556x45_SIG_BO_BT_M196: AMF_30Rnd_556x45_SIG_BO_M193
    {
        author="AMF";
        displayName="$STR_ld3k_amf_30rnd_556x45_m193_trr_n";
        displayNameShort="M193-T";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_sigsauer_ds";
        ammo="ld3k_B_556x45_Ball_M193_Tracer_Red";
        lastRoundsTracer=5;
        tracersEvery=10;
    };
    class AMF_30Rnd_556x45_SIG_BO_SS109: CA_Magazine
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_556x45_SIG.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_30rnd_556x45_ss109_n";
        displayNameShort="SS109";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_sigsauer_ds";
        ammo="ld3k_B_556x45_Ball";
        count=30;
        mass=8;
        initSpeed=926;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_30Rnd_556x45_Sig.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_30Rnd_556x45_SIG_BO_BT_SS109: AMF_30Rnd_556x45_SIG_BO_SS109
    {
        author="AMF";
        displayName="$STR_ld3k_amf_30rnd_556x45_ss109_trr_n";
        displayNameShort="SS109-T";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_sigsauer_ds";
        ammo="ld3k_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer=5;
        tracersEvery=10;
    };
    class AMF_30Rnd_556x45_SIG_UW_mag: AMF_30Rnd_556x45_SIG_BO_SS109 // 20Rnd_556x45_UW_mag
    {
        author="Laid3acK";
        displayName="$STR_ld3k_amf_30rnd_556x45_dual_sigsauer_n";
        displayNameShort="$STR_ld3k_amf_dual_ns";
        descriptionShort="$STR_ld3k_amf_30rnd_556x45_dual_sigsauer_ds";
        ammo="ld3k_B_556x45_Ball_Dual";
        initSpeed=283;
        lastRoundsTracer=0;
        tracersEvery=0;
    };
    // 5.56x45mm 100Rnd Minimi
    class AMF_100Rnd_556x45_Minimi_BO_SS109_DCP: CA_Magazine
    {
        ACE_isBelt=1;
        picture="\ld3k_amf_compat_ace3\data\ui\ld3k_amf_icon_mag_minimi_dcp_ca.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_100rnd_556x45_ss109_minimi_dcp_n";
        displayNameShort="SS109";
        descriptionShort="$STR_ld3k_amf_100rnd_556x45_minimi_ds";
        ammo="ld3k_B_556x45_Ball";
        count=100;
        mass=20; // 200Rnd_556x45_Box_F 40, SS109 cartridge weight 12.3g x100
        initSpeed=926;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_100Rnd_556x45_MINIMI_DCP.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_100Rnd_556x45_Minimi_BO_BT_SS109_DCP: AMF_100Rnd_556x45_Minimi_BO_SS109_DCP
    {
        author="AMF";
        displayName="$STR_ld3k_amf_100rnd_556x45_ss109_trr_minimi_dcp_n";
        displayNameShort="SS109-T";
        descriptionShort="$STR_ld3k_amf_100rnd_556x45_minimi_ds";
        ammo="ld3k_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer=1;
        tracersEvery=5;
    };
    class AMF_100Rnd_556x45_Minimi_M995_AP3_DCP: AMF_100Rnd_556x45_Minimi_BO_SS109_DCP
    {
        author="Laid3acK";
        displayName="$STR_ld3k_amf_100rnd_556x45_m995_minimi_dcp_n";
        displayNameShort="M995 AP";
        descriptionShort="$STR_ld3k_amf_100rnd_556x45_minimi_ds";
        ammo="ld3k_B_556x45_Ball_M995_AP3";
        initSpeed=1030;
        lastRoundsTracer=0;
        tracersEvery=0;
    };
    class AMF_100Rnd_556x45_Minimi_BO_SS109_OD: CA_Magazine
    {
        ACE_isBelt=1;
        picture="\ld3k_amf_compat_ace3\data\ui\ld3k_amf_icon_mag_minimi_od_ca.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_100rnd_556x45_ss109_minimi_od_n";
        displayNameShort="SS109";
        descriptionShort="$STR_ld3k_amf_100rnd_556x45_minimi_ds";
        ammo="ld3k_B_556x45_Ball";
        count=100;
        mass=20;
        initSpeed=926;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_100Rnd_556x45_MINIMI_OD.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_100Rnd_556x45_Minimi_BO_BT_SS109_OD: AMF_100Rnd_556x45_Minimi_BO_SS109_OD
    {
        author="AMF";
        displayName="$STR_ld3k_amf_100rnd_556x45_ss109_trr_minimi_od_n";
        displayNameShort="SS109-T";
        descriptionShort="$STR_ld3k_amf_100rnd_556x45_minimi_ds";
        ammo="ld3k_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer=1;
        tracersEvery=5;
    };
    class AMF_100Rnd_556x45_Minimi_M995_AP3_OD: AMF_100Rnd_556x45_Minimi_BO_SS109_OD
    {
        author="Laid3acK";
        displayName="$STR_ld3k_amf_100rnd_556x45_m995_minimi_od_n";
        displayNameShort="M995 AP";
        descriptionShort="$STR_ld3k_amf_100rnd_556x45_minimi_ds";
        ammo="ld3k_B_556x45_Ball_M995_AP3";
        initSpeed=1030;
        lastRoundsTracer=0;
        tracersEvery=0;
    };
    // 7.62x51mm 20Rnd SCAR
    class 20Rnd_762x51_Mag;
    class AMF_20Rnd_762x51_SCAR_BLK_BO_F3: 20Rnd_762x51_Mag
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_SCARH_BLK.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_scarh_20rnd_762x51_n";
        displayNameShort="FMJ";
        descriptionShort="$STR_ld3k_amf_scarh_20rnd_762x51_ds";
        ammo="ld3k_B_762x51_Ball_Men_147gr_FMJ";
        tracersEvery=0;
        count=20;
        mass=12; // 20Rnd_762x51_Mag, empty magazine 160g + FMJ cartridge weight 23.9g x20
        initSpeed=825;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_20Rnd_762x51_SCARH.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_20Rnd_762x51_SCAR_TAN_BO_F3: AMF_20Rnd_762x51_SCAR_BLK_BO_F3
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_SCARH_TAN.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_scarh_20rnd_762x51_tan_n";
        modelSpecial="AMF_MagazineProxies\AMF_20Rnd_762x51_SCARH_TAN.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_20Rnd_308WIN_SCAR_BLK_AP: AMF_20Rnd_762x51_SCAR_TAN_BO_F3
    {
        author="Laid3acK";
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_SCARH_BLK.paa";
        displayName="$STR_ld3k_amf_scarh_20rnd_762x51_ap_n";
        displayNameShort="$STR_ld3k_amf_ap_ns";
        descriptionShort="$STR_ld3k_amf_scarh_20rnd_762x51_ds";
        ammo="ld3k_B_762x51_Ball_Men_151gr_AP";
        count=20;
        mass=12;
        initSpeed=830;
        modelSpecial="AMF_MagazineProxies\AMF_20Rnd_762x51_SCARH.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_20Rnd_308WIN_SCAR_TAN_AP: AMF_20Rnd_308WIN_SCAR_BLK_AP
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_SCARH_TAN.paa";
        author="Laid3acK";
        displayName="$STR_ld3k_amf_scarh_20rnd_762x51_ap_tan_n";
        modelSpecial="AMF_MagazineProxies\AMF_20Rnd_762x51_SCARH_TAN.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_20Rnd_308WIN_SCAR_BLK_CBC_168GR_HPBT: AMF_20Rnd_762x51_SCAR_TAN_BO_F3
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_SCARH_BLK.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_scarh_20rnd_762x51_hpbt_n";
        displayNameShort="HPBT";
        descriptionShort="$STR_ld3k_amf_scarh_20rnd_762x51_ds";
        ammo="ld3k_B_762x51_Ball_Sierra_168gr_HPBT";
        count=20;
        mass=12;
        initSpeed=809;
        modelSpecial="AMF_MagazineProxies\AMF_20Rnd_762x51_SCARH.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_20Rnd_308WIN_SCAR_TAN_CBC_168GR_HPBT: AMF_20Rnd_308WIN_SCAR_BLK_CBC_168GR_HPBT
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_SCARH_TAN.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_scarh_20rnd_762x51_hpbt_tan_n";
        displayNameShort="HPBT";
        descriptionShort="$STR_ld3k_amf_scarh_20rnd_762x51_ds";
        modelSpecial="AMF_MagazineProxies\AMF_20Rnd_762x51_SCARH_TAN.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_20Rnd_762x51_SCAR_BLK_IMI_175GR: AMF_20Rnd_308WIN_SCAR_TAN_CBC_168GR_HPBT
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_SCARH_BLK.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_scarh_20rnd_762x51_otm_n";
        displayNameShort="OTM";
        descriptionShort="$STR_ld3k_amf_scarh_20rnd_762x51_ds";
        ammo="ld3k_B_762x51_Ball_Berger_175gr_OTM";
        tracersEvery=1;
        count=20;
        mass=12;
        initSpeed=789;
        modelSpecial="AMF_MagazineProxies\AMF_20Rnd_762x51_SCARH.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_20Rnd_762x51_SCAR_TAN_IMI_175GR: AMF_20Rnd_762x51_SCAR_BLK_IMI_175GR // MEN Balle Précision T
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_SCARH_TAN.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_scarh_20rnd_762x51_otm_tan_n";
        displayNameShort="OTM";
        descriptionShort="$STR_ld3k_amf_scarh_20rnd_762x51_ds";
        modelSpecial="AMF_MagazineProxies\AMF_20Rnd_762x51_SCARH_TAN.p3d";
        modelSpecialIsProxy=1;
    };
    // 7.62x51mm 20Rnd HK417
    class AMF_20Rnd_762x51_HK417_BO_F3: 20Rnd_762x51_Mag
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_HK417.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_scarh_20rnd_762x51_n";
        displayNameShort="FMJ";
        descriptionShort="$STR_ld3k_amf_20rnd_762x51_hk417_ds";
        ammo="ld3k_B_762x51_Ball_Men_147gr_FMJ";
        tracersEvery=0;
        count=20;
        mass=12; // 20Rnd_762x51_Mag, empty magazine 160g + FMJ cartridge weight 23.9g x20
        initSpeed=825;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_20Rnd_762x51_HK417.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_20Rnd_762x51_HK417_AP: AMF_20Rnd_762x51_HK417_BO_F3
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_HK417.paa";
        author="Laid3acK";
        displayName="$STR_ld3k_amf_20rnd_762x51_ap_hk417_n";
        displayNameShort="$STR_ld3k_amf_ap_ns";
        descriptionShort="$STR_ld3k_amf_20rnd_762x51_hk417_ds";
        ammo="ld3k_B_762x51_Ball_Men_151gr_AP";
        tracersEvery=0;
        count=20;
        mass=12;
        initSpeed=830;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_20Rnd_762x51_HK417.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_20Rnd_308WIN_HK417_HPBT: AMF_20Rnd_762x51_HK417_BO_F3
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_HK417.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_scarh_20rnd_762x51_hpbt_n";
        displayNameShort="HPBT";
        descriptionShort="$STR_ld3k_amf_20rnd_762x51_hk417_ds";
        ammo="ld3k_B_762x51_Ball_Sierra_168gr_HPBT";
        initSpeed=809;
        tracersEvery=0;
        count=20;
        mass=12;
        modelSpecial="AMF_MagazineProxies\AMF_20Rnd_762x51_HK417.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_20Rnd_762x51_HK417_IMI_175GR: AMF_20Rnd_308WIN_HK417_HPBT
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_HK417.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_scarh_20rnd_762x51_otm_n";
        displayNameShort="OTM";
        descriptionShort="$STR_ld3k_amf_20rnd_762x51_hk417_ds";
        ammo="ld3k_B_762x51_Ball_Berger_175gr_OTM";
        count=20;
        mass=12;
        initSpeed=789;
        modelSpecial="AMF_MagazineProxies\AMF_20Rnd_762x51_HK417.p3d";
        modelSpecialIsProxy=1;
    };
    // 7.62x51mm AANF1
    class AMF_50Rnd_762x51_AANF1_BO_F3: CA_Magazine
    {
        ACE_isBelt=1;
        scope=2;
        author="AMF";
        displayName="$STR_ld3k_amf_50rnd_762x51_aanf1_n";
        displayNameShort="$STR_ld3k_amf_fmj_ns";
        picture="\AMF_MachinesGuns\AANF1\Data\UI\AMF_50Rnd_762x51_AANF1_BO_F3.paa";
        ammo="ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Red";
        count=50;
        initSpeed=825;
        tracersEvery=5;
        lastRoundsTracer=4;
        descriptionShort="$STR_ld3k_amf_50rnd_762x51_aanf1_ds";
        mass=17; // 150Rnd_762x54_Box 50
    };
    class AMF_75Rnd_762x51_AANF1_BO_F3: AMF_50Rnd_762x51_AANF1_BO_F3
    {
        scope=2;
        author="AMF";
        displayName="$STR_ld3k_amf_75rnd_762x51_aanf1_n";
        picture="\AMF_MachinesGuns\AANF1\Data\UI\AMF_50Rnd_762x51_AANF1_BO_F3.paa";
        ammo="ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Red";
        count=75;
        initSpeed=825;
        tracersEvery=5;
        lastRoundsTracer=4;
        descriptionShort="$STR_ld3k_amf_75rnd_762x51_aanf1_ds";
        mass=25; // 150Rnd_762x54_Box 50
    };
    class AMF_100Rnd_762x51_AANF1_BO_F3: AMF_75Rnd_762x51_AANF1_BO_F3
    {
        scope=2;
        author="AMF";
        displayName="$STR_ld3k_amf_100rnd_762x51_aanf1_n";
        picture="\AMF_MachinesGuns\AANF1\Data\UI\AMF_50Rnd_762x51_AANF1_BO_F3.paa";
        ammo="ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Red";
        count=100;
        initSpeed=825;
        tracersEvery=5;
        lastRoundsTracer=4;
        descriptionShort="$STR_ld3k_amf_100rnd_762x51_aanf1_ds";
        mass=33; // 150Rnd_762x54_Box 50
    };
    class AMF_200Rnd_762x51_AANF1_BO_F3: AMF_100Rnd_762x51_AANF1_BO_F3
    {
        scope=2;
        author="AMF";
        displayName="$STR_ld3k_amf_200rnd_762x51_aanf1_n";
        picture="\AMF_MachinesGuns\AANF1\Data\UI\AMF_50Rnd_762x51_AANF1_BO_F3.paa";
        ammo="ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Red";
        count=200;
        initSpeed=825;
        tracersEvery=5;
        lastRoundsTracer=4;
        descriptionShort="$STR_ld3k_amf_200rnd_762x51_aanf1_ds";
        mass=66; // 150Rnd_762x54_Box 50
    };
    // 7.62x51mm MAG58
    class AMF_50Rnd_762x51_MAG58_BO_F3: CA_Magazine
    {
        ACE_isBelt=1;
        scope=2;
        author="AMF";
        picture="\AMF_MachinesGuns\Mag58\Data\UI\AMF_50Rnd_762x51_MAG58_BO_F3.paa";
        displayName="$STR_ld3k_amf_50rnd_762x51_aanf1_n";
        displayNameShort="$STR_ld3k_amf_fmj_ns";
        ammo="ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Red";
        count=50;
        initSpeed=825;
        tracersEvery=5;
        lastRoundsTracer=4;
        descriptionShort="$STR_ld3k_amf_50rnd_762x51_fnmag_ds";
        // magazineGroup[]={};
        mass=17; // 150Rnd_762x54_Box 50
    };
    class AMF_75Rnd_762x51_MAG58_BO_F3: CA_Magazine
    {
        ACE_isBelt=1;
        scope=2;
        author="AMF";
        picture="\AMF_MachinesGuns\Mag58\Data\UI\AMF_50Rnd_762x51_MAG58_BO_F3.paa";
        displayName="$STR_ld3k_amf_75rnd_762x51_aanf1_n";
        displayNameShort="$STR_ld3k_amf_fmj_ns";
        ammo="ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Red";
        count=75;
        initSpeed=825;
        tracersEvery=5;
        lastRoundsTracer=4;
        descriptionShort="$STR_ld3k_amf_75rnd_762x51_fnmag_ds";
        // magazineGroup[]={};
        mass=25; // 150Rnd_762x54_Box 50
    };
    class AMF_100Rnd_762x51_MAG58_BO_F3: CA_Magazine
    {
        ACE_isBelt=1;
        scope=2;
        author="AMF";
        picture="\AMF_MachinesGuns\Mag58\Data\UI\AMF_50Rnd_762x51_MAG58_BO_F3.paa";
        displayName="$STR_ld3k_amf_100rnd_762x51_aanf1_n";
        displayNameShort="$STR_ld3k_amf_fmj_ns";
        ammo="ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Red";
        count=100;
        initSpeed=825;
        tracersEvery=5;
        lastRoundsTracer=4;
        descriptionShort="$STR_ld3k_amf_100rnd_762x51_fnmag_ds";
        // magazineGroup[]={};
        mass=33; // 150Rnd_762x54_Box 50
    };
    class AMF_200Rnd_762x51_MAG58_BO_F3: CA_Magazine
    {
        ACE_isBelt=1;
        scope=2;
        author="AMF";
        picture="\AMF_MachinesGuns\Mag58\Data\UI\AMF_50Rnd_762x51_MAG58_BO_F3.paa";
        displayName="$STR_ld3k_amf_200rnd_762x51_aanf1_n";
        displayNameShort="$STR_ld3k_amf_fmj_ns";
        ammo="ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Red";
        count=200;
        initSpeed=825;
        tracersEvery=5;
        lastRoundsTracer=4;
        descriptionShort="$STR_ld3k_amf_200rnd_762x51_fnmag_ds";
        // magazineGroup[]={};
        mass=66; // 150Rnd_762x54_Box 50
    };
    // 7.62x51mm 10Rnd FRF2
    class AMF_10Rnd_762x51_BO_F3: CA_Magazine // AP
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_FRF2.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_frf2_10rnd_762x51_ap_n";
        displayNameShort="$STR_ld3k_amf_ap_ns";
        descriptionShort="$STR_ld3k_amf_frf2_10rnd_762x51_ap_ds";
        ammo="ld3k_B_762x51_Ball_FRF2_AP";
        count=10;
        mass=6; // 10Rnd_Mk14_762x51_Mag, empty magazine 226g + AP cartridge weight 24g x10
        initSpeed=820;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_10Rnd_762x51_FRF2.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_10Rnd_308WIN_CBC_168GR_HPBT: AMF_10Rnd_762x51_BO_F3
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_FRF2.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_frf2_10rnd_762x51_hpbt_n";
        displayNameShort="HPBT";
        descriptionShort="$STR_ld3k_amf_frf2_10rnd_762x51_ds";
        ammo="ld3k_B_762x51_Ball_Sierra_168gr_HPBT_NoCartridge";
        count=10;
        mass=6;
        initSpeed=828;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_10Rnd_762x51_FRF2.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_10Rnd_762x51_IMI_175GR: AMF_10Rnd_308WIN_CBC_168GR_HPBT
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_FRF2.paa";
        author="AMF";
        scope=2;
        displayName="$STR_ld3k_amf_frf2_10rnd_762x51_otm_n";
        displayNameShort="OTM";
        descriptionShort="$STR_ld3k_amf_frf2_10rnd_762x51_ds";
        ammo="ld3k_B_762x51_Ball_Berger_175gr_OTM_NoCartridge";
        count=10;
        mass=6;
        initSpeed=807;
        tracersEvery=0;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_10Rnd_762x51_FRF2.p3d";
        modelSpecialIsProxy=1;
    };
    // 7.62x51mm 10Rnd PGM UR
    class AMF_10Rnd_762x51_UR_BO_F3: 20Rnd_762x51_Mag
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_PGM_UR.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_pgm_ur_10rnd_762x51_n";
        displayNameShort="FMJ";
        descriptionShort="$STR_ld3k_amf_pgm_ur_10rnd_762x51_ds";
        ammo="ld3k_B_762x51_Ball_Men_147gr_FMJ_NoCartridge";
        tracersEvery=0;
        mass=6; // 10Rnd_Mk14_762x51_Mag, empty magazine 165g + AP cartridge weight 24g x10
        count=10;
        initSpeed=825;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_10Rnd_762x51_PGM_UR.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_10Rnd_762x51_UR_BO_F3_Tracer_Red: AMF_10Rnd_762x51_UR_BO_F3
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_PGM_UR.paa";
        author="Laid3acK";
        displayName="$STR_ld3k_amf_pgm_ur_10rnd_762x51_t_n";
        displayNameShort="FMJ-T";
        descriptionShort="$STR_ld3k_amf_pgm_ur_10rnd_762x51_ds";
        ammo="ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Red_NoCartridge";
        tracersEvery=1;
        mass=6;
        count=10;
        initSpeed=825;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_10Rnd_762x51_PGM_UR.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_10Rnd_762x51_UR_BO_F3_Tracer_Ir: AMF_10Rnd_762x51_UR_BO_F3_Tracer_Red
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_PGM_UR.paa";
        author="Laid3acK";
        displayName="$STR_ld3k_amf_pgm_ur_10rnd_762x51_t_ir_n";
        displayNameShort="FMJ-T IR";
        descriptionShort="$STR_ld3k_amf_pgm_ur_10rnd_762x51_ds";
        ammo="ld3k_B_762x51_Ball_Men_147gr_FMJ_Tracer_Ir_NoCartridge";
        tracersEvery=1;
        mass=6;
        count=10;
        initSpeed=825;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_10Rnd_762x51_PGM_UR.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_10Rnd_762x51_UR_AP: AMF_10Rnd_762x51_UR_BO_F3
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_PGM_UR.paa";
        author="Laid3acK";
        displayName="$STR_ld3k_amf_pgm_ur_10rnd_762x51_ap_n";
        displayNameShort="$STR_ld3k_amf_ap_ns";
        descriptionShort="$STR_ld3k_amf_pgm_ur_10rnd_762x51_ds";
        ammo="ld3k_B_762x51_Ball_Men_151gr_AP_NoCartridge";
        tracersEvery=0;
        mass=6;
        count=10;
        initSpeed=830;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_10Rnd_762x51_PGM_UR.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_10Rnd_308WIN_UR_CBC_168GR_HPBT: AMF_10Rnd_762x51_UR_BO_F3
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_PGM_UR.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_frf2_10rnd_762x51_hpbt_n";
        displayNameShort="HPBT";
        descriptionShort="$STR_ld3k_amf_pgm_ur_10rnd_762x51_ds";
        ammo="ld3k_B_762x51_Ball_Sierra_168gr_HPBT_NoCartridge";
        tracersEvery=0;
        mass=6;
        count=10;
        initSpeed=809;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_10Rnd_762x51_PGM_UR.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_10Rnd_762x51_UR_IMI_175GR: AMF_10Rnd_308WIN_UR_CBC_168GR_HPBT
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_PGM_UR.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_frf2_10rnd_762x51_otm_n";
        displayNameShort="OTM";
        descriptionShort="$STR_ld3k_amf_pgm_ur_10rnd_762x51_ds";
        ammo="ld3k_B_762x51_Ball_Berger_175gr_OTM_NoCartridge";
        tracersEvery=0;
        mass=6;
        count=10;
        initSpeed=789;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_10Rnd_762x51_PGM_UR.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_10Rnd_762x51_UR_200gr_FMJBT: AMF_10Rnd_308WIN_UR_CBC_168GR_HPBT
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_762x51_PGM_UR.paa";
        author="Laid3acK";
        displayName="$STR_ld3k_amf_pgm_ur_10rnd_762x51_subsonic_n";
        displayNameShort="$STR_ld3k_amf_subsonic_ns";
        descriptionShort="$STR_ld3k_amf_pgm_ur_10rnd_762x51_ds";
        ammo="ld3k_B_762x51_Ball_Lapua_200gr_FMJBT_NoCartridge";
        tracersEvery=0;
        mass=6;
        count=10;
        initSpeed=340;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_10Rnd_762x51_PGM_UR.p3d";
        modelSpecialIsProxy=1;
    };
    // 12.7x99mm 7Rnd PGM HECATE2
    class 10Rnd_127x54_Mag;
    class AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ: 10Rnd_127x54_Mag // M33
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_127x99_PGM_Hecate2.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_pgm_7rnd_127x99_fmj_n";
        displayNameShort="$STR_ld3k_amf_fmj_ns";
        descriptionShort="$STR_ld3k_amf_pgm_7rnd_127x99_ds";
        ammo="ld3k_B_127x99_Ball_PGM_Hecate2";
        count=7;
        initSpeed=780; // according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25hPa, 0%)
        tracersEvery=0;
        lastRoundsTracer=0;
        mass=23; // 5Rnd_127x108_Mag 16, PGM Hecate 2 official manuel: full magazine 1440g: 31.7
        modelSpecial="AMF_MagazineProxies\AMF_7Rnd_127x99_Hecate2.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ_Tracer_Red: AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ // M33 Tracer
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_127x99_PGM_Hecate2.paa";
        author="Laid3acK";
        displayName="$STR_ld3k_amf_pgm_7rnd_127x99_tracer_n";
        displayNameShort="$STR_ld3k_amf_tracer_ns";
        descriptionShort="$STR_ld3k_amf_pgm_7rnd_127x99_ds";
        ammo="ld3k_B_127x99_Ball_PGM_Hecate2_Tracer_Red";
        count=7;
        initSpeed=780;
        tracersEvery=1;
        lastRoundsTracer=0;
        mass=23;
        modelSpecial="AMF_MagazineProxies\AMF_7Rnd_127x99_Hecate2.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ_Tracer_Ir: AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ_Tracer_Red // M33 IR
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_127x99_PGM_Hecate2.paa";
        author="Laid3acK";
        displayName="$STR_ld3k_amf_pgm_7rnd_127x99_dim_tracer_n";
        displayNameShort="$STR_ld3k_amf_dim_tracer_ns";
        descriptionShort="$STR_ld3k_amf_pgm_7rnd_127x99_ds";
        ammo="ld3k_B_127x99_Ball_PGM_Hecate2_Tracer_Ir";
        count=7;
        initSpeed=780;
        tracersEvery=1;
        lastRoundsTracer=0;
        mass=23;
        modelSpecial="AMF_MagazineProxies\AMF_7Rnd_127x99_Hecate2.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_7Rnd_127x99_HECATE2_IMI_661GR_FMJ: AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ // AP
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_127x99_PGM_Hecate2.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_pgm_7rnd_127x99_ap_n";
        displayNameShort="$STR_ld3k_amf_ap_ns";
        descriptionShort="$STR_ld3k_amf_pgm_7rnd_127x99_ds";
        ammo="ld3k_B_127x99_Ball_PGM_Hecate2_AP";
        tracersEvery=0;
        mass=23;
        count=7;
        initSpeed=780;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_7Rnd_127x99_Hecate2.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_7Rnd_127x99_HECATE2_CBC_770GR_BSS: AMF_7Rnd_127x99_HECATE2_IMI_661GR_FMJ // API
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_127x99_PGM_Hecate2.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_pgm_7rnd_127x99_api_n";
        displayNameShort="$STR_ld3k_amf_api_ns";
        descriptionShort="$STR_ld3k_amf_pgm_7rnd_127x99_ds";
        ammo="ld3k_B_127x99_Ball_PGM_Hecate2_API";
        tracersEvery=0;
        mass=23;
        count=7;
        initSpeed=780;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_7Rnd_127x99_Hecate2.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_7Rnd_127x99_HECATE2_CBC_774GR_APSS: AMF_7Rnd_127x99_HECATE2_CBC_770GR_BSS // PEI
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_127x99_PGM_Hecate2.paa";
        author="AMF";
        displayName="$STR_ld3k_amf_pgm_7rnd_127x99_pei_n";
        displayNameShort="$STR_ld3k_amf_pei_ns";
        descriptionShort="$STR_ld3k_amf_pgm_7rnd_127x99_ds";
        ammo="ld3k_B_127x99_Ball_PGM_Hecate2_PEI";
        tracersEvery=0;
        mass=23;
        count=7;
        initSpeed=780;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_7Rnd_127x99_Hecate2.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_7Rnd_127x99_HECATE2_CBC_774GR_APSS_Tracer_Red: AMF_7Rnd_127x99_HECATE2_CBC_770GR_BSS // PEI Tracer
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_127x99_PGM_Hecate2.paa";
        author="Laid3acK";
        displayName="$STR_ld3k_amf_pgm_7rnd_127x99_peit_n";
        displayNameShort="$STR_ld3k_amf_peit_ns";
        descriptionShort="$STR_ld3k_amf_pgm_7rnd_127x99_ds";
        ammo="ld3k_B_127x99_Ball_PGM_Hecate2_PEI_Tracer_Red";
        tracersEvery=1;
        mass=23;
        count=7;
        initSpeed=780;
        lastRoundsTracer=0;
        modelSpecial="AMF_MagazineProxies\AMF_7Rnd_127x99_Hecate2.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_7Rnd_127x99_HECATE2_AMAX: AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ // AMAX
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_127x99_PGM_Hecate2.paa";
        author="Laid3acK";
        displayName="$STR_ld3k_amf_pgm_7rnd_127x99_amax_n";
        displayNameShort="AMAX";
        descriptionShort="$STR_ld3k_amf_pgm_7rnd_127x99_ds";
        ammo="ld3k_B_127x99_Ball_PGM_Hecate2_AMAX";
        count=7;
        initSpeed=814; // according to ACE_ammoTempMuzzleVelocityShifts ICAO
        tracersEvery=0;
        lastRoundsTracer=0;
        mass=23;
        modelSpecial="AMF_MagazineProxies\AMF_7Rnd_127x99_Hecate2.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_7Rnd_127x99_HECATE2_M903_SLAP: AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ // SLAP
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_127x99_PGM_Hecate2.paa";
        author="Laid3acK";
        displayName="$STR_ld3k_amf_pgm_7rnd_127x99_slap_n";
        displayNameShort="SLAP";
        descriptionShort="$STR_ld3k_amf_pgm_7rnd_127x99_ds";
        ammo="ld3k_B_127x99_Ball_PGM_Hecate2_M903_SLAP";
        count=7;
        initSpeed=1116; // according to ACE_ammoTempMuzzleVelocityShifts ICAO
        tracersEvery=0;
        lastRoundsTracer=0;
        mass=23;
        modelSpecial="AMF_MagazineProxies\AMF_7Rnd_127x99_Hecate2.p3d";
        modelSpecialIsProxy=1;
    };
    class AMF_7Rnd_127x99_HECATE2_M962_SLAP_Tracer_Red: AMF_7Rnd_127x99_HECATE2_M903_SLAP // SLAP T
    {
        picture="\AMF_MagazineProxies\Datas\UI\Mag_127x99_PGM_Hecate2.paa";
        author="Laid3acK";
        displayName="$STR_ld3k_amf_pgm_7rnd_127x99_slap_t_n";
        displayNameShort="SLAP-T";
        descriptionShort="$STR_ld3k_amf_pgm_7rnd_127x99_ds";
        ammo="ld3k_B_127x99_Ball_PGM_Hecate2_M962_SLAP_Tracer_Red";
        count=7;
        initSpeed=1116;
        tracersEvery=1;
        lastRoundsTracer=0;
        mass=23;
        modelSpecial="AMF_MagazineProxies\AMF_7Rnd_127x99_Hecate2.p3d";
        modelSpecialIsProxy=1;
    };
};
class CfgMagazineWells
{
    class CBA_556x45_MINIMI // Weapon initSpeed -1 ACE_barrelLength 508mm (20"): 926, 990, 1030 m/s ICAO (15°C, 1013.25 hPa, 0%) according to AMF 556x45 magazines initSpeed
    {
        AMF_Magazines[]=
        {
            "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP",
            "AMF_100Rnd_556x45_Minimi_BO_SS109_OD",
            "AMF_100Rnd_556x45_Minimi_BO_BT_SS109_DCP",
            "AMF_100Rnd_556x45_Minimi_BO_BT_SS109_OD",
            "AMF_100Rnd_556x45_Minimi_M995_AP3_DCP",
            "AMF_100Rnd_556x45_Minimi_M995_AP3_OD"
        };
    };
    class CBA_762x51_HK417 // Weapon initSpeed -1 ACE_barrelLength 508mm (20"): 825, 830, 809, 789 m/s ICAO (15°C, 1013.25 hPa, 0%) according to AMF 7.62x56 magazines initSpeed
    {
        AMF_Magazines[]=
        {
            "AMF_20Rnd_762x51_HK417_BO_F3",
            "AMF_20Rnd_762x51_HK417_AP",
            "AMF_20Rnd_308WIN_HK417_HPBT",
            "AMF_20Rnd_762x51_HK417_IMI_175GR"
        };
    };
    class CBA_762x51_SCAR // Weapon initSpeed -1 ACE_barrelLength 508mm (20"): 825, 830, 809, 789 m/s ICAO (15°C, 1013.25 hPa, 0%) according to AMF 7.62x56 magazines initSpeed
    {
        AMF_Magazines[]=
        {
            "AMF_20Rnd_762x51_SCAR_BLK_BO_F3",
            "AMF_20Rnd_762x51_SCAR_TAN_BO_F3",
            "AMF_20Rnd_308WIN_SCAR_BLK_AP",
            "AMF_20Rnd_308WIN_SCAR_TAN_AP",
            "AMF_20Rnd_308WIN_SCAR_BLK_CBC_168GR_HPBT",
            "AMF_20Rnd_308WIN_SCAR_TAN_CBC_168GR_HPBT",
            "AMF_20Rnd_762x51_SCAR_BLK_IMI_175GR",
            "AMF_20Rnd_762x51_SCAR_TAN_IMI_175GR"
        };
    };
    class CBA_762x51_PGM_UR // Weapon initSpeed -1 ACE_barrelLength 508mm (20"): 825, 830, 809, 789 m/s ICAO (15°C, 1013.25 hPa, 0%) according to AMF 7.62x56 magazines initSpeed
    { // PGM barrel Commando 1 550 mm: initSpeed -1.010754, Commando 2 470 mm: initSpeed -0.984, Intervention 1 600 mm: initSpeed -1.023055
        AMF_Magazines[]=
        {
            "AMF_10Rnd_762x51_UR_BO_F3",
            "AMF_10Rnd_762x51_UR_BO_F3_Tracer_Red",
            "AMF_10Rnd_762x51_UR_BO_F3_Tracer_Ir",
            "AMF_10Rnd_762x51_UR_AP",
            "AMF_10Rnd_308WIN_UR_CBC_168GR_HPBT",
            "AMF_10Rnd_762x51_UR_IMI_175GR",
            "AMF_10Rnd_762x51_UR_200gr_FMJBT"
        };
    };
    class CBA_50BMG_PMG_Hecate_II // Weapon initSpeed -1 ACE_barrelLength 700 mm (20"): 780, 814, 1116 m/s ICAO (15°C, 1013.25 hPa, 0%) according to AMF 12.7x99 magazines initSpeed
    {
        AMF_Magazines[]=
        {
            "AMF_7Rnd_127x99_HECATE2_IMI_661GR_FMJ",
            "AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ",
            "AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ_Tracer_Red",
            "AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ_Tracer_Ir",
            "AMF_7Rnd_127x99_HECATE2_CBC_770GR_BSS",
            "AMF_7Rnd_127x99_HECATE2_CBC_774GR_APSS",
            "AMF_7Rnd_127x99_HECATE2_CBC_774GR_APSS_Tracer_Red",
            "AMF_7Rnd_127x99_HECATE2_AMAX",
            "AMF_7Rnd_127x99_HECATE2_M903_SLAP",
            "AMF_7Rnd_127x99_HECATE2_M962_SLAP_Tracer_Red"
        };
    };
};
class CfgWeapons
{
    class ItemCore;
    class InventoryMuzzleItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class Pistol;
    class Rifle;
    class Pistol_Base_F: Pistol
    {
        class WeaponSlotsInfo;
    };
    class Rifle_Base_F: Rifle
    {
        class WeaponSlotsInfo;
    };
    class Rifle_Long_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class Rifle_Short_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    // 9x19mm
    class AMF_Pamas: Pistol_Base_F
    {
        ACE_barrelTwist=250;
        ACE_barrelLength=125;
        initSpeed=-1; // 394, 324 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        displayname="PA MAS-G1 9 mm";
        descriptionShort="$STR_ld3k_amf_hg_919_ds";
        magazines[]=
        {
            "AMF_15Rnd_9x19_PAMAS",
            "AMF_15Rnd_9x19_JHP_PAMAS",
            "AMF_15Rnd_9x19_SUB_PAMAS"
        };
        class WeaponSlotsInfo
        {
            mass=18.2; // 29.05 oz w/o magazine
        };
        class Single: Mode_SemiAuto
        {
            sounds[]=
            {
                "StandardSound",
                "SilencedSound"
            };
            class BaseSoundModeType
            {
            };
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[]=
                {
                    "pamas_Shot_SoundSet",
                    "P07_Tail_SoundSet",
                    "P07_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                SoundSetShot[]=
                {
                    "P07_silencerShot_SoundSet",
                    "P07_silencerTail_SoundSet",
                    "P07_silencerInteriorTail_SoundSet"
                };
            };
            dispersion=0.002178; // 13.32 MOA*0.562*0.000291, 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class AMF_Glock_17_Gen4: Pistol_Base_F
    {
        ACE_barrelTwist=250;
        ACE_barrelLength=114;
        initSpeed=-1; // 381, 313 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        displayname="Glock17 Gen4 9 mm";
        descriptionShort="$STR_ld3k_amf_hg_919_ds";
        magazines[]=
        {
            "AMF_17Rnd_9x19_Glock",
            "AMF_17Rnd_9x19_JHP_Glock",
            "AMF_17Rnd_9x19_SUB_Glock"
        };
        class WeaponSlotsInfo
        {
            mass=13.9; // 630 g w/o magazine
        };
        class SemiAuto: Mode_SemiAuto
        {
            sounds[]=
            {
                "StandardSound",
                "SilencedSound"
            };
            class BaseSoundModeType
            {
            };
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[]=
                {
                    "GLOCK17_Shot_SoundSet",
                    "P07_Tail_SoundSet",
                    "P07_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                SoundSetShot[]=
                {
                    "P07_silencerShot_SoundSet",
                    "P07_silencerTail_SoundSet",
                    "P07_silencerInteriorTail_SoundSet"
                };
            };
            dispersion=0.002098; // 12.83 MOA*0.562*0.000291, 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class AMF_PSA_Glock_17: AMF_Glock_17_Gen4
    {
        displayname="Glock17 PSA 9 mm";
        descriptionShort="$STR_ld3k_amf_hg_919_ds";
    };
    class AMF_PAMAC_50: Pistol_Base_F
    {
        ACE_barrelTwist=270;
        ACE_barrelLength=111;
        initSpeed=-1; // 377, 310 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        displayname="PA MAC-50 9 mm";
        descriptionShort="$STR_ld3k_amf_hg_919_ds";
        magazines[]=
        {
            "AMF_9Rnd_9x19_PAMC50",
            "AMF_9Rnd_9x19_JHP_PAMC50",
            "AMF_9Rnd_9x19_SUB_PAMC50"
        };
        class WeaponSlotsInfo
        {
            mass=19.6; // 890g
        };
        class Single: Mode_SemiAuto
        {
            sounds[]=
            {
                "StandardSound"
            };
            class BaseSoundModeType
            {
            };
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[]=
                {
                    "ACPC2_Shot_SoundSet",
                    "ACPC2_Tail_SoundSet",
                    "ACPC2_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                SoundSetShot[]=
                {
                    "ACPC2_silencerShot_SoundSet",
                    "ACPC2_silencerTail_SoundSet",
                    "ACPC2_silencerInteriorTail_SoundSet"
                };
            };
            dispersion=0.001714; // 10.48 MOA*0.562*0.000291, 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class AMF_Weapons_HK_MP5_01_base_f: Rifle_Short_Base_F // https://www.heckler-koch.com/de.html
    {
        ACE_barrelTwist=250;
        ACE_barrelLength=225;
        initSpeed=-1; // 428 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_smg_919_ds";
        magazines[]=
        {
            "AMF_30Rnd_9x19_MP5_BO_123GR",
            "AMF_30Rnd_9x19_MP5_JHP_123GR"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=63.9; // 2.9kg
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.001245; // 7.61 MOA*0.562*0.000291, 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class Burst: Mode_Burst
        {
            dispersion=0.001245; // 7.61 MOA*0.562*0.000291, 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: Mode_FullAuto
        {
            dispersion=0.001245; // 7.61 MOA*0.562*0.000291, 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class amf_hk_mp5_01_f: AMF_Weapons_HK_MP5_01_base_f
    {
        displayName="HK MP5-A2 9 mm";
    };
    class amf_hk_mp5_02_f: AMF_Weapons_HK_MP5_01_base_f
    {
        ACE_RailHeightAboveBore=3.38951; // ACE3 checkScopes.sqf
        displayName="HK MP5-A2/FAB DEFENSE 9 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=63.9; // 2.9kg
        };
    };
    // 5.56x45mm
    class Famas_Base_F: Rifle_Base_F
    {
        ACE_barrelTwist=304.8; // 1:12"
        ACE_barrelLength=488;
        initSpeed=-0.99352; // 920, 984 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_ar_556_ds";
        opticsZoomMin=0.25;
        opticsZoomMax=1.25;
        opticsZoomInit=0.75;
        magazines[]=
        {
            "AMF_25Rnd_BO_BT_MEN_SS109",
            "AMF_25Rnd_BO_BT_MEN_M193",
            "AMF_25Rnd_BO_MEN_SS109",
            "AMF_25Rnd_BO_MEN_M193"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=83.3;
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.000499; // 3.05 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class Burst: Mode_Burst
        {
            dispersion=0.000499; // 3.05 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: Mode_FullAuto
        {
            dispersion=0.000499; // 3.05 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class Famas_F1: Famas_Base_F
    {
        ACE_RailHeightAboveBore=9.86445; // ACE3 checkScopes.sqf
        displayName="FAMAS F1 5,56 mm";
        descriptionShort="$STR_ld3k_amf_ar_556_ds";
        magazines[]=
        {
            "AMF_25Rnd_BO_BT_MEN_SS109",
            "AMF_25Rnd_BO_BT_MEN_M193",
            "AMF_25Rnd_BO_MEN_SS109",
            "AMF_25Rnd_BO_MEN_M193"
        };
        class WeaponSlotsInfo
        {
            mass=83.3;
        };
    };
    class FamasF1_GRIP_KAC_F: Famas_F1
    {
        displayName="FAMAS F1 5,56 mm"; // "Poignet Famas"
    };
    class Famas_F1_PGMP: Famas_Base_F
    {
        ACE_RailHeightAboveBore=9.64956; // ACE3 checkScopes.sqf
        displayName="FAMAS F1 Infanterie 5,56 mm";
        descriptionShort="$STR_ld3k_amf_ar_556_ds";
        magazines[]=
        {
            "AMF_25Rnd_BO_BT_MEN_SS109",
            "AMF_25Rnd_BO_BT_MEN_M193",
            "AMF_25Rnd_BO_MEN_SS109",
            "AMF_25Rnd_BO_MEN_M193"
        };
        class WeaponSlotsInfo
        {
            mass=83.3;
        };
    };
    class FamasF1PGMP_GRIP_KAC_F: Famas_F1_PGMP
    {
        displayName="FAMAS F1 Infanterie 5,56 mm"; // "Poignet Famas"
    };
    class Famas_F1_PGMP_RIS: Famas_Base_F
    {
        ACE_RailHeightAboveBore=10.0158; // ACE3 checkScopes.sqf
        displayName="FAMAS F1 Infanterie RIS 5,56 mm";
        descriptionShort="$STR_ld3k_amf_ar_556_ds";
        magazines[]=
        {
            "AMF_25Rnd_BO_BT_MEN_SS109",
            "AMF_25Rnd_BO_BT_MEN_M193",
            "AMF_25Rnd_BO_MEN_SS109",
            "AMF_25Rnd_BO_MEN_M193"
        };
        class WeaponSlotsInfo
        {
            mass=83.3;
        };
    };
    class FamasF1PGMPRIS_GRIP_KAC_F: Famas_F1_PGMP_RIS
    {
        displayName="FAMAS F1 Infanterie RIS 5,56 mm"; // "Poignet Famas"
    };
    class Famas_G2: Famas_Base_F
    {
        ACE_RailHeightAboveBore=9.86445; // ACE3 checkScopes.sqf
        ACE_barrelTwist=228.6; // 1:9"
        displayName="FAMAS G2 5,56 mm";
        descriptionShort="$STR_ld3k_amf_ar_556_ds";
        magazines[]=
        {
            "AMF_30Rnd_556x45_SS109_Tracer_Stanag",
            "AMF_30Rnd_556x45_SS109_Stanag",
            "AMF_30Rnd_556x45_M193_Stanag",
            "AMF_30Rnd_556x45_M196_Tracer_Stanag",
            "AMF_30Rnd_556x45_SS109_PMAG1",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG1",
            "AMF_30Rnd_556x45_SS109_PMAG2",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG2",
            "AMF_30Rnd_556x45_SS109_PMAG3",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG3"
        };
        class WeaponSlotsInfo
        {
            mass=82.6;
        };
    };
    class Famas_G2_PGMP: Famas_Base_F
    {
        ACE_RailHeightAboveBore=9.64956; // ACE3 checkScopes.sqf
        ACE_barrelTwist=228.6; // 1:9"
        displayName="FAMAS G2 PGMP 5,56 mm";
        descriptionShort="$STR_ld3k_amf_ar_556_ds";
        magazines[]=
        {
            "AMF_30Rnd_556x45_SS109_Tracer_Stanag",
            "AMF_30Rnd_556x45_SS109_Stanag",
            "AMF_30Rnd_556x45_M193_Stanag",
            "AMF_30Rnd_556x45_M196_Tracer_Stanag",
            "AMF_30Rnd_556x45_SS109_PMAG1",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG1",
            "AMF_30Rnd_556x45_SS109_PMAG2",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG2",
            "AMF_30Rnd_556x45_SS109_PMAG3",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG3"
        };
        class WeaponSlotsInfo
        {
            mass=82.6;
        };
    };
    class Famas_G2_PGMP_RIS: Famas_Base_F
    {
        ACE_RailHeightAboveBore=10.0158; // ACE3 checkScopes.sqf
        ACE_barrelTwist=228.6; // 1:9"
        displayName="FAMAS G2 PGMP RIS 5,56 mm";
        descriptionShort="$STR_ld3k_amf_ar_556_ds";
        magazines[]=
        {
            "AMF_30Rnd_556x45_SS109_Tracer_Stanag",
            "AMF_30Rnd_556x45_SS109_Stanag",
            "AMF_30Rnd_556x45_M193_Stanag",
            "AMF_30Rnd_556x45_M196_Tracer_Stanag",
            "AMF_30Rnd_556x45_SS109_PMAG1",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG1",
            "AMF_30Rnd_556x45_SS109_PMAG2",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG2",
            "AMF_30Rnd_556x45_SS109_PMAG3",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG3"
        };
        class WeaponSlotsInfo
        {
            mass=82.6;
        };
    };
    class Famas_Valo: Famas_Base_F
    {
        ACE_RailHeightAboveBore=4.97165; // ACE3 checkScopes.sqf
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=450; // Beretta barrel, 914 m/s according to ACE_ammoTempMuzzleVelocityShifts at the ACE3 default normal (ICAO)
        initSpeed=-0.98164; // 909, 972 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        displayName="FAMAS Valo 5,56 mm";
        descriptionShort="$STR_ld3k_amf_ar_556_ds";
        magazines[]=
        {
            "AMF_25Rnd_BO_BT_MEN_SS109",
            "AMF_25Rnd_BO_BT_MEN_M193",
            "AMF_25Rnd_BO_MEN_SS109",
            "AMF_25Rnd_BO_BT_MEN_SS109"
        };
        class Single: Single
        {
            dispersion=0.000507; // 3.1 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class Burst: Burst
        {
            dispersion=0.000507; // 3.1 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000507; // 3.1 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class WeaponSlotsInfo
        {
            mass=79;
        };
    };
    class FamasValo_GRIP_KAC_F: Famas_Valo
    {
        displayName="FAMAS Valo 5,56 mm"; // "Poignet Famas"
    };
    class Famas_FELIN: Famas_Base_F
    {
        ACE_RailHeightAboveBore=4.97165; // ACE3 checkScopes.sqf
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=450; // Beretta barrel, 914 m/s according to ACE_ammoTempMuzzleVelocityShifts at the ACE3 default normal (ICAO)
        initSpeed=-0.98164; // 909, 972 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        displayName="FAMAS FELIN 5,56 mm";
        descriptionShort="$STR_ld3k_amf_ar_556_ds";
        magazines[]=
        {
            "AMF_25Rnd_BO_BT_MEN_SS109",
            "AMF_25Rnd_BO_BT_MEN_M193",
            "AMF_25Rnd_BO_MEN_SS109",
            "AMF_25Rnd_BO_BT_MEN_SS109"
        };
        class Single: Single
        {
            dispersion=0.000507; // 3.1 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class Burst: Burst
        {
            dispersion=0.000507; // 3.1 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000507; // 3.1 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class WeaponSlotsInfo
        {
            mass=81.1;
        };
    };
    class AMF_SCAR_L_01_Base_F: Rifle_Base_F
    {
        ACE_RailHeightAboveBore=4.42826; // ACE3 checkScopes.sqf
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=254; // 10"
        initSpeed=-0.84665; // 784, 838 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_ar_556_ds";
        magazines[]=
        {
            "AMF_30Rnd_556x45_SS109_Tracer_Stanag",
            "AMF_30Rnd_556x45_SS109_Stanag",
            "AMF_30Rnd_556x45_M193_Stanag",
            "AMF_30Rnd_556x45_M196_Tracer_Stanag",
            "AMF_30Rnd_556x45_SS109_PMAG1",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG1",
            "AMF_30Rnd_556x45_SS109_PMAG2",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG2",
            "AMF_30Rnd_556x45_SS109_PMAG3",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG3"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=72.8; // 3.3 kg: 7.28 lb
        };
        opticsZoomMin=0.25;
        opticsZoomMax=1.25;
        opticsZoomInit=0.75;
        class SemiAuto: Mode_SemiAuto
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: Mode_FullAuto
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class AMF_SCAR_L_01_F: AMF_SCAR_L_01_Base_F
    {
        ACE_RailHeightAboveBore=4.42826; // ACE3 checkScopes.sqf
        displayName="FN SCAR L CQC 5,56 mm (Noir)";
    };
    class amf_ScarL_gripv_01_f: AMF_SCAR_L_01_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=72.8; // 3.3 kg: 7.28 lb
        };
    };
    class AMF_SCAR_L_01_F_TAN: AMF_SCAR_L_01_Base_F
    {
        displayName="FN SCAR L CQC 5,56 mm (Tan)";
    };
    class amf_ScarL_AngledGripBLK: AMF_SCAR_L_01_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=72.8; // 3.3 kg: 7.28 lb
        };
    };
    class AMF_SCAR_L_02_F: AMF_SCAR_L_01_Base_F
    {
        ACE_RailHeightAboveBore=4.38693; // ACE3 checkScopes.sqf
        ACE_barrelLength=368.3; // 14.5"
        initSpeed=-0.94276; // 873, 933 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        displayName="FN SCAR L STD 5,56 mm (Noir)";
        class SemiAuto: SemiAuto
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=77.2; // 3.5 kg: 7.72 lb
        };
    };
    class AMF_SCAR_L_02_F_TAN: AMF_SCAR_L_01_Base_F
    {
        ACE_barrelLength=368.3; // 14.5"
        initSpeed=-0.94276; // 873, 933 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        displayName="FN SCAR L STD 5,56 mm (Tan)";
        class SemiAuto: SemiAuto
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=77.2; // 3.5 kg: 7.72 lb
        };
    };
    class AMF_614_long_01_Base_F: Rifle_Base_F // https://www.heckler-koch.com/de.html
    {
        ACE_RailHeightAboveBore=3.02233; // ACE3 checkScopes.sqf
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=368.3; // 14.5"
        initSpeed=-0.94276; // 873, 933 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_ar_556_ds";
        opticsZoomMin=0.25;
        opticsZoomMax=1.25;
        opticsZoomInit=0.75;
        magazines[]=
        {
            "AMF_30Rnd_556x45_SS109_Tracer_Stanag",
            "AMF_30Rnd_556x45_SS109_Stanag",
            "AMF_30Rnd_556x45_M193_Stanag",
            "AMF_30Rnd_556x45_M196_Tracer_Stanag",
            "AMF_30Rnd_556x45_SS109_PMAG1",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG1",
            "AMF_30Rnd_556x45_SS109_PMAG2",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG2",
            "AMF_30Rnd_556x45_SS109_PMAG3",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG3"
        };
        class SemiAuto: Mode_SemiAuto
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: Mode_FullAuto
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=76.9; // 3.49kg
        };
    };
    class AMF_614_short_01_Base_F: Rifle_Base_F
    {
        ACE_RailHeightAboveBore=3.03725; // ACE3 checkScopes.sqf
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=279.4; // 11"
        initSpeed=-0.87257; // 808, 864 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_ar_556_ds";
        magazines[]=
        {
            "AMF_30Rnd_556x45_SS109_Tracer_Stanag",
            "AMF_30Rnd_556x45_SS109_Stanag",
            "AMF_30Rnd_556x45_M193_Stanag",
            "AMF_30Rnd_556x45_M196_Tracer_Stanag",
            "AMF_30Rnd_556x45_SS109_PMAG1",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG1",
            "AMF_30Rnd_556x45_SS109_PMAG2",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG2",
            "AMF_30Rnd_556x45_SS109_PMAG3",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG3"
        };
        class SemiAuto: Mode_SemiAuto
        {
            dispersion=0.000612; // 3.74 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: Mode_FullAuto
        {
            dispersion=0.000612; // 3.74 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.8; // 3.12kg
        };
    };
    class AMF_614_long_01_F: AMF_614_long_01_Base_F
    {
        ACE_RailHeightAboveBore=3.27632; // ACE3 checkScopes.sqf
        displayName="HK 416 F-S 5,56 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=76.9;
        };
    };
    class amf_614_gripv_01_f: AMF_614_long_01_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=76.9;
        };
    };
    class AMF_614_long_HK269_01_F: AMF_614_long_01_Base_F
    {
        ACE_RailHeightAboveBore=3.02233; // ACE3 checkScopes.sqf
        displayName="HK 416 F-S/HK269 5,56 mm";
        descriptionShort="$STR_ld3k_amf_ar_gl_556_ds";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=104.9;
        };
    };
    class AMF_HK416_F_Magpul_Stock: AMF_614_long_01_Base_F
    {
        ACE_RailHeightAboveBore=3.27632; // ACE3 checkScopes.sqf
        displayName="HK 416 F-S Crosse Magpul 5,56 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=76.9;
        };
    };
    class amf_HK416FS_gripv_01_f: AMF_HK416_F_Magpul_Stock
    {
        displayName="HK 416 F-S Crosse Magpul 5,56 mm"; // "HK416 F-S"
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=76.9;
        };
    };
    class amf_HK416FS_gript_01_f: AMF_HK416_F_Magpul_Stock
    {
        displayName="HK 416 F-S Crosse Magpul 5,56 mm"; // "HK416 F-S"
    };
    class AMF_HK416_C_Magpul_Stock: AMF_614_long_01_Base_F
    {
        ACE_RailHeightAboveBore=3.27632; // ACE3 checkScopes.sqf
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=279.4; // 11"
        initSpeed=-0.87257; // 808, 864 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        displayName="HK 416 F-C Crosse Magpul 5,56 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.8;
        };
    };
    class amf_HK416FC_gripv_01_f: AMF_HK416_C_Magpul_Stock // AMF_614_long_01_F
    {
        displayName="HK 416 F-C Crosse Magpul 5,56 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.8;
        };
    };
    class amf_HK416FC_gript_01_f: AMF_HK416_C_Magpul_Stock // AMF_614_long_01_F
    {
        displayName="HK 416 F-C Crosse Magpul 5,56 mm";
    };
    class AMF_614_short_01_F: AMF_614_short_01_Base_F
    {
        ACE_RailHeightAboveBore=3.27632; // ACE3 checkScopes.sqf
        displayName="HK 416 F-C 5,56 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.8;
        };
    };
    class amf_614s_gripv_01_f: AMF_614_short_01_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.8;
        };
    };
    class AMF_614_short_FS_BLK: AMF_614_short_01_Base_F
    {
        ACE_RailHeightAboveBore=3.03725; // ACE3 checkScopes.sqf
        displayName="$STR_ld3k_amf_hk416_11_moe_n";
        // displayName="HK 416A5 MOE (11 pouces)";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.8;
            class AMF_MuzzleSlot: asdg_MuzzleSlot_556 // MuzzleSlot
            {
            };
        };
    };
    class AMF_614_short_FS_TAN: AMF_614_short_01_Base_F
    {
        displayName="$STR_ld3k_amf_hk416_11_moe_ral_n";
        // displayName="HK 416A5 MOE (11 pouces/RAL8000)";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.8;
        };
    };
    class AMF_614_short_FS_TAN2: AMF_614_short_01_Base_F
    {
        displayName="$STR_ld3k_amf_hk416_11_moe_tan_n";
        // displayName="HK 416A5 MOE (11 pouces/Tan)";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.8;
        };
    };
    class AMF_614_short_fs_paint: AMF_614_short_01_Base_F
    {
        ACE_RailHeightAboveBore=3.08636; // ACE3 checkScopes.sqf
        displayName="$STR_ld3k_amf_hk416_11_moe_paint_n";
        // displayName="HK 416A5 MOE (11 pouces/Paint)";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.8;
        };
    };
    class AMF_614_short_FS4_BLK: AMF_614_short_01_Base_F
    {
        ACE_RailHeightAboveBore=3.03725; // ACE3 checkScopes.sqf
        displayName="$STR_ld3k_amf_hk416_11_moe_smr_n";
        // displayName="HK 416A5 MOE/SMR (11 pouces)";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.8;
        };
    };
    class AMF_614_short_FS4_TAN: AMF_614_short_01_Base_F
    {
        displayName="$STR_ld3k_amf_hk416_11_moe_smr_tan_n";
        // displayName="HK 416A5 MOE/SMR (11 pouces/Tan)";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.8;
        };
    };
    class AMF_614_short_FS4_tan2: AMF_614_short_01_Base_F
    {
        displayName="$STR_ld3k_amf_hk416_11_moe_smr_tdf_n";
        // displayName="HK 416A5 MOE/SMR (11 pouces/TDF)";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.8;
        };
    };
    class amf_sig552_01_Base_F: Rifle_Base_F // https://www.sigsauer.swiss/de/index.php
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=227; // ~9"
        initSpeed=-0.8067; // 747, 799, 228 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_ar_556_ds";
        canShootInWater=1; // SDAR_base_F
        opticsZoomMin=0.25;
        opticsZoomMax=1.25;
        opticsZoomInit=0.75;
        magazines[]=
        {
            "AMF_30Rnd_556x45_SIG_BO_BT_M196",
            "AMF_30Rnd_556x45_SIG_BO_M193",
            "AMF_30Rnd_556x45_SIG_BO_SS109",
            "AMF_30Rnd_556x45_SIG_BO_BT_SS109",
            "AMF_30Rnd_556x45_SIG_UW_mag"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=70.5; // 3.2 kg
        };
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType // SDAR_base_F
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion=0.000707; // 4.32 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class Burst: Mode_Burst
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType // SDAR_base_F
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion=0.000707; // 4.32 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType // SDAR_base_F
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion=0.000707; // 4.32 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class amf_sig552: amf_sig552_01_Base_F
    {
        ACE_RailHeightAboveBore=3.37583; // ACE3 checkScopes.sqf
        displayName="SIG 552 5,56 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=70.5;
        };
    };
    class FN_Minimi_Base_F: Rifle_Long_Base_F
    {
        ACE_barrelTwist=177.8;
        ACE_barrelLength=349; // 13.74"
        ace_overheating_allowSwapBarrel=1;
        maxZeroing=1000; // distance 5.56x45 M995 Mach 0.8 (272m/s) ICAO
        initSpeed=-0.9298; // 861, 920, 958 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_lmg_556_ds";
        magazines[]=
        {
            "AMF_100Rnd_556x45_Minimi_BO_BT_SS109_DCP",
            "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP",
            "AMF_100Rnd_556x45_Minimi_M995_AP3_DCP",
            "AMF_100Rnd_556x45_Minimi_BO_SS109_OD",
            "AMF_100Rnd_556x45_Minimi_BO_BT_SS109_OD",
            "AMF_100Rnd_556x45_Minimi_M995_AP3_OD",
            "AMF_30Rnd_556x45_SS109_Stanag",
            "AMF_30Rnd_556x45_SS109_Tracer_Stanag",
            "AMF_30Rnd_556x45_M193_Stanag",
            "AMF_30Rnd_556x45_M196_Tracer_Stanag",
            "AMF_30Rnd_556x45_SS109_PMAG1",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG1",
            "AMF_30Rnd_556x45_SS109_PMAG2",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG2",
            "AMF_30Rnd_556x45_SS109_PMAG3",
            "AMF_30Rnd_556x45_SS109_Tracer_PMAG3"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=176.4;
        };
        class Manual: Mode_FullAuto
        {
            dispersion=0.000551; // 3.37 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class FN_Minimi_F1: FN_Minimi_Base_F
    {
        ACE_RailHeightAboveBore=6.35777; // ACE3 checkScopes.sqf
        displayName="FN Minimi F1 5,56 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=176.4;
        };
    };
    class FN_Minimi_FELIN: FN_Minimi_Base_F
    {
        ACE_RailHeightAboveBore=4.56236; // ACE3 checkScopes.sqf
        displayName="FN Minimi FELIN 5,56 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=176.4;
            class CowsSlot: asdg_OpticRail1913
            {
                iconPosition[]={0.45,0.27};
                iconScale=0.2;
            };
        };
    };
    class FN_Minimi_MK3: FN_Minimi_Base_F
    {
        ACE_RailHeightAboveBore=4.56236; // ACE3 checkScopes.sqf
        displayName="FN Minimi MK3 5,56 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=176.4;
            class CowsSlot: asdg_OpticRail1913
            {
                iconPosition[]={0.45,0.27};
                iconScale=0.2;
            };
            class PointerSlot: asdg_FrontSideRail
            {
                iconPosition[]={0.33,0.40};
                iconScale=0.2;
            };
        };
    };
    // 7.62x56mm
    class AMF_SCAR_H_01_Base_F: Rifle_Base_F // https://fnherstal.com/en/
    {
        ACE_RailHeightAboveBore=4.42867; // ACE3 checkScopes.sqf
        ACE_barrelTwist=279.4; // 1:11", best gyroscopic stability factor compromise for the MEN bullets (unknown real value)
        ACE_barrelLength=508; // 20"
        maxZeroing=1600; // distance 7.62x51 OTM 175 gr Mach 0.8 (272m/s) ICAO
        initSpeed=-1; // 825, 830, 809, 789 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_mr_762_ds";
        opticsZoomMin=0.25;
        opticsZoomMax=1.25;
        opticsZoomInit=0.75;
        magazines[]=
        {
            "AMF_20Rnd_762x51_SCAR_BLK_BO_F3",
            "AMF_20Rnd_762x51_SCAR_TAN_BO_F3",
            "AMF_20Rnd_308WIN_SCAR_BLK_AP",
            "AMF_20Rnd_308WIN_SCAR_TAN_AP",
            "AMF_20Rnd_308WIN_SCAR_BLK_CBC_168GR_HPBT",
            "AMF_20Rnd_308WIN_SCAR_TAN_CBC_168GR_HPBT",
            "AMF_20Rnd_762x51_SCAR_BLK_IMI_175GR",
            "AMF_20Rnd_762x51_SCAR_TAN_IMI_175GR"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=99.2;
        };
        class SemiAuto: Mode_SemiAuto
        {
            dispersion=0.000253; // 1.55 MOA*0.562*0.000291, AMF 0.0002 (0.69 MOA)
        };
        class FullAuto: Mode_FullAuto
        {
            dispersion=0.000253; // 1.55 MOA*0.562*0.000291, AMF 0.0002 (0.69 MOA)
        };
    };
    class AMF_SCAR_H_01_F: AMF_SCAR_H_01_Base_F
    {
        ACE_RailHeightAboveBore=4.42867; // ACE3 checkScopes.sqf
        displayName="FN SCAR H PR FPSA 7,62 mm";
        picture="\ld3k_amf_compat_ace3\data\ui\ld3k_amf_gear_scarh_pr_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot_762
            {
                iconPosition[]={0.05,0.4};
                iconScale=0.2;
            };
            class CowsSlot: asdg_OpticRail1913
            {
                iconPosition[]={0.5,0.33};
                iconScale=0.2;
            };
            class PointerSlot: asdg_FrontSideRail
            {
                iconPosition[]={0.3,0.4};
                iconScale=0.2;
            };
            class UnderBarrelSlot: UnderBarrelSlot
            {
                iconPosition[]={0.3,0.7};
                iconScale=0.25;
            };
        };
    };
    class AMF_SCAR_H_02_F: AMF_SCAR_H_01_Base_F
    {
        ACE_RailHeightAboveBore=4.42867; // ACE3 checkScopes.sqf
        ACE_barrelTwist=304.8; // 1:12"
        ACE_barrelLength=406.4; // 16"
        maxZeroing=1500; // distance 7.62x51 OTM 175 gr Mach 0.8 (272m/s) ICAO
        initSpeed=-0.95636; // 789, 794, 774, 754 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        displayName="FN SCAR H STD 7,62 mm (Tan)";
        descriptionShort="$STR_ld3k_amf_ar_762_ds";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=80;
        };
        class SemiAuto: SemiAuto
        {
            dispersion=0.000525; // 3.21 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000525; // 3.21 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class AMF_SCAR_H_02_F_BLK: AMF_SCAR_H_01_Base_F
    {
        ACE_barrelTwist=304.8; // 1:12"
        ACE_barrelLength=406.4; // 16"
        maxZeroing=1500; // distance 7.62x51 OTM 175 gr Mach 0.8 (272m/s) ICAO
        initSpeed=-0.95636; // 789, 794, 774, 754 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        displayName="FN SCAR H STD 7,62 mm (Noir)";
        descriptionShort="$STR_ld3k_amf_ar_762_ds";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=80;
        };
        class SemiAuto: SemiAuto
        {
            dispersion=0.000525; // 3.21 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000525; // 3.21 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class AMF_SCAR_H_03_F: AMF_SCAR_H_01_Base_F
    {
        ACE_RailHeightAboveBore=4.42867; // ACE3 checkScopes.sqf
        ACE_barrelTwist=254; // 1:10"
        ACE_barrelLength=330.2; // 13"
        maxZeroing=1400; // distance 7.62x51 OTM 175 gr Mach 0.8 (272m/s) ICAO
        initSpeed=-0.91; // 751, 755, 736, 718 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        displayName="FN SCAR H CQC 7,62 mm (Tan)";
        descriptionShort="$STR_ld3k_amf_ar_762_ds";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=76.2;
        };
        class SemiAuto: SemiAuto
        {
            dispersion=0.000576; // 3.52 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000576; // 3.52 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class AMF_SCAR_H_03_F_BLK: AMF_SCAR_H_01_Base_F
    {
        ACE_barrelTwist=254; // 1:10"
        ACE_barrelLength=330.2; // 13"
        maxZeroing=1400; // distance 7.62x51 OTM 175 gr Mach 0.8 (272m/s) ICAO
        initSpeed=-0.91; // 751, 755, 736, 718 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        displayName="FN SCAR H CQC 7,62 mm (Noir)";
        descriptionShort="$STR_ld3k_amf_ar_762_ds";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=76.2;
        };
        class SemiAuto: SemiAuto
        {
            dispersion=0.000576; // 3.52 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000576; // 3.52 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class AMF_HK417_Base_F: Rifle_Base_F
    {
        ACE_barrelTwist=279.4; // 1:11"
        ACE_barrelLength=406.4; // 16"
        maxZeroing=1500; // distance 7.62x51 OTM 175 gr Mach 0.8 (272m/s) ICAO
        initSpeed=-0.95636; // 789, 794, 774, 754 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_ar_762_ds";
        opticsZoomMin=0.25;
        opticsZoomMax=1.25;
        opticsZoomInit=0.75;
        magazines[]=
        {
            "AMF_20Rnd_762x51_HK417_BO_F3",
            "AMF_20Rnd_762x51_HK417_AP",
            "AMF_20Rnd_308WIN_HK417_HPBT",
            "AMF_20Rnd_762x51_HK417_IMI_175GR"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=97; // 4.40 kg, 9.7 lbs
        };
        class SemiAuto: Mode_SemiAuto
        {
            dispersion=0.000525; // 3.21 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: Mode_FullAuto
        {
            dispersion=0.000525; // 3.21 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class AMF_HK417_F: AMF_HK417_Base_F
    {
        ACE_RailHeightAboveBore=3.0671; // ACE3 checkScopes.sqf
        displayName="$STR_ld3k_amf_hk417_16_blk_n";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=97; // 4.40 kg, 9.7 lbs
        };
    };
    class AMF_HK417_Tan_F: AMF_HK417_Base_F
    {
        ACE_RailHeightAboveBore=3.0671; // ACE3 checkScopes.sqf
        displayName="$STR_ld3k_amf_hk417_16_sable_n";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=97; // 4.40 kg, 9.7 lbs
        };
    };
    class AMF_HK417_Short: AMF_HK417_Base_F
    {
        ACE_RailHeightAboveBore=3.10754; // ACE3 checkScopes.sqf
        ACE_barrelTwist=279.4; // 1:11"
        ACE_barrelLength=330.2; // 13"
        maxZeroing=1400; // distance 7.62x51 OTM 175 gr Mach 0.8 (272m/s) ICAO
        initSpeed=-0.91; // 751, 755, 736, 718 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_ar_762_ds";
        displayName="$STR_ld3k_amf_hk417_13_blk_n";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=93; // 4.22 kg, 9.3 lbs
        };
        class SemiAuto: SemiAuto
        {
            dispersion=0.000576; // 3.52 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000576; // 3.52 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class AMF_HK417_Short_Tan: AMF_HK417_Base_F
    {
        ACE_RailHeightAboveBore=3.10754; // ACE3 checkScopes.sqf
        ACE_barrelTwist=279.4; // 1:11"
        ACE_barrelLength=330.2; // 13"
        maxZeroing=1400; // distance 7.62x51 OTM 175 gr Mach 0.8 (272m/s) ICAO
        initSpeed=-0.91; // 751, 755, 736, 718 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_ar_762_ds";
        displayName="$STR_ld3k_amf_hk417_13_ral_n";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=93; // 4.22 kg, 9.3 lbs
        };
        class SemiAuto: SemiAuto
        {
            dispersion=0.000576; // 3.52 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000576; // 3.52 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class amf_aanf1_base_f: Rifle_Long_Base_F
    {
        ACE_barrelTwist=304.8; // 1:12"
        ACE_barrelLength=500;
        maxZeroing=1100; // distance 7.62x51 MEN 147 gr Mach 0.8 (272m/s) ICAO
        ace_overheating_allowSwapBarrel=1;
        initSpeed=-0.9964; // 822 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_lmg_762_ds";
        magazines[]=
        {
            "AMF_50Rnd_762x51_AANF1_BO_F3",
            "AMF_75Rnd_762x51_AANF1_BO_F3",
            "AMF_100Rnd_762x51_AANF1_BO_F3",
            "AMF_200Rnd_762x51_AANF1_BO_F3"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=201.7;
        };
        class Manual: Mode_FullAuto
        {
            dispersion=0.000489; // 2.99 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class amf_aanf1_01_f: amf_aanf1_base_f
    {
        displayName="AANF1 7,62 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=201.7;
        };
    };
    class amf_mag58_01_f: Rifle_Long_Base_F
    {
        ACE_RailHeightAboveBore=3.21167; // ACE3 checkScopes.sqf
        ACE_barrelTwist=304.8; // 1:12"
        ACE_barrelLength=630; // 24.80"
        ace_overheating_allowSwapBarrel=1;
        maxZeroing=1100; // distance 7.62x51 MEN 147 gr Mach 0.8 (272m/s) ICAO
        initSpeed=-1.02788; // 848 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        displayName="FN Mag 58 7,62 mm";
        descriptionShort="$STR_ld3k_amf_lmg_762_ds";
        magazines[]=
        {
            "AMF_50Rnd_762x51_MAG58_BO_F3",
            "AMF_75Rnd_762x51_MAG58_BO_F3",
            "AMF_100Rnd_762x51_MAG58_BO_F3",
            "AMF_200Rnd_762x51_MAG58_BO_F3"
        };
        class manual: Mode_FullAuto
        {
            dispersion=0.000466; // 2.85 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=260.1;
            class CowsSlot: asdg_OpticRail1913
            {
                iconPosition[]={0.45,0.27};
                iconScale=0.2;
            };
            class PointerSlot: asdg_FrontSideRail
            {
                iconPosition[]={0.33,0.40};
                iconScale=0.2;
            };
        };
    };
    class AMF_RFF2_01_F: Rifle_Long_Base_F
    {
        ACE_RailHeightAboveBore=2.2807; // ACE3 checkScopes.sqf
        ACE_barrelTwist=295;
        ACE_barrelLength=600;
        ace_overheating_closedBolt=1;
        initSpeed=-1; // 820, 828, 807 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_mr_762_ds";
        maxZeroing=1600; // distance 7.62x51 OTM 175 gr Mach 0.8 (272m/s) ICAO
        displayName="FR-F2 7,62 mm";
        magazines[]=
        {
            "AMF_10Rnd_762x51_BO_F3",
            "AMF_10Rnd_308WIN_CBC_168GR_HPBT",
            "AMF_10Rnd_762x51_IMI_175GR"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=112.4; // 5.1kg
            class CowsSlot: CowsSlot
            {
                compatibleItems[]=
                {
                    "ScromeJ8",
                    "ScromeJ8_NoCover",
                    "ScromeJ8_MilDot",
                    "ScromeJ8_NoCover_MilDot"
                };
            };
        };
        delete bg_weaponparameters;
        class EventHandlers
        {
            fired="_this call CBA_fnc_weaponEvents";
        };
        class CBA_weaponEvents
        {
            handAction="AMF_FPF2_Gesture_Rechamber";
            sound="AMF_FPF2_BOLT_SOUND";
            soundLocation="RightHandMiddle1";
            delay=0;
            onEmpty=0;
            cartridgeType="FxCartridge_762";
            cartridgeEjectPosition[]={0.01,0.01,0.095};
            cartridgeEjectVelocity[]={0,1.3,1};
            cartridgeEjectDelay=0.5;
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.000258; // 1.58 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class AMF_PGM_ULTIMA_RATIO_F: Rifle_Long_Base_F
    {
        ACE_RailHeightAboveBore=2.80322; // ACE3 checkScopes.sqf
        ACE_barrelTwist=304.8; // 1:12"
        ACE_barrelLength=550; // PGM barrel Commando 1
        maxZeroing=1600; // distance 7.62x51 OTM 175 gr Mach 0.8 (272m/s) ICAO
        ace_overheating_closedBolt=1;
        initSpeed=-1.010754; // 834, 839, 818, 797 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_mr_762_ds";
        displayName="PGM Ultima Ratio 7,62 mm";
        magazines[]=
        {
            "AMF_10Rnd_308WIN_UR_CBC_168GR_HPBT",
            "AMF_10Rnd_762x51_UR_BO_F3",
            "AMF_10Rnd_762x51_UR_BO_F3_Tracer_Red",
            "AMF_10Rnd_762x51_UR_BO_F3_Tracer_Ir",
            "AMF_10Rnd_762x51_UR_AP",
            "AMF_10Rnd_762x51_UR_IMI_175GR",
            "AMF_10Rnd_762x51_UR_200gr_FMJBT"
        };
        delete bg_weaponparameters;
        class EventHandlers
        {
            fired="_this call CBA_fnc_weaponEvents";
        };
        class CBA_weaponEvents
        {
            handAction="AMF_PGM_ULTIMA_RATIO_Gesture_Rechamber";
            sound="AMF_PGM_ULTIMA_RATIO_BOLT_SOUND";
            soundLocation="RightHandMiddle1";
            delay=0.02;
            onEmpty=0;
            cartridgeType="FxCartridge_762";
            cartridgeEjectPosition[]={0.01,0.01,0.1};
            cartridgeEjectVelocity[]={0,1.3,1};
            cartridgeEjectDelay=0.5;
        };
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            sounds[]=
            {
                "StandardSound",
                "SilencedSound"
            };
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[]=
                {
                    "DMR02_Shot_SoundSet",
                    "DMR02_tail_SoundSet",
                    "DMR02_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                SoundSetShot[]=
                {
                    "DMR06_silencerShot_SoundSet",
                    "DMR06_silencerTail_SoundSet",
                    "DMR06_silencerInteriorTail_SoundSet"
                };
            };
            dispersion=0.000286; // 1.75 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=143; // 6.5kg
            class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[]=
                {
                    "muzzle_snds_B",
                    "muzzle_snds_B_khk_F",
                    "muzzle_snds_B_snd_F",
                    "muzzle_snds_B_lush_F",
                    "muzzle_snds_B_arid_F"
                };
            };
            class CowsSlot: asdg_OpticRail1913
            {
                iconPosition[]={0.45,0.38};
                iconScale=0.2;
            };
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[]=
                {
                    "bipod_01_F_snd",
                    "bipod_01_F_blk",
                    "bipod_01_F_mtp",
                    "bipod_01_F_khk",
                    "bipod_02_F_blk",
                    "bipod_02_F_tan",
                    "bipod_02_F_hex",
                    "bipod_02_F_lush",
                    "bipod_02_F_arid",
                    "bipod_03_F_blk",
                    "bipod_03_F_oli"
                };
                linkProxy="\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
                iconPinpoint="Bottom";
                iconPosition[]={0.2,0.7};
                iconScale=0.2;
            };
        };
    };
    // 12.7x99mm
    class AMF_PGM_Hecate_II: Rifle_Long_Base_F
    {
        ACE_RailHeightAboveBore=3.60842; // ACE3 checkScopes.sqf
        ACE_barrelTwist=381;
        ACE_barrelLength=700; // 780 m/s according to ACE_ammoTempMuzzleVelocityShifts at the ACE3 default normal (ICAO)
        ace_overheating_closedBolt=1;
        maxZeroing=3300; // distance 12.7x99 AMAX Mach 0.8 (272m/s) ICAO
        initSpeed=-1; // 780, 814, 1116 m/s according to ACE_ammoTempMuzzleVelocityShifts ICAO (15°C, 1013.25 hPa, 0%)
        descriptionShort="$STR_ld3k_amf_sr_127_ds";
        displayName="PGM Hecate II (Bois) 12,7 mm";
        magazines[]=
        {
            "AMF_7Rnd_127x99_HECATE2_IMI_661GR_FMJ",
            "AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ",
            "AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ_Tracer_Red",
            "AMF_7Rnd_127x99_HECATE2_CBC_770GR_BSS",
            "AMF_7Rnd_127x99_HECATE2_CBC_774GR_APSS",
            "AMF_7Rnd_127x99_HECATE2_CBC_774GR_APSS_Tracer_Red"
        };
        magazineWell[]={};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=337.3; // 15.3 kg: PGM Hécate 2 official manual
            class CowsSlot: CowsSlot
            {
                compatibleItems[]=
                {
                    "ScromeJ10",
                    "ScromeJ10_NoCover",
                    "ScromeJ10_MilDot",
                    "ScromeJ10_NoCover_MilDot"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[]={};
            };
        };
        delete bg_weaponparameters;
        class EventHandlers
        {
            fired="_this call CBA_fnc_weaponEvents";
        };
        class CBA_weaponEvents
        {
            handAction="AMF_Perseis_II_Gesture_Rechamber";
            sound="AMF_Perseis_II_BOLT_SOUND";
            soundLocation="RightHandMiddle1";
            delay=0.02;
            onEmpty=0;
            cartridgeType="FxCartridge_127";
            cartridgeEjectPosition[]={0.05,0.01,0.09};
            cartridgeEjectVelocity[]={0,1.1,0.8};
            cartridgeEjectDelay=0.5;
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.000168; // 1.03 MOA (*0.562*0.000291), 0.562 https://github.com/acemod/ACE3/pull/5755
        };
    };
    class AMF_PGM_Hecate_II_RIS: AMF_PGM_Hecate_II
    {
        ACE_RailHeightAboveBore=2.35279; // ACE3 checkScopes.sqf
        displayName="PGM Hecate II RIS (Bois) 12,7 mm";
        descriptionShort="$STR_ld3k_amf_sr_127_ds";
        magazines[]=
        {
            "AMF_7Rnd_127x99_HECATE2_IMI_661GR_FMJ",
            "AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ",
            "AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ_Tracer_Red",
            "AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ_Tracer_Ir",
            "AMF_7Rnd_127x99_HECATE2_CBC_770GR_BSS",
            "AMF_7Rnd_127x99_HECATE2_CBC_774GR_APSS",
            "AMF_7Rnd_127x99_HECATE2_CBC_774GR_APSS_Tracer_Red",
            "AMF_7Rnd_127x99_HECATE2_AMAX",
            "AMF_7Rnd_127x99_HECATE2_M903_SLAP",
            "AMF_7Rnd_127x99_HECATE2_M962_SLAP_Tracer_Red"
        };
        class WeaponSlotsInfo
        {
            mass=337.3; // 15.3 kg: PGM Hécate 2 official manual
            class CowsSlot: asdg_OpticRail1913
            {
                iconPosition[]={0.45,0.27};
                iconScale=0.2;
            };
        };
    };
    class AMF_PGM_Hecate_II_Poly: AMF_PGM_Hecate_II
    {
        ACE_RailHeightAboveBore=3.60842; // ACE3 checkScopes.sqf
        displayName="PGM Hecate II (Polymer) 12,7 mm";
        descriptionShort="$STR_ld3k_amf_sr_127_ds";
        magazines[]=
        {
            "AMF_7Rnd_127x99_HECATE2_IMI_661GR_FMJ",
            "AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ",
            "AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ_Tracer_Red",
            "AMF_7Rnd_127x99_HECATE2_CBC_770GR_BSS",
            "AMF_7Rnd_127x99_HECATE2_CBC_774GR_APSS",
            "AMF_7Rnd_127x99_HECATE2_CBC_774GR_APSS_Tracer_Red"
        };
        magazineWell[]={};
        class WeaponSlotsInfo
        {
            mass=337.3; // 15.3 kg: PGM Hécate 2 official manual
            class CowsSlot: CowsSlot
            {
                compatibleItems[]=
                {
                    "ScromeJ10",
                    "ScromeJ10_NoCover",
                    "ScromeJ10_MilDot",
                    "ScromeJ10_NoCover_MilDot"
                };
            };
        };
    };
    class AMF_PGM_Hecate_II_Poly_RIS: AMF_PGM_Hecate_II_Poly
    {
        ACE_RailHeightAboveBore=3.00679; // ACE3 checkScopes.sqf
        displayName="PGM Hecate II RIS (Polymer) 12,7 mm";
        descriptionShort="$STR_ld3k_amf_sr_127_ds";
        magazines[]=
        {
            "AMF_7Rnd_127x99_HECATE2_IMI_661GR_FMJ",
            "AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ",
            "AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ_Tracer_Red",
            "AMF_7Rnd_127x99_HECATE2_MEN_648GR_FMJ_Tracer_Ir",
            "AMF_7Rnd_127x99_HECATE2_CBC_770GR_BSS",
            "AMF_7Rnd_127x99_HECATE2_CBC_774GR_APSS",
            "AMF_7Rnd_127x99_HECATE2_CBC_774GR_APSS_Tracer_Red",
            "AMF_7Rnd_127x99_HECATE2_AMAX",
            "AMF_7Rnd_127x99_HECATE2_M903_SLAP",
            "AMF_7Rnd_127x99_HECATE2_M962_SLAP_Tracer_Red"
        };
        class WeaponSlotsInfo
        {
            mass=337.3; // 15.3 kg: PGM Hécate 2 official manual
            class CowsSlot: asdg_OpticRail1913
            {
                iconPosition[]={0.45,0.27};
                iconScale=0.2;
            };
        };
    };
    // Optics
    class ScromeJ4_RIS: ItemCore
    {
        ACE_ScopeZeroRange=300;
        ACE_ScopeHeightAboveRail=3.70865; // ACE3 checkScopes.sqf
        ACE_ScopeAdjust_Vertical[]={-8,8};
        ACE_ScopeAdjust_Horizontal[]={-8,8};
        ACE_ScopeAdjust_VerticalIncrement=0.2;
        ACE_ScopeAdjust_HorizontalIncrement=0.2;
        displayName="$STR_ld3k_amf_optic_j4_n";
        descriptionShort="$STR_ld3k_amf_optic_j4_ds";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=8.4; // 380g according to official documentation
            class OpticsModes
            {
                delete view_3D;
                class J4_Scope_2D
                {
                    opticsID=1;
                    useModelOptics=1;
                    opticsZoomMin=0.075; // 4x: 0.3/4
                    opticsZoomMax=0.075; // 4x: 0.3/4
                    opticsZoomInit=0.075; // 4x: 0.3/4
                    discretefov[]={0.075,0.075}; // 4x, 4x illum
                    discreteInitIndex=0;
                    discreteDistance[]={350};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=350; // Réglage initial 300m, point visé = point touché - Zeroing 300m, POA = POI
                    distanceZoomMax=350; // Réglage initial 300m, point visé = point touché - Zeroing 300m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j4_cover",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j4_illum_cover"
                    };
                    visionMode[]=
                    {
                        "Normal"
                    };
                };
            };
        };
    };
    class ScromeJ4_RIS_NoCover: ScromeJ4_RIS
    {
        ACE_ScopeHeightAboveRail=3.70865; // ACE3 checkScopes.sqf
        displayName="$STR_ld3k_amf_optic_j4_nocover_n";
        descriptionShort="$STR_ld3k_amf_optic_j4_ds";
        class ItemInfo: ItemInfo
        {
            mass=8.4;
            class OpticsModes: OpticsModes
            {
                delete view_3D;
                class J4_Scope_2D: J4_Scope_2D
                {
                    opticsID=1;
                    useModelOptics=1;
                    opticsZoomMin=0.075; // 4x: 0.3/4
                    opticsZoomMax=0.075; // 4x: 0.3/4
                    opticsZoomInit=0.075; // 4x: 0.3/4
                    discretefov[]={0.075,0.075}; // 4x, 4x illum
                    discreteInitIndex=0;
                    discreteDistance[]={350};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=350; // Réglage initial 300m, point visé = point touché - Zeroing 300m, POA = POI
                    distanceZoomMax=350; // Réglage initial 300m, point visé = point touché - Zeroing 300m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j4",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j4_illum"
                    };
                    visionMode[]=
                    {
                        "Normal"
                    };
                };
            };
        };
    };
    class ScromeJ4_Minimi: ScromeJ4_RIS
    {
        ACE_ScopeHeightAboveRail=2.4114; // ACE3 checkScopes.sqf
        displayName="$STR_ld3k_amf_optic_j4_minimi_n";
        descriptionShort="$STR_ld3k_amf_optic_j4_ds";
        class ItemInfo: ItemInfo
        {
            mass=8.4;
            class OpticsModes: OpticsModes
            {
                delete view_3D;
                class J4_Scope_2D: J4_Scope_2D
                {
                    opticsID=1;
                    useModelOptics=1;
                    opticsZoomMin=0.075; // 4x: 0.3/4
                    opticsZoomMax=0.075; // 4x: 0.3/4
                    opticsZoomInit=0.075; // 4x: 0.3/4
                    discretefov[]={0.075,0.075}; // 4x, 4x illum
                    discreteInitIndex=0;
                    discreteDistance[]={350};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=350; // Réglage initial 300m, point visé = point touché - Zeroing 300m, POA = POI
                    distanceZoomMax=350; // Réglage initial 300m, point visé = point touché - Zeroing 300m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j4_cover",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j4_illum_cover"
                    };
                    visionMode[]=
                    {
                        "Normal"
                    };
                };
            };
        };
    };
    class ScromeJ4_Minimi_NoCover: ScromeJ4_RIS
    {
        ACE_ScopeHeightAboveRail=2.4114; // ACE3 checkScopes.sqf
        displayName="$STR_ld3k_amf_optic_j4_minimi_nocover_n";
        descriptionShort="$STR_ld3k_amf_optic_j4_ds";
        class ItemInfo: ItemInfo
        {
            mass=8.4;
            class OpticsModes: OpticsModes
            {
                delete view_3D;
                class J4_Scope_2D: J4_Scope_2D
                {
                    opticsID=1;
                    useModelOptics=1;
                    opticsZoomMin=0.075; // 4x: 0.3/4
                    opticsZoomMax=0.075; // 4x: 0.3/4
                    opticsZoomInit=0.075; // 4x: 0.3/4
                    discretefov[]={0.075,0.075}; // 4x, 4x illum
                    discreteInitIndex=0;
                    discreteDistance[]={350};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=350; // Réglage initial 300m, point visé = point touché - Zeroing 300m, POA = POI
                    distanceZoomMax=350; // Réglage initial 300m, point visé = point touché - Zeroing 300m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j4",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j4_illum"
                    };
                    visionMode[]=
                    {
                        "Normal"
                    };
                };
            };
        };
    };
    class ScromeJ4_PGMP: ItemCore
    {
        ACE_ScopeZeroRange=300;
        ACE_ScopeHeightAboveRail=3.20775; // ACE3 checkScopes.sqf
        ACE_ScopeAdjust_Vertical[]={-8,8};
        ACE_ScopeAdjust_Horizontal[]={-8,8};
        ACE_ScopeAdjust_VerticalIncrement=0.2;
        ACE_ScopeAdjust_HorizontalIncrement=0.2;
        displayName="$STR_ld3k_amf_optic_j4_inf_n";
        descriptionShort="$STR_ld3k_amf_optic_j4_ds";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=8.4;
            class OpticsModes
            {
                delete view_3D;
                class J4_Scope_2D
                {
                    opticsID=1;
                    useModelOptics=1;
                    opticsZoomMin=0.075; // 4x: 0.3/4
                    opticsZoomMax=0.075; // 4x: 0.3/4
                    opticsZoomInit=0.075; // 4x: 0.3/4
                    discretefov[]={0.075,0.075}; // 4x, 4x illum
                    discreteInitIndex=0;
                    discreteDistance[]={350};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=350; // Réglage initial 300m, point visé = point touché - Zeroing 300m, POA = POI
                    distanceZoomMax=350; // Réglage initial 300m, point visé = point touché - Zeroing 300m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j4_cover",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j4_illum_cover"
                    };
                    visionMode[]=
                    {
                        "Normal"
                    };
                };
                class ironsight_Famas
                {
                    opticsID=2;
                    useModelOptics=0;
                    opticsPPEffects[]=
                    {
                        ""
                    };
                    opticsZoomMin=0.25;
                    opticsZoomMax=1.25;
                    opticsZoomInit=0.75;
                    memoryPointCamera="eye";
                    visionMode[]={};
                    opticsFlare=0;
                    opticsDisablePeripherialVision=0;
                    distanceZoomMin=300;
                    distanceZoomMax=300;
                    cameraDir="";
                };
            };
        };
    };
    class ScromeJ4_PGMP_NoCover: ScromeJ4_PGMP
    {
        ACE_ScopeHeightAboveRail=3.20775; // ACE3 checkScopes.sqf
        displayName="$STR_ld3k_amf_optic_j4_inf_nocover_n";
        descriptionShort="$STR_ld3k_amf_optic_j4_ds";
        class ItemInfo: ItemInfo
        {
            mass=8.4;
            class OpticsModes: OpticsModes
            {
                delete view_3D;
                class J4_Scope_2D: J4_Scope_2D
                {
                    opticsID=1;
                    useModelOptics=1;
                    opticsZoomMin=0.075; // 4x: 0.3/4
                    opticsZoomMax=0.075; // 4x: 0.3/4
                    opticsZoomInit=0.075; // 4x: 0.3/4
                    discretefov[]={0.075,0.075}; // 4x, 4x illum
                    discreteInitIndex=0;
                    discreteDistance[]={350};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=350; // Réglage initial 300m, point visé = point touché - Zeroing 300m, POA = POI
                    distanceZoomMax=350; // Réglage initial 300m, point visé = point touché - Zeroing 300m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j4",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j4_illum"
                    };
                    visionMode[]=
                    {
                        "Normal"
                    };
                };
                class ironsight_Famas: ironsight_Famas
                {
                };
            };
        };
    };
    class ScromeJ8: ItemCore // http://www.scrome.com/assets/templates/flexibility/pdf/Scrome_Marksman_Scope_LTE_Datasheet_GB.pdf
    {
        ACE_ScopeHeightAboveRail=3.2375; // ACE3 checkScopes.sqf
        ACE_ScopeZeroRange=100;
        ACE_ScopeAdjust_Vertical[]={-10,10};
        ACE_ScopeAdjust_Horizontal[]={-10,10};
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        descriptionShort="$STR_ld3k_amf_optic_j8_ds";
        displayName="$STR_ld3k_amf_optic_j8_n";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=16.3; // 740g according to official documentation
            class OpticsModes
            {
                class Snip
                {
                    opticsZoomMin=0.0375; // 8x: 0.3/8
                    opticsZoomMax=0.0375; // 8x: 0.3/8
                    opticsZoomInit=0.0375; // 8x: 0.3/8
                    discretefov[]={0.0375,0.0375};
                    discreteInitIndex=0;
                    discreteDistance[]={180};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=180; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    distanceZoomMax=180; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j8_vanilla_cover",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j8_gyro_cover"
                    };
                };
            };
        };
    };
    class ScromeJ8_NoCover: ScromeJ8
    {
        displayName="$STR_ld3k_amf_optic_j8_nocover_n";
        descriptionShort="$STR_ld3k_amf_optic_j8_ds";
        class ItemInfo: ItemInfo
        {
            mass=16.3;
            class OpticsModes: OpticsModes
            {
                class Snip: Snip
                {
                    opticsZoomMin=0.0375; // 8x: 0.3/8
                    opticsZoomMax=0.0375; // 8x: 0.3/8
                    opticsZoomInit=0.0375; // 8x: 0.3/8
                    discretefov[]={0.0375,0.0375};
                    discreteInitIndex=0;
                    discreteDistance[]={180};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=180; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    distanceZoomMax=180; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j8_vanilla",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j8_gyro"
                    };
                };
            };
        };
    };
    class ScromeJ8_MilDot: ScromeJ8
    {
        ACE_ScopeAdjust_Vertical[]={0,20};
        author="Laid3acK";
        descriptionShort="$STR_ld3k_amf_optic_j8_mil_ds";
        displayName="$STR_ld3k_amf_optic_j8_mil_n";
        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class Snip: Snip
                {
                    discretefov[]={0.0375};
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200}; // 2200 max distance at max elevation 20 mRad M903/962 SLAP (zeroing 100m, ICAO)
                    distanceZoomMin=100;
                    distanceZoomMax=2200;
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j8_mildot_cover"
                    };
                };
            };
        };
    };
    class ScromeJ8_NoCover_MilDot: ScromeJ8_NoCover
    {
        ACE_ScopeAdjust_Vertical[]={0,20};
        author="Laid3acK";
        descriptionShort="$STR_ld3k_amf_optic_j8_mil_ds";
        displayName="$STR_ld3k_amf_optic_j8_mil_nocover_n";
        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class Snip: Snip
                {
                    discretefov[]={0.0375};
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200}; // 2200 max distance at max elevation 20 mRad M903/962 SLAP (zeroing 100m, ICAO)
                    distanceZoomMin=100;
                    distanceZoomMax=2200;
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j8_mildot"
                    };
                };
            };
        };
    };
    class ScromeJ10: ItemCore // http://www.scrome.com/assets/templates/flexibility/pdf/Scrome_Marksman_Scope_LTE_Datasheet_GB.pdf
    {
        ACE_ScopeHeightAboveRail=3.2375; // ACE3 checkScopes.sqf
        ACE_ScopeZeroRange=1300;
        ACE_ScopeAdjust_Vertical[]={-10,10};
        ACE_ScopeAdjust_Horizontal[]={-10,10};
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        descriptionShort="$STR_ld3k_amf_optic_j10_ds";
        displayName="$STR_ld3k_amf_optic_j10_n";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=16.3; // 740g according to official documentation
            class OpticsModes
            {
                class B01_4003
                {
                    opticsZoomMin=0.03; // 10x: 0.3/10
                    opticsZoomMax=0.03; // 10x: 0.3/10
                    opticsZoomInit=0.03; // 10x: 0.3/10
                    discretefov[]={0.03,0.03};
                    discreteInitIndex=0;
                    discreteDistance[]={1311};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=1311; // Réglage initial 1300m, point visé = point touché - Zeroing 1300m, POA = POI
                    distanceZoomMax=1311; // Réglage initial 1300m, point visé = point touché - Zeroing 1300m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j10_vanilla_cover",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j10_gyro_cover"
                    };
                };
            };
        };
    };
    class ScromeJ10_NoCover: ScromeJ10
    {
        displayName="$STR_ld3k_amf_optic_j10_nocover_n";
        descriptionShort="$STR_ld3k_amf_optic_j10_ds";
        class ItemInfo: ItemInfo
        {
            mass=16.3;
            class OpticsModes: OpticsModes
            {
                class B01_4003: B01_4003
                {
                    opticsZoomMin=0.03; // 10x: 0.3/10
                    opticsZoomMax=0.03; // 10x: 0.3/10
                    opticsZoomInit=0.03; // 10x: 0.3/10
                    discretefov[]={0.03,0.03};
                    discreteInitIndex=0;
                    discreteDistance[]={1311};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=1311; // Réglage initial 1300m, point visé = point touché - Zeroing 1300m, POA = POI
                    distanceZoomMax=1311; // Réglage initial 1300m, point visé = point touché - Zeroing 1300m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j10_vanilla",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j10_gyro"
                    };
                };
            };
        };
    };
    class ScromeJ10_MilDot: ScromeJ10 // http://www.scrome.com/assets/templates/flexibility/pdf/Scrome_Marksman_Scope_LTE_Datasheet_GB.pdf
    {
        ACE_ScopeZeroRange=100;
        ACE_ScopeAdjust_Vertical[]={0,20};
        author="Laid3acK";
        descriptionShort="$STR_ld3k_amf_optic_j10_mil_ds";
        displayName="$STR_ld3k_amf_optic_j10_mil_n";
        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class B01_4003: B01_4003
                {
                    discretefov[]={0.03};
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200}; // 2200 max distance at max elevation 20 mRad M903/962 SLAP (zeroing 100m, ICAO)
                    distanceZoomMin=100;
                    distanceZoomMax=2200;
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j10_mildot_cover"
                    };
                };
            };
        };
    };
    class ScromeJ10_NoCover_MilDot: ScromeJ10_NoCover
    {
        ACE_ScopeZeroRange=100;
        ACE_ScopeAdjust_Vertical[]={0,20};
        author="Laid3acK";
        descriptionShort="$STR_ld3k_amf_optic_j10_mil_ds";
        displayName="$STR_ld3k_amf_optic_j10_mil_nocover_n";
        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class B01_4003: B01_4003
                {
                    discretefov[]={0.03};
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200}; // 2200 max distance at max elevation 20 mRad M903/962 SLAP (zeroing 100m, ICAO)
                    distanceZoomMin=100;
                    distanceZoomMax=2200;
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_j10_mildot"
                    };
                };
            };
        };
    };
    class AMF_schmidt_benderx4: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.75196; // ACE3 checkScopes.sqf
        ACE_ScopeZeroRange=100;
        ACE_ScopeAdjust_Vertical[]={0,12};
        ACE_ScopeAdjust_Horizontal[]={-6,6};
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        descriptionShort="$STR_ld3k_amf_optic_shortdot_cc_mildotcc_ds";
        displayName="$STR_ld3k_amf_optic_shortdot_cc_mildotcc_n";
        picture="\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=13.8; // 625g
            class OpticsModes
            {
                class AMF_schmidt_bender
                {
                    opticsZoomMin=0.0375; // 8x: 0.3/8
                    opticsZoomMax=0.3; // 1x: 0.3/1
                    opticsZoomInit=0.3; // 1x: 0.3/1
                    discretefov[]={0.3,0.075,0.0375}; // {1x, 4x, 8x} First Focal Plane
                    discreteInitIndex=0;
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700}; // 1700 max distance at max elevation 12 mRad M903/962 SLAP (zeroing 100m, ICAO)
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=100;
                    distanceZoomMax=1700;
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_shortdot_mildotcc_1x",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_shortdot_mildotcc_4x",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_shortdot_mildotcc_8x"
                    };
                    visionMode[]=
                    {
                        "Normal",
                        "NVG",
                        "TI"
                    };
                    thermalMode[]={0,1};
                };
            };
        };
    };
    class AMF_schmidt_benderx4_tan: AMF_schmidt_benderx4
    {
        ACE_ScopeHeightAboveRail=4.75196; // ACE3 checkScopes.sqf
        descriptionShort="$STR_ld3k_amf_optic_shortdot_cc_mildotcc_ds";
        displayName="$STR_ld3k_amf_optic_shortdot_cc_mildotcc_tan_n";
        picture="\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
    };
    class AMF_SB_PM2_P4FL: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.30723; // ACE3 checkScopes.sqf
        ACE_ScopeZeroRange=100;
        ACE_ScopeAdjust_Vertical[]={0,26}; // https://assets.schmidtundbender.de/media/8c/0d/6f/1770976158/S_B_Katalog_2026-02-09-V03-EN-LoRes.pdf#page=65
        ACE_ScopeAdjust_Horizontal[]={-6,6};
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        descriptionShort="$STR_ld3k_amf_optic_sb525_p4fl_ds";
        displayName="$STR_ld3k_amf_optic_sb525_p4fl_n";
        picture="\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=23.8; // 1080g
            class OpticsModes
            {
                class SM_P4FL
                {
                    opticsZoomMin=0.012766; // 25x: 0.3/23.5, Field of view as the real one
                    opticsZoomMax=0.05; // 6x: 0.3/6, Field of view as the real one
                    opticsZoomInit=0.05; // 6x: 0.3/6, Field of view as the real one
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500}; // 2500 max distance at max elevation 26 mRad M903/962 SLAP (zeroing 100m, ICAO)
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=100;
                    distanceZoomMax=2500;
                    discretefov[]={0.05,0.025,0.012766,0.05,0.025,0.012766}; // {6x,12x,25x,6x illum,12x illum,25x illum} First Focal Plane
                    discreteInitIndex=0;
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_sb525_p4fl_6x",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_sb525_p4fl_12x",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_sb525_p4fl_25x",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_sb525_p4fl_6x_illum",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_sb525_p4fl_12x_illum",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_sb525_p4fl_25x_illum"
                    };
                    visionMode[]=
                    {
                        "Normal",
                        "NVG",
                        "TI"
                    };
                    thermalMode[]={0,1};
                };
            };
        };
    };
    class AMF_SB_PM2_P3L: AMF_SB_PM2_P4FL
    {
        descriptionShort="$STR_ld3k_amf_optic_sb525_p3l_ds";
        displayName="$STR_ld3k_amf_optic_sb525_p3l_n";
        picture="\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=23.8; // 1080g
            class OpticsModes
            {
                class SM_P3L
                {
                    opticsZoomMin=0.012766; // 25x: 0.3/23.5, Field of view as the real one
                    opticsZoomMax=0.05; // 6x: 0.3/6, Field of view as the real one
                    opticsZoomInit=0.05; // 6x: 0.3/6, Field of view as the real one
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500}; // 2500 max distance at max elevation 26 mRad M903/962 SLAP (zeroing 100m, ICAO)
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=100;
                    distanceZoomMax=2500;
                    discretefov[]={0.05,0.025,0.012766,0.05,0.025,0.012766}; // {6x,12x,25x,6x illum,12x illum,25x illum} First Focal Plane
                    discreteInitIndex=0;
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_sb525_p3l_6x",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_sb525_p3l_12x",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_sb525_p3l_25x",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_sb525_p3l_6x_illum",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_sb525_p3l_12x_illum",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_sb525_p3l_25x_illum"
                    };
                    visionMode[]=
                    {
                        "Normal",
                        "NVG",
                        "TI"
                    };
                    thermalMode[]={0,1};
                };
            };
        };
    };
    class AMF_specter: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.46048; // ACE3 checkScopes.sqf
        ACE_ScopeZeroRange=100;
        displayName="$STR_ld3k_amf_optic_specterdr_556_n";
        descriptionShort="$STR_ld3k_amf_optic_specterdr_ds";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                delete AMF_specter_optic_x1;
                class AMF_specter_optic_x4
                {
                    opticsID=1;
                    useModelOptics=1;
                    opticsPPEffects[]=
                    {
                        "OpticsCHAbera1",
                        "OpticsBlur1"
                    };
                    opticsZoomMin=0.075; // 4x: 0.3/4
                    opticsZoomMax=0.3; // 1x: 0.3/1
                    opticsZoomInit=0.3; // 1x: 0.3/1
                    discretefov[]={0.3,0.075}; // 1x, 4x
                    discreteInitIndex=0;
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=200; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    distanceZoomMax=200; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_elcan_556_4x",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_elcan_556_4x"
                    };
                };
                class AMF_specter_ironsight
                {
                    opticsID=2;
                    useModelOptics=0;
                    opticsPPEffects[]=
                    {
                        ""
                    };
                    opticsZoomMin=0.25;
                    opticsZoomMax=1.25;
                    opticsZoomInit=0.75;
                    memoryPointCamera="eye";
                    visionMode[]={};
                    opticsFlare=0;
                    opticsDisablePeripherialVision=0;
                    distanceZoomMin=200;
                    distanceZoomMax=200;
                    cameraDir="";
                };
            };
        };
    };
    class AMF_specter_762: AMF_specter
    {
        author="Laid3acK";
        displayName="$STR_ld3k_amf_optic_specterdr_762_n";
        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                delete AMF_specter_optic_x1;
                class AMF_specter_optic_x4: AMF_specter_optic_x4
                {
                    opticsID=1;
                    useModelOptics=1;
                    opticsPPEffects[]=
                    {
                        "OpticsCHAbera1",
                        "OpticsBlur1"
                    };
                    opticsZoomMin=0.075; // 4x: 0.3/4
                    opticsZoomMax=0.3; // 1x: 0.3/1
                    opticsZoomInit=0.3; // 1x: 0.3/1
                    discretefov[]={0.3,0.075}; // 1x, 4x
                    discreteInitIndex=0;
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=200; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    distanceZoomMax=200; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_elcan_762_4x",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_elcan_762_4x"
                    };
                };
                class AMF_specter_ironsight: AMF_specter_ironsight
                {
                    opticsID=2;
                    useModelOptics=0;
                    opticsPPEffects[]=
                    {
                        ""
                    };
                    opticsZoomMin=0.25;
                    opticsZoomMax=1.25;
                    opticsZoomInit=0.75;
                    memoryPointCamera="eye";
                    visionMode[]={};
                    opticsFlare=0;
                    opticsDisablePeripherialVision=0;
                    distanceZoomMin=200;
                    distanceZoomMax=200;
                    cameraDir="";
                };
            };
        };
    };
    class AMF_specter_tan: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.46048; // ACE3 checkScopes.sqf
        ACE_ScopeZeroRange=100;
        displayName="$STR_ld3k_amf_optic_specterdr_556_fde_n";
        descriptionShort="$STR_ld3k_amf_optic_specterdr_ds";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                delete AMF_specter_optic_x1;
                class AMF_specter_optic_x4
                {
                    opticsID=1;
                    useModelOptics=1;
                    opticsPPEffects[]=
                    {
                        "OpticsCHAbera1",
                        "OpticsBlur1"
                    };
                    opticsZoomMin=0.075; // 4x: 0.3/4
                    opticsZoomMax=0.3; // 1x: 0.3/1
                    opticsZoomInit=0.3; // 1x: 0.3/1
                    discretefov[]={0.3,0.075}; // 1x, 4x
                    discreteInitIndex=0;
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=200; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    distanceZoomMax=200; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_elcan_556_4x",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_elcan_556_4x"
                    };
                };
                class AMF_specter_ironsight
                {
                    opticsID=2;
                    useModelOptics=0;
                    opticsPPEffects[]=
                    {
                        ""
                    };
                    opticsZoomMin=0.25;
                    opticsZoomMax=1.25;
                    opticsZoomInit=0.75;
                    memoryPointCamera="eye";
                    visionMode[]={};
                    opticsFlare=0;
                    opticsDisablePeripherialVision=0;
                    distanceZoomMin=200;
                    distanceZoomMax=200;
                    cameraDir="";
                };
            };
        };
    };
    class AMF_specter_tan_762: AMF_specter_tan
    {
        author="Laid3acK";
        displayName="$STR_ld3k_amf_optic_specterdr_762_fde_n";
        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                delete AMF_specter_optic_x1;
                class AMF_specter_optic_x4: AMF_specter_optic_x4
                {
                    opticsID=1;
                    useModelOptics=1;
                    opticsPPEffects[]=
                    {
                        "OpticsCHAbera1",
                        "OpticsBlur1"
                    };
                    opticsZoomMin=0.075; // 4x: 0.3/4
                    opticsZoomMax=0.3; // 1x: 0.3/1
                    opticsZoomInit=0.3; // 1x: 0.3/1
                    discretefov[]={0.3,0.075}; // 1x, 4x
                    discreteInitIndex=0;
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=200; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    distanceZoomMax=200; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_elcan_762_4x",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_elcan_762_4x"
                    };
                };
                class AMF_specter_ironsight: AMF_specter_ironsight
                {
                    opticsID=2;
                    useModelOptics=0;
                    opticsPPEffects[]=
                    {
                        ""
                    };
                    opticsZoomMin=0.25;
                    opticsZoomMax=1.25;
                    opticsZoomInit=0.75;
                    memoryPointCamera="eye";
                    visionMode[]={};
                    opticsFlare=0;
                    opticsDisablePeripherialVision=0;
                    distanceZoomMin=200;
                    distanceZoomMax=200;
                    cameraDir="";
                };
            };
        };
    };
    class AMF_specter_painted: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.46048; // ACE3 checkScopes.sqf
        ACE_ScopeZeroRange=100;
        displayName="$STR_ld3k_amf_optic_specterdr_556_tan_n";
        descriptionShort="$STR_ld3k_amf_optic_specterdr_ds";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                delete AMF_specter_optic_x1;
                class AMF_specter_optic_x4
                {
                    opticsID=1;
                    useModelOptics=1;
                    opticsPPEffects[]=
                    {
                        "OpticsCHAbera1",
                        "OpticsBlur1"
                    };
                    opticsZoomMin=0.075; // 4x: 0.3/4
                    opticsZoomMax=0.3; // 1x: 0.3/1
                    opticsZoomInit=0.3; // 1x: 0.3/1
                    discretefov[]={0.3,0.075}; // 1x, 4x
                    discreteInitIndex=0;
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=200; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    distanceZoomMax=200; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_elcan_556_4x",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_elcan_556_4x"
                    };
                };
                class AMF_specter_ironsight
                {
                    opticsID=2;
                    useModelOptics=0;
                    opticsPPEffects[]=
                    {
                        ""
                    };
                    opticsZoomMin=0.25;
                    opticsZoomMax=1.25;
                    opticsZoomInit=0.75;
                    memoryPointCamera="eye";
                    visionMode[]={};
                    opticsFlare=0;
                    opticsDisablePeripherialVision=0;
                    distanceZoomMin=200;
                    distanceZoomMax=200;
                    cameraDir="";
                };
            };
        };
    };
    class AMF_specter_painted_762: AMF_specter_painted
    {
        author="Laid3acK";
        displayName="$STR_ld3k_amf_optic_specterdr_762_tan_n";
        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                delete AMF_specter_optic_x1;
                class AMF_specter_optic_x4: AMF_specter_optic_x4
                {
                    opticsID=1;
                    useModelOptics=1;
                    opticsPPEffects[]=
                    {
                        "OpticsCHAbera1",
                        "OpticsBlur1"
                    };
                    opticsZoomMin=0.075; // 4x: 0.3/4
                    opticsZoomMax=0.3; // 1x: 0.3/1
                    opticsZoomInit=0.3; // 1x: 0.3/1
                    discretefov[]={0.3,0.075}; // 1x, 4x
                    discreteInitIndex=0;
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=200; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    distanceZoomMax=200; // Réglage initial 100m, point visé = point touché - Zeroing 100m, POA = POI
                    modelOptics[]=
                    {
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_elcan_762_4x",
                        "\ld3k_amf_compat_ace3\ld3k_amf_reticle_elcan_762_4x"
                    };
                };
                class AMF_specter_ironsight: AMF_specter_ironsight
                {
                    opticsID=2;
                    useModelOptics=0;
                    opticsPPEffects[]=
                    {
                        ""
                    };
                    opticsZoomMin=0.25;
                    opticsZoomMax=1.25;
                    opticsZoomInit=0.75;
                    memoryPointCamera="eye";
                    visionMode[]={};
                    opticsFlare=0;
                    opticsDisablePeripherialVision=0;
                    distanceZoomMin=200;
                    distanceZoomMax=200;
                    cameraDir="";
                };
            };
        };
    };
    // Silencers
    class AMF_ROTEX: ItemCore
    {
        class ItemInfo;
    };
    class AMF_ROTEX_III: AMF_ROTEX
    {
        class ItemInfo: ItemInfo
        {
            mass=15; // 680 g Rotex V https://bt-ag.ch/wp-content/uploads/2022/04/DS-988059-EN-Rotex-V-Kal-556.pdf
            class MagazineCoef
            {
                initSpeed=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1;
            };
        };
    };
    class AMF_ROTEX_V: AMF_ROTEX
    {
        class ItemInfo: ItemInfo
        {
            mass=13.8; // 625 g Rotex V Compact https://bt-ag.ch/wp-content/uploads/2022/04/DS-988054-EN-Rotex-V-Compact-Kal-556.pdf
            class MagazineCoef
            {
                initSpeed=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1;
            };
        };
    };
    class AMF_RDS_Famas: ItemCore
    {
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
            class MagazineCoef
            {
                initSpeed=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1;
            };
        };
    };
    class AMF_RDS_Vortex_Minimi: ItemCore
    {
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
            class MagazineCoef
            {
                initSpeed=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1;
            };
        };
    };
    class muzzle_snds_H: ItemCore
    {
        class ItemInfo;
    };
    class muzzle_snds_L: muzzle_snds_H // 9mm
    {
        class ItemInfo: ItemInfo
        {
            class MagazineCoef
            {
                initSpeed=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1;
            };
        };
    };
    class muzzle_snds_M: muzzle_snds_H // 5.56mm
    {
        class ItemInfo: ItemInfo
        {
            class MagazineCoef
            {
                initSpeed=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1;
            };
        };
    };
    class muzzle_snds_B: muzzle_snds_H // 7.62mm
    {
        class ItemInfo: ItemInfo
        {
            class MagazineCoef
            {
                initSpeed=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1;
            };
        };
    };
};
class ACE_ATragMX_Presets
{
    class AMF_Perseis_II_01_F
    {
        preset[]=
        {
            "AMF PGM H2",
            780,
            100,
            0.0874246,
            -0.00063112,
            6.85,
            0,
            2,
            10,
            120,
            0,
            0,
            41.93,
            12.18,
            38.10,
            0.670,
            1,
            "ASM",

            {
                {-15,761},
                {0,768},
                {10,775},
                {15,780},
                {25,794},
                {30,803},
                {35,814}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class AMF_RFF2_01_F
    {
        preset[]=
        {
            "AMF FRF2 AP",
            820,
            100,
            0.076413,
            -0.00103619,
            5.52,
            0,
            2,
            10,
            120,
            0,
            0,
            9.785,
            7.99,
            29.5,
            0.398,
            1,
            "ICAO",

            {
                {-15,801},
                {0,808},
                {10,815},
                {15,820},
                {25,834},
                {30,843},
                {35,854}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
};

