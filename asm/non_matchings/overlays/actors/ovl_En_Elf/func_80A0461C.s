glabel func_80A0461C
/* 029EC 80A0461C 27BDFFD0 */  addiu   $sp, $sp, 0xFFD0           ## $sp = FFFFFFD0
/* 029F0 80A04620 AFBF0014 */  sw      $ra, 0x0014($sp)           
/* 029F4 80A04624 90AE1D6C */  lbu     $t6, 0x1D6C($a1)           ## 00001D6C
/* 029F8 80A04628 00803825 */  or      $a3, $a0, $zero            ## $a3 = 00000000
/* 029FC 80A0462C 00A03025 */  or      $a2, $a1, $zero            ## $a2 = 00000000
/* 02A00 80A04630 11C00019 */  beq     $t6, $zero, .L80A04698     
/* 02A04 80A04634 8CA81C44 */  lw      $t0, 0x1C44($a1)           ## 00001C44
/* 02A08 80A04638 8CA31DAC */  lw      $v1, 0x1DAC($a1)           ## 00001DAC
/* 02A0C 80A0463C 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
/* 02A10 80A04640 240F0064 */  addiu   $t7, $zero, 0x0064         ## $t7 = 00000064
/* 02A14 80A04644 50600012 */  beql    $v1, $zero, .L80A04690     
/* 02A18 80A04648 A4EF02C0 */  sh      $t7, 0x02C0($a3)           ## 000002C0
/* 02A1C 80A0464C 94620000 */  lhu     $v0, 0x0000($v1)           ## 00000000
/* 02A20 80A04650 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 02A24 80A04654 1041000B */  beq     $v0, $at, .L80A04684       
/* 02A28 80A04658 24010003 */  addiu   $at, $zero, 0x0003         ## $at = 00000003
/* 02A2C 80A0465C 10410007 */  beq     $v0, $at, .L80A0467C       
/* 02A30 80A04660 24010004 */  addiu   $at, $zero, 0x0004         ## $at = 00000004
/* 02A34 80A04664 10410003 */  beq     $v0, $at, .L80A04674       
/* 02A38 80A04668 00000000 */  nop
/* 02A3C 80A0466C 10000008 */  beq     $zero, $zero, .L80A04690   
/* 02A40 80A04670 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
.L80A04674:
/* 02A44 80A04674 10000006 */  beq     $zero, $zero, .L80A04690   
/* 02A48 80A04678 24060009 */  addiu   $a2, $zero, 0x0009         ## $a2 = 00000009
.L80A0467C:
/* 02A4C 80A0467C 10000004 */  beq     $zero, $zero, .L80A04690   
/* 02A50 80A04680 24060006 */  addiu   $a2, $zero, 0x0006         ## $a2 = 00000006
.L80A04684:
/* 02A54 80A04684 10000002 */  beq     $zero, $zero, .L80A04690   
/* 02A58 80A04688 2406000A */  addiu   $a2, $zero, 0x000A         ## $a2 = 0000000A
/* 02A5C 80A0468C A4EF02C0 */  sh      $t7, 0x02C0($a3)           ## 000002C0
.L80A04690:
/* 02A60 80A04690 100000AA */  beq     $zero, $zero, .L80A0493C   
/* 02A64 80A04694 84E302A8 */  lh      $v1, 0x02A8($a3)           ## 000002A8
.L80A04698:
/* 02A68 80A04698 8D18067C */  lw      $t8, 0x067C($t0)           ## 0000067C
/* 02A6C 80A0469C 8CC31CC8 */  lw      $v1, 0x1CC8($a2)           ## 00001CD2
/* 02A70 80A046A0 3C098016 */  lui     $t1, 0x8016                ## $t1 = 80160000
/* 02A74 80A046A4 33190400 */  andi    $t9, $t8, 0x0400           ## $t9 = 00000000
/* 02A78 80A046A8 57200011 */  bnel    $t9, $zero, .L80A046F0     
/* 02A7C 80A046AC 240C0064 */  addiu   $t4, $zero, 0x0064         ## $t4 = 00000064
/* 02A80 80A046B0 8D29FA90 */  lw      $t1, -0x0570($t1)          ## 8015FA90
/* 02A84 80A046B4 00C02025 */  or      $a0, $a2, $zero            ## $a0 = 0000000A
/* 02A88 80A046B8 24050002 */  addiu   $a1, $zero, 0x0002         ## $a1 = 00000002
/* 02A8C 80A046BC 852A04B2 */  lh      $t2, 0x04B2($t1)           ## 801604B2
/* 02A90 80A046C0 314B0010 */  andi    $t3, $t2, 0x0010           ## $t3 = 00000000
/* 02A94 80A046C4 1160000D */  beq     $t3, $zero, .L80A046FC     
/* 02A98 80A046C8 00000000 */  nop
/* 02A9C 80A046CC AFA30028 */  sw      $v1, 0x0028($sp)           
/* 02AA0 80A046D0 AFA70030 */  sw      $a3, 0x0030($sp)           
/* 02AA4 80A046D4 0C02F15B */  jal     func_800BC56C              
/* 02AA8 80A046D8 AFA80024 */  sw      $t0, 0x0024($sp)           
/* 02AAC 80A046DC 8FA30028 */  lw      $v1, 0x0028($sp)           
/* 02AB0 80A046E0 8FA70030 */  lw      $a3, 0x0030($sp)           
/* 02AB4 80A046E4 10400005 */  beq     $v0, $zero, .L80A046FC     
/* 02AB8 80A046E8 8FA80024 */  lw      $t0, 0x0024($sp)           
/* 02ABC 80A046EC 240C0064 */  addiu   $t4, $zero, 0x0064         ## $t4 = 00000064
.L80A046F0:
/* 02AC0 80A046F0 2406000C */  addiu   $a2, $zero, 0x000C         ## $a2 = 0000000C
/* 02AC4 80A046F4 10000052 */  beq     $zero, $zero, .L80A04840   
/* 02AC8 80A046F8 A4EC02C0 */  sh      $t4, 0x02C0($a3)           ## 000002C0
.L80A046FC:
/* 02ACC 80A046FC 10600006 */  beq     $v1, $zero, .L80A04718     
/* 02AD0 80A04700 00000000 */  nop
/* 02AD4 80A04704 906D0002 */  lbu     $t5, 0x0002($v1)           ## 00000002
/* 02AD8 80A04708 24010004 */  addiu   $at, $zero, 0x0004         ## $at = 00000004
/* 02ADC 80A0470C 24060001 */  addiu   $a2, $zero, 0x0001         ## $a2 = 00000001
/* 02AE0 80A04710 15A1004B */  bne     $t5, $at, .L80A04840       
/* 02AE4 80A04714 00000000 */  nop
.L80A04718:
/* 02AE8 80A04718 10600008 */  beq     $v1, $zero, .L80A0473C     
/* 02AEC 80A0471C 240E0064 */  addiu   $t6, $zero, 0x0064         ## $t6 = 00000064
/* 02AF0 80A04720 A4EE02C0 */  sh      $t6, 0x02C0($a3)           ## 000002C0
/* 02AF4 80A04724 8D0F0680 */  lw      $t7, 0x0680($t0)           ## 00000680
/* 02AF8 80A04728 3C010010 */  lui     $at, 0x0010                ## $at = 00100000
/* 02AFC 80A0472C 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
/* 02B00 80A04730 01E1C025 */  or      $t8, $t7, $at              ## $t8 = 00100000
/* 02B04 80A04734 10000042 */  beq     $zero, $zero, .L80A04840   
/* 02B08 80A04738 AD180680 */  sw      $t8, 0x0680($t0)           ## 00000680
.L80A0473C:
/* 02B0C 80A0473C 84E302A8 */  lh      $v1, 0x02A8($a3)           ## 000002A8
/* 02B10 80A04740 24010007 */  addiu   $at, $zero, 0x0007         ## $at = 00000007
/* 02B14 80A04744 5060000A */  beql    $v1, $zero, .L80A04770     
/* 02B18 80A04748 84E202C0 */  lh      $v0, 0x02C0($a3)           ## 000002C0
/* 02B1C 80A0474C 10610019 */  beq     $v1, $at, .L80A047B4       
/* 02B20 80A04750 24010008 */  addiu   $at, $zero, 0x0008         ## $at = 00000008
/* 02B24 80A04754 10610030 */  beq     $v1, $at, .L80A04818       
/* 02B28 80A04758 2401000B */  addiu   $at, $zero, 0x000B         ## $at = 0000000B
/* 02B2C 80A0475C 50610031 */  beql    $v1, $at, .L80A04824       
/* 02B30 80A04760 84E202C0 */  lh      $v0, 0x02C0($a3)           ## 000002C0
/* 02B34 80A04764 10000036 */  beq     $zero, $zero, .L80A04840   
/* 02B38 80A04768 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
/* 02B3C 80A0476C 84E202C0 */  lh      $v0, 0x02C0($a3)           ## 000002C0
.L80A04770:
/* 02B40 80A04770 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
/* 02B44 80A04774 10400003 */  beq     $v0, $zero, .L80A04784     
/* 02B48 80A04778 2459FFFF */  addiu   $t9, $v0, 0xFFFF           ## $t9 = FFFFFFFF
/* 02B4C 80A0477C 10000030 */  beq     $zero, $zero, .L80A04840   
/* 02B50 80A04780 A4F902C0 */  sh      $t9, 0x02C0($a3)           ## 000002C0
.L80A04784:
/* 02B54 80A04784 90E902C7 */  lbu     $t1, 0x02C7($a3)           ## 000002C7
/* 02B58 80A04788 00E02025 */  or      $a0, $a3, $zero            ## $a0 = 00000000
/* 02B5C 80A0478C 2405285F */  addiu   $a1, $zero, 0x285F         ## $a1 = 0000285F
/* 02B60 80A04790 15200006 */  bne     $t1, $zero, .L80A047AC     
/* 02B64 80A04794 00000000 */  nop
/* 02B68 80A04798 AFA70030 */  sw      $a3, 0x0030($sp)           
/* 02B6C 80A0479C 0C00BE0A */  jal     Audio_PlayActorSound2
              
