#include <ultra64.h>
#include <global.h>
#include <vt.h>

s32 func_8006CFC0(s32 scene)
{
    s32 validScenes[] = { SCENE_SPOT00, SCENE_SPOT06, SCENE_SPOT09, SCENE_SPOT12, SCENE_SPOT20 };
    s32 i;

    for (i = 0; i < ARRAY_COUNT(validScenes); i++)
    {
        if (scene == validScenes[i])
            return 1;
    }

    return 0;
}

void func_8006D074(GlobalContext* globalCtx)
{
    gSaveContext.horse_data.scene = SCENE_SPOT00;
    gSaveContext.horse_data.pos.x = -1840;
    gSaveContext.horse_data.pos.y = 72;
    gSaveContext.horse_data.pos.z = 5497;
    gSaveContext.horse_data.angle = -27353;
}

void func_8006D0AC(GlobalContext* globalCtx)
{
    if (gSaveContext.horse_data.scene == SCENE_SPOT06)
    {
        gSaveContext.horse_data.scene = SCENE_SPOT06;
        gSaveContext.horse_data.pos.x = -2065;
        gSaveContext.horse_data.pos.y = -863;
        gSaveContext.horse_data.pos.z = 1839;
        gSaveContext.horse_data.angle = 0;
    }
}

typedef struct
{
    /* 0x00 */ s16   scene;
    /* 0x02 */ Vec3s pos;
    /* 0x08 */ s16   angle;
    /* 0x0A */ s16   type;
} HorseSpawn;

void func_8006D0EC(GlobalContext* globalCtx, Player* player)
{
    s32 i;
    HorseSpawn horseSpawns[] =
    {
        { 81, 0xFE34, 0x0064, 0x19F0, 0, 2 },
        { 87, 0xF877, 0xFBFF, 0x0300, 0, 2 },
        { 90, 0x0A06, 0xFEFD, 0x02FF, 0, 2 },
        { 93, 0xFEB8, 0x000A, 0x03B9, 0, 2 },
        { 99, 0x03A0, 0x0000, 0xF718, 0, 2 },
    };

    if ((AREG(6) != 0) && (Flags_GetEventChkInf(0x18) || (DREG(1) != 0)))
    {
        player->rideActor = Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_HORSE,
                                        player->actor.posRot.pos.x, player->actor.posRot.pos.y, player->actor.posRot.pos.z,
                                        player->actor.shape.rot.x, player->actor.shape.rot.y, player->actor.shape.rot.z, 9);
        if (player->rideActor == NULL)
            __assert("player->ride.actor != NULL", "../z_horse.c", 343);

        func_8002DECC(globalCtx, player, player->rideActor);
        func_8002DE74(globalCtx, player);
        gSaveContext.horse_data.scene = globalCtx->sceneNum;

        if (globalCtx->sceneNum == SCENE_SPOT12)
            player->rideActor->room = -1;
    }
    else if ((globalCtx->sceneNum == SCENE_SPOT12) && (gSaveContext.minigame_state == 3))
    {
        Actor* horseActor;
        gSaveContext.minigame_state = 0;
        horseActor = Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_HORSE,
                                 3586.0f, 1413.0f, -402.0f,
                                 0, 0x4000, 0, 1);
        horseActor->room = -1;
    }
    else if ((gSaveContext.entrance_index == 1230) && (gSaveContext.event_chk_inf[1] & 0x100))
    {
        Actor* horseActor;
        horseActor = Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_HORSE,
                                 -25.0f, 0.0f, -1600.0f,
                                 0, -0x4000, 0, 1);
        if (horseActor == NULL)
            __assert("horse_actor != NULL", "../z_horse.c", 389);
    }
    else if ((globalCtx->sceneNum == gSaveContext.horse_data.scene) && (Flags_GetEventChkInf(0x18) != 0 || DREG(1) != 0))
    {
        // Translates to: "SET BY EXISTENCE OF HORSE %d %d %d"
        osSyncPrintf("??????????????????????????? %d %d %d\n", gSaveContext.horse_data.scene, Flags_GetEventChkInf(0x18), DREG(1));

        if (func_8006CFC0(gSaveContext.horse_data.scene))
        {
            Actor* horseActor;
            horseActor = Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_HORSE,
                                     gSaveContext.horse_data.pos.x, gSaveContext.horse_data.pos.y, gSaveContext.horse_data.pos.z,
                                     0, gSaveContext.horse_data.angle, 0, 1);
            if (horseActor == NULL)
                __assert("horse_actor != NULL", "../z_horse.c", 414);

            if (globalCtx->sceneNum == SCENE_SPOT12)
                horseActor->room = -1;
        }
        else
        {
            osSyncPrintf(VT_COL(RED, WHITE));
            // Translates to: "Horse_SetNormal():%d SET SPOT IS NO GOOD."
            osSyncPrintf("Horse_SetNormal():%d ???????????????????????????????????????\n", gSaveContext.horse_data.scene);
            osSyncPrintf(VT_RST);
            func_8006D074(globalCtx);
        }
    }
    else if ((globalCtx->sceneNum == SCENE_SPOT20) && !Flags_GetEventChkInf(0x18) && (DREG(1) == 0))
    {
        Actor* horseActor;
        horseActor = Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_HORSE,
                                 0.0f, 0.0f, -500.0f,
                                 0, 0, 0, 1);
        if (horseActor == 0)
            __assert("horse_actor != NULL", "../z_horse.c", 443);
    }
    else if (Flags_GetEventChkInf(0x18) || (DREG(1) != 0))
    {
        for (i = 0; i < ARRAY_COUNT(horseSpawns); i++)
        {
            HorseSpawn* horseSpawn = &horseSpawns[i];
            if (horseSpawn->scene == globalCtx->sceneNum)
            {
                Actor* horseActor;
                horseActor = Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_HORSE,
                                         horseSpawn->pos.x, horseSpawn->pos.y, horseSpawn->pos.z,
                                         0, horseSpawn->angle, 0, horseSpawn->type);
                if (horseActor == NULL)
                    __assert("horse_actor != NULL", "../z_horse.c", 466);

                if (globalCtx->sceneNum == SCENE_SPOT12)
                    horseActor->room = -1;

                break;
            }
        }
    }
    else if (!Flags_GetEventChkInf(0x18))
    {
        if ((DREG(1) == 0) && (globalCtx->sceneNum == SCENE_SOUKO) &&(gSaveContext.night_flag != 0))
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_HORSE,
                        0.0f, 0.0f, -60.0f,
                        0, 0x7360, 0, 1);
    }
}

