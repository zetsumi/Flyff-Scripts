#ifndef __DEFINE_H_BEAST_3D
#define __DEFINE_H_BEAST_3D

#define FALSE                0 
#define TRUE                 1



#define WUI_NONE              0 
#define WUI_NOW               1 
#define WUI_TARGETOBJ         2 
#define WUI_TARGETOBJ2        3 
#define WUI_TARGETINGOBJ      4 
#define WUI_TARGETOBJPTZ      5 
#define WUI_TARGETPTZ         6 
#define WUI_TARGETMOVEOBJ     7 
#define WUI_TARGETMOVEPTZ     8 
#define WUI_MENU              9 
#define	WUI_MENU_TOBJ        10 
#define WUI_TARGETPTZ_IB     11 
#define WUI_TARGETCURSORPTZ  12 


#define WET_NONE              0 
#define WET_NOW               1 
#define WET_DEAD              2 
#define WET_ATK               3 
#define WET_ATKOTHER          4 
#define WET_BODYSTATE         5 
#define WET_PARRY             6 
#define WET_ARROW             7 
#define WET_BULLET            8 
#define WET_RANGE             9 
#define WET_MAGIC            10 
#define WET_HIT              11 


#define EXT_NONE              0 
#define EXT_SELFCHGPARAMET    1 
#define EXT_OBJCHGPARAMET     2 
#define	EXT_MAGICSHOT		  3 
#define EXT_MAGICATK          4 
#define EXT_AMPLIFICATION     5 
#define EXT_ATTACKER          6 
#define EXT_MAGIC             7 
#define EXT_ANOTHER           8 
#define EXT_ANOTHERWITH       9 
#define EXT_SUMMON           10 
#define EXT_AROUNDATK		 11 
#define EXT_OTHER            12 
#define EXT_TROUPE           13 
#define EXT_MAGICATKSHOT     14 
#define EXT_MENTALATK		 15 
#define EXT_MELEEATKSHOT     16 
#define EXT_MELEEATK	     17 
#define EXT_RANGEATK	     18 
#define EXT_PET					19 
#define EXT_TROUPEWITH           20 
#define	EXT_ITEM	21



#define WES_NONE             0 
#define WES_WORLD            1 
#define WES_DEATH            2 
#define WES_DAMAGE           3 
#define WES_EXECUTE          4 
#define WES_DIALOG           5 
#define WES_EVENT            6 
#define WES_SCHEDULE_BEGIN   7 
#define WES_SCHEDULE_END     8 


#define SEX_MALE             0
#define SEX_FEMALE           1
#define SEX_SEXLESS          2



#define OT_OBJ          0 
#define OT_ANI          1 
#define OT_CTRL         2 
#define OT_SFX          3 
#define OT_ITEM         4 
#define OT_MOVER        5 
#define OT_REGION       6 
#define OT_SHIP			7 
#define OT_PATH			8 
#define MAX_OBJTYPE     9



#define OF_OBJ          0x00000001 
#define OF_ANI          0x00000002 
#define OF_CTRL         0x00000004 
#define OF_SFX          0x00000008 
#define OF_ITEM         0x00000010
#define OF_MOVER        0x00000020
#define OF_REGION       0x00000040
#define OF_SHIP			0x00000080



#define MODELTYPE_NONE               0
#define MODELTYPE_MESH               1
#define	MODELTYPE_ANIMATED_MESH		 2
#define MODELTYPE_BILLBOARD          3 
#define MODELTYPE_SFX                4 
#define MODELTYPE_ASE				 5		


#define MD_FAR  0 
#define MD_MID  1 
#define MD_NEAR 2 
#define MD_FIX  3 


#define ATEX_NONE	0 
#define ATEX_00		0	
#define ATEX_USE	1 
#define ATEX_01		1	
#define ATEX_02		2	
#define ATEX_03		3	
#define ATEX_04		4	
#define ATEX_05		5	
#define ATEX_06		6	
#define ATEX_07		7	


#define ITYPE_ITEM      0
#define ITYPE_CARD      1
#define ITYPE_CUBE      2 
#define ITYPE_PET		3


#define RA_WORLD         0x00000001
#define RA_DUNGEON       0x00000002
#define RA_NEWBIE        0x00000004
#define RA_BEGIN         0x00000008
#define RA_SAFETY        0x00000010
#define RA_SHRINE        0x00000020
#define RA_FIGHT         0x00000040
#define RA_INN           0x00000080
#define RA_SIGHT         0x00000100
#define RA_DAMAGE        0x00000200
#define RA_TOWN          0x00000400
#define RA_DAYLIGHT      0x00000800
#define RA_PK            0x00001000
#define RA_OX            0x00002000
#define RA_DANGER        0x00004000
#define RA_NO_CHAT       0x00008000
#define RA_NO_ATTACK     0x00010000
#define RA_NO_DAMAGE     0x00020000
#define RA_NO_SKILL      0x00040000
#define RA_NO_ITEM       0x00080000
#define RA_NO_TELEPORT   0x00100000
#define RA_SCHOOL        0x00200000
#define RA_PENALTY_PK    0x00400000
#define	RA_COLLECTING	0x00800000


