#include <ultra64.h>
#include <global.h>
#include <vt.h>

typedef struct
{
    /* 0x00 */ u8 scene;
    /* 0x01 */ u8 flags1;
    /* 0x02 */ u8 flags2;
    /* 0x03 */ u8 flags3;
} RestrictionFlags;

RestrictionFlags sRestrictionFlags[] =
{
    { SCENE_SPOT00,             0x00, 0x00, 0x10 },
    { SCENE_SPOT01,             0x00, 0x00, 0x10 },
    { SCENE_SPOT02,             0x00, 0x00, 0x10 },
    { SCENE_SPOT03,             0x00, 0x00, 0x10 },
    { SCENE_SPOT04,             0x00, 0x00, 0x10 },
    { SCENE_SPOT05,             0x00, 0x00, 0x10 },
    { SCENE_SPOT06,             0x00, 0x00, 0x10 },
    { SCENE_SPOT07,             0x00, 0x00, 0x10 },
    { SCENE_SPOT08,             0x00, 0x00, 0x10 },
    { SCENE_SPOT09,             0x00, 0x00, 0x10 },
    { SCENE_SPOT10,             0x00, 0x00, 0x10 },
    { SCENE_SPOT11,             0x00, 0x00, 0x10 },
    { SCENE_SPOT12,             0x00, 0x00, 0x10 },
    { SCENE_SPOT13,             0x00, 0x00, 0x10 },
    { SCENE_SPOT15,             0x00, 0x00, 0x10 },
    { SCENE_GANON_TOU,          0x00, 0x00, 0x10 },
    { SCENE_SPOT16,             0x00, 0x00, 0x10 },
    { SCENE_SPOT17,             0x00, 0x00, 0x10 },
    { SCENE_SPOT18,             0x00, 0x00, 0x10 },
    { SCENE_SPOT20,             0x00, 0x00, 0x10 },
    { SCENE_TOKINOMA,           0x00, 0x10, 0x15 },
    { SCENE_KENJYANOMA,         0xA2, 0xAA, 0xAA },
    { SCENE_SYATEKIJYOU,        0x11, 0x55, 0x55 },
    { SCENE_HAIRAL_NIWA,        0x11, 0x55, 0x55 },
    { SCENE_HAIRAL_NIWA_N,      0x11, 0x55, 0x55 },
    { SCENE_HAKAANA,            0x00, 0x00, 0xD0 },
    { SCENE_HAKAANA2,           0x00, 0x00, 0xD0 },
    { SCENE_HAKAANA_OUKE,       0x00, 0x00, 0xD0 },
    { SCENE_DAIYOUSEI_IZUMI,    0x00, 0x00, 0x10 },
    { SCENE_YOUSEI_IZUMI_TATE,  0x00, 0x00, 0xD0 },
    { SCENE_YOUSEI_IZUMI_YOKO,  0x00, 0x00, 0x10 },
    { SCENE_GANON_FINAL,        0x00, 0x05, 0x50 },
    { SCENE_NAKANIWA,           0x00, 0x05, 0x54 },
    { SCENE_TURIBORI,           0x11, 0x55, 0x55 },
    { SCENE_BOWLING,            0x11, 0x55, 0x55 },
    { SCENE_SOUKO,              0x00, 0x10, 0x15 },
    { SCENE_MIHARIGOYA,         0x00, 0x10, 0x14 },
    { SCENE_MAHOUYA,            0x10, 0x15, 0x55 },
    { SCENE_TAKARAYA,           0x10, 0x15, 0x55 },
    { SCENE_KINSUTA,            0x00, 0x10, 0x15 },
    { SCENE_ENTRA,              0x00, 0x10, 0x15 },
    { SCENE_ENTRA_N,            0x00, 0x10, 0x15 },
    { SCENE_ENRUI,              0x00, 0x10, 0xD5 },
    { SCENE_MARKET_DAY,         0x00, 0x10, 0x15 },
    { SCENE_MARKET_NIGHT,       0x00, 0x10, 0x15 },
    { SCENE_MARKET_RUINS,       0x00, 0x10, 0xD5 },
    { SCENE_MARKET_ALLEY,       0x00, 0x10, 0x15 },
    { SCENE_MARKET_ALLEY_N,     0x00, 0x10, 0x15 },
    { SCENE_SHRINE,             0x00, 0x10, 0x15 },
    { SCENE_SHRINE_N,           0x00, 0x10, 0x15 },
    { SCENE_SHRINE_R,           0x00, 0x10, 0xD5 },
    { SCENE_LINK_HOME,          0x10, 0x10, 0x15 },
    { SCENE_KAKARIKO,           0x10, 0x10, 0x15 },
    { SCENE_KAKARIKO3,          0x10, 0x10, 0x15 },
    { SCENE_KOKIRI_HOME,        0x10, 0x10, 0x15 },
    { SCENE_KOKIRI_HOME3,       0x10, 0x10, 0x15 },
    { SCENE_KOKIRI_HOME4,       0x10, 0x10, 0x15 },
    { SCENE_KOKIRI_HOME5,       0x10, 0x10, 0x15 },
    { SCENE_MALON_STABLE,       0x10, 0x10, 0x15 },
    { SCENE_HUT,                0x10, 0x10, 0x15 },
    { SCENE_IMPA,               0x10, 0x10, 0x15 },
    { SCENE_LABO,               0x10, 0x10, 0x15 },
    { SCENE_HYLIA_LABO,         0x00, 0x10, 0x15 },
    { SCENE_TENT,               0x10, 0x10, 0x15 },
    { SCENE_SHOP1,              0x10, 0x10, 0x15 },
    { SCENE_KOKIRI_SHOP,        0x10, 0x10, 0x15 },
    { SCENE_GOLON,              0x10, 0x10, 0x15 },
    { SCENE_ZOORA,              0x10, 0x10, 0x15 },
    { SCENE_DRAG,               0x10, 0x10, 0x15 },
    { SCENE_ALLEY_SHOP,         0x10, 0x10, 0x15 },
    { SCENE_NIGHT_SHOP,         0x10, 0x10, 0x15 },
    { SCENE_FACE_SHOP,          0x10, 0x10, 0x15 },
    { SCENE_MEN,                0x00, 0x03, 0x10 },
    { SCENE_YDAN,               0x00, 0x00, 0x00 },
    { SCENE_YDAN_BOSS,          0x00, 0x45, 0x50 },
    { SCENE_DDAN,               0x00, 0x00, 0x00 },
    { SCENE_DDAN_BOSS,          0x00, 0x45, 0x50 },
    { SCENE_BDAN,               0x00, 0x00, 0x00 },
    { SCENE_BDAN_BOSS,          0x00, 0x45, 0x50 },
    { SCENE_BMORI1,             0x00, 0x00, 0x00 },
    { SCENE_MORIBOSSROOM,       0x00, 0x45, 0x50 },
    { SCENE_HAKADANCH,          0x00, 0x00, 0x00 },
    { SCENE_HAKADAN,            0x00, 0x00, 0x00 },
    { SCENE_HAKADAN_BS,         0x00, 0x45, 0x50 },
    { SCENE_HIDAN,              0x00, 0x00, 0x00 },
    { SCENE_FIRE_BS,            0x00, 0x45, 0x50 },
    { SCENE_MIZUSIN,            0x00, 0x00, 0x00 },
    { SCENE_MIZUSIN_BS,         0x00, 0x45, 0x50 },
    { SCENE_JYASINZOU,          0x00, 0x00, 0x00 },
    { SCENE_JYASINBOSS,         0x00, 0x45, 0x50 },
    { SCENE_GANON,              0x00, 0x00, 0x00 },
    { SCENE_GANON_BOSS,         0x00, 0x45, 0x50 },
    { SCENE_ICE_DOUKUTO,        0x00, 0x00, 0xC0 },
    { SCENE_HAKASITARELAY,      0x00, 0x03, 0x14 },
    { SCENE_GANONTIKA,          0x00, 0x03, 0x10 },
    { SCENE_GANON_DEMO,         0x00, 0x45, 0x50 },
    { SCENE_GANON_SONOGO,       0x00, 0x05, 0x50 },
    { SCENE_GANONTIKA_SONOGO,   0x00, 0x05, 0x50 },
    { SCENE_GERUDOWAY,          0x00, 0x00, 0x10 },
    { SCENE_KAKUSIANA,          0x00, 0x00, 0xD0 },
    { 0xFF,                     0x00, 0x00, 0x00 },
};

s16 sHBAScoreTier = 0;
u16 sHBAScoreDigits[] = { 0, 0, 0, 0 };

u16 sCUpInvisible = 0;
u16 sCUpTimer = 0;

s16 gSpoilingItems[] = { ITEM_ODD_MUSHROOM, ITEM_FROG, ITEM_EYEDROPS };
s16 gSpoilingItemReverts[] = { ITEM_COJIRO, ITEM_PRESCRIPTION, ITEM_PRESCRIPTION };

s16 sMagicBorderR = 0xFF;
s16 sMagicBorderG = 0xFF;
s16 sMagicBorderB = 0xFF;

s16 sExtraItemBases[] =
{
    ITEM_STICK, ITEM_STICK, ITEM_NUT, ITEM_NUT, ITEM_BOMB, ITEM_BOMB,
    ITEM_BOMB, ITEM_BOMB, ITEM_BOW, ITEM_BOW, ITEM_BOW, ITEM_SEEDS,
    ITEM_BOMBCHU, ITEM_BOMBCHU, ITEM_STICK, ITEM_STICK, ITEM_NUT, ITEM_NUT,
};

s16 D_80125A58 = 0;
s16 D_80125A5C = 0;

Gfx sSetupDL_80125A60[] =
{
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING |
                          G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH | G_LOD),
    gsDPSetOtherMode(G_AD_DISABLE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP |
                     G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_1PRIMITIVE,
                     G_AC_NONE | G_ZS_PIXEL | G_RM_CLD_SURF | G_RM_CLD_SURF2),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE),
    gsSPEndDisplayList(),
};

// original name: "alpha_change"
void Interface_ChangeAlpha(u16 alphaType)
{
    if (alphaType != gSaveContext.unk_13EA)
    {
        osSyncPrintf("?????????????????????????????????%d  LAST_TIME_TYPE=%d\n", alphaType, gSaveContext.unk_13EE);
        gSaveContext.unk_13EA = gSaveContext.unk_13E8 = alphaType;
        gSaveContext.unk_13EC = 1;
    }
}

void func_80082644(GlobalContext* globalCtx, s16 alpha)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;

    if (gSaveContext.button_status[0] == BTN_DISABLED)
    {
        if (interfaceCtx->bAlpha != 0x46)
            interfaceCtx->bAlpha = 0x46;
    }
    else
    {
        if (interfaceCtx->bAlpha != 0xFF)
            interfaceCtx->bAlpha = alpha;
    }

    if (gSaveContext.button_status[1] == BTN_DISABLED)
    {
        if (interfaceCtx->cLeftAlpha != 0x46)
            interfaceCtx->cLeftAlpha = 0x46;
    }
    else
    {
        if (interfaceCtx->cLeftAlpha != 0xFF)
            interfaceCtx->cLeftAlpha = alpha;
    }

    if (gSaveContext.button_status[2] == BTN_DISABLED)
    {
        if (interfaceCtx->cDownAlpha != 0x46)
            interfaceCtx->cDownAlpha = 0x46;
    }
    else
    {
        if (interfaceCtx->cDownAlpha != 0xFF)
            interfaceCtx->cDownAlpha = alpha;
    }

    if (gSaveContext.button_status[3] == BTN_DISABLED)
    {
        if (interfaceCtx->cRightAlpha != 0x46)
            interfaceCtx->cRightAlpha = 0x46;
    }
    else
    {
        if (interfaceCtx->cRightAlpha != 0xFF)
            interfaceCtx->cRightAlpha = alpha;
    }

    if (gSaveContext.button_status[4] == BTN_DISABLED)
    {
        if (interfaceCtx->aAlpha != 0x46)
            interfaceCtx->aAlpha = 0x46;
    }
    else
    {
        if (interfaceCtx->aAlpha != 0xFF)
            interfaceCtx->aAlpha = alpha;
    }
}

void func_8008277C(GlobalContext* globalCtx, s16 maxAlpha, s16 alpha)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;

    if (gSaveContext.unk_13E7 != 0)
    {
        func_80082644(globalCtx, alpha);
        return;
    }

    if ((interfaceCtx->bAlpha != 0) && (interfaceCtx->bAlpha > maxAlpha))
        interfaceCtx->bAlpha = maxAlpha;

    if ((interfaceCtx->aAlpha != 0) && (interfaceCtx->aAlpha > maxAlpha))
        interfaceCtx->aAlpha = maxAlpha;

    if ((interfaceCtx->cLeftAlpha != 0) && (interfaceCtx->cLeftAlpha > maxAlpha))
        interfaceCtx->cLeftAlpha = maxAlpha;

    if ((interfaceCtx->cDownAlpha != 0) && (interfaceCtx->cDownAlpha > maxAlpha))
        interfaceCtx->cDownAlpha = maxAlpha;

    if ((interfaceCtx->cRightAlpha != 0) && (interfaceCtx->cRightAlpha > maxAlpha))
        interfaceCtx->cRightAlpha = maxAlpha;
}

void func_80082850(GlobalContext* globalCtx, s16 maxAlpha)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    s16 alpha;

    alpha = 0xFF - maxAlpha;

    switch (gSaveContext.unk_13E8)
    {
        case 1:
        case 2:
        case 8:
            osSyncPrintf("a_alpha=%d, c_alpha=%d   ???   ", interfaceCtx->aAlpha, interfaceCtx->cLeftAlpha);

            if (gSaveContext.unk_13E8 == 8)
            {
                if (interfaceCtx->bAlpha != 0xFF)
                    interfaceCtx->bAlpha = alpha;
            }
            else
            {
                if ((interfaceCtx->bAlpha != 0) && (interfaceCtx->bAlpha > maxAlpha))
                    interfaceCtx->bAlpha = maxAlpha;
            }

            if ((interfaceCtx->aAlpha != 0) && (interfaceCtx->aAlpha > maxAlpha))
                interfaceCtx->aAlpha = maxAlpha;

            if ((interfaceCtx->cLeftAlpha != 0) && (interfaceCtx->cLeftAlpha > maxAlpha))
                interfaceCtx->cLeftAlpha = maxAlpha;

            if ((interfaceCtx->cDownAlpha != 0) && (interfaceCtx->cDownAlpha > maxAlpha))
                interfaceCtx->cDownAlpha = maxAlpha;

            if ((interfaceCtx->cRightAlpha != 0) && (interfaceCtx->cRightAlpha > maxAlpha))
                interfaceCtx->cRightAlpha = maxAlpha;

            if ((interfaceCtx->healthAlpha != 0) && (interfaceCtx->healthAlpha > maxAlpha))
                interfaceCtx->healthAlpha = maxAlpha;

            if ((interfaceCtx->magicAlpha != 0) && (interfaceCtx->magicAlpha > maxAlpha))
                interfaceCtx->magicAlpha = maxAlpha;

            if ((interfaceCtx->minimapAlpha != 0) && (interfaceCtx->minimapAlpha > maxAlpha))
                interfaceCtx->minimapAlpha = maxAlpha;

            osSyncPrintf("a_alpha=%d, c_alpha=%d\n", interfaceCtx->aAlpha, interfaceCtx->cLeftAlpha);

            break;
        case 3:
            if ((interfaceCtx->aAlpha != 0) && (interfaceCtx->aAlpha > maxAlpha))
                interfaceCtx->aAlpha = maxAlpha;

            func_8008277C(globalCtx, maxAlpha, alpha);

            if ((interfaceCtx->magicAlpha != 0) && (interfaceCtx->magicAlpha > maxAlpha))
                interfaceCtx->magicAlpha = maxAlpha;

            if ((interfaceCtx->minimapAlpha != 0) && (interfaceCtx->minimapAlpha > maxAlpha))
                interfaceCtx->minimapAlpha = maxAlpha;

            if (interfaceCtx->healthAlpha != 0xFF)
                interfaceCtx->healthAlpha = alpha;

            break;
        case 4:
            if ((interfaceCtx->bAlpha != 0) && (interfaceCtx->bAlpha > maxAlpha))
                interfaceCtx->bAlpha = maxAlpha;

            if ((interfaceCtx->aAlpha != 0) && (interfaceCtx->aAlpha > maxAlpha))
                interfaceCtx->aAlpha = maxAlpha;

            if ((interfaceCtx->cLeftAlpha != 0) && (interfaceCtx->cLeftAlpha > maxAlpha))
                interfaceCtx->cLeftAlpha = maxAlpha;

            if ((interfaceCtx->cDownAlpha != 0) && (interfaceCtx->cDownAlpha > maxAlpha))
                interfaceCtx->cDownAlpha = maxAlpha;

            if ((interfaceCtx->cRightAlpha != 0) && (interfaceCtx->cRightAlpha > maxAlpha))
                interfaceCtx->cRightAlpha = maxAlpha;

            if ((interfaceCtx->healthAlpha != 0) && (interfaceCtx->healthAlpha > maxAlpha))
                interfaceCtx->healthAlpha = maxAlpha;

            if ((interfaceCtx->magicAlpha != 0) && (interfaceCtx->magicAlpha > maxAlpha))
                interfaceCtx->magicAlpha = maxAlpha;

            if ((interfaceCtx->minimapAlpha != 0) && (interfaceCtx->minimapAlpha > maxAlpha))
                interfaceCtx->minimapAlpha = maxAlpha;

            if (interfaceCtx->aAlpha != 0xFF)
                interfaceCtx->aAlpha = alpha;

            break;
        case 5:
            func_8008277C(globalCtx, maxAlpha, alpha);

            if ((interfaceCtx->minimapAlpha != 0) && (interfaceCtx->minimapAlpha > maxAlpha))
                interfaceCtx->minimapAlpha = maxAlpha;

            if (interfaceCtx->aAlpha != 0xFF)
                interfaceCtx->aAlpha = alpha;

            if (interfaceCtx->healthAlpha != 0xFF)
                interfaceCtx->healthAlpha = alpha;

            if (interfaceCtx->magicAlpha != 0xFF)
                interfaceCtx->magicAlpha = alpha;

            break;
        case 6:
            func_8008277C(globalCtx, maxAlpha, alpha);

            if (interfaceCtx->aAlpha != 0xFF)
                interfaceCtx->aAlpha = alpha;

            if (interfaceCtx->healthAlpha != 0xFF)
                interfaceCtx->healthAlpha = alpha;

            if (interfaceCtx->magicAlpha != 0xFF)
                interfaceCtx->magicAlpha = alpha;

            switch (globalCtx->sceneNum)
            {
                case SCENE_SPOT00:
                case SCENE_SPOT01:
                case SCENE_SPOT02:
                case SCENE_SPOT03:
                case SCENE_SPOT04:
                case SCENE_SPOT05:
                case SCENE_SPOT06:
                case SCENE_SPOT07:
                case SCENE_SPOT08:
                case SCENE_SPOT09:
                case SCENE_SPOT10:
                case SCENE_SPOT11:
                case SCENE_SPOT12:
                case SCENE_SPOT13:
                case SCENE_SPOT15:
                case SCENE_SPOT16:
                case SCENE_SPOT17:
                case SCENE_SPOT18:
                case SCENE_SPOT20:
                case SCENE_GANON_TOU:
                    if (interfaceCtx->minimapAlpha < 0xAA)
                        interfaceCtx->minimapAlpha = alpha;
                    else
                        interfaceCtx->minimapAlpha = 0xAA;
                    break;
                default:
                    if (interfaceCtx->minimapAlpha != 0xFF)
                        interfaceCtx->minimapAlpha = alpha;
                    break;
            }
            break;
        case 7:
            if ((interfaceCtx->minimapAlpha != 0) && (interfaceCtx->minimapAlpha > maxAlpha))
                interfaceCtx->minimapAlpha = maxAlpha;

            func_80082644(globalCtx, alpha);

            if (interfaceCtx->healthAlpha != 0xFF)
                interfaceCtx->healthAlpha = alpha;

            if (interfaceCtx->magicAlpha != 0xFF)
                interfaceCtx->magicAlpha = alpha;

            break;
        case 9:
            if ((interfaceCtx->bAlpha != 0) && (interfaceCtx->bAlpha > maxAlpha))
                interfaceCtx->bAlpha = maxAlpha;

            if ((interfaceCtx->aAlpha != 0) && (interfaceCtx->aAlpha > maxAlpha))
                interfaceCtx->aAlpha = maxAlpha;

            if ((interfaceCtx->cLeftAlpha != 0) && (interfaceCtx->cLeftAlpha > maxAlpha))
                interfaceCtx->cLeftAlpha = maxAlpha;

            if ((interfaceCtx->cDownAlpha != 0) && (interfaceCtx->cDownAlpha > maxAlpha))
                interfaceCtx->cDownAlpha = maxAlpha;

            if ((interfaceCtx->cRightAlpha != 0) && (interfaceCtx->cRightAlpha > maxAlpha))
                interfaceCtx->cRightAlpha = maxAlpha;

            if ((interfaceCtx->minimapAlpha != 0) && (interfaceCtx->minimapAlpha > maxAlpha))
                interfaceCtx->minimapAlpha = maxAlpha;

            if (interfaceCtx->healthAlpha != 0xFF)
                interfaceCtx->healthAlpha = alpha;

            if (interfaceCtx->magicAlpha != 0xFF)
                interfaceCtx->magicAlpha = alpha;

            break;
        case 10:
            if ((interfaceCtx->aAlpha != 0) && (interfaceCtx->aAlpha > maxAlpha))
                interfaceCtx->aAlpha = maxAlpha;

            if ((interfaceCtx->cLeftAlpha != 0) && (interfaceCtx->cLeftAlpha > maxAlpha))
                interfaceCtx->cLeftAlpha = maxAlpha;

            if ((interfaceCtx->cDownAlpha != 0) && (interfaceCtx->cDownAlpha > maxAlpha))
                interfaceCtx->cDownAlpha = maxAlpha;

            if ((interfaceCtx->cRightAlpha != 0) && (interfaceCtx->cRightAlpha > maxAlpha))
                interfaceCtx->cRightAlpha = maxAlpha;

            if ((interfaceCtx->healthAlpha != 0) && (interfaceCtx->healthAlpha > maxAlpha))
                interfaceCtx->healthAlpha = maxAlpha;

            if ((interfaceCtx->magicAlpha != 0) && (interfaceCtx->magicAlpha > maxAlpha))
                interfaceCtx->magicAlpha = maxAlpha;

            if ((interfaceCtx->minimapAlpha != 0) && (interfaceCtx->minimapAlpha > maxAlpha))
                interfaceCtx->minimapAlpha = maxAlpha;

            if (interfaceCtx->bAlpha != 0xFF)
                interfaceCtx->bAlpha = alpha;

            break;
        case 11:
            if ((interfaceCtx->bAlpha != 0) && (interfaceCtx->bAlpha > maxAlpha))
                interfaceCtx->bAlpha = maxAlpha;

            if ((interfaceCtx->aAlpha != 0) && (interfaceCtx->aAlpha > maxAlpha))
                interfaceCtx->aAlpha = maxAlpha;

            if ((interfaceCtx->cLeftAlpha != 0) && (interfaceCtx->cLeftAlpha > maxAlpha))
                interfaceCtx->cLeftAlpha = maxAlpha;

            if ((interfaceCtx->cDownAlpha != 0) && (interfaceCtx->cDownAlpha > maxAlpha))
                interfaceCtx->cDownAlpha = maxAlpha;

            if ((interfaceCtx->cRightAlpha != 0) && (interfaceCtx->cRightAlpha > maxAlpha))
                interfaceCtx->cRightAlpha = maxAlpha;

            if ((interfaceCtx->minimapAlpha != 0) && (interfaceCtx->minimapAlpha > maxAlpha))
                interfaceCtx->minimapAlpha = maxAlpha;

            if ((interfaceCtx->magicAlpha!= 0) && (interfaceCtx->magicAlpha > maxAlpha))
                interfaceCtx->magicAlpha = maxAlpha;

            if (interfaceCtx->healthAlpha != 0xFF)
                interfaceCtx->healthAlpha = alpha;

            break;
        case 12:
            if (interfaceCtx->aAlpha != 0xFF)
                interfaceCtx->aAlpha = alpha;

            if (interfaceCtx->bAlpha != 0xFF)
                interfaceCtx->bAlpha = alpha;

            if (interfaceCtx->minimapAlpha != 0xFF)
                interfaceCtx->minimapAlpha = alpha;

            if ((interfaceCtx->cLeftAlpha != 0) && (interfaceCtx->cLeftAlpha > maxAlpha))
                interfaceCtx->cLeftAlpha = maxAlpha;

            if ((interfaceCtx->cDownAlpha != 0) && (interfaceCtx->cDownAlpha > maxAlpha))
                interfaceCtx->cDownAlpha = maxAlpha;

            if ((interfaceCtx->cRightAlpha != 0) && (interfaceCtx->cRightAlpha > maxAlpha))
                interfaceCtx->cRightAlpha = maxAlpha;

            if ((interfaceCtx->magicAlpha != 0) && (interfaceCtx->magicAlpha > maxAlpha))
                interfaceCtx->magicAlpha = maxAlpha;

            if ((interfaceCtx->healthAlpha != 0) && (interfaceCtx->healthAlpha > maxAlpha))
                interfaceCtx->healthAlpha = maxAlpha;

            break;
        case 13:
            func_8008277C(globalCtx, maxAlpha, alpha);

            if ((interfaceCtx->minimapAlpha != 0) && (interfaceCtx->minimapAlpha > maxAlpha))
                interfaceCtx->minimapAlpha = maxAlpha;

            if ((interfaceCtx->aAlpha != 0) && (interfaceCtx->aAlpha > maxAlpha))
                interfaceCtx->aAlpha = maxAlpha;

            if (interfaceCtx->healthAlpha != 0xFF)
                interfaceCtx->healthAlpha = alpha;

            if (interfaceCtx->magicAlpha != 0xFF)
                interfaceCtx->magicAlpha = alpha;

            break;
    }

    if ((globalCtx->roomCtx.curRoom.unk_03 == 1) && (interfaceCtx->minimapAlpha >= 0xFF))
        interfaceCtx->minimapAlpha = 0xFF;
}