typedef struct
{
    /* 0x00 */ s16   scene;
    /* 0x04 */ s32   cutsceneIndex;
    /* 0x08 */ Vec3s pos;
    /* 0x0E */ s16   angle;
    /* 0x10 */ s16   type;
} struct_8011F9B8;

#ifdef NON_MATCHING
// regalloc differences
void func_8006D684(GlobalContext* globalCtx, Player* player)
{
    s32 pad;
    s32 i;
    Vec3s spawnPos;

    if ((gSaveContext.entrance_index == 0x028A || gSaveContext.entrance_index == 0x028E ||
         gSaveContext.entrance_index == 0x0292 || gSaveContext.entrance_index == 0x0476) &&
        (gSaveContext.respawn_flag == 0))
    {
        Vec3s spawnPositions[] = 
        {
            { 0xF46F, 0x0139, 0x1E14 },
            { 0xF894, 0x0139, 0x1B67 },
            { 0xF035, 0x0139, 0x1B15 },
            { 0xF6F7, 0x0139, 0x1766 },
        };

        if (gSaveContext.entrance_index == 0x028A)
            spawnPos = spawnPositions[0];
        else if (gSaveContext.entrance_index == 0x028E)
            spawnPos = spawnPositions[1];
        else if (gSaveContext.entrance_index == 0x0292)
            spawnPos = spawnPositions[2];
        else
            spawnPos = spawnPositions[3];

        player->rideActor = Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_HORSE,
                                        spawnPos.x, spawnPos.y, spawnPos.z,
                                        0, player->actor.posRot.rot.y, 0, 7);
        if (player->rideActor == NULL)
            __assert("player->ride.actor != NULL", "../z_horse.c", 561);

        func_8002DECC(globalCtx, player, player->rideActor);
        func_8002DE74(globalCtx, player);
        gSaveContext.horse_data.scene = globalCtx->sceneNum;
    }
    else if ((globalCtx->sceneNum == SCENE_SPOT20) && ((gSaveContext.event_inf[0] & 0xF) == 6) &&
             (Flags_GetEventChkInf(0x18) == 0) && (DREG(1) == 0))
    {
        player->rideActor = Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_HORSE,
                                        894.0f, 0.0f, -2084.0f,
                                        0, -0x7FFF, 0, 5);
        if (player->rideActor == NULL)
            __assert("player->ride.actor != NULL", "../z_horse.c", 582);

        func_8002DECC(globalCtx, player, player->rideActor);
        func_8002DE74(globalCtx, player);
        gSaveContext.horse_data.scene = globalCtx->sceneNum;

        if (globalCtx->sceneNum == SCENE_SPOT12)
            player->rideActor->room = -1;
    }
    else
    {
        static struct_8011F9B8 D_8011F9B8[] =
        {
            { 93, 0xFFF0, 0x0E10, 0x0585, 0x0168, 0x8001, 8 },
            { 99, 0xFFF0, 0xFF06, 0x0001, 0xF9D4, 0x4000, 6 },
            { 99, 0xFFF1, 0x0000, 0x0000, 0x0000, 0x0000, 5 },
            { 99, 0xFFF5, 0x0000, 0x0000, 0x0000, 0x0000, 7 },
            { 81, 0xFFF3, 0xF46F, 0x0139, 0x1E14, 0x0000, 7 },
            { 81, 0xFFF4, 0xF894, 0x0139, 0x1B67, 0x0000, 7 },
            { 81, 0xFFF5, 0xF035, 0x0139, 0x1B15, 0x0000, 7 },
            { 81, 0xFFF6, 0xF035, 0x0139, 0x1B15, 0x0000, 7 },
        };

        for (i = 0; i < ARRAY_COUNT(D_8011F9B8); i++)
        {
            if ((globalCtx->sceneNum == D_8011F9B8[i].scene) && (gSaveContext.cutscene_index == D_8011F9B8[i].cutsceneIndex))
            {
                if (D_8011F9B8[i].type == 7) 
                {
                    if ((globalCtx->sceneNum == 99) && (gSaveContext.cutscene_index == 0xFFF1))
                    {
                        D_8011F9B8[i].pos.x = player->actor.posRot.pos.x;
                        D_8011F9B8[i].pos.y = player->actor.posRot.pos.y;
                        D_8011F9B8[i].pos.z = player->actor.posRot.pos.z;
                    }

                    player->rideActor = Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_HORSE,
                                                    D_8011F9B8[i].pos.x, D_8011F9B8[i].pos.y, D_8011F9B8[i].pos.z,
                                                    0, player->actor.posRot.rot.y, 0, D_8011F9B8[i].type);
                    if (player->rideActor == NULL)
                        __assert("player->ride.actor != NULL", "../z_horse.c", 628);

                    func_8002DECC(globalCtx, player, player->rideActor);
                    func_8002DE74(globalCtx, player);
                }
                else if ((D_8011F9B8[i].type == 5) || (D_8011F9B8[i].type == 6) || (D_8011F9B8[i].type == 8))
                {
                    Vec3f sp54;
                    s32 temp;
                    s32 pad2;

                    temp = 0;
                    if (((gSaveContext.event_inf[0] & 0x10) >> 4) && D_8011F9B8[i].type == 6)
                        temp = 0x8000;

                    player->rideActor = Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_HORSE,
                                                    D_8011F9B8[i].pos.x, D_8011F9B8[i].pos.y, D_8011F9B8[i].pos.z,
                                                    0, D_8011F9B8[i].angle, 0, D_8011F9B8[i].type | temp);
                    if (player->rideActor == NULL)
                        __assert("player->ride.actor != NULL", "../z_horse.c", 667);

                    player->actor.posRot.pos.x = D_8011F9B8[i].pos.x;
                    player->actor.posRot.pos.y = D_8011F9B8[i].pos.y;
                    player->actor.posRot.pos.z = D_8011F9B8[i].pos.z;
                    player->actor.shape.rot.x = player->actor.shape.rot.z = 0;
                    player->actor.shape.rot.y = D_8011F9B8[i].angle;

                    func_8002DECC(globalCtx, player, player->rideActor);
                    func_8002DE74(globalCtx, player);

                    sp54.x = player->actor.posRot.pos.x - 200.0f;
                    sp54.y = player->actor.posRot.pos.y + 100.0f;
                    sp54.z = player->actor.posRot.pos.z;

                    func_800C04D8(globalCtx, globalCtx->cameraCtx.unk_5C0, &player->actor.posRot, &sp54);
                }
                else
                {
                    Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_HORSE,
                                D_8011F9B8[i].pos.x, D_8011F9B8[i].pos.y, D_8011F9B8[i].pos.z,
                                0, D_8011F9B8[i].angle, 0, D_8011F9B8[i].type);
                }
                break;
            }
        }
    }
}
#else
Vec3s D_8011F9A0[] = 
{
    { 0xF46F, 0x0139, 0x1E14 },
    { 0xF894, 0x0139, 0x1B67 },
    { 0xF035, 0x0139, 0x1B15 },
    { 0xF6F7, 0x0139, 0x1766 },
};
struct_8011F9B8 D_8011F9B8[] =
{
    { 93, 0xFFF0, 0x0E10, 0x0585, 0x0168, 0x8001, 8 },
    { 99, 0xFFF0, 0xFF06, 0x0001, 0xF9D4, 0x4000, 6 },
    { 99, 0xFFF1, 0x0000, 0x0000, 0x0000, 0x0000, 5 },
    { 99, 0xFFF5, 0x0000, 0x0000, 0x0000, 0x0000, 7 },
    { 81, 0xFFF3, 0xF46F, 0x0139, 0x1E14, 0x0000, 7 },
    { 81, 0xFFF4, 0xF894, 0x0139, 0x1B67, 0x0000, 7 },
    { 81, 0xFFF5, 0xF035, 0x0139, 0x1B15, 0x0000, 7 },
    { 81, 0xFFF6, 0xF035, 0x0139, 0x1B15, 0x0000, 7 },
};
#pragma GLOBAL_ASM("asm/non_matchings/code/z_horse/func_8006D684.s")
#endif

