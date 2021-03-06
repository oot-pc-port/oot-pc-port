/*
 * File: z_bg_jya_kanaami.c
 * Overlay: Bg_Jya_Kanaami
 * Description: Climbable Metal Grating (Fire Temple)
*/

#include <ultra64.h>
#include <global.h>

typedef struct
{
    /* 0x0000 */ Actor actor;
    /* 0x014C */ u32 dynaPolyId;
    /* 0x014C */ char unk_150[0x14];
    /* 0x0164 */ ActorFunc updateFunc;
    /* 0x0168 */ s16 unk_168;
    /* 0x016A */ s16 unk_16A;
} BgJyaKanaami; // size = 0x016C

#define ROOM  0x00
#define FLAGS 0x00000000

static void BgJyaKanaami_Init(BgJyaKanaami* this, GlobalContext* globalCtx);
static void BgJyaKanaami_Destroy(BgJyaKanaami* this, GlobalContext* globalCtx);
static void BgJyaKanaami_Update(BgJyaKanaami* this, GlobalContext* globalCtx);
static void BgJyaKanaami_Draw(BgJyaKanaami* this, GlobalContext* globalCtx);

static void func_80899880(BgJyaKanaami* this);
static void func_80899894(BgJyaKanaami* this, GlobalContext* globalCtx);
static void func_8089993C(BgJyaKanaami* this);
static void func_80899950(BgJyaKanaami* this, GlobalContext* globalCtx);
static void func_80899A08(BgJyaKanaami* this);

const ActorInit Bg_Jya_Kanaami_InitVars =
{
    ACTOR_BG_JYA_KANAAMI,
    ACTORTYPE_BG,
    ROOM,
    FLAGS,
    OBJECT_JYA_OBJ,
    sizeof(BgJyaKanaami),
    (ActorFunc)BgJyaKanaami_Init,
    (ActorFunc)BgJyaKanaami_Destroy,
    (ActorFunc)BgJyaKanaami_Update,
    (ActorFunc)BgJyaKanaami_Draw,
};

static InitChainEntry initChain[] =
{
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_CONTINUE),
    ICHAIN_F32(unk_F4, 1000, ICHAIN_CONTINUE),
    ICHAIN_F32(unk_F8, 700, ICHAIN_CONTINUE),
    ICHAIN_F32(unk_FC, 1000, ICHAIN_STOP)
};

extern u32 D_0600F000;
extern u32 D_0600F208;

static void func_80899740(BgJyaKanaami* this, GlobalContext* globalCtx, u32 collision, DynaPolyMoveFlag flag)
{
    s32 pad;
    s32 local_c = 0;
    s32 pad2;

    DynaPolyInfo_SetActorMove(&this->actor, flag);
    DynaPolyInfo_Alloc(collision, &local_c);
    this->dynaPolyId = DynaPolyInfo_RegisterActor(globalCtx, &globalCtx->colCtx.dyna, &this->actor, local_c);
    if (this->dynaPolyId == 0x32)
    {
        osSyncPrintf("Warning : move BG ????????????(%s %d)(name %d)(arg_data 0x%04x)\n", "../z_bg_jya_kanaami.c", 145, this->actor.id, this->actor.params);
    }
}

static void BgJyaKanaami_Init(BgJyaKanaami* this, GlobalContext* globalCtx)
{
    func_80899740(this, globalCtx, &D_0600F208, 0);
    Actor_ProcessInitChain(&this->actor, initChain);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x3F))
    {
        func_80899A08(this);
    }
    else
    {
        func_80899880(this);
    }
    osSyncPrintf("(jya ??????)(arg_data 0x%04x)\n", this->actor.params);
}

static void BgJyaKanaami_Destroy(BgJyaKanaami* this, GlobalContext* globalCtx)
{
    DynaPolyInfo_Free(globalCtx, &globalCtx->colCtx.dyna, this->dynaPolyId);
}

static void func_80899880(BgJyaKanaami* this)
{
    this->updateFunc = func_80899894;
    this->unk_16A = 0;
}

static void func_80899894(BgJyaKanaami* this, GlobalContext* globalCtx)
{
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x3F) || this->unk_16A > 0)
    {
        if (this->actor.posRot.pos.x > -1000.0f && this->unk_16A == 0)
        {
            func_800800F8(globalCtx, 0xD7A, -0x63, &this->actor, 0);
        }
        this->unk_16A += 1;
        if (this->unk_16A >= 0xA)
        {
            func_8089993C(this);
        }
    }
}

static void func_8089993C(BgJyaKanaami* this)
{
    this->updateFunc = func_80899950;
    this->unk_168 = 0;
}

static void func_80899950(BgJyaKanaami* this, GlobalContext* globalCtx)
{
    s32 pad[2];
    s32 var;
    this->unk_168 += 0x20;
    if (Math_ApproxUpdateScaledS(&this->actor.posRot.rot.x, 0x4000, this->unk_168))
    {
        func_80899A08(this);
        Audio_PlayActorSound2(&this->actor, NA_SE_EV_TRAP_BOUND);
        var = func_80092F88(globalCtx->cameraCtx.activeCameraPtrs[globalCtx->cameraCtx.unk_5C0], 3);
        func_80092DAC(var, 25000);
        func_80092E70(var, 2, 0, 0, 0);
        func_80092DF0(var, 0x10);
    }
}

static void func_80899A08(BgJyaKanaami* this)
{
    this->updateFunc = 0;
    this->actor.posRot.rot.x = 0x4000;
}

static void BgJyaKanaami_Update(BgJyaKanaami* this, GlobalContext* globalCtx)
{
    if (this->updateFunc)
    {
        this->updateFunc(this, globalCtx);
    }
    this->actor.shape.rot.x = this->actor.posRot.rot.x;
}

static void BgJyaKanaami_Draw(BgJyaKanaami* this, GlobalContext* globalCtx)
{
    Draw_DListOpa(globalCtx, &D_0600F000);
}