/* 02B70 80A047A0 AFA80024 */  sw      $t0, 0x0024($sp)           
/* 02B74 80A047A4 8FA70030 */  lw      $a3, 0x0030($sp)           
/* 02B78 80A047A8 8FA80024 */  lw      $t0, 0x0024($sp)           
.L80A047AC:
/* 02B7C 80A047AC 10000024 */  beq     $zero, $zero, .L80A04840   
/* 02B80 80A047B0 24060007 */  addiu   $a2, $zero, 0x0007         ## $a2 = 00000007
.L80A047B4:
/* 02B84 80A047B4 84EA02C0 */  lh      $t2, 0x02C0($a3)           ## 000002C0
/* 02B88 80A047B8 24060008 */  addiu   $a2, $zero, 0x0008         ## $a2 = 00000008
/* 02B8C 80A047BC 00E02025 */  or      $a0, $a3, $zero            ## $a0 = 00000000
/* 02B90 80A047C0 1140000D */  beq     $t2, $zero, .L80A047F8     
/* 02B94 80A047C4 2405000A */  addiu   $a1, $zero, 0x000A         ## $a1 = 0000000A
/* 02B98 80A047C8 84E202AE */  lh      $v0, 0x02AE($a3)           ## 000002AE
/* 02B9C 80A047CC 24060007 */  addiu   $a2, $zero, 0x0007         ## $a2 = 00000007
/* 02BA0 80A047D0 18400003 */  blez    $v0, .L80A047E0            
/* 02BA4 80A047D4 244BFFFF */  addiu   $t3, $v0, 0xFFFF           ## $t3 = FFFFFFFF
/* 02BA8 80A047D8 10000019 */  beq     $zero, $zero, .L80A04840   
/* 02BAC 80A047DC A4EB02AE */  sh      $t3, 0x02AE($a3)           ## 000002AE
.L80A047E0:
/* 02BB0 80A047E0 8D0C0680 */  lw      $t4, 0x0680($t0)           ## 00000680
/* 02BB4 80A047E4 3C010010 */  lui     $at, 0x0010                ## $at = 00100000
/* 02BB8 80A047E8 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
/* 02BBC 80A047EC 01816825 */  or      $t5, $t4, $at              ## $t5 = 00100000
/* 02BC0 80A047F0 10000013 */  beq     $zero, $zero, .L80A04840   
/* 02BC4 80A047F4 AD0D0680 */  sw      $t5, 0x0680($t0)           ## 00000680
.L80A047F8:
/* 02BC8 80A047F8 AFA6002C */  sw      $a2, 0x002C($sp)           
/* 02BCC 80A047FC AFA70030 */  sw      $a3, 0x0030($sp)           
/* 02BD0 80A04800 0C280A6A */  jal     func_80A029A8              
/* 02BD4 80A04804 AFA80024 */  sw      $t0, 0x0024($sp)           
/* 02BD8 80A04808 8FA6002C */  lw      $a2, 0x002C($sp)           
/* 02BDC 80A0480C 8FA70030 */  lw      $a3, 0x0030($sp)           
/* 02BE0 80A04810 1000000B */  beq     $zero, $zero, .L80A04840   
/* 02BE4 80A04814 8FA80024 */  lw      $t0, 0x0024($sp)           
.L80A04818:
/* 02BE8 80A04818 10000009 */  beq     $zero, $zero, .L80A04840   
/* 02BEC 80A0481C 24060008 */  addiu   $a2, $zero, 0x0008         ## $a2 = 00000008
/* 02BF0 80A04820 84E202C0 */  lh      $v0, 0x02C0($a3)           ## 000002C0
.L80A04824:
/* 02BF4 80A04824 00603025 */  or      $a2, $v1, $zero            ## $a2 = 00000000
/* 02BF8 80A04828 18400003 */  blez    $v0, .L80A04838            
/* 02BFC 80A0482C 244EFFFF */  addiu   $t6, $v0, 0xFFFF           ## $t6 = FFFFFFFF
/* 02C00 80A04830 10000003 */  beq     $zero, $zero, .L80A04840   
/* 02C04 80A04834 A4EE02C0 */  sh      $t6, 0x02C0($a3)           ## 000002C0
.L80A04838:
/* 02C08 80A04838 10000001 */  beq     $zero, $zero, .L80A04840   
/* 02C0C 80A0483C 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
.L80A04840:
/* 02C10 80A04840 10C0000B */  beq     $a2, $zero, .L80A04870     
/* 02C14 80A04844 24010007 */  addiu   $at, $zero, 0x0007         ## $at = 00000007
/* 02C18 80A04848 10C10036 */  beq     $a2, $at, .L80A04924       
/* 02C1C 80A0484C 24010008 */  addiu   $at, $zero, 0x0008         ## $at = 00000008
/* 02C20 80A04850 50C1001A */  beql    $a2, $at, .L80A048BC       
/* 02C24 80A04854 8D0B0680 */  lw      $t3, 0x0680($t0)           ## 00000680
/* 02C28 80A04858 8D0F0680 */  lw      $t7, 0x0680($t0)           ## 00000680
/* 02C2C 80A0485C 3C010010 */  lui     $at, 0x0010                ## $at = 00100000
/* 02C30 80A04860 01E1C025 */  or      $t8, $t7, $at              ## $t8 = 00100000
/* 02C34 80A04864 AD180680 */  sw      $t8, 0x0680($t0)           ## 00000680
/* 02C38 80A04868 10000034 */  beq     $zero, $zero, .L80A0493C   
/* 02C3C 80A0486C 84E302A8 */  lh      $v1, 0x02A8($a3)           ## 000002A8
.L80A04870:
/* 02C40 80A04870 8D190680 */  lw      $t9, 0x0680($t0)           ## 00000680
/* 02C44 80A04874 00194AC0 */  sll     $t1, $t9, 11               
/* 02C48 80A04878 0520000D */  bltz    $t1, .L80A048B0            
/* 02C4C 80A0487C 00000000 */  nop
/* 02C50 80A04880 90EA02C7 */  lbu     $t2, 0x02C7($a3)           ## 000002C7
/* 02C54 80A04884 24060007 */  addiu   $a2, $zero, 0x0007         ## $a2 = 00000007
/* 02C58 80A04888 00E02025 */  or      $a0, $a3, $zero            ## $a0 = 00000000
/* 02C5C 80A0488C 15400008 */  bne     $t2, $zero, .L80A048B0     
/* 02C60 80A04890 2405285F */  addiu   $a1, $zero, 0x285F         ## $a1 = 0000285F
/* 02C64 80A04894 AFA6002C */  sw      $a2, 0x002C($sp)           
/* 02C68 80A04898 AFA70030 */  sw      $a3, 0x0030($sp)           
/* 02C6C 80A0489C 0C00BE0A */  jal     Audio_PlayActorSound2
              