void func_80083108(GlobalContext* globalCtx)
{
    MessageContext* msgCtx = &globalCtx->msgCtx;
    Player* player = PLAYER;
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    s16 i;
    s16 sp28;

    sp28 = 0;

    if ((gSaveContext.cutscene_index < 0xFFF0) ||
        ((globalCtx->sceneNum == SCENE_SPOT20) && (gSaveContext.cutscene_index == 0xFFF0)))
    {
        gSaveContext.unk_13E7 = 0;

        if ((player->stateFlags1 & 0x00800000) || (globalCtx->unk_11E5C >= 2) ||
            ((globalCtx->sceneNum == SCENE_BOWLING) && Flags_GetSwitch(globalCtx, 0x38)))
        {
            if (gSaveContext.equips.button_items[0] != ITEM_NONE)
            {
                gSaveContext.unk_13E7 = 1;

                if (gSaveContext.button_status[0] == BTN_DISABLED)
                {
                    gSaveContext.button_status[0] = gSaveContext.button_status[1] =
                    gSaveContext.button_status[2] = gSaveContext.button_status[3] = BTN_ENABLED;
                }

                if ((gSaveContext.equips.button_items[0] != ITEM_SLINGSHOT) &&
                    (gSaveContext.equips.button_items[0] != ITEM_BOW) &&
                    (gSaveContext.equips.button_items[0] != ITEM_BOMBCHU) &&
                    (gSaveContext.equips.button_items[0] != ITEM_NONE))
                {
                    gSaveContext.button_status[0] = gSaveContext.equips.button_items[0];

                    if ((globalCtx->sceneNum == SCENE_BOWLING) && Flags_GetSwitch(globalCtx, 0x38))
                    {
                        gSaveContext.equips.button_items[0] = ITEM_BOMBCHU;
                        Interface_LoadItemIcon1(globalCtx, 0);
                    }
                    else
                    {
                        gSaveContext.equips.button_items[0] = ITEM_BOW;
                        if (globalCtx->unk_11E5C >= 2)
                        {
                            if (LINK_AGE_IN_YEARS == YEARS_CHILD)
                                gSaveContext.equips.button_items[0] = ITEM_SLINGSHOT;

                            Interface_LoadItemIcon1(globalCtx, 0);
                        }
                        else
                        {
                            if (gSaveContext.items[SLOT_BOW] == ITEM_NONE)
                                gSaveContext.equips.button_items[0] = ITEM_NONE;
                            else
                                Interface_LoadItemIcon1(globalCtx, 0);
                        }
                    }

                    gSaveContext.button_status[1] = gSaveContext.button_status[2] = gSaveContext.button_status[3] = BTN_DISABLED;
                    Interface_ChangeAlpha(6);
                }

                if (globalCtx->unk_1241B != 0)
                    Interface_ChangeAlpha(1);
                else if (gSaveContext.minigame_state == 1)
                    Interface_ChangeAlpha(8);
                else if (globalCtx->unk_11E5C >= 2)
                    Interface_ChangeAlpha(8);
                else if ((globalCtx->sceneNum == SCENE_BOWLING) && Flags_GetSwitch(globalCtx, 0x38))
                    Interface_ChangeAlpha(8);
                else if (player->stateFlags1 & 0x00800000)
                    Interface_ChangeAlpha(12);
            }
            else
            {
                if (player->stateFlags1 & 0x00800000)
                    Interface_ChangeAlpha(12);
            }
        }
        else if (globalCtx->sceneNum == SCENE_KENJYANOMA)
        {
            Interface_ChangeAlpha(1);
        }
        else if (globalCtx->sceneNum == SCENE_TURIBORI)
        {
            gSaveContext.unk_13E7 = 2;
            if (globalCtx->interfaceCtx.unk_260 != 0)
            {
                if (gSaveContext.equips.button_items[0] != ITEM_FISHING_POLE)
                {
                    gSaveContext.button_status[0] = gSaveContext.equips.button_items[0];
                    gSaveContext.equips.button_items[0] = ITEM_FISHING_POLE;
                    gSaveContext.unk_13EA = 0;
                    Interface_LoadItemIcon1(globalCtx, 0);
                    Interface_ChangeAlpha(12);
                }

                if (gSaveContext.unk_13EA != 12)
                    Interface_ChangeAlpha(12);
            }
            else if (gSaveContext.equips.button_items[0] == ITEM_FISHING_POLE)
            {
                gSaveContext.equips.button_items[0] = gSaveContext.button_status[0];
                gSaveContext.unk_13EA = 0;

                if (gSaveContext.equips.button_items[0] != ITEM_NONE)
                    Interface_LoadItemIcon1(globalCtx, 0);

                gSaveContext.button_status[0] = gSaveContext.button_status[1] =
                gSaveContext.button_status[2] = gSaveContext.button_status[3] = BTN_DISABLED;
                Interface_ChangeAlpha(50);
            }
            else
            {
                if (gSaveContext.button_status[0] == BTN_ENABLED)
                    gSaveContext.unk_13EA = 0;

                gSaveContext.button_status[0] = gSaveContext.button_status[1] =
                gSaveContext.button_status[2] = gSaveContext.button_status[3] = BTN_DISABLED;
                Interface_ChangeAlpha(50);
            }
        }
        else if (msgCtx->msgMode == 0)
        {
            if ((func_8008F2F8(globalCtx) >= 2) && (func_8008F2F8(globalCtx) < 5))
            {
                if (gSaveContext.button_status[0] != BTN_DISABLED)
                    sp28 = 1;

                gSaveContext.button_status[0] = BTN_DISABLED;

                for (i = 1; i < 4; i++)
                {
                    if (func_8008F2F8(globalCtx) == 2)
                    {
                        if ((gSaveContext.equips.button_items[i] != ITEM_HOOKSHOT) &&
                            (gSaveContext.equips.button_items[i] != ITEM_LONGSHOT))
                        {
                            if (gSaveContext.button_status[i] == BTN_ENABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_DISABLED;
                        }
                        else
                        {
                            if (gSaveContext.button_status[i] == BTN_DISABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_ENABLED;
                        }
                    }
                    else
                    {
                        if (gSaveContext.button_status[i] == BTN_ENABLED)
                            sp28 = 1;

                        gSaveContext.button_status[i] = BTN_DISABLED;
                    }
                }

                if (sp28)
                    gSaveContext.unk_13EA = 0;

                Interface_ChangeAlpha(50);
            }
            else if ((player->stateFlags1 & 0x00200000) || (player->stateFlags2 & 0x00040000))
            {
                if (gSaveContext.button_status[0] != BTN_DISABLED)
                {
                    gSaveContext.button_status[0] = BTN_DISABLED;
                    gSaveContext.button_status[1] = BTN_DISABLED;
                    gSaveContext.button_status[2] = BTN_DISABLED;
                    gSaveContext.button_status[3] = BTN_DISABLED;
                    gSaveContext.unk_13EA = 0;
                    Interface_ChangeAlpha(50);
                }
            }
            else if ((gSaveContext.event_inf[0] & 0xF) == 1)
            {
                if (player->stateFlags1 & 0x00800000)
                {
                    if ((gSaveContext.equips.button_items[0] != ITEM_NONE) &&
                        (gSaveContext.equips.button_items[0] != ITEM_BOW))
                    {
                        if (gSaveContext.items[SLOT_BOW] == ITEM_NONE)
                        {
                            gSaveContext.equips.button_items[0] = ITEM_NONE;
                        }
                        else
                        {
                            gSaveContext.equips.button_items[0] = ITEM_BOW;
                            sp28 = 1;
                        }
                    }
                }
                else do
                {
                    sp28 = 1;

                    if ((gSaveContext.equips.button_items[0] == ITEM_NONE) ||
                         (gSaveContext.equips.button_items[0] == ITEM_BOW))
                    {

                        if ((gSaveContext.equips.button_items[0] != ITEM_SWORD_KOKIRI) &&
                            (gSaveContext.equips.button_items[0] != ITEM_SWORD_MASTER) &&
                            (gSaveContext.equips.button_items[0] != ITEM_SWORD_BGS) &&
                            (gSaveContext.equips.button_items[0] != ITEM_SWORD_KNIFE))
                        {
                            gSaveContext.equips.button_items[0] =  gSaveContext.button_status[0];
                        }
                        else
                        {
                            gSaveContext.button_status[0] = gSaveContext.equips.button_items[0];
                        }
                    }
                } while (0); // Necessary to match

                if (sp28)
                {
                    Interface_LoadItemIcon1(globalCtx, 0);
                    sp28 = 0;
                }

                for (i = 1; i < 4; i++)
                {
                    if ((gSaveContext.equips.button_items[i] != ITEM_OCARINA_FAIRY) &&
                        (gSaveContext.equips.button_items[i] != ITEM_OCARINA_TIME))
                    {
                        if (gSaveContext.button_status[i] == BTN_ENABLED)
                            sp28 = 1;

                        gSaveContext.button_status[i] = BTN_DISABLED;
                    }
                    else
                    {
                        if (gSaveContext.button_status[i] == BTN_DISABLED)
                            sp28 = 1;

                        gSaveContext.button_status[i] = BTN_ENABLED;
                    }
                }

                if (sp28)
                    gSaveContext.unk_13EA = 0;

                Interface_ChangeAlpha(50);
            }
            else
            {
                if (interfaceCtx->restrictions.bButton == 0)
                {
                    if ((gSaveContext.equips.button_items[0] == ITEM_SLINGSHOT) ||
                        (gSaveContext.equips.button_items[0] == ITEM_BOW) ||
                        (gSaveContext.equips.button_items[0] == ITEM_BOMBCHU) ||
                        (gSaveContext.equips.button_items[0] == ITEM_NONE))
                    {
                        if ((gSaveContext.equips.button_items[0] != ITEM_NONE) || (gSaveContext.inf_table[29] == 0))
                        {
                            gSaveContext.equips.button_items[0] = gSaveContext.button_status[0];
                            sp28 = 1;

                            if (gSaveContext.equips.button_items[0] != ITEM_NONE)
                                Interface_LoadItemIcon1(globalCtx, 0);
                        }
                    }
                    else if ((gSaveContext.button_status[0] & 0xFF) == BTN_DISABLED)
                    {
                        sp28 = 1;

                        if (((gSaveContext.button_status[0] & 0xFF) == BTN_DISABLED) ||
                            ((gSaveContext.button_status[0] & 0xFF) == BTN_ENABLED))
                        {
                            gSaveContext.button_status[0] = BTN_ENABLED;
                        }
                        else
                        {
                            gSaveContext.equips.button_items[0] = gSaveContext.button_status[0] & 0xFF;
                        }
                    }
                }
                else if (interfaceCtx->restrictions.bButton == 1)
                {
                    if ((gSaveContext.equips.button_items[0] == ITEM_SLINGSHOT) ||
                        (gSaveContext.equips.button_items[0] == ITEM_BOW) ||
                        (gSaveContext.equips.button_items[0] == ITEM_BOMBCHU) ||
                        (gSaveContext.equips.button_items[0] == ITEM_NONE))
                    {
                        if ((gSaveContext.equips.button_items[0] != ITEM_NONE) || (gSaveContext.inf_table[29] == 0))
                        {
                            gSaveContext.equips.button_items[0] = gSaveContext.button_status[0];
                            sp28 = 1;

                            if (gSaveContext.equips.button_items[0] != ITEM_NONE)
                                Interface_LoadItemIcon1(globalCtx, 0);
                        }
                    }
                    else
                    {
                        if (gSaveContext.button_status[0] == BTN_ENABLED)
                            sp28 = 1;

                        gSaveContext.button_status[0] = BTN_DISABLED;
                    }
                }

                if (interfaceCtx->restrictions.bottles != 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        if ((gSaveContext.equips.button_items[i] >= ITEM_BOTTLE) &&
                            (gSaveContext.equips.button_items[i] <= ITEM_POE))
                        {
                            if (gSaveContext.button_status[i] == BTN_ENABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_DISABLED;
                        }
                    }
                }
                else if (interfaceCtx->restrictions.bottles == 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        if ((gSaveContext.equips.button_items[i] >= ITEM_BOTTLE) &&
                            (gSaveContext.equips.button_items[i] <= ITEM_POE))
                        {
                            if (gSaveContext.button_status[i] == BTN_DISABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_ENABLED;
                        }
                    }
                }

                if (interfaceCtx->restrictions.tradeItems != 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        if ((gSaveContext.equips.button_items[i] >= ITEM_WEIRD_EGG) &&
                            (gSaveContext.equips.button_items[i] <= ITEM_CLAIM_CHECK))
                        {
                            if (gSaveContext.button_status[i] == BTN_ENABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_DISABLED;
                        }
                    }
                }
                else if (interfaceCtx->restrictions.tradeItems == 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        if ((gSaveContext.equips.button_items[i] >= ITEM_WEIRD_EGG) &&
                            (gSaveContext.equips.button_items[i] <= ITEM_CLAIM_CHECK))
                        {
                            if (gSaveContext.button_status[i] == BTN_DISABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_ENABLED;
                        }
                    }
                }

                if (interfaceCtx->restrictions.hookshot != 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        if ((gSaveContext.equips.button_items[i] == ITEM_HOOKSHOT) ||
                            (gSaveContext.equips.button_items[i] == ITEM_LONGSHOT))
                        {
                            if (gSaveContext.button_status[i] == BTN_ENABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_DISABLED;
                        }
                    }
                }
                else if (interfaceCtx->restrictions.hookshot == 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        if ((gSaveContext.equips.button_items[i] == ITEM_HOOKSHOT) ||
                            (gSaveContext.equips.button_items[i] == ITEM_LONGSHOT))
                        {
                            if (gSaveContext.button_status[i] == BTN_DISABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_ENABLED;
                        }
                    }
                }

                if (interfaceCtx->restrictions.ocarina != 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        if ((gSaveContext.equips.button_items[i] == ITEM_OCARINA_FAIRY) ||
                            (gSaveContext.equips.button_items[i] == ITEM_OCARINA_TIME))
                        {
                            if (gSaveContext.button_status[i] == BTN_ENABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_DISABLED;
                        }
                    }
                }
                else if (interfaceCtx->restrictions.ocarina == 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        if ((gSaveContext.equips.button_items[i] == ITEM_OCARINA_FAIRY) ||
                            (gSaveContext.equips.button_items[i] == ITEM_OCARINA_TIME))
                        {
                            if (gSaveContext.button_status[i] == BTN_DISABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_ENABLED;
                        }
                    }
                }

                if (interfaceCtx->restrictions.farores != 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        if (gSaveContext.equips.button_items[i] == ITEM_FARORES_WIND)
                        {
                            if (gSaveContext.button_status[i] == BTN_ENABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_DISABLED;
                            osSyncPrintf("***(i=%d)***  ", i);
                        }
                    }
                }
                else if (interfaceCtx->restrictions.farores == 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        if (gSaveContext.equips.button_items[i] == ITEM_FARORES_WIND)
                        {
                            if (gSaveContext.button_status[i] == BTN_DISABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_ENABLED;
                        }
                    }
                }

                if (interfaceCtx->restrictions.dinsNayrus != 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        if ((gSaveContext.equips.button_items[i] == ITEM_DINS_FIRE) ||
                            (gSaveContext.equips.button_items[i] == ITEM_NAYRUS_LOVE))
                        {
                            if (gSaveContext.button_status[i] == BTN_ENABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_DISABLED;
                        }
                    }
                }
                else if (interfaceCtx->restrictions.dinsNayrus == 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        if ((gSaveContext.equips.button_items[i] == ITEM_DINS_FIRE) ||
                            (gSaveContext.equips.button_items[i] == ITEM_NAYRUS_LOVE))
                        {
                            if (gSaveContext.button_status[i] == BTN_DISABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_ENABLED;
                        }
                    }
                }

                if (interfaceCtx->restrictions.all != 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        if ((gSaveContext.equips.button_items[i] != ITEM_OCARINA_FAIRY) &&
                            (gSaveContext.equips.button_items[i] != ITEM_OCARINA_TIME) &&
                            !((gSaveContext.equips.button_items[i] >= ITEM_BOTTLE) &&
                              (gSaveContext.equips.button_items[i] <= ITEM_POE)) &&
                            !((gSaveContext.equips.button_items[i] >= ITEM_WEIRD_EGG) &&
                              (gSaveContext.equips.button_items[i] <= ITEM_CLAIM_CHECK)))
                        {
                            if ((globalCtx->sceneNum != SCENE_TAKARAYA) ||
                                (gSaveContext.equips.button_items[i] != ITEM_LENS))
                            {
                                if (gSaveContext.button_status[i] == BTN_ENABLED)
                                    sp28 = 1;

                                gSaveContext.button_status[i] = BTN_DISABLED;
                            }
                            else
                            {
                                if (gSaveContext.button_status[i] == BTN_DISABLED)
                                    sp28 = 1;

                                gSaveContext.button_status[i] = BTN_ENABLED;
                            }
                        }
                    }
                }
                else if (interfaceCtx->restrictions.all == 0)
                {
                    for (i = 1; i < 4; i++)
                    {
                        if ((gSaveContext.equips.button_items[i] != ITEM_DINS_FIRE) &&
                            (gSaveContext.equips.button_items[i] != ITEM_HOOKSHOT) &&
                            (gSaveContext.equips.button_items[i] != ITEM_LONGSHOT) &&
                            (gSaveContext.equips.button_items[i] != ITEM_FARORES_WIND) &&
                            (gSaveContext.equips.button_items[i] != ITEM_NAYRUS_LOVE) &&
                            (gSaveContext.equips.button_items[i] != ITEM_OCARINA_FAIRY) &&
                            (gSaveContext.equips.button_items[i] != ITEM_OCARINA_TIME) &&
                            !((gSaveContext.equips.button_items[i] >= ITEM_BOTTLE) &&
                              (gSaveContext.equips.button_items[i] <= ITEM_POE)) &&
                            !((gSaveContext.equips.button_items[i] >= ITEM_WEIRD_EGG) &&
                              (gSaveContext.equips.button_items[i] <= ITEM_CLAIM_CHECK)))
                        {
                            if (gSaveContext.button_status[i] == BTN_DISABLED)
                                sp28 = 1;

                            gSaveContext.button_status[i] = BTN_ENABLED;
                        }
                    }
                }
            }
        }
    }

    if (sp28)
    {
        gSaveContext.unk_13EA = 0;
        if ((globalCtx->sceneLoadFlag == 0) && (globalCtx->unk_1241B == 0))
        {
            Interface_ChangeAlpha(50);
            osSyncPrintf("????????  alpha_change( 50 );  ?????\n");
        }
        else
        {
            osSyncPrintf("game_play->fade_direction || game_play->fbdemo_wipe_modem");
        }
    }
}

void Interface_SetSceneRestrictions(GlobalContext* globalCtx)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    s16 i;
    u8 currentScene;

    interfaceCtx->restrictions.hGauge = interfaceCtx->restrictions.bButton =
    interfaceCtx->restrictions.aButton = interfaceCtx->restrictions.bottles =
    interfaceCtx->restrictions.tradeItems = interfaceCtx->restrictions.hookshot =
    interfaceCtx->restrictions.ocarina = interfaceCtx->restrictions.warpSongs =
    interfaceCtx->restrictions.sunsSong = interfaceCtx->restrictions.farores =
    interfaceCtx->restrictions.dinsNayrus = interfaceCtx->restrictions.all = 0;

    i = 0;

    // Translates to: "Data settings related to button display scene_data_ID=%d\n"
    osSyncPrintf("???????????????????????????????????? scene_data_ID=%d\n", globalCtx->sceneNum);

    do
    {
        currentScene = (u8)globalCtx->sceneNum;
        if (sRestrictionFlags[i].scene == currentScene)
        {
            interfaceCtx->restrictions.hGauge = (sRestrictionFlags[i].flags1 & 0xC0) >> 6;
            interfaceCtx->restrictions.bButton = (sRestrictionFlags[i].flags1 & 0x30) >> 4;
            interfaceCtx->restrictions.aButton = (sRestrictionFlags[i].flags1 & 0x0C) >> 2;
            interfaceCtx->restrictions.bottles = (sRestrictionFlags[i].flags1 & 0x03) >> 0;
            interfaceCtx->restrictions.tradeItems = (sRestrictionFlags[i].flags2 & 0xC0) >> 6;
            interfaceCtx->restrictions.hookshot = (sRestrictionFlags[i].flags2 & 0x30) >> 4;
            interfaceCtx->restrictions.ocarina = (sRestrictionFlags[i].flags2 & 0x0C) >> 2;
            interfaceCtx->restrictions.warpSongs = (sRestrictionFlags[i].flags2 & 0x03) >> 0;
            interfaceCtx->restrictions.sunsSong = (sRestrictionFlags[i].flags3 & 0xC0) >> 6;
            interfaceCtx->restrictions.farores = (sRestrictionFlags[i].flags3 & 0x30) >> 4;
            interfaceCtx->restrictions.dinsNayrus = (sRestrictionFlags[i].flags3 & 0x0C) >> 2;
            interfaceCtx->restrictions.all = (sRestrictionFlags[i].flags3 & 0x03) >> 0;

            osSyncPrintf(VT_FGCOL(YELLOW));
            osSyncPrintf("parameter->button_status = %x,%x,%x\n",
                         sRestrictionFlags[i].flags1, sRestrictionFlags[i].flags2, sRestrictionFlags[i].flags3);
            osSyncPrintf("h_gage=%d, b_button=%d, a_button=%d, c_bottle=%d\n",
                         interfaceCtx->restrictions.hGauge, interfaceCtx->restrictions.bButton,
                         interfaceCtx->restrictions.aButton, interfaceCtx->restrictions.bottles);
            osSyncPrintf("c_warasibe=%d, c_hook=%d, c_ocarina=%d, c_warp=%d\n",
                         interfaceCtx->restrictions.tradeItems, interfaceCtx->restrictions.hookshot,
                         interfaceCtx->restrictions.ocarina, interfaceCtx->restrictions.warpSongs);
            osSyncPrintf("c_sunmoon=%d, m_wind=%d, m_magic=%d, another=%d\n",
                         interfaceCtx->restrictions.sunsSong, interfaceCtx->restrictions.farores,
                         interfaceCtx->restrictions.dinsNayrus, interfaceCtx->restrictions.all);
            osSyncPrintf(VT_RST);
            return;
        }
        i++;
    }
    while (sRestrictionFlags[i].scene != 0xFF);
}

Gfx* Draw_TextureIA8(Gfx* displayListHead, void* texture, s16 textureWidth, s16 textureHeight,
                     s16 rectLeft, s16 rectTop, s16 rectWidth, s16 rectHeight, u16 dsdx, u16 dtdy)
{
    gDPLoadTextureBlock(displayListHead++,
                        texture,
                        G_IM_FMT_IA,
                        G_IM_SIZ_8b,
                        textureWidth, textureHeight,
                        0,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMASK, G_TX_NOMASK,
                        G_TX_NOLOD, G_TX_NOLOD);

    gSPTextureRectangle(displayListHead++,
                        rectLeft * 4, rectTop * 4,
                        (rectLeft + rectWidth) * 4, (rectTop + rectHeight) * 4,
                        G_TX_RENDERTILE,
                        0, 0,
                        dsdx, dtdy);

    return displayListHead;
}

Gfx* Draw_TextureI8(Gfx* displayListHead, void* texture, s16 textureWidth, s16 textureHeight,
                    s16 rectLeft, s16 rectTop, s16 rectWidth, s16 rectHeight, u16 dsdx, u16 dtdy)
{
    gDPLoadTextureBlock(displayListHead++,
                        texture,
                        G_IM_FMT_I,
                        G_IM_SIZ_8b,
                        textureWidth, textureHeight,
                        0,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMASK, G_TX_NOMASK,
                        G_TX_NOLOD, G_TX_NOLOD);

    gSPTextureRectangle(displayListHead++,
                        rectLeft * 4, rectTop * 4,
                        (rectLeft + rectWidth) * 4, (rectTop + rectHeight) * 4,
                        G_TX_RENDERTILE,
                        0, 0,
                        dsdx, dtdy);

    return displayListHead;
}

