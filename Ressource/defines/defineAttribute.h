#ifndef __DEFINEATTRIBUTE
#define __DEFINEATTRIBUTE


#define VT_ITEM                      1
#define VT_SKILL                     2


#define CT_STEP      1 
#define CT_CIRCLE    2
#define CT_FINISH    3
#define CT_GENERAL   4 







#define HD_ONE                       1 
#define HD_TWO                       2 
#define HD_DUAL                      3 


#define AT_SLASH                     1 
#define AT_BLOW                      2 
#define AT_PIERCE                    3 


#define AS_HORIZONTAL                0 
#define AS_VERTICAL                  1 
#define AS_DIAGONAL                  2 
#define AS_THRUST                    3 
#define AS_HEAD                      4 
#define AS_CHEST                     5 
#define AS_ARM                       6 
#define AS_LEG                       7 
#define AS_BACK                      8 

#define MAX_AS                       9 


#define WT_MELEE_SWD                 1 
#define WT_MELEE_AXE                 2 
#define WT_MELEE_STICK               3 
#define WT_MELEE_KNUCKLE             4 
#define WT_MELEE_STAFF               5 
#define WT_MAGIC_WAND                6 

#define WT_MELEE_YOYO               20 
#define WT_RANGE_BOW                21 

#define WT_MELEE                     7 
#define WT_RANGE                     8 
#define WT_MAGIC                     9 
#define WT_CHEER                    10 
#define WT_GUN                      11 
#define WT_DOLL                     12 
#define WT_EQUIP                    13 
#define WT_PROPERTY                 14 
#define WT_ACROBAT                  15 
#define WT_THROWITEM                16 
#define WT_THROWING                 17 
#define WT_SWING                    18 
#define WT_KNUCKLE                  19 



#define _NONE			0 
#define _FIRE			1 
#define _WATER			2 
#define _ELECTRICITY		3 
#define _WIND			4 
#define _EARTH			5 


#define AR_SHORT                     1 
#define AR_LONG                      2 
#define AR_FAR                       3 
#define AR_RANGE                     4 
#define AR_WAND                      5 
#define AR_HRANGE                    6 
#define AR_HWAND                      7 


#define SA_DIRECTDMG                 1 
#define SA_OBJCHGPARAMET             2 
#define SA_SELFCHGPARAMET            3 
#define SA_OTHERS                    4 


#define ST_MAGIC                     1 
#define ST_MIND                      2 
#define ST_POISON                    3 
#define ST_ELECTRICITY               4 
#define ST_FIRE                      5 
#define ST_WIND                      6 
#define ST_WATER                     7 
#define ST_EARTH                     8 
#define ST_DARK                      9 
#define ST_LIGHT                    10 
#define ST_FIREEARTH                11 
#define ST_ELECWIND                 12 
#define ST_EARTHWIND                13 
#define ST_EARTHWATER               14 


#define SR_AFTER                     1 
#define SR_BEFORE                    2 


#define SRO_DIRECT                   1 
#define SRO_REGION                   2 
#define SRO_EXTENT                   3 
#define SRO_SURROUND                 4 
#define SRO_DOUBLE                   5 
#define SRO_LINE                     6 
#define SRO_AROUND                   7 
#define SRO_TROUPE					 8 


#define KT_MAGIC                     1 
#define KT_SKILL                     2 


#define CT_TELEPORT                  1 
#define CT_SUMMON                    2 


#define RACE_HUMAN                   1 
#define RACE_ANIMAL                  2 
#define RACE_HUMANOID                3 
#define RACE_MONSTER                 4 
#define RACE_UNDEAD                  5 
#define RACE_GHOST                   6 
#define RACE_INSECT                  7 
#define RACE_MECHANIC                8 
#define RACE_ELEMENTAL               9 



#define SIZE_TINY                    1 
#define SIZE_SMALL                   2 
#define SIZE_MIDDLE                  3 
#define SIZE_NORMAL                  4 
#define SIZE_TALL                    5 
#define SIZE_BIG                     6 
#define SIZE_GAINT                   7 


#define RANK_LOW                     1 
#define RANK_NORMAL                  2 
#define RANK_CAPTAIN                 3 
#define RANK_BOSS                    4 
#define RANK_MIDBOSS				 5 
#define RANK_MATERIAL                6 
#define RANK_SUPER                   7 
#define RANK_GUARD                   8 


