glabel func_80B6060C
/* 003EC 80B6060C 27BDFFB0 */  addiu   $sp, $sp, 0xFFB0           ## $sp = FFFFFFB0
/* 003F0 80B60610 F7BA0030 */  sdc1    $f26, 0x0030($sp)          
/* 003F4 80B60614 3C0180B6 */  lui     $at, %hi(D_80B626A4)       ## $at = 80B60000
/* 003F8 80B60618 C43A26A4 */  lwc1    $f26, %lo(D_80B626A4)($at) 
/* 003FC 80B6061C F7B80028 */  sdc1    $f24, 0x0028($sp)          
/* 00400 80B60620 3C0180B6 */  lui     $at, %hi(D_80B626A8)       ## $at = 80B60000
/* 00404 80B60624 C43826A8 */  lwc1    $f24, %lo(D_80B626A8)($at) 
/* 00408 80B60628 F7B60020 */  sdc1    $f22, 0x0020($sp)          
/* 0040C 80B6062C 3C013E80 */  lui     $at, 0x3E80                ## $at = 3E800000
/* 00410 80B60630 4481B000 */  mtc1    $at, $f22                  ## $f22 = 0.25
/* 00414 80B60634 F7B40018 */  sdc1    $f20, 0x0018($sp)          
/* 00418 80B60638 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 0041C 80B6063C AFB30048 */  sw      $s3, 0x0048($sp)           
/* 00420 80B60640 AFB20044 */  sw      $s2, 0x0044($sp)           
/* 00424 80B60644 AFB10040 */  sw      $s1, 0x0040($sp)           
/* 00428 80B60648 AFB0003C */  sw      $s0, 0x003C($sp)           
/* 0042C 80B6064C 4481A000 */  mtc1    $at, $f20                  ## $f20 = 0.50
/* 00430 80B60650 00808825 */  or      $s1, $a0, $zero            ## $s1 = 00000000
/* 00434 80B60654 AFBF004C */  sw      $ra, 0x004C($sp)           
/* 00438 80B60658 249002FC */  addiu   $s0, $a0, 0x02FC           ## $s0 = 000002FC
/* 0043C 80B6065C 00009025 */  or      $s2, $zero, $zero          ## $s2 = 00000000
/* 00440 80B60660 24130003 */  addiu   $s3, $zero, 0x0003         ## $s3 = 00000003
.L80B60664:
/* 00444 80B60664 920E0000 */  lbu     $t6, 0x0000($s0)           ## 000002FC
/* 00448 80B60668 566E0024 */  bnel    $s3, $t6, .L80B606FC       
/* 0044C 80B6066C 26520001 */  addiu   $s2, $s2, 0x0001           ## $s2 = 00000001
/* 00450 80B60670 0C03F66B */  jal     Math_Rand_ZeroOne
              ## Rand.Next() float
/* 00454 80B60674 00000000 */  nop
/* 00458 80B60678 46140102 */  mul.s   $f4, $f0, $f20             
/* 0045C 80B6067C C608002C */  lwc1    $f8, 0x002C($s0)           ## 00000328
/* 00460 80B60680 46162181 */  sub.s   $f6, $f4, $f22             
/* 00464 80B60684 46083280 */  add.s   $f10, $f6, $f8             
/* 00468 80B60688 0C03F66B */  jal     Math_Rand_ZeroOne
              ## Rand.Next() float