#ifdef NON_MATCHING
// regalloc differences
void Inventory_SwapAgeEquipment(void)
{
    s16 i;
    u16 temp;

    if (LINK_AGE_IN_YEARS == YEARS_CHILD)
    {
        for (i = 0; i < 4; i++)
        {
            if (i != 0)
                gSaveContext.child_equips.button_items[i] = gSaveContext.equips.button_items[i];
            else
                gSaveContext.child_equips.button_items[i] = ITEM_SWORD_KOKIRI;

            if (i != 0)
                gSaveContext.child_equips.c_button_slots[i-1] = gSaveContext.equips.c_button_slots[i-1];
        }

        gSaveContext.child_equips.equipment = gSaveContext.equips.equipment;

        if (gSaveContext.adult_equips.button_items[0] == ITEM_NONE)
        {
            gSaveContext.equips.button_items[0] = ITEM_SWORD_MASTER;

            if (gSaveContext.items[SLOT_NUT] != ITEM_NONE)
            {
                gSaveContext.equips.button_items[1] = ITEM_NUT;
                gSaveContext.equips.c_button_slots[0] = SLOT_NUT;
            }
            else
            {
                gSaveContext.equips.c_button_slots[0] = SLOT_NONE;
                gSaveContext.equips.button_items[1] = ITEM_NONE;
            }

            gSaveContext.equips.button_items[2] = ITEM_BOMB;
            gSaveContext.equips.c_button_slots[1] = SLOT_BOMB;
            gSaveContext.equips.c_button_slots[2] = SLOT_OCARINA;
            gSaveContext.equips.equipment = 0x1122;
            gSaveContext.equips.button_items[3] = gSaveContext.items[SLOT_OCARINA];
        }
        else
        {
            for (i = 0; i < 4; i++)
            {
                gSaveContext.equips.button_items[i] = gSaveContext.adult_equips.button_items[i];

                if (i != 0)
                    gSaveContext.equips.c_button_slots[i-1] = gSaveContext.adult_equips.c_button_slots[i-1];

                if (((gSaveContext.equips.button_items[i] >= ITEM_BOTTLE) &&
                     (gSaveContext.equips.button_items[i] <= ITEM_POE)) ||
                    ((gSaveContext.equips.button_items[i] >= ITEM_WEIRD_EGG) &&
                     (gSaveContext.equips.button_items[i] <= ITEM_CLAIM_CHECK)))
                {
                    osSyncPrintf("Register_Item_Pt(%d)=%d\n", i, gSaveContext.equips.c_button_slots[i-1]);
                    gSaveContext.equips.button_items[i] = gSaveContext.items[gSaveContext.equips.c_button_slots[i-1]];
                }
            }

            gSaveContext.equips.equipment = gSaveContext.adult_equips.equipment;
        }
    }
    else
    {
        for (i = 0; i < 4; i++)
        {
            gSaveContext.adult_equips.button_items[i] = gSaveContext.equips.button_items[i];

            if (i != 0)
                gSaveContext.adult_equips.c_button_slots[i-1] = gSaveContext.equips.c_button_slots[i-1];
        }

        gSaveContext.adult_equips.equipment = gSaveContext.equips.equipment;

        if (gSaveContext.child_equips.button_items[0] != ITEM_NONE)
        {
            for (i = 0; i < 4; i++)
            {
                gSaveContext.equips.button_items[i] = gSaveContext.child_equips.button_items[i];

                if (i != 0)
                    gSaveContext.equips.c_button_slots[i-1] = gSaveContext.child_equips.c_button_slots[i-1];

                if (((gSaveContext.equips.button_items[i] >= ITEM_BOTTLE) &&
                     (gSaveContext.equips.button_items[i] <= ITEM_POE)) ||
                    ((gSaveContext.equips.button_items[i] >= ITEM_WEIRD_EGG) &&
                     (gSaveContext.equips.button_items[i] <= ITEM_CLAIM_CHECK)))
                {
                    osSyncPrintf("Register_Item_Pt(%d)=%d\n", i, gSaveContext.equips.c_button_slots[i-1]);
                    gSaveContext.equips.button_items[i] = gSaveContext.items[gSaveContext.equips.c_button_slots[i-1]];
                }
            }

            gSaveContext.equips.equipment = gSaveContext.child_equips.equipment;
            gSaveContext.equips.equipment &= 0xFFF0;
            gSaveContext.equips.equipment |= 0x0001;
        }
    }

    temp = gEquipMasks[EQUIP_SHIELD] & gSaveContext.equips.equipment;
    if (temp != 0)
    {
        temp >>= gEquipShifts[EQUIP_SHIELD];
        if (!(gBitFlags[temp + 3] & gSaveContext.equipment))
            gSaveContext.equips.equipment &= gEquipNegMasks[EQUIP_SHIELD];
    }
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_parameter/Inventory_SwapAgeEquipment.s")
#endif

void Interface_InitHorsebackArchery(GlobalContext* globalCtx)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;

    gSaveContext.minigame_state = 1;
    interfaceCtx->unk_23C = interfaceCtx->unk_240 = interfaceCtx->unk_242 = 0;
    gSaveContext.minigame_score = sHBAScoreTier = 0;
    interfaceCtx->hbaAmmo = 20;
}

void func_800849EC(GlobalContext* globalCtx)
{
    gSaveContext.equipment |= gBitFlags[2] << gEquipShifts[0];
    gSaveContext.equipment ^= 8 << gEquipShifts[0];

    if (gBitFlags[3] & gSaveContext.equipment)
        gSaveContext.equips.button_items[0] = ITEM_SWORD_KNIFE;
    else
        gSaveContext.equips.button_items[0] = ITEM_SWORD_BGS;

    Interface_LoadItemIcon1(globalCtx, 0);
}

void Interface_LoadItemIcon1(GlobalContext* globalCtx, u16 button)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;

    osCreateMesgQueue(&interfaceCtx->loadQueue, &interfaceCtx->loadMsg, OS_MESG_BLOCK);
    DmaMgr_SendRequest2(&interfaceCtx->dmaRequest_160, (u32)interfaceCtx->icon_itemSegment + button * 0x1000,
                        (u32)_icon_item_staticSegmentRomStart + (gSaveContext.equips.button_items[button] * 0x1000),
                        0x1000, 0, &interfaceCtx->loadQueue, 0, "../z_parameter.c", 1171);
    osRecvMesg(&interfaceCtx->loadQueue, NULL, OS_MESG_BLOCK);
}

void Interface_LoadItemIcon2(GlobalContext* globalCtx, u16 button)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;

    osCreateMesgQueue(&interfaceCtx->loadQueue, &interfaceCtx->loadMsg, OS_MESG_BLOCK);
    DmaMgr_SendRequest2(&interfaceCtx->dmaRequest_180, (u32)interfaceCtx->icon_itemSegment + button * 0x1000,
                        (u32)_icon_item_staticSegmentRomStart + (gSaveContext.equips.button_items[button] * 0x1000),
                        0x1000, 0, &interfaceCtx->loadQueue, 0, "../z_parameter.c", 1193);
    osRecvMesg(&interfaceCtx->loadQueue, NULL, OS_MESG_BLOCK);
}

void func_80084BF4(GlobalContext* globalCtx, u16 flag)
{
    if (flag)
    {
        if ((gSaveContext.equips.button_items[0] == ITEM_SLINGSHOT) ||
            (gSaveContext.equips.button_items[0] == ITEM_BOW) ||
            (gSaveContext.equips.button_items[0] == ITEM_BOMBCHU) ||
            (gSaveContext.equips.button_items[0] == ITEM_FISHING_POLE) ||
            (gSaveContext.button_status[0] == BTN_DISABLED))
        {
            if ((gSaveContext.equips.button_items[0] == ITEM_SLINGSHOT) ||
                (gSaveContext.equips.button_items[0] == ITEM_BOW) ||
                (gSaveContext.equips.button_items[0] == ITEM_BOMBCHU) ||
                (gSaveContext.equips.button_items[0] == ITEM_FISHING_POLE))
            {
                gSaveContext.equips.button_items[0] = gSaveContext.button_status[0];
                Interface_LoadItemIcon1(globalCtx, 0);
            }
        }
        else if (gSaveContext.equips.button_items[0] == ITEM_NONE)
        {
            if ((gSaveContext.equips.button_items[0] != ITEM_NONE) || (gSaveContext.inf_table[29] == 0))
            {
                gSaveContext.equips.button_items[0] = gSaveContext.button_status[0];
                Interface_LoadItemIcon1(globalCtx, 0);
            }
        }

        gSaveContext.button_status[0] = gSaveContext.button_status[1] =
        gSaveContext.button_status[2] = gSaveContext.button_status[3] = BTN_ENABLED;
        Interface_ChangeAlpha(7);
    }
    else
    {
        gSaveContext.button_status[0] = gSaveContext.button_status[1] =
        gSaveContext.button_status[2] = gSaveContext.button_status[3] = BTN_ENABLED;
        func_80083108(globalCtx);
    }
}

s16 sAmmoRefillCounts[] = { 5, 10, 20, 30, 5, 10, 30, 0, 5, 20, 1, 5, 20, 50, 200, 10 };