#define CHS_NORMAL				0			
#define CHS_GUARDARROW				0x00000001 
#define CHS_GUARDBULLET				0x00000002 
#define CHS_GROGGY				0x00000004 
#define CHS_STUN				0x00000008 
#define CHS_ANOMY				0x00000010 
#define CHS_STARVE				0x00000020 
#define CHS_PLASYARM				0x00000040 
#define CHS_MISSING				0x00000080 
#define CHS_DARK				0x00000100 
#define CHS_LITHOSKIN				0x00000200 
#define CHS_INVISIBILITY			0x00000400 
#define CHS_POISON				0x00000800 
#define CHS_SLOW				0x00001000 
#define CHS_DMGREFLECT				0x00002000 
#define CHS_DOUBLE				0x00004000 
#define CHS_BLEEDING			0x00008000 
#define CHS_SILENT				0x00010000 
#define CHS_DMG_COUNTERATTACK	0x00020000 
#define CHS_ATK_COUNTERATTACK	0x00040000 
#define CHS_LOOT				0x00080000	

#define CHS_SETSTONE				0x00100000	
#define CHS_DEBUFFALL				0x00200000	



#define CHS_DARK_POISON				0x00000900	
#define CHS_DARK_POISON_STUN		0x00000908	
#define CHS_LOOT_SLOW				0x00081000	
#define	CHS_DARK_POISON_STUN_BLEEDING	0x00008908	
#define CHS_DARK_POISON_STUN_BLEEDING_DEBUFFALL				0x0031d908	


#define BELLI_PEACEFUL                1 
#define BELLI_CAUTIOUSATTACK          2 
#define BELLI_ACTIVEATTACK            3 
#define BELLI_ALLIANCE                4
#define BELLI_ACTIVEATTACK_MELEE2X    5 
#define BELLI_ACTIVEATTACK_MELEE      6 
#define BELLI_ACTIVEATTACK_RANGE      7 
#define BELLI_CAUTIOUSATTACK_MELEE2X  8 
#define BELLI_CAUTIOUSATTACK_MELEE    9 
#define BELLI_CAUTIOUSATTACK_RANGE   10 
#define BELLI_MELEE2X                11 
#define BELLI_MELEE                  12 
#define BELLI_RANGE                  13 


#define BLOOD_RED                    1
#define BLOOD_GREEN                  2
#define BLOOD_BLUE                   3
#define BLOOD_WHITE                  4
#define BLOOD_BLACK                  5


#define SHELTER_BASICZONE            1
#define SHELTER_TESTZONE             2
#define SHELTER_GRASS                3


#define ELEMENTAL_FIRE               1
#define ELEMENTAL_WATER              2
#define ELEMENTAL_WIND               3
#define ELEMENTAL_EARTH              4
#define ELEMENTAL_LASER              5
#define ELEMENTAL_DARK               6
#define ELEMENTAL_ELEC               7
#define ELEMENTAL_ANGEL_BLUE         8
#define ELEMENTAL_ANGEL_RED          9
#define ELEMENTAL_ANGEL_WHITE        10
#define ELEMENTAL_ANGEL_GREEN        11


#define RT_ATTACK                    1
#define RT_TIME                      2
#define RT_HEAL                      3



#define DST_STR                      1   
#define DST_DEX                      2   
#define DST_INT                      3   
#define DST_STA                      4   
#define DST_YOY_DMG		             5   
#define DST_BOW_DMG		             6   
#define DST_CHR_RANGE                7   
#define DST_BLOCK_RANGE              8   
#define DST_CHR_CHANCECRITICAL       9   
#define DST_CHR_BLEEDING            10	
#define DST_SPEED                   11  
#define DST_ABILITY_MIN             12  
#define DST_ABILITY_MAX             13  
#define DST_BLOCK_MELEE             14  
#define DST_MASTRY_EARTH            15  
#define DST_STOP_MOVEMENT           16  
#define DST_MASTRY_FIRE             17  
#define DST_MASTRY_WATER            18  
#define DST_MASTRY_ELECTRICITY      19  
#define DST_MASTRY_WIND             20  
#define DST_KNUCKLE_DMG             21  
#define DST_PVP_DMG_RATE			22	