void func_8006DC68(GlobalContext* globalCtx, Player* player)
{
    if (LINK_IS_ADULT)
    {
        if (!func_8006CFC0(gSaveContext.horse_data.scene))
        {
            osSyncPrintf(VT_COL(RED, WHITE));
            // Translates to: "Horse_Set_Check():%d SET SPOT IS NO GOOD."
            osSyncPrintf("Horse_Set_Check():%d ???????????????????????????????????????\n", gSaveContext.horse_data.scene);
            osSyncPrintf(VT_RST);
            func_8006D074(globalCtx);
        }

        if (func_8006CFC0(globalCtx->sceneNum))
        {
            if ((gSaveContext.scene_setup_index > 3) ||
                ((gSaveContext.entrance_index == 0x028A || gSaveContext.entrance_index == 0x028E ||
                  gSaveContext.entrance_index == 0x0292 || gSaveContext.entrance_index == 0x0476) &&
                 (gSaveContext.respawn_flag == 0)) ||
                ((globalCtx->sceneNum == SCENE_SPOT20) && ((gSaveContext.event_inf[0] & 0xF) == 6) &&
                  !Flags_GetEventChkInf(0x18) && (DREG(1) == 0)))
            {
                func_8006D684(globalCtx, player);
            }
            else
            {
                func_8006D0EC(globalCtx, player);
            }
        }
    }
}

void func_8006DD9C(Actor* actor, Vec3f* arg1, s16 arg2)
{
    s16 x = Math_Vec3f_Yaw(&actor->posRot.pos, arg1) - actor->posRot.rot.y;

    if (x > arg2)
        actor->posRot.rot.y += arg2;
    else if (x < -arg2)
        actor->posRot.rot.y -= arg2;
    else
        actor->posRot.rot.y += x;

    actor->shape.rot.y = actor->posRot.rot.y;
}