#ifdef NON_MATCHING
// regalloc, minor ordering and stack usage differences
u8 Item_Give(GlobalContext* globalCtx, u8 item)
{
    s16 i;
    s16 slot;
    s16 oldItem;
    s16 bottleSlot;
    s16 prevTradeItem;
    s8 bombCount;

    slot = SLOT(item);
    if (item >= ITEM_STICKS_5)
        slot = SLOT(sExtraItemBases[item - ITEM_STICKS_5]);

    osSyncPrintf(VT_FGCOL(YELLOW));
    osSyncPrintf("item_get_setting=%d  pt=%d  z=%x\n", item, slot, gSaveContext.items[slot]);
    osSyncPrintf(VT_RST);

    if ((item >= ITEM_MEDALLION_FOREST) && (item <= ITEM_MEDALLION_LIGHT))
    {
        gSaveContext.quest_items |= gBitFlags[item - ITEM_MEDALLION_FOREST];

        osSyncPrintf(VT_FGCOL(YELLOW));
        // Translates to: "Seals = %x"
        osSyncPrintf("?????? = %x\n", gSaveContext.quest_items);
        osSyncPrintf(VT_RST);

        if (item == ITEM_MEDALLION_WATER)
            func_8006D0AC(globalCtx);

        return ITEM_NONE;
    }
    else if ((item >= ITEM_SONG_MINUET) && (item <= ITEM_SONG_STORMS))
    {
        gSaveContext.quest_items |= gBitFlags[item - ITEM_SONG_MINUET + 6];

        osSyncPrintf(VT_FGCOL(YELLOW));
        // Translates to: "Musical scores = %x"
        osSyncPrintf("?????? = %x\n", gSaveContext.quest_items);
        // Translates to: "Musical scores = %x (%x) (%x)"
        osSyncPrintf("?????? = %x (%x) (%x)\n", gSaveContext.quest_items,
                     gBitFlags[item - ITEM_SONG_MINUET + 6], gBitFlags[item - ITEM_SONG_MINUET]);
        osSyncPrintf(VT_RST);

        return ITEM_NONE;
    }
    else if ((item >= ITEM_KOKIRI_EMERALD) && (item <= ITEM_ZORA_SAPPHIRE))
    {
        gSaveContext.quest_items |= gBitFlags[item - ITEM_KOKIRI_EMERALD + 18];

        osSyncPrintf(VT_FGCOL(YELLOW));
        // Translates to: "Spiritual Stones = %x"
        osSyncPrintf("????????? = %x\n", gSaveContext.quest_items);
        osSyncPrintf(VT_RST);

        return ITEM_NONE;
    }
    else if ((item == ITEM_STONE_OF_AGONY) || (item == ITEM_GERUDO_CARD))
    {
        gSaveContext.quest_items |= gBitFlags[item - ITEM_STONE_OF_AGONY + 21];

        osSyncPrintf(VT_FGCOL(YELLOW));
        // Translates to: "Items = %x"
        osSyncPrintf("???????????? = %x\n", gSaveContext.quest_items);
        osSyncPrintf(VT_RST);

        return ITEM_NONE;
    }
    else if (item == ITEM_SKULL_TOKEN)
    {
        gSaveContext.quest_items |= gBitFlags[item - ITEM_SKULL_TOKEN + 23];
        gSaveContext.gs_tokens++;

        osSyncPrintf(VT_FGCOL(YELLOW));
        // Translates to: "N Coins = %x(%d)"
        osSyncPrintf("???????????? = %x(%d)\n", gSaveContext.quest_items, gSaveContext.gs_tokens);
        osSyncPrintf(VT_RST);

        return ITEM_NONE;
    }
    else if ((item >= ITEM_SWORD_KOKIRI) && (item <= ITEM_SWORD_BGS))
    {
        gSaveContext.equipment |= gBitFlags[item - ITEM_SWORD_KOKIRI] << gEquipShifts[EQUIP_SWORD];

        if (item == ITEM_SWORD_BGS)
        {
            gSaveContext.bgs_hits_left = 8;

            if (ALL_EQUIP_VALUE(EQUIP_SWORD) == 0xF)
            {
                gSaveContext.equipment ^= 8 << gEquipShifts[EQUIP_SWORD];
                if (gSaveContext.equips.button_items[0] == ITEM_SWORD_KNIFE)
                {
                    gSaveContext.equips.button_items[0] = ITEM_SWORD_BGS;
                    Interface_LoadItemIcon1(globalCtx, 0);
                }
            }
        }
        else if (item == ITEM_SWORD_MASTER)
        {
            gSaveContext.equips.button_items[0] = ITEM_SWORD_MASTER;
            gSaveContext.equips.equipment &= 0xFFF0;
            gSaveContext.equips.equipment |= 0x0002;
            Interface_LoadItemIcon1(globalCtx, 0);
        }

        return ITEM_NONE;
    }
    else if ((item >= ITEM_SHIELD_DEKU) && (item <= ITEM_SHIELD_MIRROR))
    {
        gSaveContext.equipment |= (gBitFlags[item - ITEM_SHIELD_DEKU] << gEquipShifts[EQUIP_SHIELD]);
        return ITEM_NONE;
    }
    else if ((item >= ITEM_TUNIC_KOKIRI) && (item <= ITEM_TUNIC_ZORA))
    {
        gSaveContext.equipment |= (gBitFlags[item - ITEM_TUNIC_KOKIRI] << gEquipShifts[EQUIP_TUNIC]);
        return ITEM_NONE;
    }
    else if ((item >= ITEM_BOOTS_KOKIRI) && (item <= ITEM_BOOTS_HOVER))
    {
        gSaveContext.equipment |= (gBitFlags[item - ITEM_BOOTS_KOKIRI] << gEquipShifts[EQUIP_BOOTS]);
        return ITEM_NONE;
    }
    else if ((item == ITEM_KEY_BOSS) || (item == ITEM_COMPASS) || (item == ITEM_DUNGEON_MAP))
    {
        gSaveContext.dungeon_items[gSaveContext.dungeon_index] |= gBitFlags[item - ITEM_KEY_BOSS];
        return ITEM_NONE;
    }
    else if (item == ITEM_KEY_SMALL)
    {
        if (gSaveContext.dungeon_keys[gSaveContext.dungeon_index] < 0)
        {
            gSaveContext.dungeon_keys[gSaveContext.dungeon_index] = 1;
            return ITEM_NONE;
        }
        else
        {
            gSaveContext.dungeon_keys[gSaveContext.dungeon_index]++;
            return ITEM_NONE;
        }
    }
    else if ((item == ITEM_QUIVER_30) || (item == ITEM_BOW))
    {
        if (CUR_UPG_VALUE(UPG_QUIVER) == 0)
        {
            Inventory_ChangeUpgrade(UPG_QUIVER, 1);
            INV_CONTENT(ITEM_BOW) = ITEM_BOW;
            AMMO(ITEM_BOW) = CAPACITY(UPG_QUIVER, 1);
            return ITEM_NONE;
        }
        else
        {
            AMMO(ITEM_BOW)++;
            if (AMMO(ITEM_BOW) > CUR_CAPACITY(UPG_QUIVER))
                AMMO(ITEM_BOW) = CUR_CAPACITY(UPG_QUIVER);
        }
    }
    else if (item == ITEM_QUIVER_40)
    {
        Inventory_ChangeUpgrade(UPG_QUIVER, 2);
        AMMO(ITEM_BOW) = CAPACITY(UPG_QUIVER, 2);
        return ITEM_NONE;
    }
    else if (item == ITEM_QUIVER_50)
    {
        Inventory_ChangeUpgrade(UPG_QUIVER, 3);
        AMMO(ITEM_BOW) = CAPACITY(UPG_QUIVER, 3);
        return ITEM_NONE;
    }
    else if (item == ITEM_BULLET_BAG_40)
    {
        Inventory_ChangeUpgrade(UPG_BULLET_BAG, 2);
        AMMO(ITEM_SLINGSHOT) = CAPACITY(UPG_BULLET_BAG, 2);
        return ITEM_NONE;
    }
    else if (item == ITEM_BULLET_BAG_50)
    {
        Inventory_ChangeUpgrade(UPG_BULLET_BAG, 3);
        AMMO(ITEM_SLINGSHOT) = CAPACITY(UPG_BULLET_BAG, 3);
        return ITEM_NONE;
    }
    else if (item == ITEM_BOMB_BAG_20)
    {
        if (CUR_UPG_VALUE(UPG_BOMB_BAG) == 0)
        {
            Inventory_ChangeUpgrade(UPG_BOMB_BAG, 1);
            INV_CONTENT(ITEM_BOMB) = ITEM_BOMB;
            AMMO(ITEM_BOMB) = CAPACITY(UPG_BOMB_BAG, 1);
            return ITEM_NONE;
        }
        else
        {
            AMMO(ITEM_BOMB)++;
            if (AMMO(ITEM_BOMB) > CUR_CAPACITY(UPG_BOMB_BAG))
                AMMO(ITEM_BOMB) = CUR_CAPACITY(UPG_BOMB_BAG);
        }
    }
    else if (item == ITEM_BOMB_BAG_30)
    {
        Inventory_ChangeUpgrade(UPG_BOMB_BAG, 2);
        AMMO(ITEM_BOMB) = CAPACITY(UPG_BOMB_BAG, 2);
        return ITEM_NONE;
    }
    else if (item == ITEM_BOMB_BAG_40)
    {
        Inventory_ChangeUpgrade(UPG_BOMB_BAG, 3);
        AMMO(ITEM_BOMB) = CAPACITY(UPG_BOMB_BAG, 3);
        return ITEM_NONE;
    }
    else if (item == ITEM_BRACELET)
    {
        Inventory_ChangeUpgrade(UPG_STRENGTH, 1);
        return ITEM_NONE;
    }
    else if (item == ITEM_GAUNTLETS_SILVER)
    {
        Inventory_ChangeUpgrade(UPG_STRENGTH, 2);
        return ITEM_NONE;
    }
    else if (item == ITEM_GAUNTLETS_GOLD)
    {
        Inventory_ChangeUpgrade(UPG_STRENGTH, 3);
        return ITEM_NONE;
    }
    else if (item == ITEM_SCALE_SILVER)
    {
        Inventory_ChangeUpgrade(UPG_SCALE, 1);
        return ITEM_NONE;
    }
    else if (item == ITEM_SCALE_GOLDEN)
    {
        Inventory_ChangeUpgrade(UPG_SCALE, 2);
        return ITEM_NONE;
    }
    else if (item == ITEM_WALLET_ADULT)
    {
        Inventory_ChangeUpgrade(UPG_WALLET, 1);
        return ITEM_NONE;
    }
    else if (item == ITEM_WALLET_GIANT)
    {
        Inventory_ChangeUpgrade(UPG_WALLET, 2);
        return ITEM_NONE;
    }
    else if (item == ITEM_STICK_UPGRADE_20)
    {
        if (gSaveContext.items[slot] == ITEM_NONE)
            INV_CONTENT(ITEM_STICK) = ITEM_STICK;
        Inventory_ChangeUpgrade(UPG_STICKS, 2);
        AMMO(ITEM_STICK) = CAPACITY(UPG_STICKS, 2);
        return ITEM_NONE;
    }
    else if (item == ITEM_STICK_UPGRADE_30)
    {
        if (gSaveContext.items[slot] == ITEM_NONE)
            INV_CONTENT(ITEM_STICK) = ITEM_STICK;
        Inventory_ChangeUpgrade(UPG_STICKS, 3);
        AMMO(ITEM_STICK) = CAPACITY(UPG_STICKS, 3);
        return ITEM_NONE;
    }
    else if (item == ITEM_NUT_UPGRADE_30)
    {
        if (gSaveContext.items[slot] == ITEM_NONE)
            INV_CONTENT(ITEM_NUT) = ITEM_NUT;
        Inventory_ChangeUpgrade(UPG_NUTS, 2);
        AMMO(ITEM_NUT) = CAPACITY(UPG_NUTS, 2);
        return ITEM_NONE;
    }
    else if (item == ITEM_NUT_UPGRADE_40)
    {
        if (gSaveContext.items[slot] == ITEM_NONE)
            INV_CONTENT(ITEM_NUT) = ITEM_NUT;
        Inventory_ChangeUpgrade(UPG_NUTS, 3);
        AMMO(ITEM_NUT) = CAPACITY(UPG_NUTS, 3);
        return ITEM_NONE;
    }
    else if (item == ITEM_LONGSHOT)
    {
        INV_CONTENT(item) = item;
        for (i = 1; i < 4; i++)
        {
            if (gSaveContext.equips.button_items[i] == ITEM_HOOKSHOT)
            {
                gSaveContext.equips.button_items[i] = ITEM_LONGSHOT;
                Interface_LoadItemIcon1(globalCtx, i);
            }
        }
        return ITEM_NONE;
    }
    else if (item == ITEM_STICK)
    {
        if (gSaveContext.items[slot] == ITEM_NONE)
        {
            Inventory_ChangeUpgrade(UPG_STICKS, 1);
            AMMO(ITEM_STICK) = 1;
        }
        else
        {
            AMMO(ITEM_STICK)++;
            if (AMMO(ITEM_STICK) > CUR_CAPACITY(UPG_STICKS))
                AMMO(ITEM_STICK) = CUR_CAPACITY(UPG_STICKS);
        }
    }
    else if ((item == ITEM_STICKS_5) || (item == ITEM_STICKS_10))
    {
        if (gSaveContext.items[slot] == ITEM_NONE)
        {
            Inventory_ChangeUpgrade(UPG_STICKS, 1);
            AMMO(ITEM_STICK) = sAmmoRefillCounts[item - ITEM_STICKS_5];
        }
        else
        {
            AMMO(ITEM_STICK) += sAmmoRefillCounts[item - ITEM_STICKS_5];
            if (AMMO(ITEM_STICK) > CUR_CAPACITY(UPG_STICKS))
                AMMO(ITEM_STICK) = CUR_CAPACITY(UPG_STICKS);
        }
        item = ITEM_STICK;
    }
    else if (item == ITEM_NUT)
    {
        if (gSaveContext.items[slot] == ITEM_NONE)
        {
            Inventory_ChangeUpgrade(UPG_NUTS, 1);
            AMMO(ITEM_NUT) = ITEM_NUT;
        }
        else
        {
            AMMO(ITEM_NUT)++;
            if (AMMO(ITEM_NUT) > CUR_CAPACITY(UPG_NUTS))
                AMMO(ITEM_NUT) = CUR_CAPACITY(UPG_NUTS);
        }
    }
    else if ((item == ITEM_NUTS_5) || (item == ITEM_NUTS_10))
    {
        if (gSaveContext.items[slot] == ITEM_NONE)
        {
            Inventory_ChangeUpgrade(UPG_NUTS, 1);
            AMMO(ITEM_NUT) += sAmmoRefillCounts[item - ITEM_NUTS_5];
            // Translates to: "Deku Nuts %d(%d)=%d BS_count=%d"
            osSyncPrintf("???????????? %d(%d)=%d  BS_count=%d\n",
                         item, ITEM_NUTS_5, item - ITEM_NUTS_5, sAmmoRefillCounts[item - ITEM_NUTS_5]);
        }
        else
        {
            AMMO(ITEM_NUT) += sAmmoRefillCounts[item - ITEM_NUTS_5];
            if (AMMO(ITEM_NUT) > CUR_CAPACITY(UPG_NUTS))
                AMMO(ITEM_NUT) = CUR_CAPACITY(UPG_NUTS);
        }
        item = ITEM_NUT;
    }
    else if (item == ITEM_BOMB)
    {
        // Translates to: "Bomb  Bomb  Bomb  Bomb Bomb   Bomb Bomb"
        osSyncPrintf(" ??????  ??????  ??????  ?????? ??????   ?????? ?????? \n");
        bombCount = AMMO(ITEM_BOMB) + 1;
        AMMO(ITEM_BOMB) = bombCount;
        if (bombCount > CUR_CAPACITY(UPG_BOMB_BAG))
            AMMO(ITEM_BOMB) = CUR_CAPACITY(UPG_BOMB_BAG);
        return ITEM_NONE;
    }
    else if ((item >= ITEM_BOMBS_5) && (item <= ITEM_BOMBS_30))
    {
        bombCount = AMMO(ITEM_BOMB) + sAmmoRefillCounts[item - ITEM_BOMBS_5];
        AMMO(ITEM_BOMB) = bombCount;
        if (bombCount > CUR_CAPACITY(UPG_BOMB_BAG))
            AMMO(ITEM_BOMB) = CUR_CAPACITY(UPG_BOMB_BAG);
        return ITEM_NONE;
    }
    else if (item == ITEM_BOMBCHU)
    {
        if (gSaveContext.items[slot] == ITEM_NONE)
        {
            INV_CONTENT(ITEM_BOMBCHU) = ITEM_BOMBCHU;
            AMMO(ITEM_BOMBCHU) = 10;
            return ITEM_NONE;
        }
        else
        {
            AMMO(ITEM_BOMBCHU) += 10;
            if (AMMO(ITEM_BOMBCHU) > 50)
                AMMO(ITEM_BOMBCHU) = 50;
            return ITEM_NONE;
        }
    }
    else if ((item == ITEM_BOMBCHUS_5) || (item == ITEM_BOMBCHUS_20))
    {
        if (gSaveContext.items[slot] == ITEM_NONE)
        {
            INV_CONTENT(ITEM_BOMBCHU) = ITEM_BOMBCHU;
            AMMO(ITEM_BOMBCHU) += sAmmoRefillCounts[item - ITEM_BOMBCHUS_5 + 8];
            return ITEM_NONE;
        }
        else
        {
            AMMO(ITEM_BOMBCHU) += sAmmoRefillCounts[item - ITEM_BOMBCHUS_5 + 8];
            if (AMMO(ITEM_BOMBCHU) > 50)
                AMMO(ITEM_BOMBCHU) = 50;
            return ITEM_NONE;
        }
    }
    else if ((item >= ITEM_ARROWS_SMALL) && (item <= ITEM_ARROWS_LARGE))
    {
        AMMO(ITEM_BOW) += sAmmoRefillCounts[item - ITEM_ARROWS_SMALL + 4];

        if ((AMMO(ITEM_BOW) >= CUR_CAPACITY(UPG_QUIVER)) || (AMMO(ITEM_BOW) < 0))
            AMMO(ITEM_BOW) = CUR_CAPACITY(UPG_QUIVER);

        osSyncPrintf("%d???  Item_MaxGet=%d\n", AMMO(ITEM_BOW), CUR_CAPACITY(UPG_QUIVER));

        return ITEM_BOW;
    }
    else if (item == ITEM_SLINGSHOT)
    {
        Inventory_ChangeUpgrade(UPG_BULLET_BAG, 1);
        INV_CONTENT(ITEM_SLINGSHOT) = ITEM_SLINGSHOT;
        AMMO(ITEM_SLINGSHOT) = 30;
        return ITEM_NONE;
    }
    else if (item == ITEM_SEEDS)
    {
        AMMO(ITEM_SLINGSHOT) += 5;

        if (AMMO(ITEM_SLINGSHOT) >= CUR_CAPACITY(UPG_BULLET_BAG))
            AMMO(ITEM_SLINGSHOT) = CUR_CAPACITY(UPG_BULLET_BAG);

        if (!(gSaveContext.item_get_inf[1] & 8))
        {
            gSaveContext.item_get_inf[1] |= 8;
            return ITEM_NONE;
        }

        return ITEM_SEEDS;
    }
    else if (item == ITEM_SEEDS_30)
    {
        AMMO(ITEM_SLINGSHOT) += 30;

        if (AMMO(ITEM_SLINGSHOT) >= CUR_CAPACITY(UPG_BULLET_BAG))
            AMMO(ITEM_SLINGSHOT) = CUR_CAPACITY(UPG_BULLET_BAG);

        if (!(gSaveContext.item_get_inf[1] & 8))
        {
            gSaveContext.item_get_inf[1] |= 8;
            return ITEM_NONE;
        }

        return ITEM_SEEDS;
    }
    else if (item == ITEM_OCARINA_FAIRY)
    {
        INV_CONTENT(ITEM_OCARINA_FAIRY) = ITEM_OCARINA_FAIRY;
        return ITEM_NONE;
    }
    else if (item == ITEM_OCARINA_TIME)
    {
        INV_CONTENT(ITEM_OCARINA_TIME) = ITEM_OCARINA_TIME;
        for (i = 1; i < 4; i++)
        {
            if (gSaveContext.equips.button_items[i] == ITEM_OCARINA_FAIRY)
            {
                gSaveContext.equips.button_items[i] = ITEM_OCARINA_TIME;
                Interface_LoadItemIcon1(globalCtx, i);
            }
        }
        return ITEM_NONE;
    }
    else if (item == ITEM_BEAN)
    {
        if (gSaveContext.items[slot] == ITEM_NONE)
        {
            INV_CONTENT(item) = item;
            AMMO(ITEM_BEAN) = 1;
            BEANS_BOUGHT = 1;
        }
        else
        {
            AMMO(ITEM_BEAN)++;
            BEANS_BOUGHT++;
        }
        return ITEM_NONE;
    }
    else if ((item == ITEM_HEART_PIECE_2) || (item == ITEM_HEART_PIECE))
    {
        gSaveContext.quest_items += 0x10000000;
        return ITEM_NONE;
    }
    else if (item == ITEM_HEART_CONTAINER)
    {
        gSaveContext.health_capacity += 0x10;
        gSaveContext.health += 0x10;
        return ITEM_NONE;
    }
    else if (item == ITEM_HEART)
    {
        // Translates to: "Recovery Heart"
        osSyncPrintf("?????????????????????????????????????????????\n");
        Health_ChangeBy(globalCtx, 0x10);
        return item;
    }
    else if (item == ITEM_MAGIC_SMALL)
    {
        if (gSaveContext.unk_13F0 != 10)
            func_80087680(globalCtx);

        func_80087708(globalCtx, 12, 5);

        if (!(gSaveContext.inf_table[25] & 0x100))
        {
            gSaveContext.inf_table[25] |= 0x100;
            return ITEM_NONE;
        }

        return item;
    }
    else if (item == ITEM_MAGIC_LARGE)
    {
        if (gSaveContext.unk_13F0 != 10)
            func_80087680(globalCtx);

        func_80087708(globalCtx, 24, 5);

        if (!(gSaveContext.inf_table[25] & 0x100))
        {
            gSaveContext.inf_table[25] |= 0x100;
            return ITEM_NONE;
        }

        return item;
    }
    else if ((item >= ITEM_RUPEE_GREEN) && (item <= ITEM_INVALID_8))
    {
        Rupees_ChangeBy(sAmmoRefillCounts[item - ITEM_RUPEE_GREEN + 10]);
        return ITEM_NONE;
    }
    else if (item == ITEM_BOTTLE)
    {
        for (i = 0; i < 4; i++)
        {
            if (gSaveContext.items[SLOT(item) + i] == ITEM_NONE)
            {
                gSaveContext.items[SLOT(item) + i] = item;
                return ITEM_NONE;
            }
        }
    }
    else if (((item >= ITEM_POTION_RED) && (item <= ITEM_POE)) || (item == ITEM_MILK))
    {
        bottleSlot = SLOT(item);

        if ((item != ITEM_MILK_BOTTLE) && (item != ITEM_LETTER_RUTO))
        {
            if (item == ITEM_MILK)
            {
                item = ITEM_MILK_BOTTLE;
                bottleSlot = SLOT(item);
            }

            for (i = 0; i < 4; i++)
            {
                if (gSaveContext.items[bottleSlot + i] == ITEM_BOTTLE)
                {
                    // Translates to: "Item_Pt(1)=%d Item_Pt(2)=%d Item_Pt(3)=%d   Empty Bottle=%d   Content=%d"
                    osSyncPrintf("Item_Pt(1)=%d Item_Pt(2)=%d Item_Pt(3)=%d   ??????=%d   ??????=%d\n",
                                gSaveContext.equips.c_button_slots[0],
                                gSaveContext.equips.c_button_slots[1],
                                gSaveContext.equips.c_button_slots[2],
                                bottleSlot + i, item);

                    if ((bottleSlot + i) == gSaveContext.equips.c_button_slots[0])
                    {
                        gSaveContext.equips.button_items[1] = item;
                        Interface_LoadItemIcon2(globalCtx, 1);
                        gSaveContext.button_status[1] = BTN_ENABLED;
                    }
                    else if ((bottleSlot + i) == gSaveContext.equips.c_button_slots[1])
                    {
                        gSaveContext.equips.button_items[2] = item;
                        Interface_LoadItemIcon2(globalCtx, 2);
                        gSaveContext.button_status[2] = BTN_ENABLED;
                    }
                    else if ((bottleSlot + i) == gSaveContext.equips.c_button_slots[2])
                    {
                        gSaveContext.equips.button_items[3] = item;
                        Interface_LoadItemIcon1(globalCtx, 3);
                        gSaveContext.button_status[3] = BTN_ENABLED;
                    }

                    gSaveContext.items[bottleSlot + i] = item;
                    return ITEM_NONE;
                }
            }
        }
        else
        {
            for (i = 0; i < 4; i++)
            {
                if (gSaveContext.items[bottleSlot + i] == ITEM_NONE)
                {
                    gSaveContext.items[bottleSlot + i] = item;
                    return ITEM_NONE;
                }
            }
        }
    }
    else if ((item >= ITEM_WEIRD_EGG) && (item <= ITEM_CLAIM_CHECK))
    {
        if (item == ITEM_SAW)
            gSaveContext.item_get_inf[1] |= 0x8000;

        prevTradeItem = INV_CONTENT(item);
        INV_CONTENT(item) = item;

        if (prevTradeItem != ITEM_NONE)
        {
            for (i = 1; i < 4; i++)
            {
                if (prevTradeItem == gSaveContext.equips.button_items[i])
                {
                    if (item != ITEM_SOLD_OUT)
                    {
                        gSaveContext.equips.button_items[i] = item;
                        Interface_LoadItemIcon1(globalCtx, i);
                    }
                    else
                    {
                        gSaveContext.equips.button_items[i] = ITEM_NONE;
                    }
                    return ITEM_NONE;
                }
            }
        }

        return ITEM_NONE;
    }

    oldItem = gSaveContext.items[slot];
    osSyncPrintf("Item_Register(%d)=%d  %d\n", slot, item, oldItem);
    INV_CONTENT(item) = item;

    return oldItem;
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_parameter/Item_Give.s")
#endif

u8 Item_CheckObtainability(u8 item)
{
    s16 i;
    s16 slot;
    s32 bottleSlot;

    slot = SLOT(item);
    if (item >= ITEM_STICKS_5)
        slot = SLOT(sExtraItemBases[item - ITEM_STICKS_5]);

    osSyncPrintf(VT_FGCOL(GREEN));
    osSyncPrintf("item_get_non_setting=%d  pt=%d  z=%x\n", item, slot, gSaveContext.items[slot]);
    osSyncPrintf(VT_RST);

    if ((item >= ITEM_MEDALLION_FOREST) && (item <= ITEM_MEDALLION_LIGHT))
    {
        return ITEM_NONE;
    }
    else if ((item >= ITEM_KOKIRI_EMERALD) && (item <= ITEM_SKULL_TOKEN))
    {
        return ITEM_NONE;
    }
    else if ((item >= ITEM_SWORD_KOKIRI) && (item <= ITEM_SWORD_BGS))
    {
        if (item == ITEM_SWORD_BGS)
            return ITEM_NONE;
        else if ((gBitFlags[item - ITEM_SWORD_KOKIRI] << gEquipShifts[EQUIP_SWORD]) & gSaveContext.equipment)
            return item;
        else
            return ITEM_NONE;
    }
    else if ((item >= ITEM_SHIELD_DEKU) && (item <= ITEM_SHIELD_MIRROR))
    {
        if ((gBitFlags[item - ITEM_SHIELD_DEKU] << gEquipShifts[EQUIP_SHIELD]) & gSaveContext.equipment)
            return item;
        else
            return ITEM_NONE;
    }
    else if ((item >= ITEM_TUNIC_KOKIRI) && (item <= ITEM_TUNIC_ZORA))
    {
        if ((gBitFlags[item - ITEM_TUNIC_KOKIRI] << gEquipShifts[EQUIP_TUNIC]) & gSaveContext.equipment)
            return item;
        else
            return ITEM_NONE;
    }
    else if ((item >= ITEM_BOOTS_KOKIRI) && (item <= ITEM_BOOTS_HOVER))
    {
        if ((gBitFlags[item - ITEM_BOOTS_KOKIRI] << gEquipShifts[EQUIP_BOOTS]) & gSaveContext.equipment)
            return item;
        else
            return ITEM_NONE;
    }
    else if ((item == ITEM_KEY_BOSS) || (item == ITEM_COMPASS) || (item == ITEM_DUNGEON_MAP))
    {
        return ITEM_NONE;
    }
    else if (item == ITEM_KEY_SMALL)
    {
        return ITEM_NONE;
    }
    else if ((item >= ITEM_SLINGSHOT) && (item <= ITEM_BOMBCHU))
    {
        return ITEM_NONE;
    }
    else if ((item == ITEM_BOMBCHUS_5) || (item == ITEM_BOMBCHUS_20))
    {
        return ITEM_NONE;
    }
    else if ((item == ITEM_QUIVER_30) || (item == ITEM_BOW))
    {
        if (CUR_UPG_VALUE(UPG_QUIVER) == 0)
            return ITEM_NONE;
        else
            return 0;
    }
    else if ((item == ITEM_QUIVER_40) || (item == ITEM_QUIVER_50))
    {
        return ITEM_NONE;
    }
    else if ((item == ITEM_BULLET_BAG_40) || (item == ITEM_BULLET_BAG_50))
    {
        return ITEM_NONE;
    }
    else if ((item == ITEM_BOMB_BAG_20) || (item == ITEM_BOMB))
    {
        if (CUR_UPG_VALUE(UPG_BOMB_BAG) == 0)
            return ITEM_NONE;
        else
            return 0;
    }
    else if ((item >= ITEM_STICK_UPGRADE_20) && (item <= ITEM_NUT_UPGRADE_40))
    {
        return ITEM_NONE;
    }
    else if ((item >= ITEM_BOMB_BAG_30) && (item <= ITEM_WALLET_GIANT))
    {
        return ITEM_NONE;
    }
    else if (item == ITEM_LONGSHOT)
    {
        return ITEM_NONE;
    }
    else if ((item == ITEM_SEEDS) || (item == ITEM_SEEDS_30))
    {
        if (!(gSaveContext.item_get_inf[1] & 0x8))
            return ITEM_NONE;
        else
            return ITEM_SEEDS;
    }
    else if (item == ITEM_BEAN)
    {
        return ITEM_NONE;
    }
    else if ((item == ITEM_HEART_PIECE_2) || (item == ITEM_HEART_PIECE))
    {
        return ITEM_NONE;
    }
    else if (item == ITEM_HEART_CONTAINER)
    {
        return ITEM_NONE;
    }
    else if (item == ITEM_HEART)
    {
        return ITEM_HEART;
    }
    else if ((item == ITEM_MAGIC_SMALL) || (item == ITEM_MAGIC_LARGE))
    {
        // Translates to: "Magic Pot Get_Inf_Table( 25, 0x0100)=%d"
        osSyncPrintf("???????????? Get_Inf_Table( 25, 0x0100)=%d\n", gSaveContext.inf_table[25] & 0x100);
        if (!(gSaveContext.inf_table[25] & 0x100))
            return ITEM_NONE;
        else
            return item;
    }
    else if ((item >= ITEM_RUPEE_GREEN) && (item <= ITEM_INVALID_8))
    {
        return ITEM_NONE;
    }
    else if (item == ITEM_BOTTLE)
    {
        return ITEM_NONE;
    }
    else if (((item >= ITEM_POTION_RED) && (item <= ITEM_POE)) || (item == ITEM_MILK))
    {
        bottleSlot = SLOT(item);

        if ((item != ITEM_MILK_BOTTLE) && (item != ITEM_LETTER_RUTO))
        {
            if (item == ITEM_MILK)
            {
                item = ITEM_MILK_BOTTLE;
                bottleSlot = SLOT(item);
            }

            for (i = 0; i < 4; i++)
            {
                if (gSaveContext.items[bottleSlot + i] == ITEM_BOTTLE)
                    return ITEM_NONE;
            }
        }
        else
        {
            for (i = 0; i < 4; i++)
            {
                if (gSaveContext.items[bottleSlot + i] == ITEM_NONE)
                    return ITEM_NONE;
            }
        }
    }
    else if ((item >= ITEM_WEIRD_EGG) && (item <= ITEM_CLAIM_CHECK))
    {
        return ITEM_NONE;
    }

    return gSaveContext.items[slot];
}

void Inventory_DeleteItem(u16 item, u16 invSlot)
{
    s16 i;

    if (item == ITEM_BEAN)
        BEANS_BOUGHT = 0; // Beans bought

    gSaveContext.items[invSlot] = ITEM_NONE;

    osSyncPrintf("\nItem_Register(%d)\n", invSlot, gSaveContext.items[invSlot]);

    for (i = 1; i < 4; i++)
    {
        if (gSaveContext.equips.button_items[i] == item)
        {
            gSaveContext.equips.button_items[i] = ITEM_NONE;
            gSaveContext.equips.c_button_slots[i-1] = SLOT_NONE;
        }
    }
}

#ifdef NON_MATCHING
// regalloc differences
s32 Inventory_ReplaceItem(GlobalContext* globalCtx, u16 oldItem, u16 newItem)
{
    s16 i;
    s16 j;

    for (i = 0; i < ARRAY_COUNT(gSaveContext.items); i++)
    {
        if (gSaveContext.items[i] == oldItem)
        {
            gSaveContext.items[i] = newItem;
            // Translates to: "Item Purge (%d)"
            osSyncPrintf("??????????????????(%d)", i);
            for (j = 1; j < 4; j++)
            {
                if (gSaveContext.equips.button_items[j] == oldItem)
                {
                    gSaveContext.equips.button_items[j] = newItem;
                    Interface_LoadItemIcon1(globalCtx, j);
                    break;
                }
            }
            return 1;
        }
    }

    return 0;
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_parameter/Inventory_ReplaceItem.s")
#endif

s32 Inventory_HasEmptyBottle(void)
{
    u8* items = gSaveContext.items;

    if (items[SLOT_BOTTLE_1] == ITEM_BOTTLE)
        return 1;
    else if (items[SLOT_BOTTLE_2] == ITEM_BOTTLE)
        return 1;
    else if (items[SLOT_BOTTLE_3] == ITEM_BOTTLE)
        return 1;
    else if (items[SLOT_BOTTLE_4] == ITEM_BOTTLE)
        return 1;
    else
        return 0;
}

s32 Inventory_HasSpecificBottle(u8 bottleItem)
{
    u8* items = gSaveContext.items;

    if (items[SLOT_BOTTLE_1] == bottleItem)
        return 1;
    else if (items[SLOT_BOTTLE_2] == bottleItem)
        return 1;
    else if (items[SLOT_BOTTLE_3] == bottleItem)
        return 1;
    else if (items[SLOT_BOTTLE_4] == bottleItem)
        return 1;
    else
        return 0;
}

#ifdef NON_MATCHING
// save context pointer isn't reused after Interface_LoadItemIcon1 when it should be
void Inventory_UpdateBottleItem(GlobalContext* globalCtx, u8 item, u8 cButton)
{
    osSyncPrintf("item_no=%x,  c_no=%x,  Pt=%x  Item_Register=%x\n",
                 item, cButton, gSaveContext.equips.c_button_slots[cButton-1],
                 gSaveContext.items[gSaveContext.equips.c_button_slots[cButton-1]]);

    // Special case to only empty half of a Lon Lon Milk Bottle
    if ((gSaveContext.items[gSaveContext.equips.c_button_slots[cButton-1]] == ITEM_MILK_BOTTLE) && (item == ITEM_BOTTLE))
        item = ITEM_MILK_HALF;

    gSaveContext.items[gSaveContext.equips.c_button_slots[cButton-1]] = item;
    gSaveContext.equips.button_items[cButton] = item;

    if (1) ; // Improves codegen but may not be necessary

    Interface_LoadItemIcon1(globalCtx, cButton);

    globalCtx->pauseCtx.unk_23E = item;
    gSaveContext.button_status[0] = BTN_ENABLED;
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_parameter/Inventory_UpdateBottleItem.s")
#endif

#ifdef NON_MATCHING
// mostly regalloc, minor ordering, and stack usage differences
s32 Inventory_ConsumeFairy(GlobalContext* globalCtx)
{
    s32 bottleSlot;
    s16 i;
    s16 j;

    bottleSlot = SLOT(ITEM_FAIRY);

    for (i = 0; i < 4; i++)
    {
        if (gSaveContext.items[bottleSlot + i] == ITEM_FAIRY)
        {
            for (j = 1; j < 4; j++)
            {
                if (gSaveContext.equips.button_items[j] == ITEM_FAIRY)
                {
                    gSaveContext.equips.button_items[j] = ITEM_BOTTLE;
                    Interface_LoadItemIcon1(globalCtx, j);
                    bottleSlot = gSaveContext.equips.c_button_slots[j-1];
                    break;
                }
            }
            // Translates to: "Fairy Usage???%d"
            osSyncPrintf("???????????????%d\n", bottleSlot);
            gSaveContext.items[bottleSlot] = ITEM_BOTTLE;
            return 1;
        }
    }

    return 0;
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_parameter/Inventory_ConsumeFairy.s")
#endif

void func_80086D5C(s32* buf, u16 size)
{
    u16 i;

    for (i = 0; i < size; i++)
    {
        buf[i] = 0;
    }
}

u32 sDoActionTextures[] = { 0x07000000, 0x07000180 };

#ifdef NON_MATCHING
// 0x80000000 is reused in the 2 *_TO_VIRTUAL macros when it shouldn't
void Interface_LoadActionLabel(InterfaceContext* interfaceCtx, u16 action, s16 arg2)
{
    if (action >= 0x1D)
        action = 0x0A;

    if (gSaveContext.language != 0)
        action += 0x1D;

    if (gSaveContext.language == 2)
        action += 0x1D;

    if ((action != 0x0A) && (action != 0x27) && (action != 0x44))
    {
        osCreateMesgQueue(&interfaceCtx->loadQueue, &interfaceCtx->loadMsg, OS_MESG_BLOCK);
        DmaMgr_SendRequest2(&interfaceCtx->dmaRequest_160, (u32)interfaceCtx->do_actionSegment + (arg2 * 0x180),
                            (u32)_do_action_staticSegmentRomStart + (action * 0x180),
                            0x180, 0, &interfaceCtx->loadQueue, 0, "../z_parameter.c", 2145);
        osRecvMesg(&interfaceCtx->loadQueue, NULL, OS_MESG_BLOCK);
    }
    else
    {
        gSegments[7] = PHYSICAL_TO_VIRTUAL(interfaceCtx->do_actionSegment);
        func_80086D5C(SEGMENTED_TO_VIRTUAL(sDoActionTextures[arg2]), 0x180 / 4);
    }
}
#else
void Interface_LoadActionLabel(InterfaceContext* interfaceCtx, u16 action, s16 arg2);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_parameter/Interface_LoadActionLabel.s")
#endif

void Interface_SetDoAction(GlobalContext* globalCtx, u16 action)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    PauseContext* pauseCtx = &globalCtx->pauseCtx;

    if (interfaceCtx->unk_1F0 != action)
    {
        interfaceCtx->unk_1F0 = action;
        interfaceCtx->unk_1EC = 1;
        interfaceCtx->unk_1F4 = 0.0f;
        Interface_LoadActionLabel(interfaceCtx, action, 1);
        if (pauseCtx->state != 0)
            interfaceCtx->unk_1EC = 3;
    }
}

void Interface_SetNaviCall(GlobalContext* globalCtx, u16 naviCallState)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;

    if (((naviCallState == 0x1D) || (naviCallState == 0x1E)) &&
        !interfaceCtx->naviCalling &&
        (globalCtx->csCtx.state == 0))
    {
        // Whitespace matters for codegen here
        if (naviCallState == 0x1E) Audio_PlaySoundGeneral(NA_SE_VO_NAVY_CALL, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        if (naviCallState == 0x1D) func_800F4524(&D_801333D4, NA_SE_VO_NA_HELLO_2, 32);

        interfaceCtx->naviCalling = 1;
        sCUpInvisible = 0;
        sCUpTimer = 10;
    }
    else if ((naviCallState == 0x1F) &&
             interfaceCtx->naviCalling)
    {
        interfaceCtx->naviCalling = 0;
    }
}

void Interface_LoadActionLabelB(GlobalContext* globalCtx, u16 action)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;

    if (gSaveContext.language != 0)
        action += 0x1D;

    if (gSaveContext.language == 2)
        action += 0x1D;

    interfaceCtx->unk_1FC = action;

    osCreateMesgQueue(&interfaceCtx->loadQueue, &interfaceCtx->loadMsg, OS_MESG_BLOCK);
    DmaMgr_SendRequest2(&interfaceCtx->dmaRequest_160, (u32)interfaceCtx->do_actionSegment + 0x180,
                        (u32)_do_action_staticSegmentRomStart + (action * 0x180),
                        0x180, 0, &interfaceCtx->loadQueue, 0, "../z_parameter.c", 2228);
    osRecvMesg(&interfaceCtx->loadQueue, NULL, OS_MESG_BLOCK);

    interfaceCtx->unk_1FA = 1;
}

s32 Health_ChangeBy(GlobalContext* globalCtx, s16 healthChange)
{
    u16 heartCount;
    u16 healthLevel;

    // Translates to: "??????????????? Fluctuation=%d (now=%d, max=%d) ?????????"
    osSyncPrintf("???????????????  ??????=%d (now=%d, max=%d)  ?????????", healthChange, gSaveContext.health, gSaveContext.health_capacity);

    // Whitespace matters for codegen here
    if (healthChange > 0) Audio_PlaySoundGeneral(NA_SE_SY_HP_RECOVER, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
    else if ((gSaveContext.double_defense != 0) && (healthChange < 0))
    {
        healthChange >>= 1;
        // Translates to: "Heart decrease halved!!???%d"
        osSyncPrintf("??????????????????????????????%d\n", healthChange);
    }

    gSaveContext.health += healthChange;

    if (gSaveContext.health > gSaveContext.health_capacity)
        gSaveContext.health = gSaveContext.health_capacity;

    heartCount = gSaveContext.health % 0x10;

    healthLevel = heartCount;
    if (heartCount != 0)
    {
        if (heartCount > 10)
            healthLevel = 3;
        else if (heartCount > 5)
            healthLevel = 2;
        else
            healthLevel = 1;
    }

    // Translates to: "Life=%d ?????????  %d ??????????????????"
    osSyncPrintf("  ?????????=%d  ?????????  %d  ??????????????????\n", gSaveContext.health, healthLevel);

    if (gSaveContext.health <= 0)
    {
        gSaveContext.health = 0;
        return 0;
    }
    else
    {
        return 1;
    }
}

void Health_GiveHearts(s16 hearts)
{
    gSaveContext.health_capacity += hearts * 0x10;
}

void Rupees_ChangeBy(s16 rupeeChange)
{
    gSaveContext.rupee_accumulator += rupeeChange;
}

void Inventory_ChangeAmmo(s16 item, s16 ammoChange)
{
    // Translates to: "Item = (%d)    Amount = (%d + %d)"
    osSyncPrintf("???????????? = (%d)    ??? = (%d + %d)  ", item, AMMO(item), ammoChange);

    if (item == ITEM_STICK)
    {
        AMMO(ITEM_STICK) += ammoChange;

        if (AMMO(ITEM_STICK) >= CUR_CAPACITY(UPG_STICKS))
            AMMO(ITEM_STICK) = CUR_CAPACITY(UPG_STICKS);
        else if (AMMO(ITEM_STICK) < 0)
            AMMO(ITEM_STICK) = 0;
    }
    else if (item == ITEM_NUT)
    {
        AMMO(ITEM_NUT) += ammoChange;

        if (AMMO(ITEM_NUT) >= CUR_CAPACITY(UPG_NUTS))
            AMMO(ITEM_NUT) = CUR_CAPACITY(UPG_NUTS);
        else if (AMMO(ITEM_NUT) < 0)
            AMMO(ITEM_NUT) = 0;
    }
    else if (item == ITEM_BOMBCHU)
    {
        AMMO(ITEM_BOMBCHU) += ammoChange;

        if (AMMO(ITEM_BOMBCHU) >= 50)
            AMMO(ITEM_BOMBCHU) = 50;
        else if (AMMO(ITEM_BOMBCHU) < 0)
            AMMO(ITEM_BOMBCHU) = 0;
    }
    else if (item == ITEM_BOW)
    {
        AMMO(ITEM_BOW) += ammoChange;

        if (AMMO(ITEM_BOW) >= CUR_CAPACITY(UPG_QUIVER))
            AMMO(ITEM_BOW) = CUR_CAPACITY(UPG_QUIVER);
        else if (AMMO(ITEM_BOW) < 0)
            AMMO(ITEM_BOW) = 0;
    }
    else if ((item == ITEM_SLINGSHOT) || (item == ITEM_SEEDS))
    {
        AMMO(ITEM_SLINGSHOT) += ammoChange;

        if (AMMO(ITEM_SLINGSHOT) >= CUR_CAPACITY(UPG_BULLET_BAG))
            AMMO(ITEM_SLINGSHOT) = CUR_CAPACITY(UPG_BULLET_BAG);
        else if (AMMO(ITEM_SLINGSHOT) < 0)
            AMMO(ITEM_SLINGSHOT) = 0;
    }
    else if (item == ITEM_BOMB)
    {
        AMMO(ITEM_BOMB) += ammoChange;

        if (AMMO(ITEM_BOMB) >= CUR_CAPACITY(UPG_BOMB_BAG))
            AMMO(ITEM_BOMB) = CUR_CAPACITY(UPG_BOMB_BAG);
        else if (AMMO(ITEM_BOMB) < 0)
            AMMO(ITEM_BOMB) = 0;
    }
    else if (item == ITEM_BEAN)
    {
        AMMO(ITEM_BEAN) += ammoChange;
    }

    // Translates to: "Total = (%d)"
    osSyncPrintf("?????? = (%d)\n", AMMO(item));
}

void func_80087680(GlobalContext* globalCtx)
{
    if (gSaveContext.magic_acquired)
    {
        gSaveContext.unk_13F2 = gSaveContext.unk_13F0;
        gSaveContext.unk_13F6 = (gSaveContext.double_magic * 0x30) + 0x30;
        gSaveContext.unk_13F0 = 9;
    }
}

void func_800876C8(GlobalContext* globalCtx)
{
    if ((gSaveContext.unk_13F0 != 8) && (gSaveContext.unk_13F0 != 9))
    {
        if (gSaveContext.unk_13F0 == 10)
            gSaveContext.unk_13F2 = gSaveContext.unk_13F0;
        gSaveContext.unk_13F0 = 5;
    }
}

s32 func_80087708(GlobalContext* globalCtx, s16 arg1, s16 arg2)
{
    if (!gSaveContext.magic_acquired)
        return 0;

    if ((arg2 != 5) && (gSaveContext.magic - arg1) < 0)
    {
        if (gSaveContext.unk_13F4 != 0)
            Audio_PlaySoundGeneral(NA_SE_SY_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        return 0;
    }

    switch (arg2)
    {
        case 0:
        case 2:
            if ((gSaveContext.unk_13F0 == 0) || (gSaveContext.unk_13F0 == 7))
            {
                if (gSaveContext.unk_13F0 == 7)
                    globalCtx->actorCtx.unk_03 = 0;
                gSaveContext.unk_13F8 = gSaveContext.magic - arg1;
                gSaveContext.unk_13F0 = 1;
                return 1;
            }
            else
            {
                Audio_PlaySoundGeneral(NA_SE_SY_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                return 0;
            }
        case 1:
            if ((gSaveContext.unk_13F0 == 0) || (gSaveContext.unk_13F0 == 7))
            {
                if (gSaveContext.unk_13F0 == 7)
                    globalCtx->actorCtx.unk_03 = 0;
                gSaveContext.unk_13F8 = gSaveContext.magic - arg1;
                gSaveContext.unk_13F0 = 6;
                return 1;
            }
            else
            {
                Audio_PlaySoundGeneral(NA_SE_SY_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                return 0;
            }
        case 3:
            if (gSaveContext.unk_13F0 == 0)
            {
                if (gSaveContext.magic != 0)
                {
                    globalCtx->interfaceCtx.unk_230 = 80;
                    gSaveContext.unk_13F0 = 7;
                    return 1;
                }
                else
                    return 0;
            }
            else
            {
                if (gSaveContext.unk_13F0 == 7)
                    return 1;
                else
                    return 0;
            }
        case 4:
            if ((gSaveContext.unk_13F0 == 0) || (gSaveContext.unk_13F0 == 7))
            {
                if (gSaveContext.unk_13F0 == 7)
                    globalCtx->actorCtx.unk_03 = 0;
                gSaveContext.unk_13F8 = gSaveContext.magic - arg1;
                gSaveContext.unk_13F0 = 4;
                return 1;
            }
            else
            {
                Audio_PlaySoundGeneral(NA_SE_SY_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                return 0;
            }
        case 5:
            if (gSaveContext.unk_13F4 >= gSaveContext.magic)
            {
                gSaveContext.unk_13F8 = gSaveContext.magic + arg1;

                if (gSaveContext.unk_13F8 >= gSaveContext.unk_13F4)
                    gSaveContext.unk_13F8 = gSaveContext.unk_13F4;

                gSaveContext.unk_13F0 = 10;
                return 1;
            }
            break;
    }

    return 0;
}

#ifdef NON_MATCHING
// this function still needs some work
void Interface_UpdateMagicBar(GlobalContext* globalCtx)
{
    static s16 sMagicBorderColors[][3] =
    {
        { 0xFF, 0xFF, 0xFF },
        { 0x96, 0x96, 0x96 },
        { 0xFF, 0xFF, 0x96 },
        { 0xFF, 0xFF, 0x32 },
    };
    static s16 sMagicBorderIndexes[] = { 0, 1, 1, 0 };
    static s16 sMagicBorderRatio = 2;
    static s16 sMagicBorderStep = 1;
    s16* color;
    s16 maxMagic;

    switch (gSaveContext.unk_13F0)
    {
        case 8:
            maxMagic = gSaveContext.magic_level * 0x30;
            if (gSaveContext.unk_13F4 != maxMagic)
            {
                if (gSaveContext.unk_13F4 < maxMagic)
                {
                    gSaveContext.unk_13F4 += 8;
                    if (gSaveContext.unk_13F4 > maxMagic)
                        gSaveContext.unk_13F4 = maxMagic;
                }
                else
                {
                    gSaveContext.unk_13F4 -= 8;
                    if (gSaveContext.unk_13F4 <= maxMagic)
                        gSaveContext.unk_13F4 = maxMagic;
                }
            }
            else
            {
                gSaveContext.unk_13F0 = 9;
            }
            break;
        case 9:
            gSaveContext.magic += 4;

            if (gSaveContext.game_mode == 0 && gSaveContext.scene_setup_index < 4)
                Audio_PlaySoundGeneral(0x401F, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);

            // Translates to: "Storage MAGIC_NOW=%d (%d)"
            osSyncPrintf("?????? MAGIC_NOW=%d (%d)\n", gSaveContext.magic, gSaveContext.unk_13F6);
            if (gSaveContext.magic >= gSaveContext.unk_13F6)
            {
                gSaveContext.magic = gSaveContext.unk_13F6;
                gSaveContext.unk_13F0 = gSaveContext.unk_13F2;
                gSaveContext.unk_13F2 = 0;
            }
            break;
        case 1:
            sMagicBorderRatio = 2;
            gSaveContext.unk_13F0 = 2;
            break;
        case 2:
            gSaveContext.magic -= 2;
            if (gSaveContext.magic <= 0)
            {
                gSaveContext.magic = 0;
                gSaveContext.unk_13F0 = 3;
                sMagicBorderB = 0xFF;
                sMagicBorderG = 0xFF;
                sMagicBorderR = 0xFF;
            }
            else if (gSaveContext.magic == gSaveContext.unk_13F8)
            {
                gSaveContext.unk_13F0 = 3;
                sMagicBorderB = 0xFF;
                sMagicBorderG = 0xFF;
                sMagicBorderR = 0xFF;
            }
        case 3:
        case 4:
        case 6:
            color = sMagicBorderColors[sMagicBorderIndexes[sMagicBorderStep]];

            if (sMagicBorderR >= color[0])
                sMagicBorderR -= ABS(sMagicBorderR - color[0]) / sMagicBorderRatio;
            else
                sMagicBorderR += ABS(sMagicBorderR - color[0]) / sMagicBorderRatio;

            if (sMagicBorderG >= color[1])
                sMagicBorderG -= ABS(sMagicBorderG - color[1]) / sMagicBorderRatio;
            else
                sMagicBorderG += ABS(sMagicBorderG - color[1]) / sMagicBorderRatio;

            if (sMagicBorderB >= color[2])
                sMagicBorderB -= ABS(sMagicBorderB - color[2]) / sMagicBorderRatio;
            else
                sMagicBorderB += ABS(sMagicBorderB - color[2]) / sMagicBorderRatio;

            sMagicBorderRatio--;
            if (sMagicBorderRatio == 0)
            {
                sMagicBorderR = color[0];
                sMagicBorderG = color[1];
                sMagicBorderB = color[2];
                sMagicBorderRatio = YREG(40 + sMagicBorderStep);
                sMagicBorderStep++;
                if (sMagicBorderStep >= 4)
                    sMagicBorderStep = 0;
            }
            break;
        case 5:
            sMagicBorderB = 0xFF;
            sMagicBorderG = 0xFF;
            sMagicBorderR = 0xFF;
            gSaveContext.unk_13F0 = 0;
            break;
        case 7:
            if ((globalCtx->pauseCtx.state == 0) &&
                (globalCtx->pauseCtx.flag == 0) &&
                (globalCtx->msgCtx.msgMode == 0) &&
                (globalCtx->unk_10A20 == 0) &&
                (globalCtx->sceneLoadFlag == 0) &&
                (globalCtx->unk_1241B == 0) &&
                (func_800BFC84(globalCtx) == 0))
            {
                if ((gSaveContext.magic == 0) ||
                    ((func_8008F2F8(globalCtx) >= 2) &&
                     (func_8008F2F8(globalCtx) < 5)) ||
                    ((gSaveContext.equips.button_items[1] != ITEM_LENS) &&
                     (gSaveContext.equips.button_items[2] != ITEM_LENS) &&
                     (gSaveContext.equips.button_items[3] != ITEM_LENS)) ||
                    (globalCtx->actorCtx.unk_03 == 0))
                {
                    globalCtx->actorCtx.unk_03 = 0;
                    Audio_PlaySoundGeneral(NA_SE_SY_GLASSMODE_OFF, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                    gSaveContext.unk_13F0 = 0;
                    sMagicBorderR = sMagicBorderG = sMagicBorderB = 0xFF;
                    break;
                }

                globalCtx->interfaceCtx.unk_230--;
                if (globalCtx->interfaceCtx.unk_230 == 0)
                {
                    gSaveContext.magic--;
                    globalCtx->interfaceCtx.unk_230 = 80;
                }
            }

            color = sMagicBorderColors[sMagicBorderIndexes[sMagicBorderStep]];

            if (sMagicBorderR >= color[0])
                sMagicBorderR -= ABS(sMagicBorderR - color[0]) / sMagicBorderRatio;
            else
                sMagicBorderR += ABS(sMagicBorderR - color[0]) / sMagicBorderRatio;

            if (sMagicBorderG >= color[1])
                sMagicBorderG -= ABS(sMagicBorderG - color[1]) / sMagicBorderRatio;
            else
                sMagicBorderG += ABS(sMagicBorderG - color[1]) / sMagicBorderRatio;

            if (sMagicBorderB >= color[2])
                sMagicBorderB -= ABS(sMagicBorderB - color[2]) / sMagicBorderRatio;
            else
                sMagicBorderB += ABS(sMagicBorderB - color[2]) / sMagicBorderRatio;

            sMagicBorderRatio--;
            if (sMagicBorderRatio == 0)
            {
                sMagicBorderR = color[0];
                sMagicBorderG = color[1];
                sMagicBorderB = color[2];
                sMagicBorderRatio = YREG(40 + sMagicBorderStep);
                sMagicBorderStep++;
                if (sMagicBorderStep >= 4)
                    sMagicBorderStep = 0;
            }
            break;
        case 10:
            gSaveContext.magic += 4;
            Audio_PlaySoundGeneral(0x401F, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
            if (gSaveContext.magic >= gSaveContext.unk_13F8)
            {
                gSaveContext.magic = gSaveContext.unk_13F8;
                gSaveContext.unk_13F0 = gSaveContext.unk_13F2;
                gSaveContext.unk_13F2 = 0;
            }
            break;
        default:
            gSaveContext.unk_13F0 = 0;
            break;
    }
}
#else
s16 sMagicBorderColors[][3] =
{
    { 0xFF, 0xFF, 0xFF },
    { 0x96, 0x96, 0x96 },
    { 0xFF, 0xFF, 0x96 },
    { 0xFF, 0xFF, 0x32 },
};
s16 sMagicBorderIndexes[] = { 0, 1, 1, 0 };
s16 sMagicBorderRatio = 2;
s16 sMagicBorderStep = 1;
void Interface_UpdateMagicBar(GlobalContext* globalCtx);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_parameter/Interface_UpdateMagicBar.s")
#endif

void Interface_DrawMagicBar(GlobalContext* globalCtx)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    s16 magicBarY;
    GraphicsContext* gfxCtx;
    Gfx* gfxArr[4];

    gfxCtx = globalCtx->gfxCtx;
    func_800C6AC4(gfxArr, globalCtx->gfxCtx, "../z_parameter.c", 2650);

    if (gSaveContext.magic_level != 0)
    {
        if (gSaveContext.health_capacity > 0xA0)
            magicBarY = R_MAGIC_BAR_LARGE_Y;
        else
            magicBarY = R_MAGIC_BAR_SMALL_Y;

        func_80094520(globalCtx->gfxCtx);

        gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, sMagicBorderR, sMagicBorderG, sMagicBorderB, interfaceCtx->magicAlpha);
        gDPSetEnvColor(gfxCtx->overlay.p++, 0x64, 0x32, 0x32, 0xFF);

        gfxCtx->overlay.p = Draw_TextureIA8(gfxCtx->overlay.p,
                                            D_020038C0,
                                            8, 16,
                                            R_MAGIC_BAR_X, magicBarY,
                                            8, 16,
                                            1024, 1024);

        gfxCtx->overlay.p = Draw_TextureIA8(gfxCtx->overlay.p,
                                            D_02003940,
                                            24, 16,
                                            R_MAGIC_BAR_X + 8, magicBarY,
                                            gSaveContext.unk_13F4, 16,
                                            1024, 1024);

        gDPSetTextureImage(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_16b, 1, D_020038C0);
        gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_16b,
                    0, 0, G_TX_LOADTILE, 0,
                    G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                    G_TX_MIRROR | G_TX_WRAP, 3, G_TX_NOLOD);
        gDPLoadSync(gfxCtx->overlay.p++);
        gDPLoadBlock(gfxCtx->overlay.p++, G_TX_LOADTILE, 0, 0, 63, 2048);
        gDPPipeSync(gfxCtx->overlay.p++);
        gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_8b,
                   1, 0, G_TX_RENDERTILE, 0,
                   G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                   G_TX_MIRROR | G_TX_WRAP, 3, G_TX_NOLOD);
        gDPSetTileSize(gfxCtx->overlay.p++, G_TX_RENDERTILE, 0, 0, 28, 60);

        gSPTextureRectangle(gfxCtx->overlay.p++,
                            ((R_MAGIC_BAR_X + gSaveContext.unk_13F4) + 8) << 2, magicBarY << 2,
                            ((R_MAGIC_BAR_X + gSaveContext.unk_13F4) + 16) << 2, (magicBarY + 16) << 2,
                            G_TX_RENDERTILE,
                            256, 0,
                            1024, 1024);

        gDPPipeSync(gfxCtx->overlay.p++);
        gDPSetCombineLERP(gfxCtx->overlay.p++,
                          PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, PRIMITIVE,
                          PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, PRIMITIVE);
        gDPSetEnvColor(gfxCtx->overlay.p++, 0x00, 0x00, 0x00, 0xFF);

        if (gSaveContext.unk_13F0 == 4)
        {
            // Yellow part of the bar being used when casting a spell
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFA, 0xFA, 0x00, interfaceCtx->magicAlpha);

            gDPLoadMultiBlock_4b(gfxCtx->overlay.p++,
                                 D_02003AC0,
                                 0,
                                 G_TX_RENDERTILE,
                                 G_IM_FMT_I,
                                 16, 16,
                                 0,
                                 G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                                 G_TX_NOMASK, G_TX_NOMASK,
                                 G_TX_NOLOD, G_TX_NOLOD);

            gSPTextureRectangle(gfxCtx->overlay.p++,
                                R_MAGIC_FILL_X << 2, (magicBarY + 3) << 2,
                                (R_MAGIC_FILL_X + gSaveContext.magic) << 2, (magicBarY + 10) << 2,
                                G_TX_RENDERTILE,
                                0, 0,
                                1024, 1024);

            // Fill the rest of the bar with the normal magic color
            gDPPipeSync(gfxCtx->overlay.p++);
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0,
                            R_MAGIC_FILL_COLOR(0), R_MAGIC_FILL_COLOR(1),
                            R_MAGIC_FILL_COLOR(2), interfaceCtx->magicAlpha);

            gSPTextureRectangle(gfxCtx->overlay.p++,
                                R_MAGIC_FILL_X << 2, (magicBarY + 3) << 2,
                                (R_MAGIC_FILL_X + gSaveContext.unk_13F8) << 2, (magicBarY + 10) << 2,
                                G_TX_RENDERTILE,
                                0, 0,
                                1024, 1024);
        }
        else
        {
            // Fill the whole bar with the normal magic color
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0,
                            R_MAGIC_FILL_COLOR(0), R_MAGIC_FILL_COLOR(1),
                            R_MAGIC_FILL_COLOR(2), interfaceCtx->magicAlpha);

            gDPLoadMultiBlock_4b(gfxCtx->overlay.p++,
                                 D_02003AC0,
                                 0,
                                 G_TX_RENDERTILE,
                                 G_IM_FMT_I,
                                 16, 16,
                                 0,
                                 G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                                 G_TX_NOMASK, G_TX_NOMASK,
                                 G_TX_NOLOD, G_TX_NOLOD);

            gSPTextureRectangle(gfxCtx->overlay.p++,
                                R_MAGIC_FILL_X << 2, (magicBarY + 3) << 2,
                                (R_MAGIC_FILL_X + gSaveContext.magic) << 2, (magicBarY + 10) << 2,
                                G_TX_RENDERTILE,
                                0, 0,
                                1024, 1024);
        }
    }

    func_800C6B54(gfxArr, globalCtx->gfxCtx, "../z_parameter.c", 2731);
}

void func_80088AA0(s16 arg0)
{
    gSaveContext.timer_x[1] = 140;
    gSaveContext.timer_y[1] = 80;
    D_80125A5C = 0;
    gSaveContext.timer_2_value = arg0;

    if (arg0 != 0)
        gSaveContext.timer_2_state = 1;
    else
        gSaveContext.timer_2_state = 7;
}

void func_80088AF0(GlobalContext* globalCtx)
{
    if (gSaveContext.timer_2_state != 0)
    {
        if (gSaveContext.event_inf[1] & 1)
            gSaveContext.timer_2_value = 239;
        else
            gSaveContext.timer_2_value = 1;
    }
}

void func_80088B34(s16 arg0)
{
    gSaveContext.timer_x[0] = 140;
    gSaveContext.timer_y[0] = 80;
    D_80125A5C = 0;
    gSaveContext.timer_1_value = arg0;

    if (arg0 != 0)
        gSaveContext.timer_1_state = 5;
    else
        gSaveContext.timer_1_state = 11;
}

void Interface_DrawActionLabel(GraphicsContext* gfxCtx, void* texture)
{
    Gfx* gfxArr[5];

    func_800C6AC4(gfxArr, gfxCtx, "../z_parameter.c", 2820);

    gDPSetTextureImage(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_16b, 1, texture);
    gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_16b,
               0, 0, G_TX_LOADTILE, 0,
               G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
               G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
    gDPLoadSync(gfxCtx->overlay.p++);
    gDPLoadBlock(gfxCtx->overlay.p++, G_TX_LOADTILE, 0, 0, 191, 683);
    gDPPipeSync(gfxCtx->overlay.p++);
    gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_4b,
               3, 0, G_TX_RENDERTILE, 0,
               G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
               G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
    gDPSetTileSize(gfxCtx->overlay.p++, G_TX_RENDERTILE, 0, 0, 188, 60);

    gSP1Quadrangle(gfxCtx->overlay.p++, 0, 2, 3, 1, 0);

    func_800C6B54(gfxArr, gfxCtx, "../z_parameter.c", 2829);
}

u8* sCUpLabelTextures[] = { D_02002FC0, D_02002FC0, D_02002FC0 };

s16 sStartButtonLeftPos[] = { 132, 130, 130 };

#ifdef NON_MATCHING
// regalloc and ordering differences
void Interface_DrawItemButtons(GlobalContext* globalCtx)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    Player* player = PLAYER;
    f32 temp;
    s16 i; // sp+0x14A
    s16 cUpAlpha;
    s32 pad;
    GraphicsContext* gfxCtx;
    Gfx* gfxArr[4];

    gfxCtx = globalCtx->gfxCtx;

    func_800C6AC4(gfxArr, globalCtx->gfxCtx, "../z_parameter.c", 2900);

    // B Button Color & Texture
    // Also loads the Item Button Texture reused by other buttons afterwards
    gDPPipeSync(gfxCtx->overlay.p++);
    gDPSetCombineLERP(gfxCtx->overlay.p++,
                      TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0,
                      TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0);
    gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0,
                    R_B_BTN_COLOR(0), R_B_BTN_COLOR(1),
                    R_B_BTN_COLOR(2), interfaceCtx->bAlpha);
    gDPSetEnvColor(gfxCtx->overlay.p++, 0x00, 0x00, 0x00, 0xFF);
    gfxCtx->overlay.p = Draw_TextureIA8(gfxCtx->overlay.p,
                                        &D_02000A00[0],
                                        32, 32,
                                        R_ITEM_BTN_X(0), R_ITEM_BTN_Y(0),
                                        R_ITEM_BTN_WIDTH(0), R_ITEM_BTN_WIDTH(0),
                                        R_ITEM_BTN_DD(0) * 2, R_ITEM_BTN_DD(0) * 2);

    // C-Left Button Color & Texture
    gDPPipeSync(gfxCtx->overlay.p++);
    gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0,
                    R_C_BTN_COLOR(0), R_C_BTN_COLOR(1),
                    R_C_BTN_COLOR(2), interfaceCtx->cLeftAlpha);
    gSPTextureRectangle(gfxCtx->overlay.p++,
                        R_ITEM_BTN_X(1) << 2,
                        R_ITEM_BTN_Y(1) << 2,
                        (R_ITEM_BTN_X(1) + R_ITEM_BTN_WIDTH(1)) << 2,
                        (R_ITEM_BTN_Y(1) + R_ITEM_BTN_WIDTH(1)) << 2,
                        G_TX_RENDERTILE,
                        0, 0,
                        R_ITEM_BTN_DD(1) * 2,
                        R_ITEM_BTN_DD(1) * 2);

    // C-Down Button Color & Texture
    gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0,
                    R_C_BTN_COLOR(0), R_C_BTN_COLOR(1),
                    R_C_BTN_COLOR(2), interfaceCtx->cDownAlpha);
    gSPTextureRectangle(gfxCtx->overlay.p++,
                        R_ITEM_BTN_X(2) << 2,
                        R_ITEM_BTN_Y(2) << 2,
                        (R_ITEM_BTN_X(2) + R_ITEM_BTN_WIDTH(2)) << 2,
                        (R_ITEM_BTN_Y(2) + R_ITEM_BTN_WIDTH(2)) << 2,
                        G_TX_RENDERTILE,
                        0, 0,
                        R_ITEM_BTN_DD(2) * 2,
                        R_ITEM_BTN_DD(2) * 2);

    // C-Right Button Color & Texture
    gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0,
                    R_C_BTN_COLOR(0), R_C_BTN_COLOR(1),
                    R_C_BTN_COLOR(2), interfaceCtx->cRightAlpha);
    gSPTextureRectangle(gfxCtx->overlay.p++,
                        R_ITEM_BTN_X(3) << 2,
                        R_ITEM_BTN_Y(3) << 2,
                        (R_ITEM_BTN_X(3) + R_ITEM_BTN_WIDTH(3)) << 2,
                        (R_ITEM_BTN_Y(3) + R_ITEM_BTN_WIDTH(3)) << 2,
                        G_TX_RENDERTILE,
                        0, 0,
                        R_ITEM_BTN_DD(3) * 2,
                        R_ITEM_BTN_DD(3) * 2);

    if ((globalCtx->pauseCtx.state < 8) || (globalCtx->pauseCtx.state >= 18))
    {
        if ((globalCtx->pauseCtx.state != 0) || (globalCtx->pauseCtx.flag != 0))
        {
            // Start Button Texture, Color & Label
            gDPPipeSync(gfxCtx->overlay.p++);
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0x78, 0x78, 0x78, interfaceCtx->startAlpha);
            gSPTextureRectangle(gfxCtx->overlay.p++,
                                sStartButtonLeftPos[gSaveContext.language] << 2, 156,
                                (sStartButtonLeftPos[gSaveContext.language] + 22) << 2, 68,
                                G_TX_RENDERTILE,
                                0, 0,
                                1462, 1462);
            gDPPipeSync(gfxCtx->overlay.p++);
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, interfaceCtx->startAlpha);
            gDPSetEnvColor(gfxCtx->overlay.p++, 0x00, 0x00, 0x00, 0x00);
            gDPSetCombineLERP(gfxCtx->overlay.p++,
                            PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                            PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);

            gDPSetTextureImage(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_16b, 1, (u32)interfaceCtx->do_actionSegment + 0x300);
            gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_16b,
                        0, 0, G_TX_LOADTILE, 0,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
            gDPLoadSync(gfxCtx->overlay.p++);
            gDPLoadBlock(gfxCtx->overlay.p++, G_TX_LOADTILE, 0, 0, 191, 683);
            gDPPipeSync(gfxCtx->overlay.p++);
            gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_4b,
                        3, 0, G_TX_RENDERTILE, 0,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
            gDPSetTileSize(gfxCtx->overlay.p++, G_TX_RENDERTILE, 0, 0, 48, 16);

            temp = R_START_LABEL_DD(gSaveContext.language) / 100.0f;
            gSPTextureRectangle(gfxCtx->overlay.p++,
                                R_START_LABEL_X(gSaveContext.language) << 2,
                                R_START_LABEL_Y(gSaveContext.language) << 2,
                                (R_START_LABEL_X(gSaveContext.language) + (s16)(16 / temp)) << 2,
                                (R_START_LABEL_Y(gSaveContext.language) + (s16)(48 / temp)) << 2,
                                G_TX_RENDERTILE,
                                0, 0,
                                (s16)(1024 / temp),
                                (s16)(1024 / temp));
        }
    }

    if (interfaceCtx->naviCalling && (globalCtx->pauseCtx.state == 0) &&
        (globalCtx->pauseCtx.flag == 0) && (globalCtx->csCtx.state == 0))
    {
        if (!sCUpInvisible)
        {
            // C-Up Button Texture, Color & Label (Navi Text)
            gDPPipeSync(gfxCtx->overlay.p++);

            if ((gSaveContext.unk_13EA == 1) || (gSaveContext.unk_13EA == 2) || (gSaveContext.unk_13EA == 5))
                cUpAlpha = 0;
            else if ((player->stateFlags2 & 0x00200000) || (func_8008F2F8(globalCtx) == 4) || (player->stateFlags2 & 0x00040000))
                cUpAlpha = 0x46;
            else
                cUpAlpha = interfaceCtx->healthAlpha;

            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0,
                            R_C_BTN_COLOR(0), R_C_BTN_COLOR(1),
                            R_C_BTN_COLOR(2), cUpAlpha);
            gDPSetCombineLERP(gfxCtx->overlay.p++,
                              TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0,
                              TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0);
            gSPTextureRectangle(gfxCtx->overlay.p++,
                                R_C_UP_BTN_X << 2, R_C_UP_BTN_Y << 2,
                                (R_C_UP_BTN_X + 16) << 2, (R_C_UP_BTN_Y + 16) << 2,
                                G_TX_RENDERTILE,
                                0, 0,
                                2048, 2048);
            gDPPipeSync(gfxCtx->overlay.p++);
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, cUpAlpha);
            gDPSetEnvColor(gfxCtx->overlay.p++, 0x00, 0x00, 0x00, 0x00);
            gDPSetCombineLERP(gfxCtx->overlay.p++,
                              PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                              PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);

            gDPSetTextureImage(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_16b, 1, sCUpLabelTextures[gSaveContext.language]);
            gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_16b,
                       0, 0, G_TX_LOADTILE, 0,
                       G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                       G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
            gDPLoadSync(gfxCtx->overlay.p++);
            gDPLoadBlock(gfxCtx->overlay.p++, G_TX_LOADTILE, 0, 0, 63, 1024);
            gDPPipeSync(gfxCtx->overlay.p++);
            gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_4b,
                       2, 0, G_TX_RENDERTILE, 0,
                       G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                       G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
            gDPSetTileSize(gfxCtx->overlay.p++, G_TX_RENDERTILE, 0, 0, 124, 28);

            gSPTextureRectangle(gfxCtx->overlay.p++,
                                R_C_UP_ICON_X << 2, R_C_UP_ICON_Y << 2,
                                (R_C_UP_ICON_X + 8) << 2, (R_C_UP_ICON_Y + 32) << 2,
                                G_TX_RENDERTILE,
                                0, 0,
                                1024, 1024);
        }

        sCUpTimer--;
        if (sCUpTimer == 0)
        {
            sCUpTimer = 10;
            sCUpInvisible ^= 1;
        }
    }

    gDPPipeSync(gfxCtx->overlay.p++);

    // Empty C Button Arrows
    for (i = 1; i < 4; i++)
    {
        if (gSaveContext.equips.button_items[i] > 0xF0)
        {
            if (i == 1)
                gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0,
                                R_C_BTN_COLOR(0), R_C_BTN_COLOR(1),
                                R_C_BTN_COLOR(2), interfaceCtx->cLeftAlpha);
            else if (i == 2)
                gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0,
                                R_C_BTN_COLOR(0), R_C_BTN_COLOR(1),
                                R_C_BTN_COLOR(2), interfaceCtx->cDownAlpha);
            else
                gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0,
                                R_C_BTN_COLOR(0), R_C_BTN_COLOR(1),
                                R_C_BTN_COLOR(2), interfaceCtx->cRightAlpha);

            gfxCtx->overlay.p = Draw_TextureIA8(gfxCtx->overlay.p,
                                                &D_02000A00[i + 1],
                                                0x20, 0x20,
                                                R_ITEM_BTN_X(i), R_ITEM_BTN_Y(i),
                                                R_ITEM_BTN_WIDTH(i), R_ITEM_BTN_WIDTH(i),
                                                R_ITEM_BTN_DD(i) * 2, R_ITEM_BTN_DD(i) * 2);
        }
    }

    func_800C6B54(gfxArr, globalCtx->gfxCtx, "../z_parameter.c", 3071);
}
#else
void Interface_DrawItemButtons(GlobalContext* globalCtx);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_parameter/Interface_DrawItemButtons.s")
#endif