/* 02C70 80A048A0 AFA80024 */  sw      $t0, 0x0024($sp)           
/* 02C74 80A048A4 8FA6002C */  lw      $a2, 0x002C($sp)           
/* 02C78 80A048A8 8FA70030 */  lw      $a3, 0x0030($sp)           
/* 02C7C 80A048AC 8FA80024 */  lw      $t0, 0x0024($sp)           
.L80A048B0:
/* 02C80 80A048B0 10000022 */  beq     $zero, $zero, .L80A0493C   
/* 02C84 80A048B4 84E302A8 */  lh      $v1, 0x02A8($a3)           ## 000002A8
/* 02C88 80A048B8 8D0B0680 */  lw      $t3, 0x0680($t0)           ## 00000680
.L80A048BC:
/* 02C8C 80A048BC 00E02025 */  or      $a0, $a3, $zero            ## $a0 = 00000000
/* 02C90 80A048C0 24050032 */  addiu   $a1, $zero, 0x0032         ## $a1 = 00000032
/* 02C94 80A048C4 000B62C0 */  sll     $t4, $t3, 11               
/* 02C98 80A048C8 05810014 */  bgez    $t4, .L80A0491C            
/* 02C9C 80A048CC 00000000 */  nop
/* 02CA0 80A048D0 AFA70030 */  sw      $a3, 0x0030($sp)           
/* 02CA4 80A048D4 0C280A67 */  jal     func_80A0299C              
/* 02CA8 80A048D8 AFA80024 */  sw      $t0, 0x0024($sp)           
/* 02CAC 80A048DC 8FA70030 */  lw      $a3, 0x0030($sp)           
/* 02CB0 80A048E0 8FA80024 */  lw      $t0, 0x0024($sp)           
/* 02CB4 80A048E4 240D002A */  addiu   $t5, $zero, 0x002A         ## $t5 = 0000002A
/* 02CB8 80A048E8 90EE02C7 */  lbu     $t6, 0x02C7($a3)           ## 000002C7
/* 02CBC 80A048EC 2406000B */  addiu   $a2, $zero, 0x000B         ## $a2 = 0000000B
/* 02CC0 80A048F0 A4ED02C0 */  sh      $t5, 0x02C0($a3)           ## 000002C0
/* 02CC4 80A048F4 15C00009 */  bne     $t6, $zero, .L80A0491C     
/* 02CC8 80A048F8 00E02025 */  or      $a0, $a3, $zero            ## $a0 = 00000000
/* 02CCC 80A048FC 2405281B */  addiu   $a1, $zero, 0x281B         ## $a1 = 0000281B
/* 02CD0 80A04900 AFA6002C */  sw      $a2, 0x002C($sp)           
/* 02CD4 80A04904 AFA70030 */  sw      $a3, 0x0030($sp)           
/* 02CD8 80A04908 0C00BE0A */  jal     Audio_PlayActorSound2
              