#define DST_ATTACKSPEED             24  
#define DST_SWD_DMG                 25  
#define DST_ADJDEF                  26  
#define DST_RESIST_MAGIC            27  
#define DST_RESIST_ELECTRICITY      28  
#define DST_REFLECT_DAMAGE          29  
#define DST_RESIST_FIRE             30  
#define DST_RESIST_WIND             31  
#define DST_RESIST_WATER            32  
#define DST_RESIST_EARTH            33  
#define DST_AXE_DMG                 34  
#define DST_HP_MAX                  35  
#define DST_MP_MAX                  36  
#define DST_FP_MAX                  37  
#define DST_HP                      38  
#define DST_MP                      39  
#define DST_FP                      40  
#define DST_HP_RECOVERY             41  
#define DST_MP_RECOVERY             42  
#define DST_FP_RECOVERY             43  
#define DST_KILL_HP					44	
#define DST_KILL_MP					45	
#define DST_KILL_FP					46	
#define DST_ADJ_HITRATE             47  

#define DST_CLEARBUFF				49  
#define DST_CHR_STEALHP_IMM         50  
#define DST_ATTACKSPEED_RATE		51	
#define DST_HP_MAX_RATE				52		
#define DST_MP_MAX_RATE				53		
#define DST_FP_MAX_RATE				54		
#define DST_CHR_WEAEATKCHANGE	    55	
#define DST_CHR_STEALHP				56  
#define DST_CHR_CHANCESTUN			57  
#define DST_AUTOHP					58  
#define DST_CHR_CHANCEDARK			59  

#define DST_CHR_CHANCEPOISON	    60  
#define DST_IMMUNITY	 			61  
#define DST_ADDMAGIC				62 	
#define DST_CHR_DMG                 63  
#define DST_CHRSTATE                64  
#define DST_PARRY                   65  
#define DST_ATKPOWER_RATE			66  
#define DST_EXPERIENCE				67  
#define DST_JUMPING                 68  
#define DST_CHR_CHANCESTEALHP		69  
#define DST_CHR_CHANCEBLEEDING      70  
#define DST_RECOVERY_EXP            71  
#define DST_ADJDEF_RATE				72	

#define	DST_MP_DEC_RATE				73	
#define	DST_FP_DEC_RATE				74	
#define	DST_SPELL_RATE				75	
#define	DST_CAST_CRITICAL_RATE		76	
#define	DST_CRITICAL_BONUS			77	
#define	DST_SKILL_LEVEL				78	
#define DST_MONSTER_DMG				79	
#define DST_PVP_DMG					80	
#define DST_MELEE_STEALHP			81	
#define	DST_HEAL						82		
#define DST_ATKPOWER			83	


#define DST_ONEHANDMASTER_DMG             85	
#define DST_TWOHANDMASTER_DMG             86
#define DST_YOYOMASTER_DMG             87
#define DST_BOWMASTER_DMG             88
#define DST_KNUCKLEMASTER_DMG             89
#define DST_HAWKEYE_RATE             90
#define DST_RESIST_MAGIC_RATE             91
#define DST_GIFTBOX					92

#define	DST_RESTPOINT_RATE			93	
#define MAX_ADJPARAMARY             94


#define	DST_GOLD				10000
#define	DST_PXP					10001
#define DST_RESIST_ALL			10002	
#define DST_STAT_ALLUP			10003	
#define DST_HPDMG_UP			10004
#define DST_DEFHITRATE_DOWN		10005
#define DST_CURECHR				10006		
#define DST_HP_RECOVERY_RATE	10007		
#define DST_MP_RECOVERY_RATE	10008		
#define DST_FP_RECOVERY_RATE	10009		
#define	DST_LOCOMOTION			10010		
#define	DST_MASTRY_ALL			10011
#define DST_ALL_RECOVERY		10012
#define DST_ALL_RECOVERY_RATE	10013
#define DST_KILL_ALL			10014
#define DST_KILL_HP_RATE		10015
#define DST_KILL_MP_RATE		10016
#define DST_KILL_FP_RATE		10017
#define DST_KILL_ALL_RATE		10018
#define DST_ALL_DEC_RATE		10019

#endif