void Interface_DrawItemIconTexture(GlobalContext* globalCtx, void* texture, s16 button)
{
    GraphicsContext* gfxCtx;
    Gfx* gfxArr[4];

    gfxCtx = globalCtx->gfxCtx;
    func_800C6AC4(gfxArr, globalCtx->gfxCtx, "../z_parameter.c", 3079);

    gDPLoadTextureBlock(gfxCtx->overlay.p++,
                        texture,
                        G_IM_FMT_RGBA,
                        G_IM_SIZ_32b,
                        32, 32,
                        0,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMASK, G_TX_NOMASK,
                        G_TX_NOLOD, G_TX_NOLOD);

    gSPTextureRectangle(gfxCtx->overlay.p++,
                        R_ITEM_ICON_X(button) << 2,
                        R_ITEM_ICON_Y(button) << 2,
                        (R_ITEM_ICON_X(button) + R_ITEM_ICON_WIDTH(button)) << 2,
                        (R_ITEM_ICON_Y(button) + R_ITEM_ICON_WIDTH(button)) << 2,
                        G_TX_RENDERTILE,
                        0, 0,
                        R_ITEM_ICON_DD(button) * 2,
                        R_ITEM_ICON_DD(button) * 2);

    func_800C6B54(gfxArr, globalCtx->gfxCtx, "../z_parameter.c", 3094);
}