/* 02CDC 80A0490C AFA80024 */  sw      $t0, 0x0024($sp)           
/* 02CE0 80A04910 8FA6002C */  lw      $a2, 0x002C($sp)           
/* 02CE4 80A04914 8FA70030 */  lw      $a3, 0x0030($sp)           
/* 02CE8 80A04918 8FA80024 */  lw      $t0, 0x0024($sp)           
.L80A0491C:
/* 02CEC 80A0491C 10000007 */  beq     $zero, $zero, .L80A0493C   
/* 02CF0 80A04920 84E302A8 */  lh      $v1, 0x02A8($a3)           ## 000002A8
.L80A04924:
/* 02CF4 80A04924 8D0F0680 */  lw      $t7, 0x0680($t0)           ## 00000680
/* 02CF8 80A04928 3C01FFEF */  lui     $at, 0xFFEF                ## $at = FFEF0000
/* 02CFC 80A0492C 3421FFFF */  ori     $at, $at, 0xFFFF           ## $at = FFEFFFFF
/* 02D00 80A04930 01E1C024 */  and     $t8, $t7, $at              
/* 02D04 80A04934 AD180680 */  sw      $t8, 0x0680($t0)           ## 00000680
/* 02D08 80A04938 84E302A8 */  lh      $v1, 0x02A8($a3)           ## 000002A8
.L80A0493C:
/* 02D0C 80A0493C 10C30019 */  beq     $a2, $v1, .L80A049A4       
/* 02D10 80A04940 00E02025 */  or      $a0, $a3, $zero            ## $a0 = 00000000
/* 02D14 80A04944 00C02825 */  or      $a1, $a2, $zero            ## $a1 = 00000000
/* 02D18 80A04948 AFA6002C */  sw      $a2, 0x002C($sp)           
/* 02D1C 80A0494C AFA70030 */  sw      $a3, 0x0030($sp)           
/* 02D20 80A04950 0C28070E */  jal     func_80A01C38              
/* 02D24 80A04954 AFA80024 */  sw      $t0, 0x0024($sp)           
/* 02D28 80A04958 8FA6002C */  lw      $a2, 0x002C($sp)           
/* 02D2C 80A0495C 2401000B */  addiu   $at, $zero, 0x000B         ## $at = 0000000B
/* 02D30 80A04960 8FA70030 */  lw      $a3, 0x0030($sp)           
/* 02D34 80A04964 14C1000F */  bne     $a2, $at, .L80A049A4       
/* 02D38 80A04968 8FA80024 */  lw      $t0, 0x0024($sp)           
/* 02D3C 80A0496C 25060968 */  addiu   $a2, $t0, 0x0968           ## $a2 = 00000968
/* 02D40 80A04970 24E50024 */  addiu   $a1, $a3, 0x0024           ## $a1 = 00000024
/* 02D44 80A04974 AFA50018 */  sw      $a1, 0x0018($sp)           
/* 02D48 80A04978 00C02025 */  or      $a0, $a2, $zero            ## $a0 = 00000968
/* 02D4C 80A0497C AFA6001C */  sw      $a2, 0x001C($sp)           
/* 02D50 80A04980 0C01E00A */  jal     Math_Vec3f_DistXZ
              
/* 02D54 80A04984 AFA70030 */  sw      $a3, 0x0030($sp)           
/* 02D58 80A04988 8FA70030 */  lw      $a3, 0x0030($sp)           
/* 02D5C 80A0498C 8FA5001C */  lw      $a1, 0x001C($sp)           
/* 02D60 80A04990 E4E002B8 */  swc1    $f0, 0x02B8($a3)           ## 000002B8
/* 02D64 80A04994 0C01E01A */  jal     Math_Vec3f_Yaw
              
/* 02D68 80A04998 8FA40018 */  lw      $a0, 0x0018($sp)           
/* 02D6C 80A0499C 8FA70030 */  lw      $a3, 0x0030($sp)           
/* 02D70 80A049A0 A4E202AC */  sh      $v0, 0x02AC($a3)           ## 000002AC
.L80A049A4:
/* 02D74 80A049A4 8FBF0014 */  lw      $ra, 0x0014($sp)           
/* 02D78 80A049A8 27BD0030 */  addiu   $sp, $sp, 0x0030           ## $sp = 00000000
/* 02D7C 80A049AC 03E00008 */  jr      $ra                        
/* 02D80 80A049B0 00000000 */  nop