/* 0046C 80B6068C E60A0014 */  swc1    $f10, 0x0014($s0)          ## 00000310
/* 00470 80B60690 46140402 */  mul.s   $f16, $f0, $f20            
/* 00474 80B60694 C6040034 */  lwc1    $f4, 0x0034($s0)           ## 00000330
/* 00478 80B60698 C6080018 */  lwc1    $f8, 0x0018($s0)           ## 00000314
/* 0047C 80B6069C C60A0024 */  lwc1    $f10, 0x0024($s0)          ## 00000320
/* 00480 80B606A0 02202025 */  or      $a0, $s1, $zero            ## $a0 = 00000000
/* 00484 80B606A4 26050014 */  addiu   $a1, $s0, 0x0014           ## $a1 = 00000310
/* 00488 80B606A8 240F00C8 */  addiu   $t7, $zero, 0x00C8         ## $t7 = 000000C8
/* 0048C 80B606AC 46168481 */  sub.s   $f18, $f16, $f22           
/* 00490 80B606B0 460A4400 */  add.s   $f16, $f8, $f10            
/* 00494 80B606B4 46049180 */  add.s   $f6, $f18, $f4             
/* 00498 80B606B8 E6100018 */  swc1    $f16, 0x0018($s0)          ## 00000314
/* 0049C 80B606BC E606001C */  swc1    $f6, 0x001C($s0)           ## 00000318
/* 004A0 80B606C0 C6240084 */  lwc1    $f4, 0x0084($s1)           ## 00000084
/* 004A4 80B606C4 C6320028 */  lwc1    $f18, 0x0028($s1)          ## 00000028
/* 004A8 80B606C8 C6060018 */  lwc1    $f6, 0x0018($s0)           ## 00000314
/* 004AC 80B606CC 46049080 */  add.s   $f2, $f18, $f4             
/* 004B0 80B606D0 4606103E */  c.le.s  $f2, $f6                   
/* 004B4 80B606D4 00000000 */  nop
/* 004B8 80B606D8 45020008 */  bc1fl   .L80B606FC                 
/* 004BC 80B606DC 26520001 */  addiu   $s2, $s2, 0x0001           ## $s2 = 00000002
/* 004C0 80B606E0 A2000000 */  sb      $zero, 0x0000($s0)         ## 000002FC
/* 004C4 80B606E4 E6020018 */  swc1    $f2, 0x0018($s0)           ## 00000314
/* 004C8 80B606E8 4406C000 */  mfc1    $a2, $f24                  
/* 004CC 80B606EC 4407D000 */  mfc1    $a3, $f26                  
/* 004D0 80B606F0 0C2D8088 */  jal     func_80B60220              
/* 004D4 80B606F4 AFAF0010 */  sw      $t7, 0x0010($sp)           
/* 004D8 80B606F8 26520001 */  addiu   $s2, $s2, 0x0001           ## $s2 = 00000003
.L80B606FC:
/* 004DC 80B606FC 00129400 */  sll     $s2, $s2, 16               
/* 004E0 80B60700 00129403 */  sra     $s2, $s2, 16               
/* 004E4 80B60704 2A41000F */  slti    $at, $s2, 0x000F           
/* 004E8 80B60708 1420FFD6 */  bne     $at, $zero, .L80B60664     
/* 004EC 80B6070C 26100038 */  addiu   $s0, $s0, 0x0038           ## $s0 = 00000334
/* 004F0 80B60710 8FBF004C */  lw      $ra, 0x004C($sp)           
/* 004F4 80B60714 D7B40018 */  ldc1    $f20, 0x0018($sp)          
/* 004F8 80B60718 D7B60020 */  ldc1    $f22, 0x0020($sp)          
/* 004FC 80B6071C D7B80028 */  ldc1    $f24, 0x0028($sp)          
/* 00500 80B60720 D7BA0030 */  ldc1    $f26, 0x0030($sp)          
/* 00504 80B60724 8FB0003C */  lw      $s0, 0x003C($sp)           
/* 00508 80B60728 8FB10040 */  lw      $s1, 0x0040($sp)           
/* 0050C 80B6072C 8FB20044 */  lw      $s2, 0x0044($sp)           
/* 00510 80B60730 8FB30048 */  lw      $s3, 0x0048($sp)           
/* 00514 80B60734 03E00008 */  jr      $ra                        
/* 00518 80B60738 27BD0050 */  addiu   $sp, $sp, 0x0050           ## $sp = 00000000