void Interface_DrawAmmoCount(GlobalContext* globalCtx, s16 button, s16 alpha)
{
    s16 item;
    s16 ammo;
    GraphicsContext* gfxCtx;
    s16 i;
    Gfx* gfxArr[3];

    gfxCtx = globalCtx->gfxCtx;
    func_800C6AC4(gfxArr, globalCtx->gfxCtx, "../z_parameter.c", 3105);

    item = gSaveContext.equips.button_items[button];

    if ((item == ITEM_STICK) || (item == ITEM_NUT) ||
        (item == ITEM_BOMB) || (item == ITEM_BOW) ||
        ((item >= ITEM_BOW_ARROW_FIRE) && (item <= ITEM_BOW_ARROW_LIGHT)) ||
        (item == ITEM_SLINGSHOT) || (item == ITEM_BOMBCHU) || (item == ITEM_BEAN))
    {
        if ((item >= ITEM_BOW_ARROW_FIRE) && (item <= ITEM_BOW_ARROW_LIGHT))
            item = ITEM_BOW;

        ammo = AMMO(item);

        gDPPipeSync(gfxCtx->overlay.p++);

        if ((button == 0) && (gSaveContext.minigame_state == 1))
        {
            ammo = globalCtx->interfaceCtx.hbaAmmo;
        }
        else if ((button == 0) && (globalCtx->unk_11E5C >= 2))
        {
            ammo = globalCtx->unk_11E5C - 1;
        }
        else if ((button == 0) && (globalCtx->sceneNum == SCENE_BOWLING) && Flags_GetSwitch(globalCtx, 0x38))
        {
            ammo = globalCtx->bombchuBowlingAmmo;
            if (ammo < 0)
                ammo = 0;
        }
        else if (((item == ITEM_BOW)       && (AMMO(item) == CUR_CAPACITY(UPG_QUIVER))) ||
                 ((item == ITEM_BOMB)      && (AMMO(item) == CUR_CAPACITY(UPG_BOMB_BAG))) ||
                 ((item == ITEM_SLINGSHOT) && (AMMO(item) == CUR_CAPACITY(UPG_BULLET_BAG))) ||
                 ((item == ITEM_STICK)     && (AMMO(item) == CUR_CAPACITY(UPG_STICKS))) ||
                 ((item == ITEM_NUT)       && (AMMO(item) == CUR_CAPACITY(UPG_NUTS))) ||
                 ((item == ITEM_BOMBCHU)   && (ammo == 50)) ||
                 ((item == ITEM_BEAN)      && (ammo == 15)))
        {
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0x78, 0xFF, 0x00, alpha);
        }

        if (ammo == 0)
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0x64, 0x64, 0x64, alpha);

        for (i = 0; ammo >= 10; i++)
            ammo -= 10;

        if (i != 0)
            gfxCtx->overlay.p = Draw_TextureIA8(gfxCtx->overlay.p,
                                                &D_020035C0[i],
                                                8, 8,
                                                R_ITEM_AMMO_X(button), R_ITEM_AMMO_Y(button),
                                                8, 8,
                                                1024, 1024);

        gfxCtx->overlay.p = Draw_TextureIA8(gfxCtx->overlay.p,
                                            &D_020035C0[ammo],
                                            8, 8,
                                            R_ITEM_AMMO_X(button) + 6, R_ITEM_AMMO_Y(button),
                                            8, 8,
                                            1024, 1024);
    }

    func_800C6B54(gfxArr, globalCtx->gfxCtx, "../z_parameter.c", 3158);
}

void Interface_DrawActionButton(GlobalContext* globalCtx)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    GraphicsContext* gfxCtx;
    Gfx* gfxArr[4];

    gfxCtx = globalCtx->gfxCtx;
    func_800C6AC4(gfxArr, globalCtx->gfxCtx, "../z_parameter.c", 3172);

    Matrix_Translate(0.0f, 0.0f, XREG(18) / 10.0f, 0);
    Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
    Matrix_RotateX(interfaceCtx->unk_1F4 / 10000.0f, 1);

    if (1) ; // Necessary to match

    gSPMatrix(gfxCtx->overlay.p++, Matrix_NewMtx(globalCtx->gfxCtx, "../z_parameter.c", 3177), G_MTX_MODELVIEW | G_MTX_LOAD);
    gSPVertex(gfxCtx->overlay.p++, interfaceCtx->vtx_128, 4, 0);

    gDPLoadTextureBlock(gfxCtx->overlay.p++,
                        &D_02000A00[0],
                        G_IM_FMT_IA,
                        G_IM_SIZ_8b,
                        32, 32,
                        0,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMASK, G_TX_NOMASK,
                        G_TX_NOLOD, G_TX_NOLOD);

    gSP1Quadrangle(gfxCtx->overlay.p++, 0, 2, 3, 1, 0);

    func_800C6B54(gfxArr, globalCtx->gfxCtx, "../z_parameter.c", 3187);
}

void Interface_InitVertices(GlobalContext* globalCtx)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    s16 i;

    interfaceCtx->vtx_128 = Graph_Alloc(globalCtx->gfxCtx, 8 * sizeof(Vtx));

    interfaceCtx->vtx_128[0].v.ob[0] =
    interfaceCtx->vtx_128[2].v.ob[0] = -14;
    interfaceCtx->vtx_128[1].v.ob[0] =
    interfaceCtx->vtx_128[3].v.ob[0] = interfaceCtx->vtx_128[0].v.ob[0] + 28;

    interfaceCtx->vtx_128[0].v.ob[1] =
    interfaceCtx->vtx_128[1].v.ob[1] = 14;
    interfaceCtx->vtx_128[2].v.ob[1] =
    interfaceCtx->vtx_128[3].v.ob[1] = interfaceCtx->vtx_128[0].v.ob[1] - 28;

    interfaceCtx->vtx_128[4].v.ob[0] =
    interfaceCtx->vtx_128[6].v.ob[0] = -(XREG(21) / 2);
    interfaceCtx->vtx_128[5].v.ob[0] =
    interfaceCtx->vtx_128[7].v.ob[0] = interfaceCtx->vtx_128[4].v.ob[0] + XREG(21);

    interfaceCtx->vtx_128[4].v.ob[1] =
    interfaceCtx->vtx_128[5].v.ob[1] = XREG(28) / 2;
    interfaceCtx->vtx_128[6].v.ob[1] =
    interfaceCtx->vtx_128[7].v.ob[1] = interfaceCtx->vtx_128[4].v.ob[1] - XREG(28);

    for (i = 0; i < 8; i += 4)
    {
        interfaceCtx->vtx_128[i].v.ob[2] = interfaceCtx->vtx_128[i+1].v.ob[2] =
        interfaceCtx->vtx_128[i+2].v.ob[2] = interfaceCtx->vtx_128[i+3].v.ob[2] = 0;

        interfaceCtx->vtx_128[i].v.flag = interfaceCtx->vtx_128[i+1].v.flag =
        interfaceCtx->vtx_128[i+2].v.flag = interfaceCtx->vtx_128[i+3].v.flag = 0;

        interfaceCtx->vtx_128[i].v.tc[0] = interfaceCtx->vtx_128[i].v.tc[1] =
        interfaceCtx->vtx_128[i+1].v.tc[1] = interfaceCtx->vtx_128[i+2].v.tc[0] = 0;
        interfaceCtx->vtx_128[i+1].v.tc[0] = interfaceCtx->vtx_128[i+2].v.tc[1] =
        interfaceCtx->vtx_128[i+3].v.tc[0] = interfaceCtx->vtx_128[i+3].v.tc[1] = 1024;

        interfaceCtx->vtx_128[i].v.cn[0] = interfaceCtx->vtx_128[i+1].v.cn[0] =
        interfaceCtx->vtx_128[i+2].v.cn[0] = interfaceCtx->vtx_128[i+3].v.cn[0] =
        interfaceCtx->vtx_128[i].v.cn[1] = interfaceCtx->vtx_128[i+1].v.cn[1] =
        interfaceCtx->vtx_128[i+2].v.cn[1] = interfaceCtx->vtx_128[i+3].v.cn[1] =
        interfaceCtx->vtx_128[i].v.cn[2] = interfaceCtx->vtx_128[i+1].v.cn[2] =
        interfaceCtx->vtx_128[i+2].v.cn[2] = interfaceCtx->vtx_128[i+3].v.cn[2] = 0xFF;

        interfaceCtx->vtx_128[i].v.cn[3] = interfaceCtx->vtx_128[i+1].v.cn[3] =
        interfaceCtx->vtx_128[i+2].v.cn[3] = interfaceCtx->vtx_128[i+3].v.cn[3] = 0xFF;
    }

    interfaceCtx->vtx_128[5].v.tc[0] = interfaceCtx->vtx_128[7].v.tc[0] = 1536;
    interfaceCtx->vtx_128[6].v.tc[1] = interfaceCtx->vtx_128[7].v.tc[1] = 512;

    interfaceCtx->vtx_12C = Graph_Alloc(globalCtx->gfxCtx, 4 * sizeof(Vtx));

    interfaceCtx->vtx_12C[0].v.ob[0] = interfaceCtx->vtx_12C[2].v.ob[0] = -8;
    interfaceCtx->vtx_12C[1].v.ob[0] = interfaceCtx->vtx_12C[3].v.ob[0] = 8;
    interfaceCtx->vtx_12C[0].v.ob[1] = interfaceCtx->vtx_12C[1].v.ob[1] = 8;
    interfaceCtx->vtx_12C[2].v.ob[1] = interfaceCtx->vtx_12C[3].v.ob[1] = -8;

    interfaceCtx->vtx_12C[0].v.ob[2] = interfaceCtx->vtx_12C[1].v.ob[2] =
    interfaceCtx->vtx_12C[2].v.ob[2] = interfaceCtx->vtx_12C[3].v.ob[2] = 0;

    interfaceCtx->vtx_12C[0].v.flag = interfaceCtx->vtx_12C[1].v.flag =
    interfaceCtx->vtx_12C[2].v.flag = interfaceCtx->vtx_12C[3].v.flag = 0;

    interfaceCtx->vtx_12C[0].v.tc[0] = interfaceCtx->vtx_12C[0].v.tc[1] =
    interfaceCtx->vtx_12C[1].v.tc[1] = interfaceCtx->vtx_12C[2].v.tc[0] = 0;
    interfaceCtx->vtx_12C[1].v.tc[0] = interfaceCtx->vtx_12C[2].v.tc[1] =
    interfaceCtx->vtx_12C[3].v.tc[0] = interfaceCtx->vtx_12C[3].v.tc[1] = 512;

    interfaceCtx->vtx_12C[0].v.cn[0] = interfaceCtx->vtx_12C[1].v.cn[0] =
    interfaceCtx->vtx_12C[2].v.cn[0] = interfaceCtx->vtx_12C[3].v.cn[0] =
    interfaceCtx->vtx_12C[0].v.cn[1] = interfaceCtx->vtx_12C[1].v.cn[1] =
    interfaceCtx->vtx_12C[2].v.cn[1] = interfaceCtx->vtx_12C[3].v.cn[1] =
    interfaceCtx->vtx_12C[0].v.cn[2] = interfaceCtx->vtx_12C[1].v.cn[2] =
    interfaceCtx->vtx_12C[2].v.cn[2] = interfaceCtx->vtx_12C[3].v.cn[2] =
    interfaceCtx->vtx_12C[0].v.cn[3] = interfaceCtx->vtx_12C[1].v.cn[3] =
    interfaceCtx->vtx_12C[2].v.cn[3] = interfaceCtx->vtx_12C[3].v.cn[3] = 0xFF;
}

void func_8008A8B8(GlobalContext* globalCtx, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    Vec3f sp40;
    Vec3f sp34;
    Vec3f sp28;

    sp40.x = sp40.y = sp40.z = 0.0f;
    sp34.x = sp34.y = 0.0f;
    sp34.z = -1.0f;
    sp28.x = sp28.z = 0.0f;
    sp28.y = 1.0f;
    func_800AA358(&interfaceCtx->view, &sp40, &sp34, &sp28);
    interfaceCtx->unk_1DC[0] = arg1;
    interfaceCtx->unk_1DC[1] = arg2;
    interfaceCtx->unk_1DC[2] = arg3;
    interfaceCtx->unk_1DC[3] = arg4;
    func_800AA4FC(&interfaceCtx->view, interfaceCtx->unk_1DC);
    func_800AA460(&interfaceCtx->view, 60.0f, 10.0f, 60.0f);
    func_800AB560(&interfaceCtx->view);
}

void func_8008A994(InterfaceContext* interfaceCtx)
{
    s32 sp18[4];

    // Whitespace matters for codegen here
    sp18[1] = 240; sp18[3] = 320;
    sp18[0] = 0; sp18[2] = 0;

    func_800AA4FC(&interfaceCtx->view, sp18);
    func_800AB2C4(&interfaceCtx->view);
}

s16 sMagicArrowEffectsR[] = { 0xFF, 0x64, 0xFF };
s16 sMagicArrowEffectsG[] = { 0x00, 0x64, 0xFF };
s16 sMagicArrowEffectsB[] = { 0x00, 0xFF, 0x64 };

s16 sTimerDigitLeftPos[] = { 16, 25, 34, 42, 51 };
s16 sDigitWidth[] = { 9, 9, 8, 9, 9 };

// unused, most likely colors
s16 D_80125B1C[][3] =
{
    { 0x00, 0x96, 0x00 },
    { 0x64, 0xFF, 0x00 },
    { 0xFF, 0xFF, 0xFF },
    { 0x00, 0x00, 0x00 },
    { 0xFF, 0xFF, 0xFF },
};

s16 sRupeeDigitsFirst[] = { 1, 0, 0 };
s16 sRupeeDigitsCount[] = { 2, 3, 3 };

s16 sSpoilingItemEntrances[] = { 0x01AD, 0x0153, 0x0153 };

u16 D_80125B54 = 0xC220; // unused
u16 D_80125B58 = 0xC20C; // unused
s16 D_80125B5C[] = { 91, 91 }; // unused