#define CUSTOM_LOGO_MAX		27

#define GM_LOGO_CH			21
#define GM_LOGO_EU			22
#define GM_LOGO_JP			23
#define GM_LOGO_PH			24
#define GM_LOGO_TH			25
#define GM_LOGO_TW			26
#define GM_LOGO_US			27

#define CITYN_FLARIS        1
#define CITYN_SAINTMORNING  2

#define LANDN_FLARIS        1
#define LANDN_SAINTMORNING  2





#define GUIDE_EVENT_MOVE				0
#define GUIDE_EVENT_KEY_MOVE			1
#define GUIDE_EVENT_KEY_RUN				2
#define GUIDE_EVENT_KEY_JUMP			3
#define GUIDE_EVENT_TRACKING_MOVE		4
#define GUIDE_EVENT_KEY_ZOOM			5
#define GUIDE_EVENT_CAMERAMOVE			6
#define GUIDE_EVENT_KEY_CAMERAMOVE		7
#define GUIDE_EVENT_INTRO				8
#define GUIDE_EVENT_END                 9
#define GUIDE_EVENT_BERSERKERMODE		10
#define GUIDE_FLIGHT					11
#define GUIDE_FLIGHT_METHOD				12

#define APP_SKILL_BEFOREJOB				13
#define APP_SKILL_AFTERJOB				14
#define APP_DEATH_FIELD					15
#define GUIDE_ESSENSE					16
#define GUIDE_CHANGEJOB					17
#define GUIDE_APP_GUILD					18


#define GUIDE_EVENT_MOUSE_MOVE					19
#define GUIDE_EVENT_KEY_WALK					20
#define GUIDE_EVENT_MOUSE_CAMERAMOVE			21
#define GUIDE_EVENT_WORLD_MAP					22
#define GUIDE_EVENT_WORLD_NAVI					23
#define GUIDE_EVENT_NORMAL_CHAT					24
#define GUIDE_EVENT_SHOUT_CHAT					25
#define GUIDE_EVENT_TROUPE_CHAT					26
#define GUIDE_EVENT_WHISPER_CHAT				27
#define GUIDE_EVENT_GUILD_CHAT					28
#define GUIDE_EVENT_SYSTEM_CHAT					29
#define GUIDE_EVENT_FILTER_CHAT					30
#define GUIDE_EVENT_STATUS_WIN					31
#define GUIDE_EVENT_CHARACTER_WIN				32
#define GUIDE_EVENT_INVENTORY_WIN				33
#define GUIDE_EVENT_QUEST_WIN					34
#define GUIDE_EVENT_QUICKSLOT					35
#define GUIDE_EVENT_TROUPE						36
#define GUIDE_EVENT_TROUPE_WIN					37
#define GUIDE_EVENT_CHARACTER_MENU				38
#define GUIDE_EVENT_TRADE						39
#define GUIDE_EVENT_STORE						40
#define GUIDE_EVENT_BANK						41
#define GUIDE_EVENT_MESSENGER					42
#define GUIDE_EVENT_MOTION						43
#define GUIDE_EVENT_CHEER						44




#define		MAX_SUMMON		8		


#define UA_ITEM          0x00000001
#define UA_LEVEL         0x00000002
#define UA_QUEST         0x00000004
#define UA_CLASS         0x00000008
#define UA_GENDER        0x00000010
#define UA_TELEPORT      0x00000020
#define UA_QUEST_END     0x00000040
#define UA_PLAYER_ID     0x00000080


#define TOT_RANDOM			0    
#define TOT_NOENDU		1    

#define	PK_TIGER	0
#define	PK_LION		1
#define	PK_RABBIT	2
#define	PK_FOX	3
#define	PK_DRAGON	4
#define	PK_GRIFFIN	5
#define	PK_UNICORN	6
#define	PK_MAX	7


#define	TI_GENERIC	0
#define	TI_PET	1

#define	PERIN_VALUE		100000000L


#define POINTTYPE_CAMPUS	1


#define SEASON_NONE			0
#define SEASON_SPRING		1
#define SEASON_SUMMER		2
#define SEASON_FALL			3
#define SEASON_WINTER		4
#define SEASON_MAX			5


#endif