#ifdef NON_MATCHING
// mostly regalloc, minor ordering and stack usage differences
void Interface_Draw(GlobalContext* globalCtx)
{
    static s16 D_8015FFE0;
    static s16 D_8015FFE2;
    static s16 D_8015FFE4;
    static s16 D_8015FFE6;
    static s16 sTimerDigits[5];
    MessageContext* msgCtx = &globalCtx->msgCtx;
    PauseContext* pauseCtx = &globalCtx->pauseCtx;
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    Player* player = PLAYER;
    s16 phi_s3_2;
    s16 phi_s3;
    s16 phi_s2;
    s16 phi_s1;
    s16 phi_s0;
    s16 sp274;
    GraphicsContext* gfxCtx;
    Gfx* gfxArr[4];
    s32 pad;

    gfxCtx = globalCtx->gfxCtx;
    func_800C6AC4(gfxArr, globalCtx->gfxCtx, "../z_parameter.c", 3405);

    gSPSegment(gfxCtx->overlay.p++, 0x02, interfaceCtx->parameterSegment);
    gSPSegment(gfxCtx->overlay.p++, 0x07, interfaceCtx->do_actionSegment);
    gSPSegment(gfxCtx->overlay.p++, 0x08, interfaceCtx->icon_itemSegment);
    gSPSegment(gfxCtx->overlay.p++, 0x0B, interfaceCtx->mapSegment);

    if (pauseCtx->flag == 0)
    {
        Interface_InitVertices(globalCtx);
        func_8008A994(interfaceCtx);
        Interface_DrawHealth(globalCtx);

        func_80094520(globalCtx->gfxCtx);

        // Rupee Icon
        gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xC8, 0xFF, 0x64, interfaceCtx->magicAlpha);
        gDPSetEnvColor(gfxCtx->overlay.p++, 0x00, 0x50, 0x00, 0xFF);
        gfxCtx->overlay.p = Draw_TextureIA8(gfxCtx->overlay.p,
                                            D_02001F00,
                                            16, 16,
                                            26, 206,
                                            16, 16,
                                            1024, 1024);

        switch (globalCtx->sceneNum)
        {
            case SCENE_BMORI1:
            case SCENE_HIDAN:
            case SCENE_MIZUSIN:
            case SCENE_JYASINZOU:
            case SCENE_HAKADAN:
            case SCENE_HAKADANCH:
            case SCENE_ICE_DOUKUTO:
            case SCENE_GANON:
            case SCENE_MEN:
            case SCENE_GERUDOWAY:
            case SCENE_GANONTIKA:
            case SCENE_GANON_SONOGO:
            case SCENE_GANONTIKA_SONOGO:
            case SCENE_TAKARAYA:
                if (gSaveContext.dungeon_keys[gSaveContext.dungeon_index] >= 0)
                {
                    // Small Key Icon
                    gDPPipeSync(gfxCtx->overlay.p++);
                    gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xC8, 0xE6, 0xFF, interfaceCtx->magicAlpha);
                    gDPSetEnvColor(gfxCtx->overlay.p++, 0x00, 0x00, 0x14, 0xFF);
                    gfxCtx->overlay.p = Draw_TextureIA8(gfxCtx->overlay.p,
                                                        D_02001E00,
                                                        16, 16,
                                                        26, 190,
                                                        16, 16,
                                                        1024, 1024);

                    // Small Key Counter
                    gDPPipeSync(gfxCtx->overlay.p++);
                    gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, interfaceCtx->magicAlpha);
                    gDPSetCombineLERP(gfxCtx->overlay.p++,
                                      0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0,
                                      0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);

                    interfaceCtx->counterDigits[2] = 0;
                    interfaceCtx->counterDigits[3] = gSaveContext.dungeon_keys[gSaveContext.dungeon_index];

                    while (interfaceCtx->counterDigits[3] >= 10)
                    {
                        interfaceCtx->counterDigits[2]++;
                        interfaceCtx->counterDigits[3] -= 10;
                    }

                    phi_s2 = 42;
                    if (interfaceCtx->counterDigits[2] != 0)
                    {
                        gfxCtx->overlay.p = Draw_TextureI8(gfxCtx->overlay.p,
                                                           &D_02003040[interfaceCtx->counterDigits[2]],
                                                           8, 16,
                                                           phi_s2, 190,
                                                           8, 16,
                                                           1024, 1024);
                        phi_s2 = 50;
                    }

                    gfxCtx->overlay.p = Draw_TextureI8(gfxCtx->overlay.p,
                                                       &D_02003040[interfaceCtx->counterDigits[3]],
                                                       8, 16,
                                                       phi_s2, 190,
                                                       8, 16,
                                                       1024, 1024);
                }

                phi_s2 = 42;
                break;
            default:
                phi_s2 = 42;
                break;
        }

        phi_s2 = 42;

        // Rupee Counter
        gDPPipeSync(gfxCtx->overlay.p++);

        if (gSaveContext.rupees == CUR_CAPACITY(UPG_WALLET))
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0x78, 0xFF, 0x00, interfaceCtx->magicAlpha);
        else if (gSaveContext.rupees != 0)
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, interfaceCtx->magicAlpha);
        else
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0x64, 0x64, 0x64, interfaceCtx->magicAlpha);

        gDPSetCombineLERP(gfxCtx->overlay.p++,
                          0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0,
                          0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);

        interfaceCtx->counterDigits[0] = interfaceCtx->counterDigits[1] = 0;
        interfaceCtx->counterDigits[2] = gSaveContext.rupees;

        if ((interfaceCtx->counterDigits[2] >= 10000) || (interfaceCtx->counterDigits[2] < 0))
            interfaceCtx->counterDigits[2] &= 0xDDD;

        while (interfaceCtx->counterDigits[2] >= 100)
        {
            interfaceCtx->counterDigits[2] -= 100;
            interfaceCtx->counterDigits[0]++;
        }

        while (interfaceCtx->counterDigits[2] >= 10)
        {
            interfaceCtx->counterDigits[2] -= 10;
            interfaceCtx->counterDigits[1]++;
        }

        phi_s0 = sRupeeDigitsFirst[CUR_UPG_VALUE(UPG_WALLET)];
        phi_s1 = sRupeeDigitsCount[CUR_UPG_VALUE(UPG_WALLET)];

        for (phi_s3 = 0; phi_s3 < phi_s1; phi_s3++, phi_s0++, phi_s2 += 8)
        {
            gfxCtx->overlay.p = Draw_TextureI8(gfxCtx->overlay.p,
                                               &D_02003040[interfaceCtx->counterDigits[phi_s0]],
                                               8, 16,
                                               phi_s2, 206,
                                               8, 16,
                                               1024, 1024);
        }

        Interface_DrawMagicBar(globalCtx);
        Interface_DrawMinimap(globalCtx);

        if ((R_PAUSE_MENU_MODE != 2) && (R_PAUSE_MENU_MODE != 3))
            func_8002C124(&globalCtx->actorCtx.targetCtx, globalCtx); // Draw Z-Target

        func_80094520(globalCtx->gfxCtx);

        Interface_DrawItemButtons(globalCtx);

        gDPPipeSync(gfxCtx->overlay.p++);
        gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, interfaceCtx->bAlpha);
        gDPSetCombineLERP(gfxCtx->overlay.p++,
                         TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0,
                         TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0);

        if (interfaceCtx->unk_1FA == 0)
        {
            // B Button Icon & possibly Ammo Count
            if (gSaveContext.equips.button_items[0] != ITEM_NONE)
            {
                Interface_DrawItemIconTexture(globalCtx, (void*)(u32)interfaceCtx->icon_itemSegment, 0);

                if ((player->stateFlags1 & 0x00800000) || (globalCtx->unk_11E5C >= 2) ||
                    ((globalCtx->sceneNum == SCENE_BOWLING) && Flags_GetSwitch(globalCtx, 0x38)))
                {
                    gDPPipeSync(gfxCtx->overlay.p++);
                    gDPSetCombineLERP(gfxCtx->overlay.p++,
                                      PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                                      PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
                    Interface_DrawAmmoCount(globalCtx, 0, interfaceCtx->bAlpha);
                }
            }
        }
        else
        {
            // B Button Do Action Label
            gDPPipeSync(gfxCtx->overlay.p++);
            gDPSetCombineLERP(gfxCtx->overlay.p++,
                              PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                              PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, interfaceCtx->bAlpha);

            gDPSetTextureImage(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_16b, 1, (u32)interfaceCtx->do_actionSegment + 0x180);
            gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_16b,
                       0, 0x0000, G_TX_LOADTILE, 0,
                       G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                       G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
            gDPLoadSync(gfxCtx->overlay.p++);
            gDPLoadBlock(gfxCtx->overlay.p++, G_TX_LOADTILE, 0, 0, 191, 683);
            gDPPipeSync(gfxCtx->overlay.p++);
            gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_4b,
                       3, 0x0000, G_TX_RENDERTILE, 0,
                       G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                       G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
            gDPSetTileSize(gfxCtx->overlay.p++, G_TX_RENDERTILE, 0, 0, 188, 60);

            R_B_LABEL_DD = 1024.0f / (WREG(37 + gSaveContext.language) / 100.0f);
            gSPTextureRectangle(gfxCtx->overlay.p++,
                                R_B_LABEL_X(gSaveContext.language) << 2, R_B_LABEL_Y(gSaveContext.language) << 2,
                                (R_B_LABEL_X(gSaveContext.language) + 48) << 2, R_B_LABEL_Y(gSaveContext.language) << 2,
                                G_TX_RENDERTILE,
                                0, 0,
                                R_B_LABEL_DD, R_B_LABEL_DD);
        }

        gDPPipeSync(gfxCtx->overlay.p++);

        // C-Left Button Icon & Ammo Count
        if (gSaveContext.equips.button_items[1] < 0xF0)
        {
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, interfaceCtx->cLeftAlpha);
            gDPSetCombineLERP(gfxCtx->overlay.p++,
                              TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0,
                              TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0);
            Interface_DrawItemIconTexture(globalCtx, (void*)((u32)interfaceCtx->icon_itemSegment + 0x1000), 1);
            gDPPipeSync(gfxCtx->overlay.p++);
            gDPSetCombineLERP(gfxCtx->overlay.p++,
                               PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                               PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
            Interface_DrawAmmoCount(globalCtx, 1, interfaceCtx->cLeftAlpha);
        }

        gDPPipeSync(gfxCtx->overlay.p++);

        // C-Down Button Icon & Ammo Count
        if (gSaveContext.equips.button_items[2] < 0xF0)
        {
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, interfaceCtx->cDownAlpha);
            gDPSetCombineLERP(gfxCtx->overlay.p++,
                              TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0,
                              TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0);
            Interface_DrawItemIconTexture(globalCtx, (void*)((u32)interfaceCtx->icon_itemSegment + 0x2000), 2);
            gDPPipeSync(gfxCtx->overlay.p++);
            gDPSetCombineLERP(gfxCtx->overlay.p++,
                               PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                               PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
            Interface_DrawAmmoCount(globalCtx, 2, interfaceCtx->cDownAlpha);
        }

        gDPPipeSync(gfxCtx->overlay.p++);

        // C-Right Button Icon & Ammo Count
        if (gSaveContext.equips.button_items[3] < 0xF0)
        {
            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, interfaceCtx->cRightAlpha);
            gDPSetCombineLERP(gfxCtx->overlay.p++,
                              TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0,
                              TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0);
            Interface_DrawItemIconTexture(globalCtx, (void*)((u32)interfaceCtx->icon_itemSegment + 0x3000), 3);
            gDPPipeSync(gfxCtx->overlay.p++);
            gDPSetCombineLERP(gfxCtx->overlay.p++,
                               PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                               PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
            Interface_DrawAmmoCount(globalCtx, 3, interfaceCtx->cRightAlpha);
        }

        // A Button
        func_80094A14(globalCtx->gfxCtx);
        func_8008A8B8(globalCtx,
                      R_A_BTN_Y, R_A_BTN_Y + 45,
                      R_A_BTN_X, R_A_BTN_X + 45);
        gSPClearGeometryMode(gfxCtx->overlay.p++, G_CULL_BOTH);
        gDPSetCombineLERP(gfxCtx->overlay.p++,
                          TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0,
                          TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0);
        gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0,
                        R_A_BTN_COLOR(0), R_A_BTN_COLOR(1),
                        R_A_BTN_COLOR(2), interfaceCtx->aAlpha);
        Interface_DrawActionButton(globalCtx);
        gDPPipeSync(gfxCtx->overlay.p++);
        func_8008A8B8(globalCtx,
                      R_A_ICON_Y, R_A_ICON_Y + 45,
                      R_A_ICON_X, R_A_ICON_X + 45);
        gSPSetGeometryMode(gfxCtx->overlay.p++, G_CULL_BACK);
        gDPSetCombineLERP(gfxCtx->overlay.p++,
                          PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                          PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
        gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, interfaceCtx->aAlpha);
        gDPSetEnvColor(gfxCtx->overlay.p++, 0x00, 0x00, 0x00, 0x00);
        Matrix_Translate(0.0f, 0.0f, WREG(46 + gSaveContext.language) / 10.0f, 0);
        Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
        Matrix_RotateX(interfaceCtx->unk_1F4 / 10000.0f, 1);
        gSPMatrix(gfxCtx->overlay.p++, Matrix_NewMtx(globalCtx->gfxCtx, "../z_parameter.c", 3701), G_MTX_MODELVIEW | G_MTX_LOAD);
        gSPVertex(gfxCtx->overlay.p++, &interfaceCtx->vtx_128[4], 4, 0);

        if ((interfaceCtx->unk_1EC < 2) || (interfaceCtx->unk_1EC == 3))
            Interface_DrawActionLabel(globalCtx->gfxCtx, (void*)(u32)interfaceCtx->do_actionSegment);
        else
            Interface_DrawActionLabel(globalCtx->gfxCtx, (void*)((u32)interfaceCtx->do_actionSegment + 0x180));

        gDPPipeSync(gfxCtx->overlay.p++);

        func_8008A994(interfaceCtx);

        if ((pauseCtx->state == 6) && (pauseCtx->unk_1E4 == 3))
        {
            // Inventory Equip Effects
            gSPSegment(gfxCtx->overlay.p++, 0x08, pauseCtx->unk_128);
            func_80094A14(globalCtx->gfxCtx);
            gDPSetCombineLERP(gfxCtx->overlay.p++,
                              TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0,
                              TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0);
            gSPMatrix(gfxCtx->overlay.p++, &gMtxClear, G_MTX_MODELVIEW | G_MTX_LOAD);

            pauseCtx->vtx_168[16].v.ob[0] = pauseCtx->vtx_168[18].v.ob[0] = pauseCtx->unk_254 / 10;
            pauseCtx->vtx_168[17].v.ob[0] = pauseCtx->vtx_168[19].v.ob[0] = pauseCtx->vtx_168[16].v.ob[0] + WREG(90) / 10;
            pauseCtx->vtx_168[16].v.ob[1] = pauseCtx->vtx_168[17].v.ob[1] = pauseCtx->unk_256 / 10;
            pauseCtx->vtx_168[18].v.ob[1] = pauseCtx->vtx_168[19].v.ob[1] = pauseCtx->vtx_168[16].v.ob[1] - WREG(90) / 10;

            if (pauseCtx->unk_24E < 0xBF)
            {
                // Normal Equip (icon goes from the inventory slot to the C button when equipping it)
                gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, pauseCtx->unk_258);
                gSPVertex(gfxCtx->overlay.p++, &pauseCtx->vtx_168[16], 4, 0);

                gDPSetTextureImage(gfxCtx->overlay.p++, G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, gItemIcons[pauseCtx->unk_24E]);
                gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_RGBA, G_IM_SIZ_32b,
                           0, 0x0000, G_TX_LOADTILE, 0,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
                gDPLoadSync(gfxCtx->overlay.p++);
                gDPLoadBlock(gfxCtx->overlay.p++, G_TX_LOADTILE, 0, 0, 1023, 128);
                gDPPipeSync(gfxCtx->overlay.p++);
                gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_RGBA, G_IM_SIZ_32b,
                           8, 0x0000, G_TX_RENDERTILE, 0,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
                gDPSetTileSize(gfxCtx->overlay.p++, G_TX_RENDERTILE, 0, 0, 124, 124);
            }
            else
            {
                // Magic Arrow Equip Effect
                phi_s3_2 = pauseCtx->unk_24E - 0xBF;
                gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0,
                                sMagicArrowEffectsR[phi_s3_2], sMagicArrowEffectsG[phi_s3_2],
                                sMagicArrowEffectsB[phi_s3_2], pauseCtx->unk_258);

                if ((pauseCtx->unk_258 > 0) && (pauseCtx->unk_258 < 0xFF))
                {
                    phi_s3_2 = (pauseCtx->unk_258 / 8) / 2;
                    pauseCtx->vtx_168[16].v.ob[0] = pauseCtx->vtx_168[18].v.ob[0] = pauseCtx->vtx_168[16].v.ob[0] - phi_s3_2;
                    pauseCtx->vtx_168[17].v.ob[0] = pauseCtx->vtx_168[19].v.ob[0] = pauseCtx->vtx_168[16].v.ob[0] + phi_s3_2 * 2 + 32;
                    pauseCtx->vtx_168[16].v.ob[1] = pauseCtx->vtx_168[17].v.ob[1] = pauseCtx->vtx_168[16].v.ob[1] + phi_s3_2;
                    pauseCtx->vtx_168[18].v.ob[1] = pauseCtx->vtx_168[19].v.ob[1] = pauseCtx->vtx_168[16].v.ob[1] - phi_s3_2 * 2 - 32;
                }

                gSPVertex(gfxCtx->overlay.p++, &pauseCtx->vtx_168[16], 4, 0);
                gDPSetTextureImage(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_16b, 1, D_080895C0);
                gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_16b,
                           0, 0x0000, G_TX_LOADTILE, 0,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
                gDPLoadSync(gfxCtx->overlay.p++);
                gDPLoadBlock(gfxCtx->overlay.p++, G_TX_LOADTILE, 0, 0, 511, 512);
                gDPPipeSync(gfxCtx->overlay.p++);
                gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_IA, G_IM_SIZ_8b,
                           4, 0x0000, G_TX_RENDERTILE, 0,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
                gDPSetTileSize(gfxCtx->overlay.p++, G_TX_RENDERTILE, 0, 0, 124, 124);
            }

            gSP1Quadrangle(gfxCtx->overlay.p++, 0, 2, 3, 1, 0);
        }

        func_80094520(globalCtx->gfxCtx);

        if ((globalCtx->pauseCtx.state == 0) && (globalCtx->pauseCtx.flag == 0))
        {
            if (gSaveContext.minigame_state != 1)
            {
                // Carrots rendering if the action corresponds to riding a horse
                if (interfaceCtx->unk_1EE == 8)
                {
                    // Load Carrot Icon
                    gDPSetTextureImage(gfxCtx->overlay.p++, G_IM_FMT_RGBA, G_IM_SIZ_32b, 1, &D_02002100);
                    gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_RGBA, G_IM_SIZ_32b,
                               0, 0x0000, G_TX_LOADTILE, 0,
                               G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                               G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
                    gDPLoadSync(gfxCtx->overlay.p++);
                    gDPLoadBlock(gfxCtx->overlay.p++, G_TX_LOADTILE, 0, 0, 255, 256);
                    gDPPipeSync(gfxCtx->overlay.p++);
                    gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_RGBA, G_IM_SIZ_32b,
                               4, 0x0000, G_TX_RENDERTILE, 0,
                               G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                               G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
                    gDPSetTileSize(gfxCtx->overlay.p++, G_TX_RENDERTILE, 0, 0, 60, 60);

                    // Draw 6 carrots
                    phi_s1 = ZREG(14);
                    for (phi_s3 = 1; phi_s3 < 7; phi_s3++)
                    {
                        // Carrot Color (based on availability)
                        if ((interfaceCtx->unk_23A == 0) || (interfaceCtx->unk_23A < phi_s3))
                            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0x00, 0x96, 0xFF, interfaceCtx->aAlpha);
                        else
                            gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, interfaceCtx->aAlpha);

                        gSPTextureRectangle(gfxCtx->overlay.p++,
                                            phi_s1 << 2, ZREG(15) << 2,
                                            (phi_s1 + 16) << 2, (ZREG(15) + 16) << 2,
                                            G_TX_RENDERTILE,
                                            0, 0,
                                            1024, 1024);

                        phi_s1 += 16;
                    }
                }
            }
            else
            {
                // Score for the Horseback Archery
                gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, interfaceCtx->bAlpha);

                // Target Icon
                gDPSetTextureImage(gfxCtx->overlay.p++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_02002600);
                gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_RGBA, G_IM_SIZ_16b,
                           0, 0x0000, G_TX_LOADTILE, 0,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
                gDPLoadSync(gfxCtx->overlay.p++);
                gDPLoadBlock(gfxCtx->overlay.p++, G_TX_LOADTILE, 0, 0, 383, 342);
                gDPPipeSync(gfxCtx->overlay.p++);
                gDPSetTile(gfxCtx->overlay.p++, G_IM_FMT_RGBA, G_IM_SIZ_16b,
                           6, 0x0000, G_TX_RENDERTILE, 0,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
                gDPSetTileSize(gfxCtx->overlay.p++, G_TX_RENDERTILE, 0, 0, 92, 60);

                gSPTextureRectangle(gfxCtx->overlay.p++,
                                    (WREG(32) + 28) << 2, ZREG(15) << 2,
                                    (WREG(32) + 52) << 2, (ZREG(15) + 16) << 2,
                                    G_TX_RENDERTILE,
                                    0, 0,
                                    1024, 1024);

                // Score Counter
                gDPPipeSync(gfxCtx->overlay.p++);
                gDPSetCombineLERP(gfxCtx->overlay.p++,
                                  0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0,
                                  0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);

                phi_s0 = 0;
                phi_s1 = WREG(32) + 6 * 9;
                for (phi_s3 = 0; phi_s3 < 4; phi_s3++)
                {
                    if (sHBAScoreDigits[phi_s3] != 0 || (phi_s0 != 0) || (phi_s3 >= 3))
                    {
                        gfxCtx->overlay.p = Draw_TextureI8(gfxCtx->overlay.p,
                                                           &D_02003040[sHBAScoreDigits[phi_s3]],
                                                           8, 16,
                                                           phi_s1, ZREG(15) - 2,
                                                           sDigitWidth[0], VREG(42),
                                                           VREG(43) * 2, VREG(43) * 2);
                        phi_s1 += 9;
                        phi_s0++;
                    }
                }

                gDPPipeSync(gfxCtx->overlay.p++);
                gDPSetCombineLERP(gfxCtx->overlay.p++,
                                  TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0,
                                  TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0);
            }
        }

        if ((gSaveContext.timer_2_state == 5) && (func_8010BDBC(&globalCtx->msgCtx) == 5))
        {
            // Trade quest timer reached 0
            gSaveContext.cutscene_index = 0;
            globalCtx->sceneLoadFlag = 0x14;
            globalCtx->fadeOutTransition = 3;
            gSaveContext.timer_2_state = 0;
            D_8015FFE6 = 40;

            if ((gSaveContext.equips.button_items[0] != ITEM_SWORD_KOKIRI) &&
                (gSaveContext.equips.button_items[0] != ITEM_SWORD_MASTER) &&
                (gSaveContext.equips.button_items[0] != ITEM_SWORD_BGS) &&
                (gSaveContext.equips.button_items[0] != ITEM_SWORD_KNIFE))
            {
                if (gSaveContext.button_status[0] != BTN_ENABLED)
                    gSaveContext.equips.button_items[0] = gSaveContext.button_status[0];
                else
                    gSaveContext.equips.button_items[0] = ITEM_NONE;
            }

            // Revert any spoiling trade quest items
            for (phi_s3 = 0; phi_s3 < ARRAY_COUNT(gSpoilingItems); phi_s3++)
            {
                if (INV_CONTENT(ITEM_POCKET_EGG) == gSpoilingItems[phi_s3])
                {
                    gSaveContext.event_inf[0] &= 0x7F80;
                    osSyncPrintf("EVENT_INF=%x\n", gSaveContext.event_inf[0]);
                    globalCtx->nextEntranceIndex = sSpoilingItemEntrances[phi_s3];
                    INV_CONTENT(gSpoilingItemReverts[phi_s3]) = gSpoilingItemReverts[phi_s3];

                    for (phi_s0 = 1; phi_s0 < 4; phi_s0++)
                    {
                        if (gSaveContext.equips.button_items[phi_s0] == gSpoilingItems[phi_s3])
                        {
                            gSaveContext.equips.button_items[phi_s0] = gSpoilingItemReverts[phi_s3];
                            Interface_LoadItemIcon1(globalCtx, phi_s0);
                        }
                    }
                }
            }
        }

        if ((globalCtx->pauseCtx.state == 0) &&
            (globalCtx->pauseCtx.flag == 0) &&
            (globalCtx->unk_10A20 == 0) &&
            (msgCtx->msgMode == 0) &&
            !(player->stateFlags2 & 0x01000000) &&
            (globalCtx->sceneLoadFlag == 0) &&
            (globalCtx->unk_1241B == 0) &&
            (func_800BFC84(globalCtx) == 0) &&
            (gSaveContext.minigame_state != 1) &&
            (globalCtx->unk_11E5C < 2) &&
            !((globalCtx->sceneNum == SCENE_BOWLING) && Flags_GetSwitch(globalCtx, 0x38)))
        {
            sp274 = 0;
            switch (gSaveContext.timer_1_state)
            {
                case 1:
                    gSaveContext.timer_1_state = 2;
                    gSaveContext.timer_1_value = gSaveContext.health >> 1;
                    D_8015FFE0 = D_8015FFE2 = 20;
                    break;
                case 2:
                    D_8015FFE2--;
                    if (D_8015FFE2 == 0)
                    {
                        gSaveContext.timer_1_state = 3;
                        D_8015FFE2 = 20;
                    }
                    break;
                case 5:
                case 11:
                    D_8015FFE0 = D_8015FFE2 = 20;
                    if (gSaveContext.timer_1_state == 5)
                        gSaveContext.timer_1_state = 6;
                    else
                        gSaveContext.timer_1_state = 12;
                    break;
                case 6:
                case 12:
                    D_8015FFE2--;
                    if (D_8015FFE2 == 0)
                    {
                        D_8015FFE2 = 20;
                        if (gSaveContext.timer_1_state == 6)
                            gSaveContext.timer_1_state = 7;
                        else
                            gSaveContext.timer_1_state = 13;
                    }
                    break;
                case 3:
                case 7:
                    phi_s3 = (gSaveContext.timer_x[0] - 26) / D_8015FFE2;
                    gSaveContext.timer_x[0] -= phi_s3;

                    if (gSaveContext.health_capacity > 0xA0)
                        phi_s3 = (gSaveContext.timer_y[0] - 54) / D_8015FFE2;
                    else
                        phi_s3 = (gSaveContext.timer_y[0] - 46) / D_8015FFE2;
                    gSaveContext.timer_y[0] -= phi_s3;

                    D_8015FFE2--;
                    if (D_8015FFE2 == 0)
                    {
                        gSaveContext.timer_x[0] = 26;
                        D_8015FFE2 = 20;

                        if (gSaveContext.health_capacity > 0xA0)
                            gSaveContext.timer_y[0] = 54;
                        else
                            gSaveContext.timer_y[0] = 46;

                        if (gSaveContext.timer_1_state == 3)
                            gSaveContext.timer_1_state = 4;
                        else
                            gSaveContext.timer_1_state = 8;
                    }
                case 4:
                case 8:
                    if ((gSaveContext.timer_1_state == 4) || (gSaveContext.timer_1_state == 8))
                    {
                        if (gSaveContext.health_capacity > 0xA0)
                            gSaveContext.timer_y[0] = 54;
                        else
                            gSaveContext.timer_y[0] = 46;
                    }

                    if ((gSaveContext.timer_1_state >= 3) && (msgCtx->unk_E300 == 0))
                    {
                        D_8015FFE0--;
                        if (D_8015FFE0 == 0)
                        {
                            if (gSaveContext.timer_1_value != 0)
                                gSaveContext.timer_1_value--;

                            D_8015FFE0 = 20;

                            if (gSaveContext.timer_1_value == 0)
                            {
                                gSaveContext.timer_1_state = 10;
                                if (D_80125A5C != 0)
                                {
                                    gSaveContext.health = 0;
                                    globalCtx->unk_11D58(globalCtx, -(gSaveContext.health + 2));
                                }
                                D_80125A5C = 0;
                            }
                            else if (gSaveContext.timer_1_value > 60)
                            {
                                if (sTimerDigits[4] == 1)
                                    Audio_PlaySoundGeneral(NA_SE_SY_MESSAGE_WOMAN, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                            }
                            else if (gSaveContext.timer_1_value >= 11)
                            {
                                if (sTimerDigits[4] & 1)
                                    Audio_PlaySoundGeneral(NA_SE_SY_WARNING_COUNT_N, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                            }
                            else
                            {
                                Audio_PlaySoundGeneral(NA_SE_SY_WARNING_COUNT_E, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                            }
                        }
                    }
                    break;
                case 13:
                    phi_s3 = (gSaveContext.timer_x[0] - 26) / D_8015FFE2;
                    gSaveContext.timer_x[0] -= phi_s3;

                    if (gSaveContext.health_capacity > 0xA0)
                        phi_s3 = (gSaveContext.timer_y[0] - 54) / D_8015FFE2;
                    else
                        phi_s3 = (gSaveContext.timer_y[0] - 46) / D_8015FFE2;
                    gSaveContext.timer_y[0] -= phi_s3;

                    D_8015FFE2--;
                    if (D_8015FFE2 == 0)
                    {
                        gSaveContext.timer_x[0] = 26;
                        D_8015FFE2 = 20;

                        if (gSaveContext.health_capacity > 0xA0)
                            gSaveContext.timer_y[0] = 54;
                        else
                            gSaveContext.timer_y[0] = 46;

                        gSaveContext.timer_1_state = 14;
                    }
                case 14:
                    if (gSaveContext.timer_1_state == 14)
                    {
                        if (gSaveContext.health_capacity > 0xA0)
                            gSaveContext.timer_y[0] = 54;
                        else
                            gSaveContext.timer_y[0] = 46;
                    }

                    if (gSaveContext.timer_1_state >= 3)
                    {
                        D_8015FFE0--;
                        if (D_8015FFE0 == 0)
                        {
                            gSaveContext.timer_1_value++;
                            D_8015FFE0 = 20;

                            if (gSaveContext.timer_1_value == 3599)
                            {
                                gSaveContext.timer_1_state = 15;
                                D_8015FFE2 = 40;
                            }
                            else
                            {
                                Audio_PlaySoundGeneral(NA_SE_SY_WARNING_COUNT_N, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                            }
                        }
                    }
                    break;
                case 10:
                    if (gSaveContext.timer_2_state != 0)
                    {
                        gSaveContext.timer_x[1] = 140;
                        gSaveContext.timer_y[1] = 80;
                        D_8015FFE4 = D_8015FFE6 = 20;

                        if (gSaveContext.timer_2_state < 7)
                            gSaveContext.timer_2_state = 2;
                        else
                            gSaveContext.timer_2_state = 8;

                        gSaveContext.timer_1_state = 0;
                    }
                    else
                    {
                        gSaveContext.timer_1_state = 0;
                    }
                    break;
                case 15:
                    break;
                default:
                    sp274 = 1;
                    switch (gSaveContext.timer_2_state)
                    {
                        case 1:
                        case 7:
                            gSaveContext.timer_x[1] = 140;
                            gSaveContext.timer_y[1] = 80;
                            D_8015FFE4 = D_8015FFE6 = 20;
                            if (gSaveContext.timer_2_state == 1)
                                gSaveContext.timer_2_state = 2;
                            else
                                gSaveContext.timer_2_state = 8;
                            break;
                        case 2:
                        case 8:
                            D_8015FFE6--;
                            if (D_8015FFE6 == 0)
                            {
                                D_8015FFE6 = 20;
                                if (gSaveContext.timer_2_state == 2)
                                    gSaveContext.timer_2_state = 3;
                                else
                                    gSaveContext.timer_2_state = 9;
                            }
                            break;
                        case 3:
                        case 9:
                            osSyncPrintf("event_xp[1]=%d,  event_yp[1]=%d  TOTAL_EVENT_TM=%d\n",
                                         gSaveContext.timer_x[1], gSaveContext.timer_y[1], gSaveContext.timer_2_value);

                            phi_s3 = (gSaveContext.timer_x[1] - 26) / D_8015FFE2;
                            gSaveContext.timer_x[1] -= phi_s3;

                            if (gSaveContext.health_capacity > 0xA0)
                                phi_s3 = (gSaveContext.timer_y[1] - 54) / D_8015FFE6;
                            else
                                phi_s3 = (gSaveContext.timer_y[1] - 46) / D_8015FFE6;
                            gSaveContext.timer_y[1] -= phi_s3;

                            D_8015FFE6--;
                            if (D_8015FFE6 == 0)
                            {
                                gSaveContext.timer_x[1] = 26;
                                D_8015FFE6 = 20;

                                if (gSaveContext.health_capacity > 0xA0)
                                    gSaveContext.timer_y[1] = 54;
                                else
                                    gSaveContext.timer_y[1] = 46;

                                if (gSaveContext.timer_2_state == 3)
                                    gSaveContext.timer_2_state = 4;
                                else
                                    gSaveContext.timer_2_state = 10;
                            }
                        case 4:
                        case 10:
                            if ((gSaveContext.timer_2_state == 4) || (gSaveContext.timer_2_state == 10))
                            {
                                if (gSaveContext.health_capacity > 0xA0)
                                    gSaveContext.timer_y[1] = 54;
                                else
                                    gSaveContext.timer_y[1] = 46;
                            }

                            if (gSaveContext.timer_2_state >= 3)
                            {
                                D_8015FFE4--;
                                if (D_8015FFE4 == 0)
                                {
                                    D_8015FFE4 = 20;
                                    if (gSaveContext.timer_2_state == 4)
                                    {
                                        gSaveContext.timer_2_value--;
                                        osSyncPrintf("TOTAL_EVENT_TM=%d\n", gSaveContext.timer_2_value);

                                        if (gSaveContext.timer_2_value <= 0)
                                        {
                                            if (!Flags_GetSwitch(globalCtx, 0x37) ||
                                                ((globalCtx->sceneNum != SCENE_GANON_DEMO) &&
                                                 (globalCtx->sceneNum != SCENE_GANON_FINAL) &&
                                                 (globalCtx->sceneNum != SCENE_GANON_SONOGO) &&
                                                 (globalCtx->sceneNum != SCENE_GANONTIKA_SONOGO)))
                                            {
                                                gSaveContext.timer_2_state = 5;
                                                gSaveContext.cutscene_index = 0;
                                                D_8015FFE6 = 40;
                                                func_8010B680(globalCtx, 0x71B0, 0);
                                                func_8002DF54(globalCtx, 0, 8);
                                            }
                                            else
                                            {
                                                gSaveContext.timer_2_state = 6;
                                                D_8015FFE6 = 40;
                                            }
                                        }
                                        else
                                        {
                                            if (gSaveContext.timer_2_value > 60)
                                            {
                                                if (sTimerDigits[4] == 1)
                                                    Audio_PlaySoundGeneral(NA_SE_SY_MESSAGE_WOMAN, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                                            }
                                            else if (gSaveContext.timer_2_value > 10)
                                            {
                                                if (sTimerDigits[4] & 1)
                                                    Audio_PlaySoundGeneral(NA_SE_SY_WARNING_COUNT_N, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                                            }
                                            else
                                            {
                                                Audio_PlaySoundGeneral(NA_SE_SY_WARNING_COUNT_E, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                                            }
                                        }
                                    }
                                    else
                                    {
                                        gSaveContext.timer_2_value++;
                                        if (gSaveContext.event_inf[1] & 1)
                                        {
                                            if (gSaveContext.timer_2_value == 240)
                                            {
                                                func_8010B680(globalCtx, 0x6083, 0);
                                                gSaveContext.timer_2_state = 0;
                                                gSaveContext.event_inf[1] &= ~1;
                                            }
                                        }
                                    }

                                    if ((gSaveContext.timer_2_value % 60) == 0)
                                    {
                                        Audio_PlaySoundGeneral(NA_SE_SY_WARNING_COUNT_N, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                                    }
                                }
                            }
                            break;
                        case 6:
                            D_8015FFE6--;
                            if (D_8015FFE6 == 0)
                                gSaveContext.timer_2_state = 0;
                            break;
                }
            }

            if (((gSaveContext.timer_1_state != 0) && (gSaveContext.timer_1_state != 10)) ||
                (gSaveContext.timer_2_state != 0))
            {
                sTimerDigits[0] = sTimerDigits[1] = sTimerDigits[3] = 0;
                sTimerDigits[2] = 10; // digit 10 is used as ':' (colon)

                if (gSaveContext.timer_1_state != 0)
                    sTimerDigits[4] = gSaveContext.timer_1_value;
                else
                    sTimerDigits[4] = gSaveContext.timer_2_value;

                while (sTimerDigits[4] >= 60)
                {
                    sTimerDigits[1]++;
                    if (sTimerDigits[1] >= 10)
                    {
                        sTimerDigits[1] -= 10;
                        sTimerDigits[0]++;
                    }
                    sTimerDigits[4] -= 60;
                }

                while (sTimerDigits[4] >= 10)
                {
                    sTimerDigits[4] -= 10;
                    sTimerDigits[3]++;
                }

                // Clock Icon
                gDPPipeSync(gfxCtx->overlay.p++);
                gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
                gDPSetEnvColor(gfxCtx->overlay.p++, 0x00, 0x00, 0x00, 0x00);
                gfxCtx->overlay.p = Draw_TextureIA8(gfxCtx->overlay.p,
                                                    D_02002000,
                                                    16, 16,
                                                    gSaveContext.timer_x[sp274],
                                                    gSaveContext.timer_y[sp274] + 2,
                                                    16, 16,
                                                    1024, 1024);

                // Timer Counter
                gDPPipeSync(gfxCtx->overlay.p++);
                gDPSetCombineLERP(gfxCtx->overlay.p++,
                                    0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0,
                                    0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);

                if (gSaveContext.timer_1_state != 0)
                {
                    if ((gSaveContext.timer_1_value < 10) && (gSaveContext.timer_1_state < 11))
                        gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0x32, 0x00, 0xFF);
                    else
                        gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
                }
                else
                {
                    if ((gSaveContext.timer_2_value < 10) && (gSaveContext.timer_2_state < 6))
                        gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0x32, 0x00, 0xFF);
                    else
                        gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0xFF, 0xFF, 0x00, 0xFF);
                }

                for (phi_s3 = 0; phi_s3 < 5; phi_s3++)
                {
                    gfxCtx->overlay.p = Draw_TextureI8(gfxCtx->overlay.p,
                                                       &D_02003040[sTimerDigits[phi_s3]],
                                                       8, 16,
                                                       gSaveContext.timer_x[sp274] + sTimerDigitLeftPos[phi_s3],
                                                       gSaveContext.timer_y[sp274],
                                                       sDigitWidth[phi_s3], VREG(42),
                                                       VREG(43) * 2, VREG(43) * 2);
                }
            }
        }
    }

    if (pauseCtx->flag == 3)
        func_8002AAB0(globalCtx);

    if (interfaceCtx->unk_244 != 0)
    {
        gDPPipeSync(gfxCtx->overlay.p++);
        gSPDisplayList(gfxCtx->overlay.p++, sSetupDL_80125A60);
        gDPSetPrimColor(gfxCtx->overlay.p++, 0, 0, 0x00, 0x00, 0x00, interfaceCtx->unk_244);
        gDPFillRectangle(gfxCtx->overlay.p++, 0, 0, gScreenWidth - 1, gScreenHeight - 1);
    }

    func_800C6B54(gfxArr, globalCtx->gfxCtx, "../z_parameter.c", 4269);
}
#else
s16 D_8015FFE0;
s16 D_8015FFE2;
s16 D_8015FFE4;
s16 D_8015FFE6;
s16 sTimerDigits[5];
#pragma GLOBAL_ASM("asm/non_matchings/code/z_parameter/Interface_Draw.s")
#endif

#ifdef NON_MATCHING
// regalloc and minor ordering differences
void Interface_Update(GlobalContext* globalCtx)
{
    static u8 D_80125B60 = 0;
    static s16 D_80125B64 = 0;
    MessageContext* msgCtx = &globalCtx->msgCtx;
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    Player* player = PLAYER;
    s16 alpha; // sp+0x3A
    s16 alpha1; // sp+0x38
    u16 action;
    Input* input = &globalCtx->input[2];

    if (!~(input->padPressed | -0x201))
    {
        gSaveContext.language = 0;
        osSyncPrintf("J_N=%x J_N=%x\n", gSaveContext.language, &gSaveContext.language);
    }
    else if (!~(input->padPressed | -0x801))
    {
        gSaveContext.language = 1;
        osSyncPrintf("J_N=%x J_N=%x\n", gSaveContext.language, &gSaveContext.language);
    }
    else if (!~(input->padPressed | -0x101))
    {
        gSaveContext.language = 2;
        osSyncPrintf("J_N=%x J_N=%x\n", gSaveContext.language, &gSaveContext.language);
    }

    if ((globalCtx->pauseCtx.state == 0) && (globalCtx->pauseCtx.flag == 0))
    {
        if ((gSaveContext.minigame_state == 1) || (gSaveContext.scene_setup_index < 4) ||
            ((globalCtx->sceneNum == SCENE_SPOT20) && (gSaveContext.scene_setup_index == 4)))
        {
            if ((msgCtx->msgMode == 0) ||
                ((msgCtx->msgMode != 0) && (globalCtx->sceneNum == SCENE_BOWLING)))
            {
                if (globalCtx->unk_10A20 == 0)
                {
                    func_80083108(globalCtx);
                }
            }
        }
    }

    switch (gSaveContext.unk_13E8)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
            alpha = 0xFF - (gSaveContext.unk_13EC << 5);
            if (alpha < 0)
                alpha = 0;

            func_80082850(globalCtx, alpha);
            gSaveContext.unk_13EC++;

            if (alpha == 0)
                gSaveContext.unk_13E8 = 0;
            break;
        case 50:
            alpha = 0xFF - (gSaveContext.unk_13EC << 5);
            if (alpha < 0)
                alpha = 0;

            alpha1 = 0xFF - alpha;
            if (alpha1 >= 0xFF)
                alpha1 = 0xFF;

            osSyncPrintf("case 50 : alpha=%d  alpha1=%d\n", alpha, alpha1);
            func_80082644(globalCtx, alpha1);

            if (interfaceCtx->healthAlpha != 0xFF)
                interfaceCtx->healthAlpha = alpha1;

            if (interfaceCtx->magicAlpha != 0xFF)
                interfaceCtx->magicAlpha = alpha1;

            switch (globalCtx->sceneNum)
            {
                case SCENE_SPOT00:
                case SCENE_SPOT01:
                case SCENE_SPOT02:
                case SCENE_SPOT03:
                case SCENE_SPOT04:
                case SCENE_SPOT05:
                case SCENE_SPOT06:
                case SCENE_SPOT07:
                case SCENE_SPOT08:
                case SCENE_SPOT09:
                case SCENE_SPOT10:
                case SCENE_SPOT11:
                case SCENE_SPOT12:
                case SCENE_SPOT13:
                case SCENE_SPOT15:
                case SCENE_SPOT16:
                case SCENE_SPOT17:
                case SCENE_SPOT18:
                case SCENE_SPOT20:
                case SCENE_GANON_TOU:
                    if (interfaceCtx->minimapAlpha < 0xAA)
                        interfaceCtx->minimapAlpha = alpha1;
                    else
                        interfaceCtx->minimapAlpha = 0xAA;
                    break;
                default:
                    if (interfaceCtx->minimapAlpha != 0xFF)
                        interfaceCtx->minimapAlpha = alpha1;
                    break;
            }

            gSaveContext.unk_13EC++;
            if (alpha1 == 0xFF)
                gSaveContext.unk_13E8 = 0;

            break;
        case 52:
            gSaveContext.unk_13E8 = 1;
            func_80082850(globalCtx, 0);
            gSaveContext.unk_13E8 = 0;
        default:
            break;
    }

    func_8008226C(globalCtx);

    if (gSaveContext.health_accumulator != 0)
    {
        gSaveContext.health_accumulator -= 4;
        gSaveContext.health += 4;

        if ((gSaveContext.health & 0xF) < 4)
            Audio_PlaySoundGeneral(NA_SE_SY_HP_RECOVER, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);

        osSyncPrintf("now_life=%d  max_life=%d\n", gSaveContext.health, gSaveContext.health_capacity);

        if (gSaveContext.health >= gSaveContext.health_capacity)
        {
            gSaveContext.health = gSaveContext.health_capacity;
            osSyncPrintf("S_Private.now_life=%d  S_Private.max_life=%d\n", gSaveContext.health, gSaveContext.health_capacity);
            gSaveContext.health_accumulator = 0;
        }
    }

    Health_HandleCriticalAlarm(globalCtx);
    D_80125A58 = func_8008F2F8(globalCtx);

    if (D_80125A58 == 1)
    {
        if (CUR_EQUIP_VALUE(EQUIP_TUNIC) == 2)
        {
            D_80125A58 = 0;
        }
    }
    else if ((func_8008F2F8(globalCtx) >= 2) && (func_8008F2F8(globalCtx) < 5))
    {
        if (CUR_EQUIP_VALUE(EQUIP_TUNIC) == 3)
        {
            D_80125A58 = 0;
        }
    }

    Health_UpdateData(globalCtx);

    if ((gSaveContext.timer_1_state >= 3) &&
        (globalCtx->pauseCtx.state == 0) &&
        (globalCtx->pauseCtx.flag == 0) &&
        (msgCtx->msgMode == 0) &&
        !(player->stateFlags2 & 0x01000000) &&
        (globalCtx->sceneLoadFlag == 0) &&
        (globalCtx->unk_1241B == 0) &&
        (func_800BFC84(globalCtx) == 0))
    {

    }

    if (gSaveContext.rupee_accumulator != 0)
    {
        if (gSaveContext.rupee_accumulator > 0)
        {
            if (gSaveContext.rupees < CUR_CAPACITY(UPG_WALLET))
            {
                gSaveContext.rupee_accumulator--;
                gSaveContext.rupees++;
                Audio_PlaySoundGeneral(NA_SE_SY_RUPY_COUNT, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
            }
            else
            {
                // Translates to: "Rupee Amount MAX = %d"
                osSyncPrintf("????????????????????? = %d\n", CUR_CAPACITY(UPG_WALLET));
                gSaveContext.rupees = CUR_CAPACITY(UPG_WALLET);
                gSaveContext.rupee_accumulator = 0;
            }
        }
        else if (gSaveContext.rupees != 0)
        {
            if (gSaveContext.rupee_accumulator <= -50)
            {
                gSaveContext.rupee_accumulator += 10;
                gSaveContext.rupees -= 10;

                if (gSaveContext.rupees < 0)
                    gSaveContext.rupees = 0;

                Audio_PlaySoundGeneral(NA_SE_SY_RUPY_COUNT, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
            }
            else
            {
                gSaveContext.rupee_accumulator++;
                gSaveContext.rupees--;
                Audio_PlaySoundGeneral(NA_SE_SY_RUPY_COUNT, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
            }
        }
        else
        {
            gSaveContext.rupee_accumulator = 0;
        }
    }

    switch (interfaceCtx->unk_1EC)
    {
        case 1:
            interfaceCtx->unk_1F4 = interfaceCtx->unk_1F4 + (31400.0f / WREG(5));
            if (interfaceCtx->unk_1F4 >= 15700.0f)
            {
                interfaceCtx->unk_1F4 = -15700.0f;
                interfaceCtx->unk_1EC = 2;
            }
            break;
        case 2:
            interfaceCtx->unk_1F4 = interfaceCtx->unk_1F4 + (31400.0f / WREG(5));
            if (interfaceCtx->unk_1F4 >= 0.0f)
            {
                interfaceCtx->unk_1F4 = 0.0f;
                interfaceCtx->unk_1EC = 0;
                interfaceCtx->unk_1EE = interfaceCtx->unk_1F0;
                action = interfaceCtx->unk_1EE;
                if ((action == 0x1D) || (action == 0x1E))
                    action = 0xA;
                Interface_LoadActionLabel(interfaceCtx, action, 0);
            }
            break;
        case 3:
            interfaceCtx->unk_1F4 = interfaceCtx->unk_1F4 + (31400.0f / WREG(5));
            if (interfaceCtx->unk_1F4 >= 15700.0f)
            {
                interfaceCtx->unk_1F4 = -15700.0f;
                interfaceCtx->unk_1EC = 2;
            }
            break;
        case 4:
            interfaceCtx->unk_1F4 = interfaceCtx->unk_1F4 + (31400.0f / WREG(5));
            if (interfaceCtx->unk_1F4 >= 0.0f)
            {
                interfaceCtx->unk_1F4 = 0.0f;
                interfaceCtx->unk_1EC = 0;
                interfaceCtx->unk_1EE = interfaceCtx->unk_1F0;
                action = interfaceCtx->unk_1EE;
                if ((action == 0x1D) || (action == 0x1E))
                    action = 0xA;
                Interface_LoadActionLabel(interfaceCtx, action, 0);
            }
            break;
    }

    WREG(7) = interfaceCtx->unk_1F4;

    if ((globalCtx->pauseCtx.state == 0) && (globalCtx->pauseCtx.flag == 0) && (msgCtx->msgMode == 0) &&
        (globalCtx->sceneLoadFlag == 0) && (globalCtx->unk_10A20 == 0) && (globalCtx->unk_1241B == 0) &&
        ((globalCtx->csCtx.state == 0) || (func_8008E988(globalCtx) == 0)))
    {
        if ((gSaveContext.magic_acquired != 0) && (gSaveContext.magic_level == 0))
        {
            gSaveContext.magic_level = gSaveContext.double_magic + 1;
            gSaveContext.unk_13F0 = 8;
            osSyncPrintf(VT_FGCOL(YELLOW));
            // Translates to: "Magic Start!!!!!!!!!"
            osSyncPrintf("????????????????????????????????????????????????????????????\n");
            osSyncPrintf("MAGIC_MAX=%d\n", gSaveContext.magic_level);
            osSyncPrintf("MAGIC_NOW=%d\n", gSaveContext.magic);
            osSyncPrintf("Z_MAGIC_NOW_NOW=%d\n", gSaveContext.unk_13F6);
            osSyncPrintf("Z_MAGIC_NOW_MAX=%d\n", gSaveContext.unk_13F4);
            osSyncPrintf(VT_RST);
        }

        Interface_UpdateMagicBar(globalCtx);
    }

    if (gSaveContext.timer_1_state == 0)
    {
        if (((D_80125A58 == 1) || (D_80125A58 == 2) || (D_80125A58 == 4)) &&
            ((gSaveContext.health >> 1) != 0))
        {
            gSaveContext.timer_1_state = 1;
            gSaveContext.timer_x[0] = 140;
            gSaveContext.timer_y[0] = 80;
            D_80125A5C = 1;
        }
    }
    else
    {
        if (((D_80125A58 == 0) || (D_80125A58 == 3)) &&
            (gSaveContext.timer_1_state < 5))
        {
            gSaveContext.timer_1_state = 0;
        }
    }

    if (gSaveContext.minigame_state == 1)
    {
        gSaveContext.minigame_score += interfaceCtx->unk_23C;
        interfaceCtx->unk_23C = 0;

        if (sHBAScoreTier == 0)
        {
            if (gSaveContext.minigame_score >= 1000)
                sHBAScoreTier++;
        }
        else if (sHBAScoreTier == 1)
        {
            if (gSaveContext.minigame_score >= 1500)
                sHBAScoreTier++;
        }

        sHBAScoreDigits[1] = 0;
        sHBAScoreDigits[0] = 0;
        sHBAScoreDigits[2] = 0;
        sHBAScoreDigits[3] = gSaveContext.minigame_score;

        while (sHBAScoreDigits[3] >= 1000)
        {
            sHBAScoreDigits[0]++;
            sHBAScoreDigits[3] -= 1000;
        }

        while (sHBAScoreDigits[3] >= 100)
        {
            sHBAScoreDigits[1]++;
            sHBAScoreDigits[3] -= 100;
        }

        while (sHBAScoreDigits[3] >= 10)
        {
            sHBAScoreDigits[2]++;
            sHBAScoreDigits[3] -= 10;
        }
    }

    if (gSaveContext.unk_1422 != 0)
    {
        if ((msgCtx->unk_E3F0 != 0x31) && (gSaveContext.unk_1422 == 1))
            globalCtx->msgCtx.unk_E3EE = 4;

        if (globalCtx->unk_10A26 != 0)
        {
            if (gSaveContext.unk_1422 != 2)
            {
                D_80125B60 = 0;
                if ((gSaveContext.day_time >= 0x4555) && (gSaveContext.day_time <= 0xC001))
                    D_80125B60 = 1;

                gSaveContext.unk_1422 = 2;
                D_80125B64 = D_8011FB40;
                D_8011FB40 = 400;
            }
            else if ((D_80125B60 == 0) && (gSaveContext.day_time >= 0x4555) && (gSaveContext.day_time <= 0xC001))
            {
                gSaveContext.unk_1422 = 0;
                D_8011FB40 = D_80125B64;
                globalCtx->msgCtx.unk_E3EE = 4;
            }
            else if (gSaveContext.day_time > 0xC001)
            {
                gSaveContext.unk_1422 = 0;
                D_8011FB40 = D_80125B64;
                globalCtx->msgCtx.unk_E3EE = 4;
            }
        }
        else if ((globalCtx->roomCtx.curRoom.unk_03 != 1) && (interfaceCtx->restrictions.sunsSong != 3))
        {
            if ((gSaveContext.day_time >= 0x4555) && (gSaveContext.day_time < 0xC001))
            {
                gSaveContext.next_day_time = 0;
                globalCtx->fadeOutTransition = 4;
                gSaveContext.transition_type = 2;
                globalCtx->unk_11DE9 = 1;
            }
            else
            {
                gSaveContext.next_day_time = 0x8001;
                globalCtx->fadeOutTransition = 5;
                gSaveContext.transition_type = 3;
                globalCtx->unk_11DE9 = 1;
            }

            if (globalCtx->sceneNum == SCENE_SPOT13)
            {
                globalCtx->fadeOutTransition = 0xE;
                gSaveContext.transition_type = 0xE;
            }

            gSaveContext.respawn_flag = -2;
            globalCtx->nextEntranceIndex = gSaveContext.entrance_index;
            globalCtx->sceneLoadFlag = 0x14;
            gSaveContext.unk_1422 = 0;
            func_800F6964(30);
            gSaveContext.seq_index = 0xFF;
            gSaveContext.night_sfx = 0xFF;
        }
        else
        {
            gSaveContext.unk_1422 = 3;
        }
    }
}
#else
u8 D_80125B60 = 0;
s16 D_80125B64 = 0;
#pragma GLOBAL_ASM("asm/non_matchings/code/z_parameter/Interface_Update.s")
#endif
