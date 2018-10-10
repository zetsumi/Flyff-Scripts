1992
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000000
	);
}

1993
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000001
	);


}

1994
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000002
	);


}

1995
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000003
	);
	

}

1997
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000004
	);


}

6000
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002612
	);
	
}

6001
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002613
	);
	
}

6002
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002614
	);
	
}

6003
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002615
	);
	
}

6004
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002608
	);
	Setting
	{
		SetHeadQuest( 6001 );
	}
}

6005
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002609
	);
	Setting
	{
		SetHeadQuest( 6001 );
	}
}

6006
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002610
	);
	Setting
	{
		SetHeadQuest( 6001 );
	}
}

6007
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002611
	);
	Setting
	{
		SetHeadQuest( 6001 );
	}
}

6050
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002615
	);
	Setting
	{
		SetHeadQuest( 6003 );
	}
}

6051
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002616
	);
	Setting
	{
		SetHeadQuest( 6001 );
	}
}

6052
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002617
	);
	Setting
	{
		SetHeadQuest( 6001 );
	}
}

6054
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002618
	);
	Setting
	{
		SetHeadQuest( 6001 );
	}
}

6060
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002647
	);
	Setting
	{
		SetHeadQuest( 6001 );
	}
}



QUEST_CHANGEJOB1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000005
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondLevel( 15, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_BLADEBRAVERY, 1 );
		SetEndCondCharacter( "MaFl_Valin" );
		SetEndCondState( 5 );
		SetEndRewardItem( -1, 0, -1, II_WEA_SWO_SWORDBRAVERY, 1 );
		SetEndRemoveItem( 0, II_WEA_SWO_SWORDBRAVERY, -1 );
		SetHeadQuest( 6004 );
	}


	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000006
		);
		SetCond
		(
			IDS_PROPQUEST_INC_000007
		);
		SetStatus
		(
			IDS_PROPQUEST_INC_000008
		);
	}
	state 1
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000009
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000010
		);	
			

		SetStatus
		(
			IDS_PROPQUEST_INC_000011
		);
	}
	
	state 2
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000012
		);


		SetCond
		(
			IDS_PROPQUEST_INC_000013
		);	
			
		SetStatus
		(
			IDS_PROPQUEST_INC_000014
		);
	}

	state 3
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000015
		);


		SetCond
		(
			IDS_PROPQUEST_INC_000016
		);	
			
		SetStatus
		(
			IDS_PROPQUEST_INC_000017
		);
	}

	state 4
	{
		QuestItem(MI_LAWOLF3, II_SYS_SYS_QUE_VISIONSTONE, 1500000000, 1);

		SetDesc
		(
			IDS_PROPQUEST_INC_000018
		);
		
		SetCond
		(
			IDS_PROPQUEST_INC_000019
		);	
			

		SetStatus
		(
			IDS_PROPQUEST_INC_000020
		);
	}

	state 5
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000021
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000022
		);	
			

		SetStatus
		(
			IDS_PROPQUEST_INC_000023
		);
	}

	state 14
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000024
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000025
		);	
			

		SetStatus
		(
			IDS_PROPQUEST_INC_000026
		);
	}
}

QUEST_CHANGEJOB3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000027
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondLevel( 15, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_LUXOSSTONE, 10 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_LUMIXSTONE, 5 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_LUXSTONE, 3 );
		SetEndRewardItem( -1, 0, -1, II_WEA_CHE_DEVOTION, 1 );
		SetEndCondState( 3 );
		SetEndCondCharacter( "MaFl_Rooney" );
		SetHeadQuest( 6004 );
	}

	state 0
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000028
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000029
		);	
			
		SetStatus
		(
			IDS_PROPQUEST_INC_000030
		);
	}

	state 1
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000031
		);
	
		SetCond
		(
			IDS_PROPQUEST_INC_000032
		);	
			
		SetStatus
		(
			IDS_PROPQUEST_INC_000033
		);
	}

	state 2
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000034
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000035
		);	
			
		SetStatus
		(
			IDS_PROPQUEST_INC_000036
		);
	}
	
	state 3
	{
		QuestItem(MI_PUKEPUKE2, II_SYS_SYS_QUE_LUXOSSTONE, 1500000000, 1);
		QuestItem(MI_DORIDOMA1, II_SYS_SYS_QUE_LUMIXSTONE, 1500000000, 1);
		QuestItem(MI_LAWOLF3, II_SYS_SYS_QUE_LUXSTONE,  1500000000, 1);
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000037
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000038
		);	
			
		SetStatus
		(
			IDS_PROPQUEST_INC_000039
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000040
		);
		
		SetCond
		(
			IDS_PROPQUEST_INC_000041
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000042
		);
	}
}

QUEST_CHANGEJOB4
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000043
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondLevel( 15, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_WANDBOOK, 1 );
		SetEndRewardItem( -1, 0, -1, II_WEA_WAN_WANDMULE, 1 );
		SetEndCondState( 5 );
		SetEndCondCharacter( "MaFl_Mule" );
		SetHeadQuest( 6004 );
	}

	state 0
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000044
		);
		
		SetCond
		(
			IDS_PROPQUEST_INC_000045
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000046
		);
	}

	state 1
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000047
		);
		
		SetCond
		(
			IDS_PROPQUEST_INC_000048
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000049
		);
	}

	state 2
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000050
		);
		
		SetCond
		(
			IDS_PROPQUEST_INC_000051
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000052
		);
	}
	
	state 3
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000053
		);
		
		SetCond
		(
			IDS_PROPQUEST_INC_000054
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000055
		);
	}
	
	state 4
	{
		QuestItem(MI_DEMIAN1, II_SYS_SYS_QUE_BOOKPIECE, 1500000000, 1);
		QuestItem(MI_DEMIAN2, II_SYS_SYS_QUE_BOOKPIECE, 1500000000, 1);
		QuestItem(MI_DEMIAN3, II_SYS_SYS_QUE_BOOKPIECE, 1500000000, 1);
	
		SetDesc
		(
			IDS_PROPQUEST_INC_000056
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000057
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000058
		);
	}

	state 5
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000059
		);
		
		SetCond
		(
			IDS_PROPQUEST_INC_000060
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000061
		);
	}

	state 14
	{

		
		SetDesc
		(
			IDS_PROPQUEST_INC_000062
		);
		
		SetCond
		(
			IDS_PROPQUEST_INC_000063
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000064
		);
	}
}

QUEST_1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000065
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 5, 15 );
		SetRepeat( 1 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondLevel( 5, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_SBURUDENGTOOTH, 20 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_SBURUDENGTOOTH, -1 );
		SetEndRewardGold( 500, 500 );
		SetHeadQuest( 6004 );
	}


	state 0
	{
		QuestItem(MI_BURUDENG1, II_SYS_SYS_QUE_SBURUDENGTOOTH, 1500000000, 1);
			
		SetDesc
		(
			IDS_PROPQUEST_INC_000066
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000067
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000068
		);
	}
}

QUEST_2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000069
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 13, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondLevel( 13, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_LAWOLFTOOTH, 20 );
		SetEndCondState( 2 );
		SetEndRewardItem( -1, 0, -1, II_WEA_SWO_CRIMSON, 1 );
		SetHeadQuest( 6004 );
	}


	state 0
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000070
		);
		
		SetCond
		(
			IDS_PROPQUEST_INC_000071
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000072
		);
	}

	state 1
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000073
		);
		
		SetCond
		(
			IDS_PROPQUEST_INC_000074
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000075
		);
	}

	state 2
	{
		QuestItem(MI_LAWOLF1, II_SYS_SYS_QUE_LAWOLFTOOTH, 1500000000, 1);
				
		SetDesc
		(
			IDS_PROPQUEST_INC_000076
		);
		
		SetCond
		(
			IDS_PROPQUEST_INC_000077
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000078
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000079
		);
		
		SetCond
		(
			IDS_PROPQUEST_INC_000080
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000081
		);
	}
}

QUEST_6
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000082
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 23, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 23, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_ARCARDSTONE, 50 );
		SetEndRewardItem( -1, 0, 1, II_GEN_JEW_RIN_STRRING00, 1 );
		SetEndRewardItem( -1, 0, 3, II_GEN_JEW_RIN_STARING00, 1 );
		SetEndRewardItem( -1, 0, 4, II_GEN_JEW_RIN_INTRING00, 1 );
		SetEndRewardItem( -1, 0, 2, II_GEN_JEW_RIN_DEXRING00, 1 );	
		SetHeadQuest( 6005 );
	}

	state 0
	{
		QuestItem(MI_BANG3, II_SYS_SYS_QUE_ARCARDSTONE, 1500000000, 1);
	
		SetDesc
		(
			IDS_PROPQUEST_INC_000083
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000084
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000085
		);
	}
	
	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000086
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000087
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000088
		);
	}
}

QUEST_7
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000089
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 22, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 22, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_SCOLLGEM, 20 );
		SetEndRewardGold( 1000, 1000 );
		SetEndRewardExp( 500, 500 );
		SetEndRewardHide( 1 ); 
		SetHeadQuest( 6005 );
	}

	state 0
	{
		QuestItem(MI_WAGSAAC3, II_SYS_SYS_QUE_SCOLLGEM, 1500000000, 1);
	
		SetDesc
		(
			IDS_PROPQUEST_INC_000090
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000091
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000092
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000093
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000094
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000095
		);
	}
}

QUEST_8
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000096
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 21, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 21, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_EPICSTONE, 20 );
		SetEndRewardGold( 800, 800 );
		SetHeadQuest( 6005 );
	}

	state 0
	{
		QuestItem(MI_WAGSAAC1, II_SYS_SYS_QUE_EPICSTONE, 1500000000, 1);
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000097
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000098
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000099
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000100
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000101
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000102
		);
	}
}

QUEST_9
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000103
	);

	setting
	{
		SetCharacter( "" );
		SetEndCondCharacter( "MaSa_Bulrox" );
		SetBeginCondLevel( 21, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPreviousQuest( 1, QUEST_8 );
		SetEndCondLevel( 21, 150 );
		SetEndRewardGold( 300, 300 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_CREASTBULROX, 1 );
		SetHeadQuest( 6005 );
	}

	state 0
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000104
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000105
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000106
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000107
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000108
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000109
		);
	}
}

QUEST_10
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000110
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 24, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 24, 150 );
		SetEndCondItem( -1, 1, -1, II_SYS_SYS_QUE_FORGESTONE, 10 );
		SetEndRewardItem( -1, 0, 1, II_WEA_SWO_FAIRSLENDER, 1 );
		SetEndRewardItem( -1, 0, 2, II_WEA_YOY_TENSU, 1 );
		SetEndRewardItem( -1, 0, 3, II_WEA_CHEE_KUDOS, 1 );
		SetEndRewardItem( -1, 0, 4, II_WEA_WAN_NIZ, 1 );
		SetHeadQuest( 6005 );
	}

	state 0
	{
		QuestItem(MI_MIA3, II_SYS_SYS_QUE_FORGESTONE, 1500000000, 1);
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000111
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000112
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000113
		);
	}
	
	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000114
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000115
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000116
		);
	}
}

QUEST_11
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000117
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 18, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 18, 150 );
		SetEndCondItem( -1, 1, -1, II_SYS_SYS_QUE_LETTERTINA, 1 );
		SetEndCondState( 2 );
		SetEndRewardHide( 1 ); 
		SetEndRewardGold( 500, 500 );
		SetEndRewardExp( 500, 500 );
		SetHeadQuest( 6005 );
	}

	state 0
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000118
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000119
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000120
		);
	}

	state 1
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000121
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000122
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000123
		);
	}

	state 2
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000124
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000125
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000126
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000127
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000128
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000129
		);
	}
}

QUEST_12
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000130
	);

	setting
	{
		SetCharacter( "" );
		SetRepeat( 1 );
		SetBeginCondLevel( 1, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondLevel( 1, 150 );
		SetEndCondItem( -1, 1, -1, II_SYS_SYS_QUE_SAIBATTWING, 20 );
		SetEndRewardGold( 100, 100 );
		SetHeadQuest( 6004 );	
	}

	state 0
	{
		QuestItem(MI_AIBATT1, II_SYS_SYS_QUE_SAIBATTWING, 1500000000, 1);
		QuestItem(MI_AIBATT2, II_SYS_SYS_QUE_SAIBATTWING, 1500000000, 1);
		QuestItem(MI_AIBATT3, II_SYS_SYS_QUE_SAIBATTWING, 1500000000, 1);
				
		SetDesc
		(
			IDS_PROPQUEST_INC_000131
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000132
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000133
		);
	}
}

QUEST_13
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000134
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 5, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondLevel( 5, 150 );
		SetEndCondItem( -1, 1, -1, II_SYS_SYS_QUE_BLUEMILL, 25 );
		SetEndRewardItem( 0, 0, -1, II_ARM_M_VAG_QUE_HELMET02, 1 );
		SetEndRewardItem( 1, 0, -1, II_ARM_F_VAG_QUE_HELMET02, 1 );
		SetEndRewardHide( 1 );
		
		SetHeadQuest( 6004 );
	}

	state 0
	{
		QuestItem(MI_MUSHPANG3, II_SYS_SYS_QUE_BLUEMILL, 1500000000, 1);
	
		SetDesc
		(
			IDS_PROPQUEST_INC_000135
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000136
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000137
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000138
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000139
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000140
		);
	}
}

QUEST_14_VAGRANTMIND
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000141
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 8, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondLevel( 8, 150 );
		SetEndCondState( 2 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_PUKEPUKEKNIFE, 15 );
		SetEndRewardItem( 0, 0, -1, II_ARM_M_VAG_QUE_SUIT03, 1 );
		SetEndRewardItem( 1, 0, -1, II_ARM_F_VAG_QUE_SUIT03, 1 );
		SetEndRewardHide( 1 );
		
		SetHeadQuest( 6004 );
	}

	state 0
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000142
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000143
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000144
		);
	}
	
	state 1
	{
		QuestItem(MI_PUKEPUKE3, II_SYS_SYS_QUE_PUKEPUKEKNIFE, 1500000000, 1);

		SetDesc
		(
			IDS_PROPQUEST_INC_000145
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000146
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000147
		);
	}

	state 2
	{
		QuestItem(MI_PUKEPUKE3, II_SYS_SYS_QUE_PUKEPUKEKNIFE, 1500000000, 1);

		SetDesc
		(
			IDS_PROPQUEST_INC_000148
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000149
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000150
		);
	}

	state 14
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000151
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000152
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000153
		);
	}
}

QUEST_15
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000154
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 1, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondLevel( 1, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MAPPIECE1, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MAPPIECE2, 1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_MAP_FLARIS, 1 );
		SetEndCondCharacter( "MaFl_Masa" );
		SetEndCondState( 1 );
		
		SetHeadQuest( 6004 );
	}

	state 0
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000155
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000156
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000157
		);
	}

	state 1
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000158
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000159
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000160
		);
	}

	state 14
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000161
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000162
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000163
		);
	}
}

QUEST_16
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000164
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 34, 130 );
		SetBeginCondParty( 2, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 1, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_WILLOFROCK, 10 );
		SetEndRewardGold( 32000, 32000 );
		
		SetHeadQuest( 6005 );
	}

	state 0
	{
		QuestItem(MI_CARDPUPPET4, II_SYS_SYS_QUE_WILLOFROCK, 1500000000, 1);

		SetDesc
		(
			IDS_PROPQUEST_INC_000165
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000166
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000167
		);
	}
	
	state 14
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000168
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000169
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000170
		);
	}
}

QUEST_17
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000171
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 14, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondLevel( 14, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_SECRETMAP, 15 );
		SetEndRewardItem( -1, 0, -1, II_GEN_FOO_INS_HODDUK, 5 );
		SetEndRewardItem( -1, 0, -1, II_GEN_FOO_INS_KIMBAP, 3 );
		
		SetHeadQuest( 6004 );
	}

	state 0
	{
		QuestItem(MI_LAWOLF3, II_SYS_SYS_QUE_SECRETMAP, 1500000000, 1);
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000172
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000173
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000174
		);
	}
}

QUEST_18
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000175
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 16, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 16, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_FEFERNLEG, 6 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_BROOMHEAD, 1 );

		SetHeadQuest( 6004 );
	}

	state 0
	{
		QuestItem(MI_FEFERN3, II_SYS_SYS_QUE_FEFERNLEG, 1500000000, 1);
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000176
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000177
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000178
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000179
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000180
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000181
		);
	}
}

QUEST_19
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000182
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 18, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 18, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_BANGCHAIN, 8 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_BROOMBODY, 1 );
	
		SetHeadQuest( 6005 );
	}

	state 0
	{
		QuestItem(MI_BANG1, II_SYS_SYS_QUE_BANGCHAIN , 1500000000, 1);

		SetDesc
		(
			IDS_PROPQUEST_INC_000183
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000184
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000185
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000186
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000187
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000188
		);
	}
}

QUEST_20
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000189
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 19, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 19, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MARCHEID, 1 );
		SetEndCondState( 1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_BROOMTAIL, 1 );
		
		SetHeadQuest( 6006 );
	}

	state 0
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000190
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000191
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000192
		);
	}

	state 1
	{
	
		SetDesc
		(
			IDS_PROPQUEST_INC_000193
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000194
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000195
		);
	}

	state 14
	{
	
		SetDesc
		(
			IDS_PROPQUEST_INC_000196
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000197
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000198
		);
	}
}

QUEST_21
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000199
	);

	setting
	{
		SetCharacter( "" );	
		SetBeginCondLevel( 18, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 18, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_NYANGHAIR, 20 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_HAIRCOUPON, 1 );
	
		SetHeadQuest( 6004 );
	}

	state 0
	{
		QuestItem(MI_NYANGNYANG3, II_SYS_SYS_QUE_NYANGHAIR, 1500000000, 1);

		SetDesc
		(
			IDS_PROPQUEST_INC_000200
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000201
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000202
		);
	}

	state 14
	{
	
		SetDesc
		(
			IDS_PROPQUEST_INC_000203
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000204
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000205
		);
	}
}

QUEST_22
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000206
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 20, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 20, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MAGBROOM, 1 );
		SetEndCondState( 1 );
		SetEndRewardGold( 1500, 1500 );
	
		SetHeadQuest( 6004 );
	}

	state 0
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000207
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000208
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000209
		);
	}

	state 1
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000210
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000211
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000212
		);
	}

	state 14
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000213
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000214
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000215
		);
	}
}

QUEST_23
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000216
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 26, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 26, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_PUMPKINHEAD, 10 );
		SetEndRewardHide( 1 ); 
		SetEndRewardGold( 2100, 2100 );
		SetEndRewardExp( 2180, 2180 );
		
		SetHeadQuest( 6005 );
	}

	state 0
	{
		QuestItem(MI_MRPUMPKIN3, II_SYS_SYS_QUE_PUMPKINHEAD, 1500000000, 1);
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000217
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000218
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000219
		);
	}

	state 14
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000220
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000221
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000222
		);
	}
}

QUEST_24
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000223
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 28, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 28, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_REDYFORCEP, 3 );
		SetEndRewardItem( -1, 0, -1, II_GEN_FOO_COO_SEAFOODPANCAKE, 5 );
		SetEndRewardItem( -1, 0, -1, II_GEN_FOO_COO_BARBECUE, 10 );
		SetEndCondState( 2 );
	
		SetHeadQuest( 6005 );
	}

	state 0
	{
		QuestItem( MI_REDMANTIS1, II_SYS_SYS_QUE_REDYSPAWN, 1500000000, 1 );
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000224
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000225
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000226
		);
	}

	state 1
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000227
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000228
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000229
		);
	}

	state 2
	{
		QuestItem( MI_REDMANTIS2, II_SYS_SYS_QUE_REDYFORCEP, 1500000000, 1 );
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000230
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000231
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000232
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000233
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000234
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000235
		);
	}
}

QUEST_25
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000236
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 30, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 30, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_ROLIPANG, 1 );
		SetEndCondState( 2 );
		SetEndRewardItem( -1, 0, 1, II_WEA_SWO_TAO, 1 );
		SetEndRewardItem( -1, 0, 2, II_WEA_YOY_DICEIN, 1 );
		SetEndRewardItem( -1, 0, 3, II_WEA_KNU_TALIN, 1 );
		SetEndRewardItem( -1, 0, 4, II_WEA_WAN_KALIS, 1 );
		SetEndRewardItem( -1, 0, -1, II_ARM_ARM_SHI_SHURAIN, 1 );
	
		SetHeadQuest( 6005 );
	}

	state 0
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000237
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000238
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000239
		);
	}

	state 1
	{
		QuestItem(MI_JACKTHEHAMMER3, II_SYS_SYS_QUE_JACKBEARD, 1500000000, 1);

		SetDesc
		(
			IDS_PROPQUEST_INC_000240
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000241
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000242
		);
	}

	state 2
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000243
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000244
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000245
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000246
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000247
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000248
		);
	}
}

QUEST_26
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000249
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 32, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 32, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_HERTHCARGO, 1 );
		SetEndCondState( 1 );
		SetEndRewardGold( 3000, 3000 );
	
		SetHeadQuest( 6005 );
	}

	state 0
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000250
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000251
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000252
		);
	}

	state 1
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000253
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000254
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000255
		);
	}

	state 14
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000256
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000257
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000258
		);
	}
}

QUEST_27
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000259
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 37, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 37, 150 );
		SetEndCondCharacter( "MaSa_Bozman" );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_HELPRIBBON, 1 ); 
		SetEndCondState( 4 );
	
		SetHeadQuest( 6005 );
	}

	state 0
	{
	
		SetDesc
		(
			IDS_PROPQUEST_INC_000260
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000261
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000262
		);
	}

	state 1
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000263
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000264
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000265
		);
	}

	state 2
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000266
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000267
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000268
		);
	}
	
	state 3
	{
	
		SetDesc
		(
			IDS_PROPQUEST_INC_000269
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000270
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000271
		);
	}

	state 4
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000272
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000273
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000274
		);
	}
	
	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000275
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000276
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000277
		);
	}
}

QUEST_28
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000278
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 37, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_27 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 37, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_SAINTHOLY, 1 );
		SetEndRewardItem( -1, 0, -1, II_RID_RID_BOR_AERO, 1 ); 
		SetEndCondState( 2 );
		
		SetHeadQuest( 6005 );
	}

	state 0
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000279
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000280
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000281
		);
	}

	state 1
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000282
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000283
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000284
		);
	}

	state 2
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000285
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000286
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000287
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000288
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000289
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000290
		);
	}
}

QUEST_29
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000291
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 43, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 43, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_BEARERHEART, 10 );
		
		SetHeadQuest( 6005 );
	}

	state 0
	{
		QuestItem(MI_TOMBSTONEBEARER2, II_SYS_SYS_QUE_BEARERHEART, 1500000000, 1);

		SetDesc
		(
			IDS_PROPQUEST_INC_000292
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000293
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000294
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000295
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000296
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000297
		);
	}
}

QUEST_30
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000298
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 43, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_29 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 43, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_BONEBOWL, 1 );
		SetEndCondState( 1 );
	
		SetHeadQuest( 6005 );
	}

	state 0
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000299
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000300
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000301
		);
	}

	state 1
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000302
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000303
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000304
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000305
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000306
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000307
		);
	}
}

QUEST_31
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000308
	);

	setting
	{
		SetCharacter( "" );
		SetEndCondCharacter( "MaSa_Ann" );
		SetBeginCondLevel( 43, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_30 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 43, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_LIVETEA, 1 );
		SetEndRewardItem( -1, 0, -1, II_GEN_JEW_EAR_DEFEARRING02, 1 ); 
		SetEndRewardGold( 1500, 1500 );
	
		SetHeadQuest( 6005 );
	}

	state 0
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000309
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000310
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000311
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000312
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000313
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000314
		);
	}
}

QUEST_GUILD
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000315
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 50, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetEndCondLevel( 50, 150 );
		SetEndCondParty( 2, 0, 6, 2 );
		SetEndCondState( 2 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
	
		SetHeadQuest( 6005 );
	}

	state 0
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000316
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000317
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000318
		);
	}

	state 1
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000319
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000320
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000321
		);
	}
	
	state 2
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000322
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000323
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000324
		);
	}
}

QUEST_WARMON_LV1ID
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000325
	);

	setting
	{
		SetCharacter( "" );
		SetBeginCondLevel( 70, 130 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 70, 150 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MONBOOK1, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MONBOOK2, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MONBOOK3, 1 );
		SetEndCondState( 4 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_WARMONIDLV1, 1 );
		SetEndCondCharacter( "MaDa_Haven" );
		SetHeadQuest( 1997 );
	}

	state 0
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000326
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000327
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000328
		);
	}

	state 1
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000329
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000330
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000331
		);
	}

	state 2
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000332
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000333
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000334
		);
	}

	state 3
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000335
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000336
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000337
		);
	}

	state 4
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000338
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000339
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000340
		);
	}

	state 14
	{
		
		SetDesc
		(
			IDS_PROPQUEST_INC_000341
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000342
		);	

		SetStatus
		(
			IDS_PROPQUEST_INC_000343
		);
	}
}

QUEST_MASDU1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000426
	);

	setting
	{
		SetCharacter( "" );
		SetHeadQuest( 1995 );
		SetHeadQuest( 6054 );
	}

	
	SetDialog 
	(	
		0,	
		IDS_PROPQUEST_INC_000427
	);

	SetDialog 
	(	
		1,	
		IDS_PROPQUEST_INC_000428
	);

	SetDialog 
	(	
		2,	
		IDS_PROPQUEST_INC_000429
	);
	SetDialog 
	(	
		3,	
		IDS_PROPQUEST_INC_000430
	);
	SetDialog 
	(	
		4,	
		IDS_PROPQUEST_INC_000431
	);
	SetDialog 
	(	
		5,	
		IDS_PROPQUEST_INC_000432
	);
	SetDialog 
	(	
		6,	
		IDS_PROPQUEST_INC_000433
	);
	state 0
	{
		QuestItem(MI_DUFEFERN1, II_GEN_GEM_GEM_DUTARINROOT,  500000000, 1);
		QuestItem(MI_DUFEFERN2, II_GEN_GEM_GEM_DUTARINROOT,  500000000, 1);
		QuestItem(MI_DUFEFERN3, II_GEN_GEM_GEM_DUTARINROOT,  500000000, 1);
		QuestItem(MI_DUNYANGNYANG1, II_GEN_GEM_GEM_DUSTARSTONE,  500000000, 1);
		QuestItem(MI_DUNYANGNYANG2, II_GEN_GEM_GEM_DUSTARSTONE,  500000000, 1);
		QuestItem(MI_DUNYANGNYANG3, II_GEN_GEM_GEM_DUSTARSTONE,  500000000, 1);
		QuestItem(MI_DUBANG1, II_GEN_GEM_GEM_DUGOLDENWING, 500000000, 1);
		QuestItem(MI_DUBANG2, II_GEN_GEM_GEM_DUGOLDENWING, 500000000, 1);
		QuestItem(MI_DUBANG3, II_GEN_GEM_GEM_DUGOLDENWING, 500000000, 1);
		SetDesc
		(
			IDS_PROPQUEST_INC_000434
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000435
		);

		SetStatus
		(
			IDS_PROPQUEST_INC_000436
		);
	}
}
QUEST_MASDU2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000437
	);

	setting
	{
		SetCharacter( "" );
		SetHeadQuest( 1995 );
		SetHeadQuest( 6054 );
	}
	SetDialog 
	(	
		0,	
		IDS_PROPQUEST_INC_000438
	);
	SetDialog 
	(	
		1,	
		IDS_PROPQUEST_INC_000439
	);
	SetDialog 
	(	
		2,	
		IDS_PROPQUEST_INC_000440
	);
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000441
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000442
		);

		SetStatus
		(
			IDS_PROPQUEST_INC_000443
		);
	}
	state 1
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000444
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000445
		);

		SetStatus
		(
			IDS_PROPQUEST_INC_000446
		);
	}
	state 2
	{
		QuestItem(MI_DUFEFERN1, II_GEN_GEM_GEM_DUTARINROOT,  500000000, 1);
		QuestItem(MI_DUFEFERN2, II_GEN_GEM_GEM_DUTARINROOT,  500000000, 1);
		QuestItem(MI_DUFEFERN3, II_GEN_GEM_GEM_DUTARINROOT,  500000000, 1);
		QuestItem(MI_DUNYANGNYANG1, II_GEN_GEM_GEM_DUSTARSTONE,  500000000, 1);
		QuestItem(MI_DUNYANGNYANG2, II_GEN_GEM_GEM_DUSTARSTONE,  500000000, 1);
		QuestItem(MI_DUNYANGNYANG3, II_GEN_GEM_GEM_DUSTARSTONE,  500000000, 1);
		QuestItem(MI_DUBANG1, II_GEN_GEM_GEM_DUGOLDENWING, 500000000, 1);
		QuestItem(MI_DUBANG2, II_GEN_GEM_GEM_DUGOLDENWING, 500000000, 1);
		QuestItem(MI_DUBANG3, II_GEN_GEM_GEM_DUGOLDENWING, 500000000, 1);
		SetDesc
		(
			IDS_PROPQUEST_INC_000447
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000448
		);

		SetStatus
		(
			IDS_PROPQUEST_INC_000449
		);
	}
}
QUEST_MASDU3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000450
	);

	setting
	{
		SetCharacter( "" );
		
		SetHeadQuest( 6054 );
	}

	
	SetDialog 
	(	
		0,	
		IDS_PROPQUEST_INC_000451
	);
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000452
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000453
		);

		SetStatus
		(
			IDS_PROPQUEST_INC_000454
		);
	}
	state 1
	{
		QuestItem(MI_WORMVEDUQUE, II_GEN_GEM_GEM_WORMVEDUQUEHAIR,  150000000, 1);
		SetDesc
		(
			IDS_PROPQUEST_INC_000455
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000456
		);

		SetStatus
		(
			IDS_PROPQUEST_INC_000457
		);
	}
	state 2
	{
		QuestItem(MI_SERUSURIEL, II_GEN_GEM_GEM_SERUSURIELHAIR,  30000000, 1);
		SetDesc
		(
			IDS_PROPQUEST_INC_000458
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000459
		);

		SetStatus
		(
			IDS_PROPQUEST_INC_000460
		);
	}
}

QUEST_VALENTINE
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000461
	);

	setting
	{
		SetCharacter( "MaFl_Prist" );
		
		SetHeadQuest( 6004 );
	}


	state 0
	{
		QuestItem(MI_AIBATT1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_AIBATT2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_AIBATT3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_AIBATT4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MUSHPANG1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MUSHPANG2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MUSHPANG3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MUSHPANG4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BURUDENG1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BURUDENG2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BURUDENG3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BURUDENG4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_PUKEPUKE1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_PUKEPUKE2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_PUKEPUKE3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_PUKEPUKE4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_PEAKYTURTLE1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_PEAKYTURTLE2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_PEAKYTURTLE3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_PEAKYTURTLE4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DEMIAN1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DEMIAN2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DEMIAN3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DEMIAN4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DORIDOMA1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DORIDOMA2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DORIDOMA3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DORIDOMA4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_LAWOLF1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_LAWOLF2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_LAWOLF3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_LAWOLF4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_FEFERN1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_FEFERN2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_FEFERN3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_FEFERN4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NYANGNYANG1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NYANGNYANG2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NYANGNYANG3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NYANGNYANG4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BANG1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BANG2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BANG3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BANG4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_WAGSAAC1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_WAGSAAC2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_WAGSAAC3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_WAGSAAC4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MIA1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MIA2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MIA3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MIA4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MRPUMPKIN1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MRPUMPKIN2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MRPUMPKIN3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MRPUMPKIN4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_REDMANTIS1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_REDMANTIS2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_REDMANTIS3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_REDMANTIS4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_JACKTHEHAMMER1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_JACKTHEHAMMER2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_JACKTHEHAMMER3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_JACKTHEHAMMER4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GIGGLEBOX1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GIGGLEBOX2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GIGGLEBOX3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GIGGLEBOX4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ROCKMUSCLE1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ROCKMUSCLE2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ROCKMUSCLE3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ROCKMUSCLE4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_HOBO1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_HOBO2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_HOBO3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_HOBO4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUMBBULL1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUMBBULL2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUMBBULL3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUMBBULL4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_TOTEMIA1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_TOTEMIA2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_TOTEMIA3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_TOTEMIA4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_CARDPUPPET1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_CARDPUPPET2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_CARDPUPPET3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_CARDPUPPET4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_TOMBSTONEBEARER1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_TOMBSTONEBEARER2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_TOMBSTONEBEARER3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_TOMBSTONEBEARER4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BASQUE1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BASQUE2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BASQUE3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BASQUE4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_PRANKSTER1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_PRANKSTER2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_PRANKSTER3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_PRANKSTER4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_WHEELEM1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_WHEELEM2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_WHEELEM3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_WHEELEM4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_LEYENA1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_LEYENA2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_LEYENA3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_LEYENA4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_STEAMWALKER1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_STEAMWALKER2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_STEAMWALKER3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_STEAMWALKER4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_STEELKNIGHT1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_STEELKNIGHT2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_STEELKNIGHT3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_STEELKNIGHT4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NUTTYWHEEL1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NUTTYWHEEL2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NUTTYWHEEL3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NUTTYWHEEL4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DRILLER1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DRILLER2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DRILLER3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DRILLER4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_VOLT1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_VOLT2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_VOLT3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_VOLT4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ELDERGUARD1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ELDERGUARD2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ELDERGUARD3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ELDERGUARD4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GARBAGEPIDER1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GARBAGEPIDER2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GARBAGEPIDER3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GARBAGEPIDER4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_CRANEMACHINERY1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_CRANEMACHINERY2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_CRANEMACHINERY3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_CRANEMACHINERY4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MOTHBEE1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MOTHBEE2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MOTHBEE3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MOTHBEE4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_FLBYRIGEN1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_FLBYRIGEN2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_FLBYRIGEN3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_FLBYRIGEN4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ROCKEPELLER1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ROCKEPELLER2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ROCKEPELLER3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ROCKEPELLER4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GREEMONG1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GREEMONG2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GREEMONG3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GREEMONG4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_CARRIERBOMB1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_CARRIERBOMB2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_CARRIERBOMB3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_CARRIERBOMB4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_CLOCKWORK1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NUCTUVEHICLE1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NUCTUVEHICLE2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NUCTUVEHICLE3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NUCTUVEHICLE4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_SYLIACA1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_SYLIACA2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_SYLIACA3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_SYLIACA4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_RISEM1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_RISEM2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_RISEM3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_RISEM4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ZOMBIGER1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ZOMBIGER2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ZOMBIGER3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ZOMBIGER4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_FLYBAT1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_FLYBAT2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_FLYBAT3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_FLYBAT4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BUCROW1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BUCROW2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BUCROW3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BUCROW4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_SCOPICON1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_SCOPICON2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_SCOPICON3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_SCOPICON4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_TRANGFOMA1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_TRANGFOMA2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_TRANGFOMA3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_TRANGFOMA4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GRRR1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GRRR2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GRRR3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GRRR4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUMP1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUMP2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUMP3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUMP4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NAUTREPY1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NAUTREPY2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NAUTREPY3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_NAUTREPY4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BOO1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BOO2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BOO3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_BOO4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_HOPPRE1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_HOPPRE2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_HOPPRE3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_HOPPRE4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MUSHPOIE1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MUSHPOIE2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MUSHPOIE3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MUSHPOIE4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_IREN1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_IREN2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_IREN3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_IREN4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_WATANGKA1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_WATANGKA2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_WATANGKA3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_WATANGKA4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ANTIQUERY1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ANTIQUERY2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ANTIQUERY3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_ANTIQUERY4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_LUIA1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_LUIA2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_LUIA3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_LUIA4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GONGURY1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GONGURY2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GONGURY3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GONGURY4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_SHUHAMMA1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_SHUHAMMA2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_SHUHAMMA3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_SHUHAMMA4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_KERN1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_KERN2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_KERN3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_KERN4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GLAPHAN1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GLAPHAN2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GLAPHAN3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_GLAPHAN4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MUFFRIN1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MUFFRIN2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MUFFRIN3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_MUFFRIN4, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUFEFERN1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUFEFERN2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUFEFERN3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUNYANGNYANG1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUNYANGNYANG2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUNYANGNYANG3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUBANG1, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUBANG2, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_DUBANG3, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_WORMVEDUQUE, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_SERUSURIEL, II_SYS_SYS_EVE_FLOWER, 750000000, 1);
		QuestItem(MI_VICEVEDUQUE, II_SYS_SYS_EVE_FLOWER, 750000000, 1);

		SetDesc
		(
			IDS_PROPQUEST_INC_000462
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000463
		);

		SetStatus
		(
			IDS_PROPQUEST_INC_000464
		);
	}
}

QUEST_WHITEDAY
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000465
	);

	setting
	{
		SetCharacter( "MaFl_Hans" );
		
		SetHeadQuest( 6004 );
	}


	state 0
	{
		QuestItem(MI_AIBATT1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_AIBATT2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_AIBATT3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_AIBATT4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MUSHPANG1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MUSHPANG2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MUSHPANG3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MUSHPANG4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BURUDENG1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BURUDENG2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BURUDENG3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BURUDENG4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_PUKEPUKE1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_PUKEPUKE2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_PUKEPUKE3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_PUKEPUKE4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_PEAKYTURTLE1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_PEAKYTURTLE2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_PEAKYTURTLE3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_PEAKYTURTLE4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DEMIAN1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DEMIAN2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DEMIAN3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DEMIAN4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DORIDOMA1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DORIDOMA2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DORIDOMA3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DORIDOMA4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_LAWOLF1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_LAWOLF2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_LAWOLF3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_LAWOLF4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_FEFERN1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_FEFERN2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_FEFERN3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_FEFERN4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NYANGNYANG1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NYANGNYANG2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NYANGNYANG3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NYANGNYANG4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BANG1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BANG2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BANG3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BANG4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_WAGSAAC1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_WAGSAAC2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_WAGSAAC3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_WAGSAAC4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MIA1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MIA2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MIA3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MIA4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MRPUMPKIN1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MRPUMPKIN2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MRPUMPKIN3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MRPUMPKIN4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_REDMANTIS1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_REDMANTIS2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_REDMANTIS3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_REDMANTIS4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_JACKTHEHAMMER1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_JACKTHEHAMMER2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_JACKTHEHAMMER3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_JACKTHEHAMMER4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GIGGLEBOX1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GIGGLEBOX2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GIGGLEBOX3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GIGGLEBOX4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ROCKMUSCLE1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ROCKMUSCLE2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ROCKMUSCLE3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ROCKMUSCLE4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_HOBO1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_HOBO2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_HOBO3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_HOBO4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUMBBULL1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUMBBULL2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUMBBULL3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUMBBULL4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_TOTEMIA1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_TOTEMIA2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_TOTEMIA3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_TOTEMIA4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_CARDPUPPET1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_CARDPUPPET2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_CARDPUPPET3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_CARDPUPPET4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_TOMBSTONEBEARER1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_TOMBSTONEBEARER2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_TOMBSTONEBEARER3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_TOMBSTONEBEARER4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BASQUE1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BASQUE2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BASQUE3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BASQUE4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_PRANKSTER1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_PRANKSTER2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_PRANKSTER3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_PRANKSTER4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_WHEELEM1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_WHEELEM2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_WHEELEM3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_WHEELEM4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_LEYENA1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_LEYENA2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_LEYENA3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_LEYENA4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_STEAMWALKER1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_STEAMWALKER2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_STEAMWALKER3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_STEAMWALKER4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_STEELKNIGHT1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_STEELKNIGHT2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_STEELKNIGHT3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_STEELKNIGHT4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NUTTYWHEEL1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NUTTYWHEEL2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NUTTYWHEEL3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NUTTYWHEEL4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DRILLER1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DRILLER2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DRILLER3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DRILLER4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_VOLT1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_VOLT2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_VOLT3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_VOLT4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ELDERGUARD1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ELDERGUARD2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ELDERGUARD3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ELDERGUARD4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GARBAGEPIDER1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GARBAGEPIDER2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GARBAGEPIDER3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GARBAGEPIDER4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_CRANEMACHINERY1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_CRANEMACHINERY2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_CRANEMACHINERY3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_CRANEMACHINERY4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MOTHBEE1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MOTHBEE2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MOTHBEE3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MOTHBEE4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_FLBYRIGEN1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_FLBYRIGEN2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_FLBYRIGEN3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_FLBYRIGEN4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ROCKEPELLER1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ROCKEPELLER2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ROCKEPELLER3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ROCKEPELLER4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GREEMONG1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GREEMONG2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GREEMONG3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GREEMONG4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_CARRIERBOMB1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_CARRIERBOMB2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_CARRIERBOMB3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_CARRIERBOMB4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_CLOCKWORK1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NUCTUVEHICLE1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NUCTUVEHICLE2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NUCTUVEHICLE3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NUCTUVEHICLE4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_SYLIACA1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_SYLIACA2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_SYLIACA3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_SYLIACA4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_RISEM1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_RISEM2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_RISEM3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_RISEM4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ZOMBIGER1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ZOMBIGER2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ZOMBIGER3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ZOMBIGER4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_FLYBAT1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_FLYBAT2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_FLYBAT3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_FLYBAT4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BUCROW1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BUCROW2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BUCROW3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BUCROW4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_SCOPICON1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_SCOPICON2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_SCOPICON3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_SCOPICON4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_TRANGFOMA1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_TRANGFOMA2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_TRANGFOMA3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_TRANGFOMA4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GRRR1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GRRR2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GRRR3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GRRR4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUMP1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUMP2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUMP3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUMP4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NAUTREPY1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NAUTREPY2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NAUTREPY3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_NAUTREPY4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BOO1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BOO2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BOO3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_BOO4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_HOPPRE1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_HOPPRE2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_HOPPRE3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_HOPPRE4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MUSHPOIE1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MUSHPOIE2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MUSHPOIE3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MUSHPOIE4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_IREN1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_IREN2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_IREN3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_IREN4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_WATANGKA1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_WATANGKA2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_WATANGKA3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_WATANGKA4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ANTIQUERY1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ANTIQUERY2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ANTIQUERY3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_ANTIQUERY4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_LUIA1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_LUIA2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_LUIA3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_LUIA4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GONGURY1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GONGURY2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GONGURY3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GONGURY4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_SHUHAMMA1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_SHUHAMMA2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_SHUHAMMA3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_SHUHAMMA4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_KERN1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_KERN2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_KERN3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_KERN4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GLAPHAN1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GLAPHAN2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GLAPHAN3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_GLAPHAN4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MUFFRIN1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MUFFRIN2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MUFFRIN3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_MUFFRIN4, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUFEFERN1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUFEFERN2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUFEFERN3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUNYANGNYANG1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUNYANGNYANG2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUNYANGNYANG3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUBANG1, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUBANG2, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_DUBANG3, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_WORMVEDUQUE, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_SERUSURIEL, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);
		QuestItem(MI_VICEVEDUQUE, II_SYS_SYS_EVE_HEARTPIECE, 450000000, 1);

		SetDesc
		(
			IDS_PROPQUEST_INC_000466
		);

		SetCond
		(
			IDS_PROPQUEST_INC_000467
		);

		SetStatus
		(
			IDS_PROPQUEST_INC_000468
		);
	}
}



QUEST_VOCACR_BFTRN
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000469
	);

	setting
	{
		SetCharacter( "MaDa_Hent" );
		SetEndCondCharacter( "MaDa_Hent", 3931, 4385, 1 );
		SetQuestType( QT_GENERAL );
		
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondLevel( 15, 129 );
		SetEndCondKillNPC( 0, MI_AIBATT1, 10, 7128, 3333, 1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_BLI_BLI_FLARIS, 1 );
		SetEndRewardGold( 1500, 1500 );
		SetHeadQuest( 6051 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000470
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000471
	);
		

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000472
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000473
	);
	
	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000474
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000475
	);

	SetDialog
	(
		QSAY_EXTRA01,
		IDS_PROPQUEST_INC_000476
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000477
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000478
		);
		
	}
}

QUEST_VOCACR_TRN1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000479
	);

	setting
	{
		SetCharacter( "MaDa_Hent" );
		SetEndCondCharacter( "MaDa_Pyre", 3850, 4426, 1 );
		
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetBeginCondPreviousQuest( 1, QUEST_VOCACR_BFTRN );
		QuestItem(MI_AIBATT1, II_GEN_GEM_GEM_TWINKLESTONE, 3000000000, 1);
		QuestItem(MI_AIBATT2, II_GEN_GEM_GEM_TWINKLESTONE, 3000000000, 1);
		QuestItem(MI_AIBATT3, II_GEN_GEM_GEM_TWINKLESTONE, 3000000000, 1);
		QuestItem(MI_AIBATT3, II_GEN_GEM_GEM_TWINKLESTONE, 3000000000, 1);
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_TWINKLESTONE, 10, -1, -1, QUEST_DESTINATION_ID_0002 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_TWINKLESTONE, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_BLI_BLI_FLARIS, 1 );
		SetEndRewardGold( 1500, 1500 );
		SetHeadQuest( 6051 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000480
	);

	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000481
	);

	SetDialog
	(
		QSAY_BEGIN3,
		IDS_PROPQUEST_INC_000482
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000483
	);
	
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000484
	);
	
	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000485
	);
	 
	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000486
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000487
	);
 
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000488
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000489
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000490
		);
		
	}
}

QUEST_VOCACR_TRN2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000491
	);

	setting
	{
		SetCharacter( "MaDa_Pyre" );
		SetEndCondCharacter( "MaFl_Tucani", 6994, 3897, 1 );
		SetQuestType( QT_GENERAL );
	
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetBeginCondPreviousQuest( 1, QUEST_VOCACR_TRN1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_NTSKILL, 1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_BLI_BLI_DARKON, 1 );
		SetEndRewardGold( 1500, 1500 );
		SetHeadQuest( 6051 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000492
	);

	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000493
	);

	SetDialog
	(
		QSAY_BEGIN3,
		IDS_PROPQUEST_INC_000494
	);

	
	SetDialog
	(
		QSAY_BEGIN_YES, 
		IDS_PROPQUEST_INC_000495
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000496
	);
	
	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000497
	);
	 
	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000498
	);

 	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000499
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000500
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000501
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000502
		);
		
	}
}

QUEST_VOCACR_TRN3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000503
	);

	setting
	{
		SetCharacter( "MaFl_Tucani" );
		SetEndCondCharacter( "MaDa_Tailer", 3931, 4390, 1 );
		SetQuestType( QT_GENERAL );
		
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetBeginCondPreviousQuest( 1, QUEST_VOCACR_TRN2 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_NTSKILL, 1, -1, -1, QUEST_DESTINATION_ID_0006 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_NTSKILL, 1 );
		SetEndCondKillNPC( 0, MI_SHURAITURE, 1, 4059, 4355, 1 );
		SetEndRewardSkillPoint(50);
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_RECCURENCE, 1,2 );
		SetEndRewardItem( -1, 0, 0, II_CHR_FOO_COO_BULLHAMS, 1, 2 );
		SetEndRewardItem( -1, 0, 0, II_CHR_POT_DRI_VITALX, 1, 2 );
		SetEndRewardItem( -1, 0, 0, II_CHR_SYS_SCR_ACTIVITION, 1, 2 );
		SetHeadQuest( 6051 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000504
	);

	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000505
	);

	SetDialog
	(
		QSAY_BEGIN3,
		IDS_PROPQUEST_INC_000506
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000507
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000508
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000509
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000510
	);	

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000511
	);			
		
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000512
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000513
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000514
		);
		
	}
}


QUEST_HEROJES_TRN1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000515
	);

	setting
	{
		SetCharacter( "MaDa_Lorein" );
		SetEndCondCharacter( "MaDa_Lorein", 3784, 4490, 1 );
		SetQuestType( QT_GENERAL );
		
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ACROBAT );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_DRILLER2, 20, 5500, 4179, 1 );
		SetEndRewardItem( -1, 0, 2, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndRewardHide( 1 );
		SetEndRewardGold( 500000, 550000 );
		SetHeadQuest( 6052 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000516
	);
	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000517
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000518
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000519
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000520
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000521
	);

	SetDialog
	(
		QSAY_EXTRA01,
		IDS_PROPQUEST_INC_000522
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000523
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000524
		);
		
	}
}

QUEST_HEROJES_TRN2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000525
	);

	setting
	{
		SetCharacter( "MaDa_Lorein" );
		SetEndCondCharacter( "MaFl_Radyon", 7636, 4229, 1 );
		SetQuestType( QT_GENERAL );
		
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ACROBAT );
		SetBeginCondPreviousQuest( 1, QUEST_HEROJES_TRN1 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndCondKillNPC( 0, MI_REN, 1, 8779, 2170, 1 );
		QuestItem(MI_REN, II_SYS_SYS_QUE_RENSRING, 3000000000, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_RENSRING, 1, -1, -1, QUEST_DESTINATION_ID_0007 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_MASNOMINATE, -1 );
		SetHeadQuest( 6052 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000526
	);
	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000527
	);
	SetDialog
	(
		QSAY_BEGIN3,
		IDS_PROPQUEST_INC_000528
	);
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000529
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000530
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000531
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000532
	);	
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000533
	);
	
	state 0
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000534
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000535
		);
		
	}
}

QUEST_HEROJES_TRN3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000536
	);

	setting
	{
		SetCharacter( "MaFl_Radyon" );
		SetEndCondCharacter( "MaSa_Troupemember5", 8385, 3653, 1 );
		SetQuestType( QT_GENERAL );
	
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ACROBAT );
		SetBeginCondPreviousQuest( 1, QUEST_HEROJES_TRN2 );
		SetEndCondLevel( 60, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_RENSRING, 1, -1, -1, QUEST_DESTINATION_ID_0007 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_RENSRING, -1 );	
		SetEndRewardItem( -1, 0, 2, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetHeadQuest( 6052 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000537
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000538
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000539
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000540
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000541
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000542
	);	

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000543
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000544
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000545
		);
		
	}
}

QUEST_HEROJES_TRN4
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000546
	);

	setting
	{
		SetCharacter( "MaSa_Troupemember5" );
		SetEndCondCharacter( "MaDa_Homeit", 2788, 2885, 1 );
		SetQuestType( QT_GENERAL );
		
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ACROBAT );
		SetBeginCondPreviousQuest( 1, QUEST_HEROJES_TRN3 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetEndCondKillNPC( 0, MI_SISIF, 1, 2983, 2748, 1 );
		QuestItem(MI_SISIF, II_SYS_SYS_QUE_HEROSOUL01, 3000000000, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_HEROSOUL01, 1, -1, -1, QUEST_DESTINATION_ID_0008 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_HEROSOUL01, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_SCRSTAMP, -1 );
		SetEndRewardItem( -1, 0, 2, II_SYS_SYS_QUE_HEROMARK, 1 );
		SetHeadQuest( 6052 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000547
	);
	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000548
	);

	SetDialog
	(
		QSAY_BEGIN3,
		IDS_PROPQUEST_INC_000549
	);

	SetDialog
	(
		QSAY_BEGIN4,
		IDS_PROPQUEST_INC_000550
	);
	
	SetDialog
	(
		QSAY_BEGIN5,
		IDS_PROPQUEST_INC_000551
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000552
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000553
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000554
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000555
	);	
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000556
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000557
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000558
		);
		
	}
}

QUEST_HEROJES_TRN5
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000559
	);

	setting
	{
		SetCharacter( "MaDa_Homeit" );
		SetEndCondCharacter( "MaDa_Heingard", 3320, 2067, 1 );
		SetQuestType( QT_GENERAL );
		
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ACROBAT );
		SetBeginCondPreviousQuest( 1, QUEST_HEROJES_TRN4 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_HEROMARK, 1 );
		QuestItem(MI_GUARDMON1, II_SYS_SYS_QUE_VENHEART, 3000000000, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_GUARDMON1, 1, 3238, 2522, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_VENHEART, 1, -1, -1, QUEST_DESTINATION_ID_0009 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_VENHEART, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_HEROMARK, -1);
		SetEndRewardSkillPoint(100);
		SetEndRewardHide( 1 );
		SetHeadQuest( 6052 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000560
	);

	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000561
	);

	SetDialog
	(
		QSAY_BEGIN3,
		IDS_PROPQUEST_INC_000562
	);

	SetDialog
	(
		QSAY_BEGIN4,
		IDS_PROPQUEST_INC_000563
	);	

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000564
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000565
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000566
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000567
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000568
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000569
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000570
		);
		
	}
}


QUEST_HERORAN_TRN1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000571
	);

	setting
	{
		SetCharacter( "MaDa_Eliff" );
		SetEndCondCharacter( "MaDa_Eliff", 3790, 4492, 1 );
		SetQuestType( QT_GENERAL );
		
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ACROBAT );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_DRILLER2, 20, 5500, 4179, 1 );
		SetEndRewardItem( -1, 0, 2, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndRewardHide( 1 );
		SetEndRewardGold( 500000, 550000 );
		SetHeadQuest( 6052 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000572
	);
	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000573
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000574
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000575
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000576
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000577
	);

	SetDialog
	(
		QSAY_EXTRA01,
		IDS_PROPQUEST_INC_000578
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000579
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000580
		);
		
	}
}

QUEST_HERORAN_TRN2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000581
	);

	setting
	{
		SetCharacter( "MaDa_Eliff" );
		SetEndCondCharacter( "MaFl_Kimel", 7637, 4228, 1 );
		SetQuestType( QT_GENERAL );
	
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ACROBAT );
		SetBeginCondPreviousQuest( 1, QUEST_HERORAN_TRN1 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_RUBO, 1, 4539, 3886, 1 );
		QuestItem(MI_RUBO, II_SYS_SYS_QUE_LTHYNAN, 3000000000, 1);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_LTHYNAN, 1, -1, -1, QUEST_DESTINATION_ID_0010 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_MASNOMINATE, -1 );
		SetHeadQuest( 6052 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000582
	);
	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000583
	);
	SetDialog
	(
		QSAY_BEGIN3,
		IDS_PROPQUEST_INC_000584
	);
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000585
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000586
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000587
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000588
	);	
	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000589
	);	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000590
	);
	
	state 0
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_000591
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000592
		);
		
	}
}

QUEST_HERORAN_TRN3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000593
	);

	setting
	{
		SetCharacter( "MaFl_Kimel" );
		SetEndCondCharacter( "MaDa_Liekyen", 3733, 4526, 1 );
		SetQuestType( QT_GENERAL );
	
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ACROBAT );
		SetBeginCondPreviousQuest( 1, QUEST_HERORAN_TRN2 );
		SetEndCondLevel( 60, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_LTHYNAN, 1, -1, -1, QUEST_DESTINATION_ID_0010 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_LTHYNAN, -1 );
		SetEndRewardItem( -1, 0, 2, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetHeadQuest( 6052 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000594
	);
	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000595
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000596
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000597
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000598
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000599
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000600
	);		
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000601
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000602
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000603
		);
		
	}
}

QUEST_HERORAN_TRN4
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000604
	);

	setting
	{
		SetCharacter( "MaDa_Liekyen" );
		SetEndCondCharacter( "MaDa_Rupim", 3170, 3644, 1 );
		SetQuestType( QT_GENERAL );
	
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ACROBAT );
		SetBeginCondPreviousQuest( 0, QUEST_HERORAN_TRN3 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_PRANKSTER2, 8, 9435, 3871, 1 );
		QuestItem(MI_PRANKSTER2, II_SYS_SYS_QUE_BKHEROL, 3000000000, 1);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_BKHEROL, 8, -1, -1, QUEST_DESTINATION_ID_0011 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_BKHEROL, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_SCRSTAMP, -1 );
		SetEndRewardItem( -1, 0, 2, II_SYS_SYS_QUE_HEROMARK, 1 );
		SetHeadQuest( 6052 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000605
	);

	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000606
	);

	SetDialog
	(
		QSAY_BEGIN3,
		IDS_PROPQUEST_INC_000607
	);

	SetDialog
	(
		QSAY_BEGIN4,
		IDS_PROPQUEST_INC_000608
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000609
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000610
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000611
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000612
	);	
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000613
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000614
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000615
		);
		
	}
}

QUEST_HERORAN_TRN5
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000616
	);

	setting
	{
		SetCharacter( "MaDa_Rupim" );
		SetEndCondCharacter( "MaDa_Kailreard", 3371, 2060, 1 );
		SetQuestType( QT_GENERAL );
		
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ACROBAT );
		SetBeginCondPreviousQuest( 1, QUEST_HERORAN_TRN4 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_HEROMARK, 1 );
		QuestItem(MI_GUARDMON1, II_SYS_SYS_QUE_VENHEART, 3000000000, 1);
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_GUARDMON1, 1, 3238, 2522, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_VENHEART, 1, -1, -1, QUEST_DESTINATION_ID_0009 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_VENHEART, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_HEROMARK, -1);
		SetEndRewardSkillPoint(100);
		SetEndRewardHide( 1 );
		SetHeadQuest( 6052 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000617
	);
	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000618
	);
	SetDialog
	(
		QSAY_BEGIN3,
		IDS_PROPQUEST_INC_000619
	);

	SetDialog
	(
		QSAY_BEGIN4,
		IDS_PROPQUEST_INC_000620
	);		

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000621
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000622
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000623
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000624
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000625
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000626
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000627
		);
		
	}
}


QUEST_JAPEVE_BOZFL
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000628
	);

	setting
	{
		SetHeadQuest( 1992 );
		SetCharacter( "MaFl_Furan" );
	
		SetRepeat( 1 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_GRPFLARIS, 20 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_GRPFLARIS, -1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_BIN_BOZFLARIS, 1);
		
						
		
		QuestItem(MI_AIBATT1, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_AIBATT2, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_AIBATT3, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_AIBATT4, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);	
		
		QuestItem(MI_MUSHPANG1, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_MUSHPANG2, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_MUSHPANG3, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_MUSHPANG4, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		
		QuestItem(MI_BURUDENG1, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_BURUDENG2, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_BURUDENG3, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_BURUDENG4, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		
		QuestItem(MI_PUKEPUKE1, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_PUKEPUKE2, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_PUKEPUKE3, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_PUKEPUKE4, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		
		QuestItem(MI_PEAKYTURTLE1, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_PEAKYTURTLE2, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_PEAKYTURTLE3, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_PEAKYTURTLE4, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		
		QuestItem(MI_DEMIAN1, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_DEMIAN2, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_DEMIAN3, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_DEMIAN4, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		
		QuestItem(MI_DORIDOMA1, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_DORIDOMA2, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_DORIDOMA3, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_DORIDOMA4, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		
		QuestItem(MI_LAWOLF1, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_LAWOLF2, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_LAWOLF3, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_LAWOLF4, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		
		QuestItem(MI_FEFERN1, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_FEFERN2, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_FEFERN3, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_FEFERN4, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		
		QuestItem(MI_NYANGNYANG1, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_NYANGNYANG2, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_NYANGNYANG3, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_NYANGNYANG4, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		
		QuestItem(MI_BANG1, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_BANG2, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_BANG3, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
		QuestItem(MI_BANG4, II_SYS_SYS_QUE_GRPFLARIS, 750000000, 1);
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000629
	);
	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000630
	);
	SetDialog
	(
		QSAY_BEGIN3,
		IDS_PROPQUEST_INC_000631
	);

	SetDialog
	(
		QSAY_BEGIN4,
		IDS_PROPQUEST_INC_000632
	);

	SetDialog
	(
		QSAY_BEGIN5,
		IDS_PROPQUEST_INC_000633
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000634
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000635
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000636
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000637
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000638
	);

	SetDialog
	(
		QSAY_END_FAILURE2,
		IDS_PROPQUEST_INC_000639
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000640
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000641
		);
		
	}
}

QUEST_JAPEVE_BOZSA
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000642
	);

	setting
	{
		SetHeadQuest( 1992 );
		SetCharacter( "MaSa_Furan" );
	
		SetRepeat( 1 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_GRPSAINT, 20 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_GRPSAINT, -1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_BIN_BOZSAINT, 1);
		
		
		
		QuestItem(MI_WAGSAAC1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_WAGSAAC2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_WAGSAAC3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_WAGSAAC4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_MIA1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_MIA2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_MIA3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_MIA4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_MRPUMPKIN1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_MRPUMPKIN2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_MRPUMPKIN3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_MRPUMPKIN4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_REDMANTIS1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_REDMANTIS2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_REDMANTIS3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_REDMANTIS4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_JACKTHEHAMMER1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_JACKTHEHAMMER2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_JACKTHEHAMMER3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_JACKTHEHAMMER4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_GIGGLEBOX1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_GIGGLEBOX2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_GIGGLEBOX3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_GIGGLEBOX4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_ROCKMUSCLE1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_ROCKMUSCLE2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_ROCKMUSCLE3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_ROCKMUSCLE4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_HOBO1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_HOBO2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_HOBO3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_HOBO4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_DUMBBULL1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_DUMBBULL2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_DUMBBULL3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_DUMBBULL4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_TOTEMIA1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_TOTEMIA2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_TOTEMIA3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_TOTEMIA4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_CARDPUPPET1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_CARDPUPPET2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_CARDPUPPET3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_CARDPUPPET4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_TOMBSTONEBEARER1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_TOMBSTONEBEARER2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_TOMBSTONEBEARER3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_TOMBSTONEBEARER4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_BASQUE1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_BASQUE2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_BASQUE3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_BASQUE4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_PRANKSTER1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_PRANKSTER2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_PRANKSTER3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_PRANKSTER4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_WHEELEM1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_WHEELEM2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_WHEELEM3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_WHEELEM4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_SCOPICON1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_SCOPICON2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_SCOPICON3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_SCOPICON4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_FLYBAT1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_FLYBAT2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_FLYBAT3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_FLYBAT4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		
		QuestItem(MI_BUCROW1, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_BUCROW2, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_BUCROW3, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
		QuestItem(MI_BUCROW4, II_SYS_SYS_QUE_GRPSAINT, 750000000, 1);
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000643
	);
	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000644
	);
	SetDialog
	(
		QSAY_BEGIN3,
		IDS_PROPQUEST_INC_000645
	);

	SetDialog
	(
		QSAY_BEGIN4,
		IDS_PROPQUEST_INC_000646
	);

	SetDialog
	(
		QSAY_BEGIN5,
		IDS_PROPQUEST_INC_000647
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000648
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000649
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000650
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000651
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000652
	);

	SetDialog
	(
		QSAY_END_FAILURE2,
		IDS_PROPQUEST_INC_000653
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000654
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000655
		);
		
	}
}

QUEST_JAPEVE_BOZDA
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000656
	);

	setting
	{
		SetHeadQuest( 1992 );
		SetCharacter( "MaDa_Furan" );
	
		SetRepeat( 1 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_GRPDARKON, 20 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_GRPDARKON, -1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_BIN_BOZDARKON, 1);
		
				
		
		QuestItem(MI_LEYENA1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_LEYENA2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_LEYENA3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_LEYENA4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_STEAMWALKER1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_STEAMWALKER2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_STEAMWALKER3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_STEAMWALKER4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_STEELKNIGHT1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_STEELKNIGHT2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_STEELKNIGHT3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_STEELKNIGHT4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_NUTTYWHEEL1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_NUTTYWHEEL2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_NUTTYWHEEL3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_NUTTYWHEEL4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_DRILLER1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_DRILLER2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_DRILLER3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_DRILLER4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_VOLT1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_VOLT2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_VOLT3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_VOLT4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_ELDERGUARD1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_ELDERGUARD2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_ELDERGUARD3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_ELDERGUARD4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_GARBAGEPIDER1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GARBAGEPIDER2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GARBAGEPIDER3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GARBAGEPIDER4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_CRANEMACHINERY1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_CRANEMACHINERY2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_CRANEMACHINERY3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_CRANEMACHINERY4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_SYLIACA1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_SYLIACA2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_SYLIACA3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_SYLIACA4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_GREEMONG1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GREEMONG2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GREEMONG3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GREEMONG4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_CARRIERBOMB1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_CARRIERBOMB2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_CARRIERBOMB3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_CARRIERBOMB4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_NUCTUVEHICLE1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_NUCTUVEHICLE2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_NUCTUVEHICLE3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_NUCTUVEHICLE4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_RISEM1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_RISEM2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_RISEM3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_RISEM4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_ZOMBIGER1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_ZOMBIGER2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_ZOMBIGER3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_ZOMBIGER4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_GRRR1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GRRR2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GRRR3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GRRR4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_DUMP1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_DUMP2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_DUMP3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_DUMP4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_NAUTREPY1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_NAUTREPY2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_NAUTREPY3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_NAUTREPY4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_BOO1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_BOO2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_BOO3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_BOO4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_HOPPRE1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_HOPPRE2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_HOPPRE3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_HOPPRE4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_MUSHPOIE1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_MUSHPOIE2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_MUSHPOIE3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_MUSHPOIE4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);		
		
		QuestItem(MI_IREN1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_IREN2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_IREN3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_IREN4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_WATANGKA1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_WATANGKA2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_WATANGKA3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_WATANGKA4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_ANTIQUERY1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_ANTIQUERY2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_ANTIQUERY3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_ANTIQUERY4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_LUIA1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_LUIA2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_LUIA3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_LUIA4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_GONGURY1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GONGURY2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GONGURY3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GONGURY4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_SHUHAMMA1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_SHUHAMMA2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_SHUHAMMA3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_SHUHAMMA4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_KERN1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_KERN2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_KERN3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_KERN4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_GLAPHAN1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GLAPHAN2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GLAPHAN3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_GLAPHAN4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		
		QuestItem(MI_TRANGFOMA1, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_TRANGFOMA2, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_TRANGFOMA3, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
		QuestItem(MI_TRANGFOMA4, II_SYS_SYS_QUE_GRPDARKON, 750000000, 1);
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000657
	);
	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_000658
	);
	SetDialog
	(
		QSAY_BEGIN3,
		IDS_PROPQUEST_INC_000659
	);

	SetDialog
	(
		QSAY_BEGIN4,
		IDS_PROPQUEST_INC_000660
	);

	SetDialog
	(
		QSAY_BEGIN5,
		IDS_PROPQUEST_INC_000661
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000662
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000663
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000664
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000665
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000666
	);

	SetDialog
	(
		QSAY_END_FAILURE2,
		IDS_PROPQUEST_INC_000667
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000668
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000669
		);
		
	}
}


QUEST_VOCMER_BFTRN
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000670
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Mustang" );
		SetEndCondCharacter( "MaFl_Mustang", 7153, 3244, 1 );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondKillNPC( 0, MI_AIBATT1, 10, 7128, 3333, 1 );
		SetEndRewardGold( 1500, 1500 );
		SetHeadQuest( 6051 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000671
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000672
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000673
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000674
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000675
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000676
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000677
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000678
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000679
	);

	SetDialog
	(
		QSAY_END_FAILURE2,
		IDS_PROPQUEST_INC_000680
	);

	SetDialog
	(
		QSAY_END_FAILURE3,
		IDS_PROPQUEST_INC_000681
	);

	
	SetDialog
	(
		QSAY_EXTRA01,
		IDS_PROPQUEST_INC_000682
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000683
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000684
		);
		
	}
}


QUEST_VOCMER_TRN1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000685
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Mustang" );
		SetEndCondCharacter( "MaFl_Andy", 6929, 3328, 1 );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetBeginCondPreviousQuest( 1, QUEST_VOCMER_BFTRN );
		QuestItem( MI_AIBATT1, II_GEN_GEM_GEM_TWINKLESTONE, 3000000000, 1);
		QuestItem( MI_AIBATT2, II_GEN_GEM_GEM_TWINKLESTONE, 3000000000, 1);
		QuestItem( MI_AIBATT3, II_GEN_GEM_GEM_TWINKLESTONE, 3000000000, 1);
		QuestItem( MI_AIBATT4, II_GEN_GEM_GEM_TWINKLESTONE, 3000000000, 1);
		SetEndCondItem( -1, 0, 0, II_GEN_GEM_GEM_TWINKLESTONE, 5, -1, -1, QUEST_DESTINATION_ID_0002 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_TWINKLESTONE, 5 );
		SetEndRewardGold( 1500, 1500 );
		SetHeadQuest( 6051 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000686
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000687
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000688
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000689
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000690
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000691
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000692
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000693
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000694
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000695
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000696
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000697
		);
		
	}
}


QUEST_VOCMER_TRN2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000698
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Andy" );
		SetEndCondCharacter( "MaFl_Langdrong", 6998, 3896, 1 );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetBeginCondPreviousQuest( 1, QUEST_VOCMER_TRN1 );
		SetEndRewardItem( -1, 0, 0, II_SYS_SYS_QUE_NTSKILL, 1);
		SetEndRewardGold( 1500, 1500 );
		SetHeadQuest( 6051 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000699
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000700
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000701
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000702
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000703
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000704
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000705
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000706
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000707
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000708
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000709
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000710
		);
		
	}
}


QUEST_VOCMER_TRN3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000711
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Langdrong" );
		SetEndCondCharacter( "MaFl_Hyuit", 7152, 3242, 1 );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetBeginCondPreviousQuest( 1, QUEST_VOCMER_TRN2 );
		SetEndCondItem( -1, 0, 0, II_SYS_SYS_QUE_NTSKILL, 1, -1, -1, QUEST_DESTINATION_ID_0060 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_NTSKILL, 1 );
		SetEndCondKillNPC( 0, MI_BABARI, 1, 6963, 3143, 1 );
		SetEndRewardSkillPoint(40);
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_RECCURENCE, 1,2 );
		SetEndRewardItem( -1, 0, 0, II_CHR_FOO_COO_BULLHAMS, 1, 2 );
		SetEndRewardItem( -1, 0, 0, II_CHR_POT_DRI_VITALX, 1, 2 );
		SetEndRewardItem( -1, 0, 0, II_CHR_SYS_SCR_ACTIVITION, 1, 2 );
		SetHeadQuest( 6051 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000712
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000713
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000714
	);

	

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000715
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000716
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000717
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000718
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000719
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000720
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000721
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000722
		);
		
	}
}

QUEST_VOCASS_BFTRN
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000723
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Elic" );
		SetEndCondCharacter( "MaFl_Elic", 7155, 3248, 1 );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondKillNPC( 0, MI_AIBATT1, 10, 7128, 3333, 1 );
		SetEndRewardGold( 1500, 1500 );
		SetHeadQuest( 6051 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000724
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000725
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000726
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000727
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000728
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000729
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000730
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000731
	);

	SetDialog
	(
		QSAY_EXTRA01,
		IDS_PROPQUEST_INC_000732
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000733
		);
		
	}


	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000734
		);
		
	}
}

QUEST_VOCASS_TRN1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000735
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Elic" );
		SetEndCondCharacter( "MaFl_Maki", 6930, 3324, 1 );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetBeginCondPreviousQuest( 1, QUEST_VOCASS_BFTRN );
		QuestItem( MI_MUSHPANG1, II_GEN_GEM_GEM_FORFORM, 3000000000, 1);
		QuestItem( MI_MUSHPANG2, II_GEN_GEM_GEM_FORFORM, 3000000000, 1);
		QuestItem( MI_MUSHPANG3, II_GEN_GEM_GEM_FORFORM, 3000000000, 1);
		QuestItem( MI_MUSHPANG4, II_GEN_GEM_GEM_FORFORM, 3000000000, 1);
		SetEndCondItem( -1, 0, 0, II_GEN_GEM_GEM_FORFORM, 5, -1, -1, QUEST_DESTINATION_ID_0061 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_FORFORM, 5 );
		SetEndRewardGold( 1500, 1500 );
		SetHeadQuest( 6051 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000736
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000737
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000738
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000739
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000740
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000741
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000742
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000743
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000744
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000745
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000746
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000747
		);
		
	}
}

QUEST_VOCASS_TRN2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000748
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Maki" );
		SetEndCondCharacter( "MaFl_Goripeg", 6991, 3891, 1 );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetBeginCondPreviousQuest( 1, QUEST_VOCASS_TRN1 );
		SetEndRewardItem( -1, 0, 0, II_SYS_SYS_QUE_NTSKILL, 1 );
		SetEndRewardGold( 1500, 1500 );
		SetHeadQuest( 6051 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000749
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000750
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000751
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000752
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000753
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000754
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000755
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000756
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000757
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000758
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000759
		);
		
	}
}

QUEST_VOCASS_TRN3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000760
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Goripeg" );
		SetEndCondCharacter( "MaFl_Kidmen", 7156, 3250, 1 );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetBeginCondPreviousQuest( 1, QUEST_VOCASS_TRN2 );
		SetEndCondItem( -1, 0, 0, II_SYS_SYS_QUE_NTSKILL, 1, -1, -1, QUEST_DESTINATION_ID_0062 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_NTSKILL, 1 );
		SetEndCondKillNPC( 0, MI_CHANER, 1, 7296, 3684, 1 );
		SetEndRewardSkillPoint(60);
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_RECCURENCE, 1,2 );
		SetEndRewardItem( -1, 0, 0, II_CHR_FOO_COO_BULLHAMS, 1, 2 );
		SetEndRewardItem( -1, 0, 0, II_CHR_REF_REF_HOLD, 1, 2 );
		SetEndRewardItem( -1, 0, 0, II_CHR_SYS_SCR_ACTIVITION, 1, 2 );
		SetHeadQuest( 6051 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000761
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000762
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000763
	);
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000764
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000765
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000766
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000767
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000768
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000769
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000770
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000771
		);
		
	}
}


QUEST_VOCMAG_BFTRN
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000772
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Wingyei" );
		SetEndCondCharacter( "MaSa_Wingyei", 8483, 3810, 1  );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondKillNPC( 0, MI_AIBATT3, 10, 7046, 3503, 1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_BLI_BLI_FLARIS, 1 );
		SetEndRewardGold( 1500, 1500 );
		SetHeadQuest( 6051 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000773
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000774
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000775
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000776
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000777
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000778
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000779
	);

	SetDialog
	(
		QSAY_EXTRA01,
		IDS_PROPQUEST_INC_000780
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000781
		);
		
	}


	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000782
		);
		
	}
}

QUEST_VOCMAG_TRN1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000783
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Wingyei" );
		SetEndCondCharacter( "MaSa_Hee", 8341, 3750, 1 );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetBeginCondPreviousQuest( 1, QUEST_VOCMAG_BFTRN );
		QuestItem( MI_AIBATT1, II_GEN_GEM_GEM_TWINKLESTONE, 3000000000, 1);
		QuestItem( MI_AIBATT2, II_GEN_GEM_GEM_TWINKLESTONE, 3000000000, 1);
		QuestItem( MI_AIBATT3, II_GEN_GEM_GEM_TWINKLESTONE, 3000000000, 1);
		QuestItem( MI_AIBATT4, II_GEN_GEM_GEM_TWINKLESTONE, 3000000000, 1);
		SetEndCondItem( -1, 0, 0, II_GEN_GEM_GEM_TWINKLESTONE, 10, -1, -1, QUEST_DESTINATION_ID_0002 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_TWINKLESTONE, 10 );
		SetEndRewardItem( -1, 0, 0, II_SYS_BLI_BLI_FLARIS, 1 );
		SetEndRewardGold( 1500, 1500 );
		SetHeadQuest( 6051 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000784
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000785
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000786
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000787
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000788
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000789
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000790
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000791
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000792
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000793
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000794
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000795
		);
		
	}
}

QUEST_VOCMAG_TRN2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000796
	);
	
	setting
	{
	
		SetCharacter( "MaSa_Hee" );
		SetEndCondCharacter( "MaFl_Hastan", 7001, 3895, 1 );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetBeginCondPreviousQuest( 1, QUEST_VOCMAG_TRN1 );
		SetEndRewardItem( -1, 0, 0, II_SYS_SYS_QUE_NTSKILL, 1 );
		SetEndRewardItem( -1, 0, 0, II_SYS_BLI_BLI_SAINTMORNING, 1 );
		SetEndRewardGold( 1500, 1500 );
		SetHeadQuest( 6051 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000797
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000798
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000799
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000800
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000801
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000802
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000803
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000804
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000805
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000806
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000807
		);
		
	}
}

QUEST_VOCMAG_TRN3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000808
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Hastan" );
		SetEndCondCharacter( "MaSa_Lopaze", 8481, 3810, 1 );
		SetBeginCondLevel( 15, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetBeginCondPreviousQuest( 1, QUEST_VOCMAG_TRN2 );
		SetEndCondKillNPC( 0, MI_SEIDO, 1, 8622, 3549, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_NTSKILL, 1, -1, -1, QUEST_DESTINATION_ID_0005 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_NTSKILL, 1 );
		SetEndRewardSkillPoint(90);
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_RECCURENCE, 1, 2 );
		SetEndRewardItem( -1, 0, 0, II_CHR_FOO_COO_BULLHAMS, 1, 2 );
		SetEndRewardItem( -1, 0, 0, II_CHR_REF_REF_HOLD, 1, 2 );
		SetEndRewardItem( -1, 0, 0, II_CHR_SYS_SCR_ACTIVITION, 1, 2 );
		SetEndRewardGold( 1500, 1500 );
		SetHeadQuest( 6051 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000809
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000810
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000811
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000812
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000813
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000814
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000815
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000816
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000817
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000818
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000819
		);
		
	}
}


QUEST_FIND_REDBANGT
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000820
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Luda" );
		SetEndCondCharacter( "MaFl_Luda", 6927, 3236, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 30, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		QuestItem( MI_RBANG1, II_SYS_SYS_QUE_REDBANGHEAD, 500000000, 1 );
		SetEndCondLevel( 30, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_REDBANGHEAD, 1, 7506, 4210, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_REDBANGHEAD, -1 );
		SetEndRewardExp( 14258, 14258 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000821
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000822
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000823
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000824
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000825
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000826
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000827
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000828
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000829
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000830
		);
		
	}
}

QUEST_GETBACK_LUDASAFE
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000831
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Luda" );
		SetEndCondCharacter( "MaFl_Luda", 6927, 3236, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 30, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_FIND_REDBANGT );
		QuestItem( MI_RBANG1, II_SYS_SYS_QUE_LUDASAFE, 500000000, 1 );
		SetEndCondLevel( 30, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_LUDASAFE, 1, 7506, 4210, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_LUDASAFE, -1 );
		SetEndRewardExp( 16250, 16250 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000832
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000833
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000834
	);

		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000835
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000836
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000837
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000838
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000839
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000840
		);
		
	}
}

QUEST_PLOT_COLACK
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000841
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Colack" );
		SetEndCondCharacter( "MaSa_Colack", 8369, 3675, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 35, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetEndCondLevel( 35, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_METEORITILL, 5, 8117, 1857, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_METEORITILL, -1 );
		SetEndRewardExp( 26465, 26465 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000842
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000843
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000844
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000845
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_000846
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000847
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000848
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000849
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000850
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000851
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000852
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000853
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000854
		);
		
	}
}

QUEST_DISAPP_SCRIPT
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000855
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Troupemember1" );
		SetEndCondCharacter( "MaDa_Colar", 6131, 4165, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 37, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetEndCondLevel( 37, 129 );
		SetEndRewardExp( 27345, 27345 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000856
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000857
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000858
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000859
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_000860
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000861
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000862
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000863
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000864
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000865
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000866
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000867
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000868
		);
		
	}
}

QUEST_FIND_SCRIPT
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000869
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Colar" );
		SetEndCondCharacter( "MaSa_Troupemember1", 8387, 3651, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 37, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_DISAPP_SCRIPT );
		QuestItem( MI_STEAMWALKER1, II_SYS_SYS_QUE_SCRIPT, 200000000, 1);
		QuestItem( MI_STEAMWALKER2, II_SYS_SYS_QUE_SCRIPT, 200000000, 1);
		QuestItem( MI_STEAMWALKER3, II_SYS_SYS_QUE_SCRIPT, 200000000, 1);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_SCRIPT, 6, 5904, 3824, QUEST_DESTINATION_ID_0000 );
		SetEndCondLevel( 37, 129 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_SCRIPT, -1 );
		SetEndRewardItem( -1, 0, -1, II_GEN_POT_DRI_VITAL700, 10 );
		SetEndRewardItem( -1, 0, -1, II_GEN_REF_REF_SEVENTH, 10 );
		SetEndRewardExp( 692061, 692061 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000870
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000871
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000872
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000873
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000874
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000875
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000876
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000877
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000878
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000879
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000880
		);
		
	}
}

QUEST_MANUAL_HELPER
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000881
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Is" );
		SetEndCondCharacter( "MaFl_Is", 6960, 3266, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 25 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetEndCondLevel( 20, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_LES2MANU, 1, 6970, 3143, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_LES1MANU, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_LES2MANU, -1 );
		SetEndRemoveItem( 2, II_SYS_SYS_QUE_LES3MANU, -1 );
		SetEndRewardExp( 784, 784 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000882
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000883
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000884
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000885
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000886
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000887
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000888
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000889
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000890
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000891
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000892
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000893
		);
		
	}
}

QUEST_FIND_PORTRAIT
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000894
	);
	
	setting
	{
	
		SetCharacter( "MaFl_Rudvihil" );
		SetEndCondCharacter( "MaSa_Helgar", 8449, 3638, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 26, 30 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetEndCondLevel( 26, 129 );
		SetEndRewardExp( 1645, 1645 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000895
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000896
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000897
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000898
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000899
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000900
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000901
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000902
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000903
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000904
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000905
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000906
		);
		
	}
}

QUEST_CLUE1_PORTRAIT
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000907
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Helgar" );
		SetEndCondCharacter( "MaFl_Tucani", 6994, 3897, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 26, 30 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_FIND_PORTRAIT );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetEndCondLevel( 26, 129 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_CLUEPORT1, 1 );
		SetEndRewardExp( 2070, 2070 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000908
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000909
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000910
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000911
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_000912
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000913
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000914
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000915
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000916
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000917
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000918
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000919
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000920
		);
		
	}
}

QUEST_CLUE2_PORTRAIT
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000921
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Tucani" );
		SetEndCondCharacter( "MaFl_Ancimys", 7036, 3728, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 26, 30 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_CLUE1_PORTRAIT );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_CLUEPORT1, 1 );
		SetEndCondLevel( 26, 129 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_CLUEPORT2, 1 );
		SetEndRewardExp( 2614, 2614 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000922
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000923
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000924
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000925
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_000926
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000927
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000928
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000929
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000930
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000931
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000932
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000933
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000934
		);
		
	}
}

QUEST_GETBACK_PORTRAIT
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000935
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Ancimys" );
		SetEndCondCharacter( "MaFl_Rudvihil", 7219, 3190, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 26, 30 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_CLUE2_PORTRAIT );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_CLUEPORT1, 1 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_CLUEPORT2, 1 );
		QuestItem( MI_RBANG1, II_SYS_SYS_QUE_RADIPORT, 700000000, 1 );
		SetEndCondLevel( 26, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_RADIPORT, 1, 7798, 4484, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_CLUEPORT1, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_CLUEPORT2, -1 );
		SetEndRemoveItem( 2, II_SYS_SYS_QUE_RADIPORT, -1 );
		SetEndRewardExp( 3195, 3195 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000936
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000937
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000938
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000939
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000940
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000941
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_000942
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000943
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000944
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000945
		);
		
	}
}

QUEST_FIND_BONEWAG
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000946
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Heltung" );
		SetEndCondCharacter( "MaSa_Heltung", 8446, 3576, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 25 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		QuestItem( MI_WAGSAAC1, II_SYS_SYS_QUE_BONEWAG, 800000000, 1 );
		QuestItem( MI_WAGSAAC2, II_SYS_SYS_QUE_BONEWAG, 800000000, 1 );
		QuestItem( MI_WAGSAAC3, II_SYS_SYS_QUE_BONEWAG, 800000000, 1 );
		QuestItem( MI_WAGSAAC4, II_SYS_SYS_QUE_BONEWAG, 800000000, 1 );
		SetEndCondLevel( 20, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_BONEWAG, 10, 8717, 3165, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_BONEWAG, -1 );
		SetEndRewardExp( 1176, 1176 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000947
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000948
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000949
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000950
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000951
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000952
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000953
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000954
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000955
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000956
		);
		
	}
}

QUEST_FIND_DNAWAG
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000957
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Heltung" );
		SetEndCondCharacter( "MaSa_Heltung", 8446, 3576, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 25 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_FIND_BONEWAG );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		QuestItem( MI_WAGSAAC1, II_SYS_SYS_QUE_DNAWAG, 750000000, 1 );
		QuestItem( MI_WAGSAAC2, II_SYS_SYS_QUE_DNAWAG, 750000000, 1 );
		QuestItem( MI_WAGSAAC3, II_SYS_SYS_QUE_DNAWAG, 750000000, 1 );
		QuestItem( MI_WAGSAAC4, II_SYS_SYS_QUE_DNAWAG, 750000000, 1 );
		SetEndCondLevel( 20, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_DNAWAG, 10, 8717, 3165, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_DNAWAG, -1 );
		SetEndRewardExp( 824, 824 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000958
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000959
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000960
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000961
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000962
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000963
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000964
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000965
		);
		
	}
}

QUEST_ORIGIN_BONEBOWL
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000966
	);
	
	setting
	{
		
		SetCharacter( "MaSa_QueerCollector" );
		SetEndCondCharacter( "MaSa_Bowler", 9560, 4020, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 44, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetEndCondLevel( 44, 129 );
		SetEndRewardExp( 56017, 56017 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000967
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000968
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000969
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000970
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000971
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000972
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000973
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000974
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000975
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000976
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000977
		);
		
	}
}

QUEST_FIRST_BONEBOWL
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000978
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Bowler" );
		SetEndCondCharacter( "MaSa_Bowler", 9560, 4020, QUEST_DESTINATION_ID_0000  );
		SetBeginCondLevel( 44, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_ORIGIN_BONEBOWL );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		QuestItem( MI_TOMBSTONEBEARER1, II_SYS_SYS_QUE_BLKMAR, 800000000, 1 );
		QuestItem( MI_TOMBSTONEBEARER2, II_SYS_SYS_QUE_BLKMAR, 800000000, 1 );
		QuestItem( MI_TOMBSTONEBEARER3, II_SYS_SYS_QUE_BLKMAR, 800000000, 1 );
		QuestItem( MI_TOMBSTONEBEARER4, II_SYS_SYS_QUE_BLKMAR, 800000000, 1 );
		SetEndCondLevel( 44, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_BLKMAR, 10, 9015, 4299, QUEST_DESTINATION_ID_0000 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_BLKSPL, 5, 9505, 3921, QUEST_DESTINATION_ID_0000 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_BLKHER, 5, 9333, 3967, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_BLKMAR, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_BLKSPL, -1 );
		SetEndRemoveItem( 2, II_SYS_SYS_QUE_BLKHER, -1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_BONEBOWL, 1 );
		SetEndRewardExp( 133864, 133864 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000979
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000980
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000981
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000982
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_000983
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000984
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000985
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000986
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000987
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000988
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_000989
		);
		
	}
}

QUEST_TRUTH_BONEBOWL
{
	SetTitle
	(
		IDS_PROPQUEST_INC_000990
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Bowler" );
		SetEndCondCharacter( "MaSa_QueerCollector", 8383, 4085, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 44, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_FIRST_BONEBOWL );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetEndCondLevel( 44, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_BONEBOWL, 1, -1, -1, QUEST_DESTINATION_ID_0040 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_BONEBOWL, -1 );
		SetEndRewardExp( 79996, 79996 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_000991
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_000992
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_000993
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_000994
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_000995
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_000996
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_000997
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_000998
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_000999
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001000
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001001
		);
		
	}
}

QUEST_TEAR_MOTHER
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001002
	);
	
	setting
	{
		
		SetCharacter( "MaSa_JeongHwa" );
		SetEndCondCharacter( "MaSa_Porgo", 8532, 3607, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 30 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetEndCondLevel( 20, 129 );
		SetEndRewardExp( 1176, 1176 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001003
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001004
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001005
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001006
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001007
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001008
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001009
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001010
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001011
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001012
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001013
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001014
		);
		
	}
}

QUEST_LOST_CHILD
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001015
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Porgo" );
		SetEndCondCharacter( "MaSa_Porgo",8532, 3607, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 30 );
		SetBeginCondParty( 0, 0, 0, 0 );	
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_TEAR_MOTHER );
		SetEndCondLevel( 20, 129 );
		SetEndCondKillNPC( 0, MI_MIA1, 20, 8138, 3004, QUEST_DESTINATION_ID_0000 );
		SetEndRewardGold( 43200, 43200 );
		SetEndRewardExp( 687, 687 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001016
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001017
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001018
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001019
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_001020
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001021
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001022
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001023
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001024
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001025
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001026
		);
		
	}
}

QUEST_TRUTH_MIA
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001027
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Porgo" );
		SetEndCondCharacter( "MaSa_SainMayor", 8464, 3652, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 30 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_LOST_CHILD );
		SetEndCondLevel( 20, 129 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_SECDIS, 1 );
		SetEndRewardExp( 412, 412 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001028
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001029
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001030
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001031
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001032
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001033
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001034
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001035
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001036
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001037
		);
		
	}
}

QUEST_DOLL_MIA
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001038
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Porgo" );
		SetEndCondCharacter( "MaSa_JeongHwa", 8335, 3713, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 30 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_TRUTH_MIA );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_SECDIS, 1 );
		QuestItem(MI_MIA1, II_SYS_SYS_QUE_JINDOLL, 800000000, 1);
		QuestItem(MI_MIA2, II_SYS_SYS_QUE_JINDOLL, 700000000, 1);
		QuestItem(MI_MIA3, II_SYS_SYS_QUE_JINDOLL, 650000000, 1);
		QuestItem(MI_MIA4, II_SYS_SYS_QUE_JINDOLL, 600000000, 1);
		SetEndCondLevel( 20, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_JINDOLL, 1, 8138, 3004, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_JINDOLL, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_SECDIS, -1 );
		SetEndRewardExp( 2076, 2076 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001039
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001040
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001041
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001042
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001043
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001044
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001045
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001046
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001047
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001048
		);
		
	}
}

QUEST_TRUTH_PAST
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001049
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Porgo" );
		SetEndCondCharacter( "MaSa_Porgo", 8532, 3607, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 30 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_DOLL_MIA  );
		SetEndCondLevel( 20, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_TRUDIS, 1, 8476, 3551, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_TRUDIS, -1 );
		SetEndRewardExp( 1305, 1305 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001050
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001051
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001052
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001053
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_001054
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001055
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001056
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001057
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001058
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001059
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001060
		);
		
	}
}


QUEST_REVENGE_RBANG
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001061
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Luda" );
		SetEndCondCharacter( "MaFl_Luda", 6927, 3236, QUEST_DESTINATION_ID_0000  );
		SetBeginCondLevel( 30, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPreviousQuest( 1, QUEST_GETBACK_LUDASAFE );
		SetEndCondKillNPC( 0, MI_RBANG2, 1, 7506, 4210, QUEST_DESTINATION_ID_0000 );
		QuestItem( MI_RBANG2, II_SYS_SYS_QUE_ENTANALE, 900000000, 1 );
		SetEndCondLevel( 30, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_ENTANALE, 1, -1, -1, QUEST_DESTINATION_ID_0037 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_ENTANALE, -1 );
		SetEndRewardItem( -1, 0, -1, II_WEA_SWO_ENTANALE, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001062
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001063
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001064
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001065
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_001066
	);

		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001067
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001068
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001069
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001070
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001071
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001072
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001073
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001074
		);
		
	}
}

QUEST_RBIDENTITY
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001075
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Luda" );
		SetEndCondCharacter( "MaFl_Luda", 6927, 3236, QUEST_DESTINATION_ID_0000  );
		SetBeginCondLevel( 30, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPreviousQuest( 1, QUEST_REVENGE_RBANG );
		SetEndCondKillNPC( 0, MI_RBANG1, 5, 7506, 4210, QUEST_DESTINATION_ID_0000 );
		SetEndCondKillNPC( 1, MI_RBANG2, 1, 7506, 4210, QUEST_DESTINATION_ID_0000 );
		QuestItem( MI_RBANG1, II_SYS_SYS_QUE_RBSYMBOL, 500000000, 1 );
		QuestItem( MI_RBANG2, II_SYS_SYS_QUE_RBSYMBOL, 1000000000, 1 );
		SetEndCondLevel( 30, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_RBSYMBOL , 7, -1, -1, QUEST_DESTINATION_ID_0038 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_RBSYMBOL, -1 );
		SetEndRewardGold( 357000, 357000 );
		SetEndRewardExp( 17446, 17446 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001076
	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001077
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001078
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001079
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001080
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001081
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001082
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001083
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001084
		);
		
	}
}

QUEST_ARCTHIEF
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001085
	);
	
	setting
	{
	
		SetCharacter( "MaFl_Luda" );
		SetEndCondCharacter( "MaFl_Luda", 6927, 3236, QUEST_DESTINATION_ID_0000  );
		SetBeginCondLevel( 30, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPreviousQuest( 1, QUEST_RBIDENTITY );
		SetEndCondKillNPC( 0, MI_LORDBANG, 1, 5350, 4409, QUEST_DESTINATION_ID_0000 );
		QuestItem( MI_LORDBANG, II_SYS_SYS_QUE_LBNECKLACE, 3000000000, 1 );
		SetEndCondLevel( 30, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_LBNECKLACE ,1, -1, -1, QUEST_DESTINATION_ID_0039 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_LBNECKLACE, -1 );
		SetEndRewardExp( 21172, 21172 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001086
	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001087
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001088
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001089
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001090
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001091
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001092
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001093
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001094
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001095
		);
		
	}
}

QUEST_SPECHILD
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001096
	);
	
	setting
	{
	
		SetCharacter( "MaSa_Porgo" );
		SetEndCondCharacter( "MaSa_Porgo", 8532, 3607, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 40 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_TRUTH_PAST );
		QuestItem( MI_MIA2, II_SYS_SYS_QUE_MIAREPORT, 1800000000, 1 );
		QuestItem( MI_MIA3, II_SYS_SYS_QUE_MIAREPORT, 2100000000, 1 );
		SetEndCondLevel( 20, 129 );
		SetEndCondKillNPC( 0, MI_MIA2, 7, 8138, 3004, QUEST_DESTINATION_ID_0000 );
		SetEndCondKillNPC( 1, MI_MIA3, 5, 8138, 3004, QUEST_DESTINATION_ID_0000 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MIAREPORT ,22 , -1, -1, QUEST_DESTINATION_ID_0035 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_MIAREPORT, -1 );
		SetEndRewardExp( 5758, 5758 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001097
	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001098
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001099
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001100
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001101
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001102
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001103
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001104
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001105
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001106
		);
		
	}
}

QUEST_SECDEAL
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001107
	);
	
	setting
	{

		SetCharacter( "MaSa_Porgo" );
		SetEndCondCharacter( "MaSa_SainMayor", 8464, 3652, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 40 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_SPECHILD );
		SetBeginSetAddItem( 0, II_SYS_SYS_QUE_PRFMISS, 1 );
		SetEndCondLevel( 20, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_PRFMISS ,1, -1, -1, QUEST_DESTINATION_ID_0036 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_PRFMISS, -1 );
		SetEndRewardItemWithAbilityOption( -1, 0, -1, II_GEN_JEW_NEC_HPNECKLACE, 1, 3 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001108
	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001109
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001110
	);
	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_001112
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001113
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001114
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001115
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001116
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001117
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001118
		);
		
	}
}

QUEST_MIACURSE
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001119
	);
	
	setting
	{
		
		SetCharacter( "MaSa_SainMayor" );
		SetEndCondCharacter( "MaSa_Porgo", 8532, 3607, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 40 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_SECDEAL );
		SetEndCondLevel( 20, 129 );
		SetEndRewardGold( 32000, 32000 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001120
	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001121
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001122
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001123
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001124
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001125
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001126
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001127
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001128
		);
		
	}
}

QUEST_LEGENDREDMANTIS1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001129
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Rudvihil" );
		SetEndCondCharacter( "MaSa_Helgar", 8449, 3638, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 60, 80 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 60, 129 );
		SetEndRewardExp( 1354731, 1354731 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001130
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001131
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001132
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001133
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_001134
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001135
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001136
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001137
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001138
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001139
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001140
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001141
		);
		
	}
}

QUEST_LEGENDREDMANTIS2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001142
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Helgar" );
		SetEndCondCharacter( "MaSa_Helgar", 8449, 3638, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 60, 80 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPreviousQuest( 1, QUEST_LEGENDREDMANTIS1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_REDMANTIS1, 10, 8058, 2745, QUEST_DESTINATION_ID_0000 );
		QuestItem( MI_REDMANTIS1, II_SYS_SYS_QUE_REDYSPAWN, 1500000000, 1 );		
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_REDYSPAWN, 15, -1, -1, QUEST_DESTINATION_ID_0042 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_REDYSPAWN, -1 );
		SetEndRewardExp( 3386828, 3386828 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001143
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001144
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001145
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001146
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001147
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001148
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001149
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001150
		);
		
	}
}

QUEST_LEGENDREDMANTIS3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001151
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Helgar" );
		SetEndCondCharacter( "MaFl_Rudvihil", 7219, 3190, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 60, 80 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPreviousQuest( 1, QUEST_LEGENDREDMANTIS2 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_EMERALDMANTIS, 1, 8966, 2908, QUEST_DESTINATION_ID_0000 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_EMERSPAWN, 1, 8966, 2908, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_EMERSPAWN, -1 );
		SetEndRewardGold( 145000, 145000 );
		SetEndRewardExp( 4529832, 4529832 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001152
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001153
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001154
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001155
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001156
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001157
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001158
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001159
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001160
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001161
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001162
		);
		
	}
}

QUEST_RBCIVILWAR
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001163
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Luda" );
		SetEndCondCharacter( "MaFl_Luda", 6927, 3236, QUEST_DESTINATION_ID_0000  );
		SetBeginCondLevel( 60, 80 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPreviousQuest( 1, QUEST_ARCTHIEF );
		SetEndCondLevel( 60, 129 );
		SetEndCondPatrolZone( WI_WORLD_MADRIGAL, 5280, 3413, 5324, 3377, PATROL_DESTINATION_ID_0002, 5304, 3409, QUEST_DESTINATION_ID_0000 );
		SetEndRewardExp( 2709462, 2709462 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001164
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001165
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001166
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001167
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001168
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001169
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001170
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001171
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001172
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001173
		);
		
	}
}

QUEST_NEWLORDB
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001174
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Luda" );
		SetEndCondCharacter( "MaFl_Luda", 6927, 3236, QUEST_DESTINATION_ID_0000  );
		SetBeginCondLevel( 60, 80 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPreviousQuest( 1, QUEST_RBCIVILWAR );
		SetEndCondLevel( 60, 129 );
		SetEndCondPatrolZone( WI_WORLD_MADRIGAL, 7782, 4505, 7809, 4474, PATROL_DESTINATION_ID_0004, 7761, 4484, QUEST_DESTINATION_ID_0000 );
		SetEndRewardExp( 3019888, 3019888 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001175
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001176
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001177
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001178
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001179
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001180
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001181
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001182
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001183
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001184
		);
		
	}
}

QUEST_LORDBAMBITION
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001185
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Luda" );
		SetEndCondCharacter( "MaDa_Amadolka", 5600, 3767, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 60, 80 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPreviousQuest( 1, QUEST_NEWLORDB );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_RBANG2, 35, 5260, 3395, QUEST_DESTINATION_ID_0000 );
		SetEndRewardExp( 4529832, 4529832 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001186
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001187
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001188
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001189
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001190
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001191
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001192
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001193
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001194
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001195
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001196
		);
		
	}
}

QUEST_UNITYREDB
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001197
	);
	
	setting
	{
	
		SetCharacter( "MaDa_Amadolka" );
		SetEndCondCharacter( "MaDa_Amadolka", 5600, 3767, QUEST_DESTINATION_ID_0000  );
		SetBeginCondLevel( 60, 80 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPreviousQuest( 1, QUEST_LORDBAMBITION );
		SetEndCondLevel( 60, 129 );
		SetEndCondPatrolZone( WI_WORLD_MADRIGAL, 5159, 3381, 5195, 3359, PATROL_DESTINATION_ID_0005, 5164, 3365, QUEST_DESTINATION_ID_0000 );
		SetEndRewardExp( 6039776, 6039776 );
		SetHeadQuest( 6006 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001198
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001199
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001200
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001201
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001202
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001203
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001204
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001205
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001206
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001207
		);
		
	}
}


QUEST_DREADBIG
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001208
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Gergantes" );
		SetEndCondCharacter( "MaFl_Gergantes", 6960, 3339, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 29 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetEndCondLevel( 20, 129 );
		SetEndCondKillNPC( 0, MI_ORGANIGOR, 1, 6505, 3619, QUEST_DESTINATION_ID_0000 );
		QuestItem(MI_ORGANIGOR, II_SYS_SYS_QUE_BKDREAD1, 1000000000, 1);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_BKDREAD1, 1, -1, -1, QUEST_DESTINATION_ID_0032 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MAPDREAD1, 1, -1, -1, QUEST_DESTINATION_ID_0094 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_BKDREAD1, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_MAPDREAD1, -1 );		
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_HRTTHYRED, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001209
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001210
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001211
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001212
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_001213
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001214
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001215
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001216
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001217
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001218
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001219
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001220
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001221
		);
		
	}
}

QUEST_DREADKREN
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001222
	);
	
	setting
	{
	
		SetCharacter( "MaFl_Gergantes" );
		SetEndCondCharacter( "MaFl_Gergantes", 6960, 3339, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 30, 39 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetEndCondLevel( 30, 129 );
		SetEndCondKillNPC( 0, MI_GANGARD, 1, 6633, 3618, QUEST_DESTINATION_ID_0000 );
		QuestItem(MI_GANGARD, II_SYS_SYS_QUE_BKDREAD2, 1000000000, 1);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_BKDREAD2, 1, -1, -1, QUEST_DESTINATION_ID_0033 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MAPDREAD2, 1, -1, -1, QUEST_DESTINATION_ID_0095 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_BKDREAD2, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_MAPDREAD2, -1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_HRTDASIED, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001223
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001224
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001225
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001226
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_001227
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001228
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001229
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001230
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001231
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001232
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001233
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001234
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001235
		);
		
	}
}

QUEST_DREADMUTE
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001236
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Gergantes" );
		SetEndCondCharacter( "MaFl_Gergantes", 6960, 3339, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 40, 50 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR );
		SetEndCondLevel( 40, 129 );
		SetEndCondKillNPC( 0, MI_HADESEOR, 1, 6684, 3635, QUEST_DESTINATION_ID_0000 );
		QuestItem(MI_HADESEOR, II_SYS_SYS_QUE_BKDREAD3, 1000000000, 1);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_BKDREAD3, 1, -1, -1, QUEST_DESTINATION_ID_0034 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MAPDREAD3, 1, -1, -1, QUEST_DESTINATION_ID_0096 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_BKDREAD3, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_MAPDREAD3, -1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_HRTARVAN, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001237
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001238
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001239
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001240
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_001241
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001242
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001243
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001244
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001245
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001246
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001247
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001248
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001249
		);
		
	}
}



QUEST_EVE_LOSTXMAS1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001250
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Buruto" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_GEM_REDSOCKS, 500 );
		SetEndRemoveItem( 0, II_SYS_SYS_GEM_REDSOCKS, 500 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_GEM_BLUEGBOX, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001251
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001252
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001253
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001254
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001255
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001256
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001257
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001258
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001259
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001260
		);
		
	}
}

QUEST_EVE_LOSTXMAS2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001261
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Aramy" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_GEM_REDSOCKS, 300 );
		SetEndRemoveItem( 0, II_SYS_SYS_GEM_REDSOCKS, 300 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_GEM_REDGBOX, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001262
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001263
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001264
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001265
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001266
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001267
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001268
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001269
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001270
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001271
		);
		
	}
}

QUEST_EVE_LOSTXMAS3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001272
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Atto" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_GEM_REDSOCKS, 100 );
		SetEndRemoveItem( 0, II_SYS_SYS_GEM_REDSOCKS, 100 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_GEM_YELLOWGBOX, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001273
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001274
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001275
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001276
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001277
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001278
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001279
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001280
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001281
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001282
		);
		
	}
}

QUEST_EVE_GBRCSOUP
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001283
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Juglin" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_GEM_RCSOUP, 100 );
		SetEndRemoveItem( 0, II_SYS_SYS_GEM_RCSOUP, 100 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_GEM_LUCKBAG, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001284
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001285
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001286
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001287
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001288
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001289
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001290
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001291
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001292
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001293
		);
		
	}
}



QUEST_EVE_LOVEHOUSE
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001294
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Nina" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_GEM_DRYNRT, 1000 );
		SetEndRemoveItem( 0, II_SYS_SYS_GEM_DRYNRT, 1000 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_GEM_LUXUBOX, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001295
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001296
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001297
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001298
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001299
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001300
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001301
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001302
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001303
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001304
		);
		
	}
}

QUEST_EVE_LOVEHOUSE1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001305
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_ChiChi" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_GEM_DRYNRT, 600 );
		SetEndRemoveItem( 0, II_SYS_SYS_GEM_DRYNRT, 600 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_GEM_SPECBOX, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001306
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001307
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001308
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001309
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001310
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001311
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001312
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001313
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001314
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001315
		);
		
	}
}

QUEST_EVE_LOVEHOUSE2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001316
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_PiPi" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_GEM_DRYNRT, 350 );
		SetEndRemoveItem( 0, II_SYS_SYS_GEM_DRYNRT, 350 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_GEM_NORMBOX, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001317
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001318
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001319
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001320
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001321
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001322
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001323
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001324
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001325
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001326
		);
		
	}
}


QUEST_NEWPETYORN
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001327
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Loyah" );
		SetEndCondCharacter( "MaFl_Loyah", 7169, 3208, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 5, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_YORN, 1, 7068, 4125, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_YORN, 1 );
		SetEndRewardGold( 15000, 15000 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001328	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001329	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001330
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001331	
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_001332	
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001333
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001334
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001335
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001336
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001337
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001338

		);
		
	}
}

QUEST_PUMPKINCHILD
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001339
	);
	
	setting
	{
	
		SetCharacter( "MaSa_JeongHwa" );
		SetEndCondCharacter( "MaSa_MaYun", 8197, 2806, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 10, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT );
		SetEndRewardGold( 20000, 20000 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001340	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001341	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001342	
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001343	
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001344
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001345
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001346
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001347
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001348
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001349
		);
		
	}
}

QUEST_DORIVINIG
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001350	
	);
	
	setting
	{
	
		SetCharacter( "MaFl_SsoTta" );
		SetEndCondCharacter( "MaFl_SsoTta", 7179, 3217, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 10, 15 );
		SetBeginCondParty( 0, 0, 0, 0 );
		QuestItem( MI_DORIDOMA1, II_SYS_SYS_QUE_DORIRIND, 1000000000, 1 );
		QuestItem( MI_MUSHPANG3, II_SYS_SYS_QUE_LIQMUSH, 850000000, 1 );
		SetEndCondKillNPC( 0, MI_DORIDOMA1, 1, 6859, 3819, QUEST_DESTINATION_ID_0000 );
		SetEndCondKillNPC( 1, MI_MUSHPANG3, 1, 7144, 3543, QUEST_DESTINATION_ID_0000 );
		SetEndCondItem( -1, 0, 0, II_SYS_SYS_QUE_DORIRIND, 12 );
		SetEndCondItem( -1, 0, 0, II_SYS_SYS_QUE_LIQMUSH, 5 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_DORIRIND, 12 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_LIQMUSH, 5 );
		SetEndRewardItem( -1, 0, 0, II_GEN_FOO_COO_DORIVINIG, 5 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001351	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001352	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001353	
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001354
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001355
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001356
	);

		SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001357
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001358
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001359
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001360
		);
		
	}
}

QUEST_HEROKNI_TRN1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001361	
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Karanduru" );
		SetEndCondCharacter( "MaDa_Karanduru", 3793, 4482, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_DRILLER2, 20, 5500, 4179, 1 );
		SetEndRewardItem( -1, 0, 1, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndRewardHide( 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001362
	);
	
	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_001363	
	);

	SetDialog
	(
		QSAY_BEGIN3,
		IDS_PROPQUEST_INC_001364	
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001365
	);

	SetDialog
	(
		QSAY_BEGIN_NO,
		IDS_PROPQUEST_INC_001366
	);

	SetDialog
	(
		QSAY_END_COMPLETE1,
		IDS_PROPQUEST_INC_001367
	);

	SetDialog
	(
		QSAY_END_COMPLETE2,
		IDS_PROPQUEST_INC_001368
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001369
	);

	SetDialog
	(
		QSAY_EXTRA01,
		IDS_PROPQUEST_INC_001370
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001371
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001372
		);
		
	}
}

QUEST_HEROKNI_TRN2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001373	
	);
	
	setting
	{
	
		SetCharacter( "MaDa_Karanduru" );
		SetEndCondCharacter( "MaFl_Hormes", 7677, 4253, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY );
		SetBeginCondPreviousQuest( 1, QUEST_HEROKNI_TRN1 );
		SetBeginCondItem( -1, 0 ,-1, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_KIDLER, 1, 3890, 4280, 1 );
		QuestItem( MI_KIDLER, II_SYS_SYS_QUE_PROVGOLDHELM, 3000000000, 1 );
		SetEndCondItem( -1, 0, 1, II_SYS_SYS_QUE_PROVGOLDHELM, 1, -1, -1, QUEST_DESTINATION_ID_0017 );
		SetEndCondItem( -1, 0, 1, II_SYS_SYS_QUE_GOLDHELM, 1, 3842, 4409, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_MASNOMINATE, -1 );
		SetEndRemoveItem( 1,  II_SYS_SYS_QUE_PROVGOLDHELM, -1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001374	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001375	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001376	
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001377	
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001378
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001379
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001380
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001381
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001382
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001383
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001384
		);
		
	}
}

QUEST_HEROKNI_TRN3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001385	
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Hormes" );
		SetEndCondCharacter( "MaFl_Kurumin", 6690, 3618, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY );
		SetBeginCondPreviousQuest( 1, QUEST_HEROKNI_TRN2 );
		SetEndCondLevel( 60, 129 );
		SetEndCondItem( -1, 0, 1, II_SYS_SYS_QUE_GOLDHELM, 1, -1, -1, QUEST_DESTINATION_ID_0018 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_GOLDHELM, -1 );
		SetEndRewardItem( -1, 0, 1, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001386	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001387	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001388	
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001389
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001390
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001391
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001392
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001393
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001394
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001395
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001396
		);
		
	}
}

QUEST_HEROKNI_TRN4
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001397	
	);
	
	setting
	{
	
		SetCharacter( "MaFl_Kurumin" );
		SetEndCondCharacter( "MaDa_Lobiet", 3012, 2931, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY );
		SetBeginCondPreviousQuest( 1, QUEST_HEROKNI_TRN3 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_WHEELEM2, 8, 9563, 4117, 1 );
		QuestItem( MI_WHEELEM2, II_SYS_SYS_QUE_SOULSTONE, 3000000000, 1);
		SetEndCondItem( -1, 0, 1, II_SYS_SYS_QUE_SOULSTONE, 8, -1, -1, QUEST_DESTINATION_ID_0019 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_SOULSTONE, -1 );
		SetEndRemoveItem( 1,  II_SYS_SYS_QUE_SCRSTAMP, -1 );
		SetEndRewardItem( -1, 0, 1, II_SYS_SYS_QUE_HEROMARK, 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001398	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001399	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001400	
	);
	
	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001401	
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_001402	
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001403
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001404
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001405
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001406
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001407
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001408
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001409
		);
		
	}
}

QUEST_HEROKNI_TRN5
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001410
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Lobiet" );
		SetEndCondCharacter( "MaDa_Boneper", 3343, 2090, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY );
		SetBeginCondPreviousQuest( 1, QUEST_HEROKNI_TRN4 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_HEROMARK, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_GUARDMON1, 1, 3238, 2522, 1 );
		QuestItem( MI_GUARDMON1, II_SYS_SYS_QUE_VENHEART, 3000000000, 1 );
		SetEndCondItem( -1, 0, 1, II_SYS_SYS_QUE_VENHEART, 1, -1, -1, QUEST_DESTINATION_ID_0009 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_VENHEART, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_HEROMARK, -1);
		SetEndRewardSkillPoint(80);
		SetEndRewardHide( 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001411	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001412
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001413
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001414	
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_001415
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001416
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001417
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001418
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001419
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001420
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001421
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001421
		);
		
	}
}

QUEST_HEROBLA_TRN1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001423
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Corel" );
		SetEndCondCharacter( "MaDa_Corel", 3796, 4487, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_DRILLER2, 20, 5500, 4179, 1 );
		SetEndRewardItem( -1, 0, 1, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndRewardHide( 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001424
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001425
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001426	
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001427
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001428
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001429
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001430
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001431
	);

	SetDialog
	(
		QSAY_EXTRA01,
		IDS_PROPQUEST_INC_001432
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001433
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001434
		);
		
	}
}

QUEST_HEROBLA_TRN2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001435	
	);
	
	setting
	{
	
		SetCharacter( "MaDa_Corel" );
		SetEndCondCharacter( "MaFl_Guabrill", 7678, 4252, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY );
		SetBeginCondPreviousQuest( 1, QUEST_HEROBLA_TRN1 );
		SetBeginCondItem( -1, 0 ,-1, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondItem( -1, 0, 1, II_SYS_SYS_QUE_EARRHEREN, 1, 2987, 4768, 1 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_MASNOMINATE, -1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001436	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001437
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001438	
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001439
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001440
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001441
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001442
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001443
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001444
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001445
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001446
		);
		
	}
}

QUEST_HEROBLA_TRN3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001447	
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Guabrill" );
		SetEndCondCharacter( "MaFl_Ata", 6705, 3327, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY );
		SetBeginCondPreviousQuest( 1, QUEST_HEROBLA_TRN2 );
		SetEndCondLevel( 60, 129 );
		SetEndCondItem( -1, 0, 1, II_SYS_SYS_QUE_EARRHEREN, 1, -1, -1, QUEST_DESTINATION_ID_0015 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_EARRHEREN, -1 );
		SetEndRewardItem( -1, 0, 1, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001448	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001449	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001450	
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001451
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001452
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001453
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001454
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001455
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001456
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001457
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001458
		);
		
	}
}

QUEST_HEROBLA_TRN4
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001459	
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Ata" );
		SetEndCondCharacter( "MaDa_Jeperdy", 3526, 2792, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY );
		SetBeginCondPreviousQuest( 1, QUEST_HEROBLA_TRN3 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_SHAKALPION, 1, 8261, 2278, 1 );
		QuestItem( MI_SHAKALPION, II_SYS_SYS_QUE_TEARDARK, 3000000000, 1);
		SetEndCondItem( -1, 0, 1, II_SYS_SYS_QUE_TEARDARK, 1, -1, -1, QUEST_DESTINATION_ID_0016 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_TEARDARK, -1 );
		SetEndRemoveItem( 1,  II_SYS_SYS_QUE_SCRSTAMP, -1 );
		SetEndRewardItem( -1, 0, 1, II_SYS_SYS_QUE_HEROMARK, 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001460	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001461	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001462	
	);
	
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001463
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001464
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001465
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001466
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001467
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001468
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001469
		);
		
	}
}

QUEST_HEROBLA_TRN5
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001470
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Jeperdy" );
		SetEndCondCharacter( "MaDa_Sencyrit", 3351, 2040, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY );
		SetBeginCondPreviousQuest( 1, QUEST_HEROBLA_TRN4 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_HEROMARK, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_GUARDMON1, 1, 3238, 2522, 1 );
		QuestItem( MI_GUARDMON1, II_SYS_SYS_QUE_VENHEART, 3000000000, 1 );
		SetEndCondItem( -1, 0, 1, II_SYS_SYS_QUE_VENHEART, 1, -1, -1, QUEST_DESTINATION_ID_0009 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_VENHEART, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_HEROMARK, -1);
		SetEndRewardSkillPoint(80);
		SetEndRewardHide( 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001471	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001472	
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001473	
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_001474	
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001475
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001476
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001477
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001478
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001479
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001480
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001481
		);
		
	}
}

QUEST_HEROBIL_TRN1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001482	
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Ride" );
		SetEndCondCharacter( "MaDa_Ride", 3787, 4481, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ASSIST );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_DRILLER2, 20, 5500, 4179, 1 );
		SetEndRewardItem( -1, 0, 3, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndRewardHide( 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001483	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001484
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001485
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001486
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001487
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001488
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001489
	);

	SetDialog
	(
		QSAY_EXTRA01,
		IDS_PROPQUEST_INC_001490
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001491
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001492
		);
		
	}
}

QUEST_HEROBIL_TRN2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001493	
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Ride" );
		SetEndCondCharacter( "MaFl_Domek", 7694, 4228, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ASSIST );
		SetBeginCondPreviousQuest( 1, QUEST_HEROBIL_TRN1 );
		SetBeginCondItem( -1, 0 ,-1, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_HOIREN, 1, 9053, 4167, 1 );
		QuestItem( MI_HOIREN, II_SYS_SYS_QUE_DOCHALL, 3000000000, 1);
		SetEndCondItem( -1, 0, 3, II_SYS_SYS_QUE_DOCHALL, 1, -1, -1, QUEST_DESTINATION_ID_0020 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_MASNOMINATE, -1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001494
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001495	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001496	
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001497
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001498
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001499
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001500
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001501
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001502
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001503
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001504
		);
		
	}
}

QUEST_HEROBIL_TRN3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001505
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Domek" );
		SetEndCondCharacter( "MaFl_Segho", 7640, 4346, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ASSIST );
		SetBeginCondPreviousQuest( 1, QUEST_HEROBIL_TRN2 );
		SetEndCondLevel( 60, 129 );
		SetEndCondItem( -1, 0, 3, II_SYS_SYS_QUE_DOCHALL, 1, -1, -1, QUEST_DESTINATION_ID_0022 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_DOCHALL, -1 );
		SetEndRewardItem( -1, 0, 3, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001506	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001507	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001508	
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001509
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001510
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001511
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001512
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001513
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001514
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001515
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001516
		);
		
	}
}

QUEST_HEROBIL_TRN4
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001517
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Segho" );
		SetEndCondCharacter( "MaDa_Fera", 3524, 3547, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ASSIST );
		SetBeginCondPreviousQuest( 1, QUEST_HEROBIL_TRN3 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_STEAMWALKER2, 1, 5892, 3764, 1 );
		QuestItem( MI_STEAMWALKER2, II_SYS_SYS_QUE_MPOSTERSKILL, 3000000000, 1);
		SetEndCondItem( -1, 0, 3, II_SYS_SYS_QUE_MPOSTERSKILL, 1, -1, -1, QUEST_DESTINATION_ID_0021 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_MPOSTERSKILL, -1 );
		SetEndRemoveItem( 1,  II_SYS_SYS_QUE_SCRSTAMP, -1 );
		SetEndRewardItem( -1, 0, 3, II_SYS_SYS_QUE_HEROMARK, 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001518
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001519
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001520	
	);
	
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001521
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001522
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001523
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001524
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001525
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001526
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001527
		);
		
	}
}

QUEST_HEROBIL_TRN5
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001528	
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Fera" );
		SetEndCondCharacter( "MaDa_Capafe", 3327, 2085, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ASSIST );
		SetBeginCondPreviousQuest( 1, QUEST_HEROBIL_TRN4 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_HEROMARK, 1 );
		SetEndCondLevel( 60, 150 );
		SetEndCondKillNPC( 0, MI_GUARDMON1, 1, 3238, 2522, 1 );
		QuestItem( MI_GUARDMON1, II_SYS_SYS_QUE_VENHEART, 3000000000, 1 );
		SetEndCondItem( -1, 0, 3, II_SYS_SYS_QUE_VENHEART, 1, -1, -1, QUEST_DESTINATION_ID_0009 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_VENHEART, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_HEROMARK, -1);
		SetEndRewardSkillPoint(120);
		SetEndRewardHide( 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001529
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001530	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001531
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001532	
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001533
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001534
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001535
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001536
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001537
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001538
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001539
		);
		
	}
}

QUEST_HERORIN_TRN1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001540
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Ellend" );
		SetEndCondCharacter( "MaDa_Ellend", 3798, 4490, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ASSIST );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_DRILLER2, 20, 5500, 4179, 1 );
		SetEndRewardItem( -1, 0, 3, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndRewardHide( 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001541
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001542	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001543	
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001544	
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001545
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001546
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001547
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001548
	);

	SetDialog
	(
		QSAY_EXTRA01,
		IDS_PROPQUEST_INC_001549
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001550
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001551
		);
		
	}
}

QUEST_HERORIN_TRN2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001552	
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Ellend" );
		SetEndCondCharacter( "MaFl_Clamb", 7694, 4226, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ASSIST );
		SetBeginCondPreviousQuest( 1, QUEST_HERORIN_TRN1 );
		SetBeginCondItem( -1, 0 ,-1, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_REN, 1, 8779, 2170, 1 );
		QuestItem( MI_REN, II_SYS_SYS_QUE_MARKEIEN, 3000000000, 1);
		SetEndCondItem( -1, 0, 3, II_SYS_SYS_QUE_MARKEIEN, 1, -1, -1, QUEST_DESTINATION_ID_0023 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_MASNOMINATE, -1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001553
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001554
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001555
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001556
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001557
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001558
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001559
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001560
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001561
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001562
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001563
		);
		
	}
}

QUEST_HERORIN_TRN3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001564	
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Clamb" );
		SetEndCondCharacter( "MaFl_Teshar", 7202, 3229, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ASSIST );
		SetBeginCondPreviousQuest( 1, QUEST_HERORIN_TRN2 );
		SetEndCondLevel( 60, 129 );
		SetEndCondItem( -1, 0, 3, II_SYS_SYS_QUE_MARKEIEN, 1, -1, -1, QUEST_DESTINATION_ID_0024 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_MARKEIEN, -1 );
		SetEndRewardItem( -1, 0, 3, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001565
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001566	
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001567
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001568
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001569
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001570
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001571
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001572
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001573
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001574
		);
		
	}
}

QUEST_HERORIN_TRN4
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001575	
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Teshar" );
		SetEndCondCharacter( "MaDa_Heedan", 3273, 4250, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ASSIST );
		SetBeginCondPreviousQuest( 1, QUEST_HERORIN_TRN3 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_HUNTERX, 1, 6084, 3776, 1 );
		QuestItem( MI_HUNTERX, II_SYS_SYS_QUE_DEWEIEN, 3000000000, 1);
		SetEndCondItem( -1, 0, 3, II_SYS_SYS_QUE_DEWEIEN, 1, -1, -1, QUEST_DESTINATION_ID_0025 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_DEWEIEN, -1 );
		SetEndRemoveItem( 1,  II_SYS_SYS_QUE_SCRSTAMP, -1 );
		SetEndRewardItem( -1, 0, 3, II_SYS_SYS_QUE_HEROMARK, 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001576
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001577	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001578	
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001579
	);
	
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001580
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001581
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001582
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001583
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001584
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001585
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001586
		);
		
	}
}

QUEST_HERORIN_TRN5
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001587	
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Heedan" );
		SetEndCondCharacter( "MaDa_Romvoette", 3337, 2042, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ASSIST );
		SetBeginCondPreviousQuest( 1, QUEST_HERORIN_TRN4 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_HEROMARK, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_GUARDMON1, 1, 3238, 2522, 1 );
		QuestItem( MI_GUARDMON1, II_SYS_SYS_QUE_VENHEART, 3000000000, 1 );
		SetEndCondItem( -1, 0, 3, II_SYS_SYS_QUE_VENHEART, 1, -1, -1, QUEST_DESTINATION_ID_0009 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_VENHEART, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_HEROMARK, -1);
		SetEndRewardSkillPoint(100);
		SetEndRewardHide( 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001588	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001589	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001590	
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001591
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001592
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001593
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001594
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001595
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001596
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001597
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001598
		);
		
	}
}

QUEST_HEROPSY_TRN1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001599	
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Cylor" );
		SetEndCondCharacter( "MaDa_Cylor", 3781, 4485, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MAGICIAN );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_DRILLER2, 20, 5500, 4179, 1 );
		SetEndRewardItem( -1, 0, 4, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndRewardHide( 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001600	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001601	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001602
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001603
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001604
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001605
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001606
	);

	SetDialog
	(
		QSAY_EXTRA01,
		IDS_PROPQUEST_INC_001607
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001608
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001609
		);
		
	}
}

QUEST_HEROPSY_TRN2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001610	
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Cylor" );
		SetEndCondCharacter( "MaFl_Cuarine", 7658, 4190, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_HEROPSY_TRN1 );
		SetBeginCondItem( -1, 0 ,-1, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_KYNSY, 1, 5660, 3718, 1 );
		QuestItem( MI_KYNSY, II_SYS_SYS_QUE_UNDERSTRENGTH, 3000000000, 1);
		SetEndCondItem( -1, 0, 4, II_SYS_SYS_QUE_UNDERSTRENGTH, 1, -1, -1, QUEST_DESTINATION_ID_0026 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_MASNOMINATE, -1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001611	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001612	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001613	
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001614
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001615
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001616
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001617
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001618
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001619
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001620
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001621
		);
		
	}
}

QUEST_HEROPSY_TRN3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001622
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Cuarine" );
		SetEndCondCharacter( "MaFl_Ryupang", 7212, 3670, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_HEROPSY_TRN2 );
		SetEndCondLevel( 60, 129 );
		SetEndCondItem( -1, 0, 4, II_SYS_SYS_QUE_UNDERSTRENGTH, 1, -1, -1, QUEST_DESTINATION_ID_0027 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_UNDERSTRENGTH, -1 );
		SetEndRewardItem( -1, 0, 4, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001623
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001624
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001625
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001626
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001627
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001628
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001629
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001630
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001631
		);
		
	}
}

QUEST_HEROPSY_TRN4
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001632
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Ryupang" );
		SetEndCondCharacter( "MaDa_Pereb", 2522, 4599, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_HEROPSY_TRN3 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondItem( -1, 0, 4, II_SYS_SYS_QUE_TRAOPEREB, 1, 4056, 4458, 1 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_TRAOPEREB, -1 );
		SetEndRemoveItem( 1,  II_SYS_SYS_QUE_SCRSTAMP, -1 );
		SetEndRewardItem( -1, 0, 4, II_SYS_SYS_QUE_HEROMARK, 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001633
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001634	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001635	
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001636
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001637
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001638
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001639
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001640
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001641
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001642
		);
		
	}
}

QUEST_HEROPSY_TRN5
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001643	
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Pereb" );
		SetEndCondCharacter( "MaDa_Shyniff", 3361, 2085, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_HEROPSY_TRN4 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_HEROMARK, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_GUARDMON1, 1, 3238, 2522 );
		QuestItem( MI_GUARDMON1, II_SYS_SYS_QUE_VENHEART, 3000000000, 1 );
		SetEndCondItem( -1, 0, 4, II_SYS_SYS_QUE_VENHEART, 1, -1, -1, QUEST_DESTINATION_ID_0009 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_VENHEART, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_HEROMARK, -1);
		SetEndRewardSkillPoint(90);
		SetEndRewardHide( 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001644
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001645	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001646	
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001647
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001648
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001649
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001650
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001651
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001652
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001653
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001654
		);
		
	}
}

QUEST_HEROELE_TRN1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001655	
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Horison" );
		SetEndCondCharacter( "MaDa_Horison", 3795, 4498, 1  );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MAGICIAN );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_DRILLER2, 20, 5500, 4179, 1 );
		SetEndRewardItem( -1, 0, 4, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndRewardHide( 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001656	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001657	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001658
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001659
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001660
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001661
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001662
	);

	SetDialog
	(
		QSAY_EXTRA01,
		IDS_PROPQUEST_INC_001663
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001664
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001665
		);
		
	}
}

QUEST_HEROELE_TRN2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001666
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Horison" );
		SetEndCondCharacter( "MaFl_Cuzrill", 7656, 4191, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_HEROELE_TRN1 );
		SetBeginCondItem( -1, 0 ,-1, II_SYS_SYS_QUE_MASNOMINATE, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondItem( -1, 0, 4, II_SYS_SYS_QUE_FEATHERMANA, 1, 2968, 3046, 1 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_MASNOMINATE, -1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001667
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001668	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001669	
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001670
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001671
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001672
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001673
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001674
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001675
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001676
		);
		
	}
}

QUEST_HEROELE_TRN3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001677
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Cuzrill" );
		SetEndCondCharacter( "MaSa_Parine", 8414, 3974, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_HEROELE_TRN2 );
		SetEndCondLevel( 60, 129 );
		SetEndCondItem( -1, 0, 4, II_SYS_SYS_QUE_FEATHERMANA, 1, -1, -1, QUEST_DESTINATION_ID_0028 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_FEATHERMANA, -1 );
		SetEndRewardItem( -1, 0, 4, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001678	
	);
		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001679
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001680
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001681
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001682
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001683
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001684
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001685
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001686
		);
		
	}
}

QUEST_HEROELE_TRN4
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001687
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Parine" );
		SetEndCondCharacter( "MaDa_Condram", 3959, 3509, 1 );
		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_HEROELE_TRN3 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_SCRSTAMP, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondItem( -1, 0, 4, II_SYS_SYS_QUE_PERFLYLIP, 1, 2647, 4587, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0,  II_SYS_SYS_QUE_PERFLYLIP, -1 );
		SetEndRemoveItem( 1,  II_SYS_SYS_QUE_SCRSTAMP, -1 );
		SetEndRewardItem( -1, 0, 4, II_SYS_SYS_QUE_HEROMARK, 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001688	
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001689	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001690	
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001691
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001692
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001693
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001694
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001695
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001696
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001697
		);
		
	}
}

QUEST_HEROELE_TRN5
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001698
	);
	
	setting
	{
		
		SetCharacter( "MaDa_Condram" );
		SetEndCondCharacter( "MaDa_Wendien", 3366, 2045, 1 );

		SetBeginCondLevel( 60, 60 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_HEROELE_TRN4 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_HEROMARK, 1 );
		SetEndCondLevel( 60, 129 );
		SetEndCondKillNPC( 0, MI_GUARDMON1, 1, 3238, 2522, 1 );
		QuestItem( MI_GUARDMON1, II_SYS_SYS_QUE_VENHEART, 3000000000, 1 );
		SetEndCondItem( -1, 0, 4, II_SYS_SYS_QUE_VENHEART, 1, -1, -1, QUEST_DESTINATION_ID_0009 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_VENHEART, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_HEROMARK, -1);
		SetEndRewardSkillPoint(300);
		SetEndRewardHide( 1 );
		SetHeadQuest( 6052 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001699
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001700
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001701	
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001702	
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001703
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001704
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001705
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001706
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001707
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001708
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001709
		);
		
	}
}

QUEST_SUMMONDARK
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001710
	);
	
	setting
	{
		
		SetCharacter( "MaFl_DrEstly" );
		SetEndCondCharacter( "MaFl_DrEstly", 7187, 4090, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 35 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetEndCondLevel( 20, 129 );
		SetEndCondPatrolZone( WI_WORLD_MADRIGAL, 7609, 4283, 7625, 4265, PATROL_DESTINATION_ID_0006, 7613, 4271, QUEST_DESTINATION_ID_0000 );
		SetEndRewardExp( 1031, 1031 );
		SetHeadQuest( 6054 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001711
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001712
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001713
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001714
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001715
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001716
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001717
	);
		
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001718
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001719	
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001720
		);
		
	}
}

QUEST_PHANTASM
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001721
	);
	
	setting
	{
		
		SetCharacter( "MaFl_DrEstly" );
		SetEndCondCharacter( "MaFl_DrEstly", 7187, 4090, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 35 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_SUMMONDARK );
		SetEndCondLevel( 20, 129 );
		SetEndCondPatrolZone( WI_DUNGEON_FL_MAS, 1085, 1049, 1134, 993 );
		SetEndCondKillNPC( 0, MI_DUFEFERN2, 1, 7617, 4278, QUEST_DESTINATION_ID_0000  );
		SetEndCondKillNPC( 1, MI_DUNYANGNYANG2, 1, 7617, 4278, QUEST_DESTINATION_ID_0000  );
		SetEndRewardExp( 2060, 2060 );
		SetHeadQuest( 6054 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001722
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001723	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001724
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001725	
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001726
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001727
	);
		
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001728
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001729	
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001730
		);
		
	}
}

QUEST_SERUSURIEL
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001731
	);
	
	setting
	{
		
		SetCharacter( "MaFl_DrEstly" );
		SetEndCondCharacter( "MaFl_DrEstly", 7187, 4090, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 35 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_PHANTASM );
		SetEndCondLevel( 20, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_KEYPIECE, 5, -1, -1, QUEST_DESTINATION_ID_0082 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_KEYPIECE, -1 );
		SetEndRewardExp( 3114, 3114 );
		SetHeadQuest( 6054 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001732
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001733
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001734
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001735
	);

	SetDialog
	(
		QSAY_BEGIN5, 
		IDS_PROPQUEST_INC_001736
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001737		
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001738
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001739
	);
		
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001740
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001741	
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001742
		);
		
	}
}

QUEST_THEWAR
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001743
	);
	
	setting
	{
		
		SetCharacter( "MaFl_DrEstly" );
		SetEndCondCharacter( "MaFl_DrEstly", 7187, 4090, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 20, 35 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN );
		SetBeginCondPreviousQuest( 1, QUEST_SERUSURIEL );
		SetEndCondLevel( 20, 129 );
		SetEndCondKillNPC( 0, MI_VICEVEDUQUE, 5, -1, -1, QUEST_DESTINATION_ID_0083 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_KEY_DUGATE1, 1 );
		SetEndRewardExp( 6525, 6525 );
		SetHeadQuest( 6054 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001744
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001745	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001746
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001747
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001748		
	);	

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001749
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001750
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001751
	);

	SetDialog
	(
		QSAY_END_COMPLETE3, 
		IDS_PROPQUEST_INC_001752
	);
		
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001753
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001754	
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001755
		);
		
	}
}

QUEST_EXISTDESIRE
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001756
	);
	
	setting
	{
		
		SetCharacter( "MaDa_DarMayor" );
		SetEndCondCharacter( "MaDa_DrEst", 5541, 4352, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 70, 129 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 70, 129 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_MONBOOK1, 1 );
		SetHeadQuest( 6006 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001757
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001758
	);

	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001759	
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001760
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001761
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001762
	);
		
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001763
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001764	
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001765
		);
		
	}
}

QUEST_CLOCK1ST
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001766
	);
	
	setting
	{
		
		SetCharacter( "MaDa_DrEst" );
		SetEndCondCharacter( "MaFl_DrEstern", 7940, 2406, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 70, 129 );
		SetBeginCondPreviousQuest( 1, QUEST_EXISTDESIRE );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 70, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MONBOOK1, 1, -1, -1, QUEST_DESTINATION_ID_0043 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_WARMARK, 5, 4041, 4559, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_WARMARK, -1 );	
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_MONBOOK2, 1 );
		SetHeadQuest( 6006 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001767
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001768
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001769
	);

	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001770	
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001771
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001772
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001773
	);
		
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001774
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001775	
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001776
		);
		
	}
}

QUEST_CLOCK2ND
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001777
	);
	
	setting
	{
		
		SetCharacter( "MaFl_DrEstern" );
		SetEndCondCharacter( "MaFl_DrEstly", 7187, 4090, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 70, 129 );
		SetBeginCondPreviousQuest( 1, QUEST_CLOCK1ST );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 70, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MONBOOK1, 1, -1, -1, QUEST_DESTINATION_ID_0044 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MONBOOK2, 1, -1, -1, QUEST_DESTINATION_ID_0044 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_WOUNDWAR, 5, 6538, 3665, QUEST_DESTINATION_ID_0000 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_WARMARK, -1 );	
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_WOUNDWAR, -1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_MONBOOK3, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001778
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001779	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001780
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001781
	);

	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001782	
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001783
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001784
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001785
	);
		
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001786
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001787	
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001788
		);
		
	}
}

QUEST_ABILITYYE
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001789
	);
	
	setting
	{
		
		SetCharacter( "MaFl_DrEstly" );
		SetEndCondCharacter( "MaDa_DarMayor", 3831, 4457, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 70, 129 );
		SetBeginCondPreviousQuest( 1, QUEST_CLOCK2ND );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 70, 129 );
		SetEndCondKillNPC( 0, MI_CLOCKS, 1, 3695, 4549, QUEST_DESTINATION_ID_0000 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MONBOOK1, 1, -1, -1, QUEST_DESTINATION_ID_0045 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MONBOOK2, 1, -1, -1, QUEST_DESTINATION_ID_0045 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_MONBOOK3, 1, -1, -1, QUEST_DESTINATION_ID_0045 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_MONBOOK1, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_MONBOOK3, -1 );
		SetEndRemoveItem( 2, II_SYS_SYS_QUE_MONBOOK2, -1 );
		SetEndRewardExp( 36778455, 36778455 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001790
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001791	
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_001792
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_001793
	);

	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001794
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001795
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001796
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001797
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001798		
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001799
		);
		
	}
}

QUEST_CREGUILD
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001800
	);
	
	setting
	{
		
		SetCharacter( "MaSa_Helena" );
		SetEndCondCharacter( "MaSa_Helena", 8463, 3600, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 40, 129 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 40, 129 );
		SetEndCondParty( 2, 0, 3, 2 );
		SetHeadQuest( 6005 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001801
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001802
	);

		
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001803
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001804
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001805
	);

	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_001806	
	);

	SetDialog
	(
		QSAY_END_COMPLETE3,
		IDS_PROPQUEST_INC_001807	
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_001808	
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001809
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001810
		);
		
	}
}


QUEST_RICECAKE1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001811
	);
	
	setting
	{

		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Iblis01" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SONGPYUN, 1000 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SONGPYUN, 1000 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_REDBALL, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001812
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001813
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001814 
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001815
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001816
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001817
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001818
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001819
		);
		
	}
}

QUEST_RICECAKE2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001820
	);
	
	setting
	{

		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Iblis02" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SONGPYUN, 600 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SONGPYUN, 600 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_ORANGEBALL, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001821
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001822
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001823
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001824
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001825
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001826
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001827
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001828
		);
		
	}
}

QUEST_RICECAKE3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001829
	);
	
	setting
	{

		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Iblis03" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SONGPYUN, 300 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SONGPYUN, 300 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_YELLOWBALL, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001830
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001831
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001832
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001833
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001834
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001835
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001836
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001837
		);
		
	}
}

QUEST_RICECAKE4
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001838
	);
	
	setting
	{

		SetHeadQuest( 1992 );	
		SetRepeat(1);
		SetCharacter( "MaFl_Iblis04" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SONGPYUN, 100 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SONGPYUN, 100 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_GREENBALL, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001839
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001840
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001841
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001842
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001843
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001844
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001845
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001846
		);
		
	}
}

QUEST_RICECAKE5
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001847
	);
	
	setting
	{
	
		SetHeadQuest( 1992 );		
		SetRepeat(1);
		SetCharacter( "MaFl_Iblis05" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SONGPYUN, 50 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SONGPYUN, 50 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_BLUEBALL, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001848
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001849
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001850
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001851
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001852
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001853
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001854
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001855
		);
		
	}
}

QUEST_AUTUMNEVENT01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001856
	);
	
	setting
	{

		SetHeadQuest( 1992 );		
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_LEAF01, 100 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_LEAF01, 100 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_SEEDLING01, 1 );
	
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001857
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001858
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001859
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001860
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001861
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001862
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001863
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001864
		);
		
	}
}

QUEST_AUTUMNEVENT02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001865
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_LEAF01, 300 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_LEAF01, 300 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_SEEDLING02, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001866
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001867
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001868
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001869
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001870
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001871
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001872
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001873
		);
		
	}
}

QUEST_AUTUMNEVENT03
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001874
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_LEAF01, 600 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_LEAF01, 600 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_SEEDLING03, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001875
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001876
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001877
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001878
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001879
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001880
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001881
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001882
		);
		
	}
}

QUEST_AUTUMNEVENT04
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001883
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_LEAF01, 1000 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_LEAF01, 1000 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_SEEDLING04, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001884
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001885
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001886
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001887
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001888
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001889
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001890
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001891
		);
		
	}
}

QUEST_PKMINUS
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001892
	);
	
	setting
	{
           	SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaMa_PKNPC01" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
                SetBeginCondNotItem( -1, 0, -1, II_SYS_SYS_QUE_ANGEL_RED100, 1 );
                SetBeginCondNotItem( -1, 0, -1, II_SYS_SYS_QUE_ANGEL_BLUE100, 1 );		
                SetBeginCondNotItem( -1, 0, -1, II_SYS_SYS_QUE_ANGEL_GREEN100, 1 );	
                SetBeginCondNotItem( -1, 0, -1, II_SYS_SYS_QUE_ANGEL_WHITE100, 1 );	
                SetBeginCondPKValue( 1 );
                SetEndCondOneItem( -1, 0, -1, II_SYS_SYS_QUE_ANGEL_RED100, 1 );
                SetEndCondOneItem( -1, 0, -1, II_SYS_SYS_QUE_ANGEL_BLUE100, 1 );		
                SetEndCondOneItem( -1, 0, -1, II_SYS_SYS_QUE_ANGEL_GREEN100, 1 );	
                SetEndCondOneItem( -1, 0, -1, II_SYS_SYS_QUE_ANGEL_WHITE100, 1 );
                SetEndCondGold(1000000);
                SetEndRemoveGold(1000000);
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_ANGEL_RED100, -1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_ANGEL_BLUE100, -1 );
		SetEndRemoveItem( 2, II_SYS_SYS_QUE_ANGEL_GREEN100, -1 );
		SetEndRemoveItem( 3, II_SYS_SYS_QUE_ANGEL_WHITE100, -1 );
                SetEndRewardPKValue( 1, 5 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001893
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001894
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001895
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001896
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001897
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001898
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001899
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001900
		);
		
	}
}
QUEST_TEACHER01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001901
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Teacher01" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SCHOOL01, 50 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SCHOOL01, 50 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXSCHOOL01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001902
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001903
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001904
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001905
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001906
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001907
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001908
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001909
		);
		
	}
}

QUEST_TEACHER02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001910
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Teacher02" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SCHOOL01, 150 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SCHOOL01, 150 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXSCHOOL02, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001911
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001912
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001913
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001914
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001915
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001916
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001917
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001918
		);
		
	}
}

QUEST_TEACHER03
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001919
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Teacher03" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SCHOOL01, 300 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SCHOOL01, 300 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXSCHOOL03, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001920
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001921
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001922
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001923
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001924
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001925
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001926
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001927
		);
		
	}
}

QUEST_COOKER01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001928
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Cooker01" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHOCOLATE01, 10 );
		SetEndCondItem( -1, 0, -1, II_GEN_FOO_INS_MILK, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CHOCOLATE01, 10 );
		SetEndRemoveItem( 1, II_GEN_FOO_INS_MILK, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXCHOCOLATE01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001929
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001930
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001931
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001932
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001933
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001934
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001935
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001936
		);
		
	}
}

QUEST_COOKER02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001937
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Cooker02" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_BXCHOCOLATE01, 50 );
		SetEndRemoveItem( 0, II_SYS_SYS_SCR_BXCHOCOLATE01, 50 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXCHOCOLATE02, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001938
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001939
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001940
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001941
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001942
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001943
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001944
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001945
		);
		
	}
}

QUEST_ARBORDAY01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001946
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Arborday01" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_YOUNGSEEDING, 50 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_YOUNGSEEDING, 50 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXARBORDAY05, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001947
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001948
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001949
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001950
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001951
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001952
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001953
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001954
		);
		
	}
}

QUEST_ARBORDAY02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001955
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Arborday02" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_YOUNGSEEDING, 150 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_YOUNGSEEDING, 150 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXARBORDAY06, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001956
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001957
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001958
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001959
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001960
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001961
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001962
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001963
		);
		
	}
}


QUEST_ARBORDAY03
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001964
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Arborday03" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_YOUNGSEEDING, 200 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_YOUNGSEEDING, 200 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXARBORDAY07, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001965
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001966
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001967
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001968
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001969
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001970
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001971
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001972
		);
		
	}
}


QUEST_ARBORDAY04
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001973
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Arborday04" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_YOUNGSEEDING, 500 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_YOUNGSEEDING, 500 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXARBORDAY08, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001974
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001975
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001976
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001977
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001978
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001979
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001980
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001981
		);
		
	}
}

QUEST_KAWIBAWIBO02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_001992
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_MOSQUITO, 10 );
		SetEndCondGold(50000);
                SetEndRemoveGold(50000);
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_MOSQUITO, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_KAWIBAWIBO, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_001993
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_001994
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_001995
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_001996
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_001997
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_001998
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_001999
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002000
		);
		
	}
}

QUEST_VOLCANETELEPORT
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002001
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaDa_RedRobeMan" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_PHANBUBLE, 1 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_PHANBUBLE, 1 );
                SetEndRewardTeleport( 203, 1394, 150, 544)
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002002
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002003
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002004
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002005
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002006
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002007
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002008
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002009
		);
		
	}
}

QUEST_PETTAME01 
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002010
	);
	
	setting
	{
		
		SetRepeat(1);
		SetCharacter( "MaFl_PetTamer" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPetLevel( 0 );
		SetEndCondPetLevel( 0 );
		SetEndCondPetExp( 100 );
		SetEndRewardPetLevelup();
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002011
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002012
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002013
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002014
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002015
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002016
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002017
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002018
		);
		
	}
}

QUEST_PETTAME02 
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002019
	);
	
	setting
	{
		
		SetRepeat(1);
		SetCharacter( "MaFl_PetTamer" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPetLevel( 1 );
		SetEndCondPetLevel( 1 );
		SetEndCondPetExp( 100 );
		SetEndRewardPetLevelup();
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002020
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002021
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002022
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002023
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002024
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002025
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002026
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002027
		);
		
	}
}

QUEST_PETTAME03 
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002028
	);
	
	setting
	{
		
		SetRepeat(1);
		SetCharacter( "MaFl_PetTamer" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPetLevel( 2 );
		SetEndCondPetLevel( 2 );
		SetEndCondPetExp( 100 );
		SetEndRewardPetLevelup();
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002029
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002030
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002031
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002032
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002033
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002034
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002035
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002036
		);
		
	}
}

QUEST_PETTAME04 
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002037
	);
	
	setting
	{
	
		SetRepeat(1);
		SetCharacter( "MaFl_PetTamer" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPetLevel( 3 );
		SetEndCondPetLevel( 3 );
		SetEndCondPetExp( 100 );
		SetEndRewardPetLevelup();
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002038
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002039
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002040
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002041
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002042
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002043
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002044
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002045
		);
		
	}
}

QUEST_PETTAME05 
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002046
	);
	
	setting
	{
		
		SetRepeat(1);
		SetCharacter( "MaFl_PetTamer" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondPetLevel( 4 );
		SetEndCondPetLevel( 4 );
		SetEndCondPetExp( 100 );
		SetEndRewardPetLevelup();
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002047
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002048
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002049
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002050
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002051
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002052
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002053
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002054
		);
		
	}
}

QUEST_MASTER 
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002055
	);
	
	setting
	{
		
		SetCharacter( "MaDa_RedRobeGirl" );
		SetEndCondCharacter( "MaDa_RedRobeGirl", 1034, 959, 1 );
		SetBeginCondLevel( 120, 120 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 120, 120 );
		SetEndCondExpPercent( 9999, 9999 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_CRUETMUF, 10, 3968, 2663, 1 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_SHIFTPOP, 5, 4092, 2574, 1 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_CRUETMUF, 10 );
		SetEndRemoveItem( 1, II_GEN_GEM_GEM_SHIFTPOP, 5 );
		SetEndRewardSkillPoint(400);
		SetHeadQuest( 6060 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002056
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002057
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002058
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002059
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002060
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002061
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002062
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002063
		);
		
	}
}

QUEST_HERO 
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002064
	);
	
	setting
	{
	
		SetCharacter( "MaDa_RedRobeGirl" );
		SetEndCondCharacter( "MaDa_RedRobeGirl", 1034, 959, 1 );
		SetBeginCondLevel( 120, 120 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER );
		SetEndCondLevel( 120, 120 );
		SetEndCondExpPercent( 9999, 9999 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_DRAGONHEART, 5, -1, -1, QUEST_DESTINATION_ID_0004 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_DRAGONCANINE, 10, -1, -1, QUEST_DESTINATION_ID_0004 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_STRANGEEYES, 10, -1, -1, QUEST_DESTINATION_ID_0012 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_DRAGONHEART, 5 );
		SetEndRemoveItem( 1, II_GEN_GEM_GEM_DRAGONCANINE, 10 );
		SetEndRemoveItem( 2, II_GEN_GEM_GEM_STRANGEEYES, 10 );
		SetHeadQuest( 6060 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002065
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002066
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002067
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002068
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002069
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002070
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002071
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002072
		);
		
	}
}

QUEST_JULY01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002073
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_July01" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_BLUETANZAKU, 10 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_PINKTANZAKU, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_BLUETANZAKU, 10 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_PINKTANZAKU, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXHEART01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002074
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002075
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002076
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002077
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002078
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002079
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002080
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002081
		);
		
	}
}

QUEST_JULY02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002082
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_July02" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_BXHEART01, 50 );
		SetEndRemoveItem( 0, II_SYS_SYS_SCR_BXHEART01, 50 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXLOVE01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002083
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002084
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002085
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002086
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002087
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002088
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002089
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002090
		);
		
	}
}

QUEST_NESTLE02_1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002091
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Nestle02_1" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NESCAFE04, 50 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NESCAFE04, 50 );
		SetEndRewardItem( -1, 0, -1, II_RID_RID_BOA_NESCAFE01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002092
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002093
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002094
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002095
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002096
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002097
		);
		
	}
}

QUEST_NESTLE02_2
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002098
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Nestle02_2" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NESCAFE05, 50 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NESCAFE05, 50 );
		SetEndRewardItem( -1, 0, -1, II_RID_RID_BOA_NESCAFE02, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002099
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002100
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002101
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002102
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002103
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002104
		);
		
	}
}

QUEST_NESTLE02_3
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002105
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Nestle02_3" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NESCAFE06, 50 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NESCAFE06, 50 );
		SetEndRewardItem( -1, 0, -1, II_RID_RID_BOA_NESCAFE03, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002106
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002107
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002108
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002109
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002110
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002111
		);
		
	}
}

QUEST_NESTLE03
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002112
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Nestle03" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR);
		SetEndCondItem( -1, 0, -1, II_RID_RID_BOA_NESCAFE01, 1 );
		SetEndCondItem( -1, 0, -1, II_RID_RID_BOA_NESCAFE02, 1 );
		SetEndCondItem( -1, 0, -1, II_RID_RID_BOA_NESCAFE03, 1 );
		SetEndCondGold(50000000);
		SetEndRemoveItem( 0, II_RID_RID_BOA_NESCAFE01, 1 );
		SetEndRemoveItem( 1, II_RID_RID_BOA_NESCAFE02, 1 );
		SetEndRemoveItem( 2, II_RID_RID_BOA_NESCAFE03, 1 );
                SetEndRemoveGold(50000000);
		SetEndRewardItem( -1, 0, -1, II_RID_RID_STI_NESCAFE01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002113
	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002114
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002115
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002116
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002117
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002118
		);
		
	}
}

QUEST_SANTA01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002128
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Santa01" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_GOLDENAPPLE, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_GOLDENAPPLE, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_REDSOCKS, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002129

	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002130
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002131
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002132
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002133
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002134
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002135
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002136
		);
		
	}
}

QUEST_SANTA02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002137
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_StrangeCollector" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_REDSOCKS, 5 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_REDSOCKS, 5 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXSHINE, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002138

	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002139
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002140
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002141
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002142
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002143
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002144
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002145
		);
		
	}
}

QUEST_COLLECTOR
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002146
	);
	
	setting
	{
		
		SetRepeat(0);
		SetCharacter( "MaFl_CollectorManager" );
		SetBeginCondLevel( 15, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXCOLLECTOR, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002147

	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002148
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002149
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002150
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002151
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002152
		);
		
	}
}

QUEST_DARKON
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002153
	);
	
	setting
	{
		
		SetRepeat(1);
		SetCharacter( "MaFl_ForestManager" );
		SetBeginCondLevel( 15, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SEED, 10 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CRYSTAL, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SEED, 10 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_CRYSTAL, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXGREEN, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002154

	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002155
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002156
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002157
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002158
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002159
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002160
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002161
		);
		
	}
}

QUEST_KAWIBAWIBO03
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002162
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaSa_Karin_EVENT" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_PUMPKIN01, 5 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_PUMPKIN01, 5 );
		SetEndCondGold( 100000 );
		SetEndRemoveGold( 100000 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_KAWIBAWIBO, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002163

	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002164
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002165
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002166
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002167
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002168
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002169
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002170
		);
		
	}
}

QUEST_DARKON02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002171
	);
	
	setting
	{
		
		SetRepeat(1);
		SetCharacter( "MaFl_ForestManager02" );
		SetBeginCondLevel( 15, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SEED, 10 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CRYSTAL, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SEED, 10 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_CRYSTAL, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXGREEN02, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002172

	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002173
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002174
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002175
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002176
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002177
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002178
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002179
		);
		
	}
}

QUEST_PREPAIDCARD
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002180
	);
	
	setting
	{
		
		SetRepeat(1);
		SetCharacter( "MaFl_PrepaidCard" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_COUPON01, 1 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_COUPON01, 1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_BXLUCKY, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002181

	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002182
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002183
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_002184
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002185
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002186
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002187
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002188
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002189
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002190
		);
		
	}
}


QUEST_TUTORIAL01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002191
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Lui" );
		SetEndCondCharacter( "MaFl_Boboko", 6926, 3229, QUEST_DESTINATION_ID_0000 );
		SetBeginCondTutorialState( 16 );
		SetBeginCondLevel( 1, 5 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndRewardExp( 4, 4 );
		SetEndRewardGold( 100, 100 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002192

	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002193
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002194
	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_002195
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002196
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002197
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002198
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002199
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002200
		);
		
	}
}

QUEST_TUTORIAL02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002201
	);
	
	setting
	{
	
		SetCharacter( "MaFl_Boboko" );
		SetEndCondCharacter( "MaFl_Boboku", 6926, 3232, QUEST_DESTINATION_ID_0000 );
		SetBeginCondPreviousQuest( 1, QUEST_TUTORIAL01 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndRewardExp( 5, 5 );
		SetEndRewardGold( 500, 500 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002202

	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002203
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002204
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002205
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002206
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002207
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002208
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002209
		);
		
	}
}

QUEST_TUTORIAL03
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002210
	);
	
	setting
	{
	
		SetCharacter( "MaFl_Boboku" );
		SetEndCondCharacter( "MaFl_Luda", 6927, 3236, QUEST_DESTINATION_ID_0000 );
		SetBeginCondPreviousQuest( 1, QUEST_TUTORIAL02 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndRewardExp( 5, 5 );
		SetEndRewardGold( 1000, 1000 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002211

	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002212
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002213
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002214
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002215
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002216
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002217
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002218
		);
		
	}
}

QUEST_TUTORIAL04
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002219
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Luda" );
		SetEndCondCharacter( "MaFl_Losha", 7172, 3212, QUEST_DESTINATION_ID_0000 );
		SetBeginCondPreviousQuest( 1, QUEST_TUTORIAL03 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, 0, II_WEA_SWO_LONG, 1, -1, -1, QUEST_DESTINATION_ID_0091 );
		SetEndRewardItem( -1, 0, 0, II_ARM_ARM_SHI_GREEN, 1 );
		SetEndRewardExp( 6, 6 );
		SetEndRewardGold( 1200, 1200 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002220

	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002221
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002222
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002223
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002224
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002225
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002226
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002227
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002228
		);
		
	}
}

QUEST_TUTORIAL05
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002229
	);
	
	setting
	{
	
		SetCharacter( "MaFl_Losha" );
		SetEndCondCharacter( "MaFl_Luda", 6927, 3236, QUEST_DESTINATION_ID_0000 );
		SetBeginCondPreviousQuest( 1, QUEST_TUTORIAL04 );
		SetBeginCondLevel( 1, 5 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondKillNPC( 0, MI_AIBATT1, 15, 7117, 3334, QUEST_DESTINATION_ID_0000 );
		SetEndRewardExp( 20, 20 );
		SetEndRewardGold( 1500, 1500 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002230

	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002231
	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002232
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002233
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002234
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002235
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002236
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002237
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002238
		);
		
	}
}

QUEST_TUTORIAL06
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002239
	);
	
	setting
	{
		
		SetCharacter( "MaFl_Luda" );
		SetEndCondCharacter( "MaFl_Luda", 6927, 3236, QUEST_DESTINATION_ID_0000 );
		SetBeginCondPreviousQuest( 1, QUEST_TUTORIAL05 );
		SetBeginCondLevel( 1, 5 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondKillNPC( 0, MI_MUSHPANG1, 15, 7118, 3545, QUEST_DESTINATION_ID_0000 );
		SetEndCondKillNPC( 1, MI_MUSHPANG2, 15, 7118, 3545, QUEST_DESTINATION_ID_0000 );
		SetEndRewardExp( 22, 22 );
		SetEndRewardGold( 10000, 10000 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002240

	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002241
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002242
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002243
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002244
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002245
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002246
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002247
		);
		
	}
}


QUEST_JULY03
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002248
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_July03" );
		SetEndCondCharacter( "MaFl_July04" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SILK01, 5 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_SILK01, 5 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_SILK02, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002249

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002250
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002251
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002252
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002253
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002254
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002255
		);
		
	}
}

QUEST_JULY04
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002256
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_July04" );
		SetEndCondCharacter( "MaFl_July03" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SILK02, 3 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_SILK02, 3 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXFESTIVAL02, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002257

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002258
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002259
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002260
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002261
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002262
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002263
		);
		
	}
}

QUEST_MINIWHEEL
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002264
	);
	
	setting
	{
		SetHeadQuest( 1992 );	
		SetCharacter( "MaFl_MiniWheel" );
		SetEndCondCharacter( "MaFl_MiniWheel" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_MINIWHEEL, 200 );
		SetEndRemoveItem( 1, II_SYS_SYS_SCR_MINIWHEEL, 200 );
		SetEndRewardItem( -1, 0, -1, II_CHR_FOO_COO_REMANTIS, 10 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002265

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002266
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002267
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002268
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002269
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002270
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002271
		);
		
	}
}

QUEST_EVENTBALL
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002272
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetCharacter( "MaFl_EventBall" );
		SetEndCondCharacter( "MaFl_EventBall" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_EVENTBALL01, 300 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_EVENTBALL01, 300 );
		SetEndRewardItem( -1, 0, -1, II_GEN_MAT_ORICHALCUM01, 5 );
		SetEndRewardItem( -1, 0, -1, II_GEN_MAT_MOONSTONE, 5 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002273

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002274
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002275
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002276
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002277
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002278
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002279
		);
		
	}
}

QUEST_HALLOWEEN01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002280
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CANDLE01, 2 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHARM01, 2 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CANDLE01, 2 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_CHARM01, 2 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_STATUE01, 4 );	
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002281

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002282

	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002283

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002284
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002285
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002286
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002287
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002288
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002289
		);
		
	}
}

QUEST_HALLOWEEN02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002290
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetBeginCondPreviousQuest( 1, QUEST_HALLOWEEN01 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CANDLE01, 2 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHARM01, 2 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CANDLE01, 2 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_CHARM01, 2 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_SALT01, 4 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002291

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002292

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002293
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002294
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002295
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002296
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002297
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002298
		);
		
	}
}

QUEST_HALLOWEEN03
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002299
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetBeginCondPreviousQuest( 1, QUEST_HALLOWEEN02 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CANDLE01, 2 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHARM01, 2 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CANDLE01, 2 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_CHARM01, 2 );
		SetEndRewardItem( -1, 0, -1, II_WEA_SWO_UMBRELLA01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002300

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002301

	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002302

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002303
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002304
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002305
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002306
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002307
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002308
		);
		
	}
}

QUEST_SNOWMAN01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002309
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SNOW01, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SNOW01, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_BALLOON, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002310

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002311

	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002312

	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_002313

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002314
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002315
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002316
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002317
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002318
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002319
		);
		
	}
}

QUEST_SNOWMAN02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002320
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetBeginCondPreviousQuest( 1, QUEST_SNOWMAN01 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SNOWANGEL01, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SNOWANGEL01, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_BALLOON01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002321

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002322

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002323
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002324
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002325
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002326
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002327
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002328
		);
		
	}
}

QUEST_SNOWMAN03
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002329
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetBeginCondPreviousQuest( 1, QUEST_SNOWMAN02 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_BALLOON02, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002330

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002331
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002332
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002333
	);
	 
	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_002334
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002319
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002335
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002336
		);
		
	}
}


QUEST_GRAHOO01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002345
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Grahoo" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHOCOLATE05, 5 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_FRESHCREAM01, 5 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CHOCOLATE05, 5 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_FRESHCREAM01, 5 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_CHOCOLATE06, 1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_CHOCOLATE07, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002346

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002347

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002348
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002349
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002350
	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002351
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002352
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002353
		);
		
	}
}

QUEST_WHATE2009
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002362
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_COTTONCANDYRED, 3 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_COTTONCANDYBLUE, 3 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_COTTONCANDYGREEN, 3 );
		SetEndRemoveItem( 0, II_SYS_SYS_SCR_COTTONCANDYRED, 3 );
		SetEndRemoveItem( 1, II_SYS_SYS_SCR_COTTONCANDYBLUE, 3 );
		SetEndRemoveItem( 2, II_SYS_SYS_SCR_COTTONCANDYGREEN, 3 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_CANDY01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002363

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002364
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002365
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002366
	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002367
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002368
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002369
		);
		
	}
}

QUEST_ABEROO01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002370
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(0);
		SetCharacter( "MaFl_Aberoo" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondItem( -1, 1, -1, II_SYS_SYS_EVE_CHOCOLATE07, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHOCOLATE07, 3 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CHOCOLATE07, 3 );
		SetEndRewardItem( -1, 0, -1, II_WEA_SWO_BAMBOO, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002371

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002372
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002373
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002374
	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002375
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002376
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002377
		);
		
	}
}

QUEST_ABEROO02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002378
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Aberoo" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SYRUP01, 5 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_PETAL01, 5 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SYRUP01, 5 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_PETAL01, 5 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_BOX01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002379

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002380

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002381
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002382
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002383
	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002384
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002385
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002386
		);
		
	}
}

QUEST_COOK01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002387
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Cook01" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SALT02, 10 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_MEAT01, 10 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_PUMPKIN01, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SALT02, 10 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_MEAT01, 10 );
		SetEndRemoveItem( 2, II_SYS_SYS_EVE_PUMPKIN01, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_BXCOOKING01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002388

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002389

	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002390

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002391
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002392
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002393
	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002394
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002395
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002396
		);
		
	}
}

QUEST_ALICE01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002397
	);
	
	setting
	{
		
		SetRepeat(0);
		SetCharacter( "MaFl_Alice", LANG_KOR );
		SetEndCondCharacter( "MaFl_Alice", -1, -1, QUEST_DESTINATION_ID_0046 );
		SetBeginCondLevel( 60, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_GIANTFORCEPS, 100, -1, -1, QUEST_DESTINATION_ID_0047 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_INKSAC, 150, -1, -1, QUEST_DESTINATION_ID_0047 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_CATBELL, 200, -1, -1, QUEST_DESTINATION_ID_0049 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_MINIWHEEL, 1000, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_WHEEL, 1000, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_SCRAPTOPAZ, 20, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_GIANTFORCEPS, 100 );
		SetEndRemoveItem( 1, II_GEN_GEM_GEM_INKSAC, 150 );
		SetEndRemoveItem( 2, II_GEN_GEM_GEM_CATBELL, 200 );
		SetEndRemoveItem( 3, II_SYS_SYS_SCR_MINIWHEEL, 1000 );
		SetEndRemoveItem( 4, II_SYS_SYS_SCR_WHEEL, 1000 );
		SetEndRemoveItem( 5, II_SYS_SYS_SCR_SCRAPTOPAZ, 20 );
		SetEndRewardItem( -1, 0, -1, II_ARM_S_CLO_CLO_SCHOOL_1, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002398

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002399
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002400
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002401
	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002402
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002403
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002404
		);
		
	}
}

QUEST_ALICE02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002405
	);
	
	setting
	{
	
		SetRepeat(0);
		SetCharacter( "MaFl_Alice", LANG_KOR );
		SetEndCondCharacter( "MaFl_Alice", -1, -1, QUEST_DESTINATION_ID_0046 );
		SetBeginCondLevel( 70, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_ALICE01 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_CARAPACE, 150, -1, -1, QUEST_DESTINATION_ID_0047 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_CRISPHAIR, 200, -1, -1, QUEST_DESTINATION_ID_0047 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_HARPYFEATHER, 250, -1, -1, QUEST_DESTINATION_ID_0049 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_MINIWHEEL, 1500, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_WHEEL, 1500, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_SCRAPMOONSTONE, 20, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_CARAPACE, 150 );
		SetEndRemoveItem( 1, II_GEN_GEM_GEM_CRISPHAIR, 200 );
		SetEndRemoveItem( 2, II_GEN_GEM_GEM_HARPYFEATHER, 250 );
		SetEndRemoveItem( 3, II_SYS_SYS_SCR_MINIWHEEL, 1500 );
		SetEndRemoveItem( 4, II_SYS_SYS_SCR_WHEEL, 1500 );
		SetEndRemoveItem( 5, II_SYS_SYS_SCR_SCRAPMOONSTONE, 20 );
		SetEndRewardItem( -1, 0, -1, II_ARM_S_CLO_CLO_GAIA_1, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002406

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002407
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002408
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002409
	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002410
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002411
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002412
		);
		
	}
}

QUEST_ALICE03
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002413
	);
	
	setting
	{
		
		SetRepeat(0);
		SetCharacter( "MaFl_Alice", LANG_KOR );
		SetEndCondCharacter( "MaFl_Alice", -1, -1, QUEST_DESTINATION_ID_0046 );
		SetBeginCondLevel( 80, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_ALICE02 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_BROKENWINGS, 200, -1, -1, QUEST_DESTINATION_ID_0047 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_CROWN, 250, -1, -1, QUEST_DESTINATION_ID_0047 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_POLEVIKMUD, 300, -1, -1, QUEST_DESTINATION_ID_0050 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_MINIWHEEL, 2000, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_WHEEL, 2000, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_SCRAPORICHALCUM, 20, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_BROKENWINGS, 200 );
		SetEndRemoveItem( 1, II_GEN_GEM_GEM_CROWN, 250 );
		SetEndRemoveItem( 2, II_GEN_GEM_GEM_POLEVIKMUD, 300 );
		SetEndRemoveItem( 3, II_SYS_SYS_SCR_MINIWHEEL, 2000 );
		SetEndRemoveItem( 4, II_SYS_SYS_SCR_WHEEL, 2000 );
		SetEndRemoveItem( 5, II_SYS_SYS_SCR_SCRAPORICHALCUM, 20 );
		SetEndRewardItem( -1, 0, -1, II_ARM_S_CLO_CLO_DRAGON_1, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002414

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002415
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002416
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002417
	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002418
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002419
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002420
		);
		
	}
}

QUEST_ALICE04
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002421
	);
	
	setting
	{
		
		SetRepeat(0);
		SetCharacter( "MaFl_Alice", LANG_KOR );
		SetEndCondCharacter( "MaFl_Alice", -1, -1, QUEST_DESTINATION_ID_0046 );
		SetBeginCondLevel( 90, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_ALICE03 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_CANINETOOTH, 250, -1, -1, QUEST_DESTINATION_ID_0047 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_SHARPTOOTH, 300, -1, -1, QUEST_DESTINATION_ID_0047 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_BADTONGUE, 350, -1, -1, QUEST_DESTINATION_ID_0050 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_MINIWHEEL, 3000, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_WHEEL, 3000, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_SCRAPRUBY, 20, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_CANINETOOTH, 250 );
		SetEndRemoveItem( 1, II_GEN_GEM_GEM_SHARPTOOTH, 300 );
		SetEndRemoveItem( 2, II_GEN_GEM_GEM_BADTONGUE, 350 );
		SetEndRemoveItem( 3, II_SYS_SYS_SCR_MINIWHEEL, 3000 );
		SetEndRemoveItem( 4, II_SYS_SYS_SCR_WHEEL, 3000 );
		SetEndRemoveItem( 5, II_SYS_SYS_SCR_SCRAPRUBY, 20 );
		SetEndRewardItem( -1, 0, -1, II_ARM_S_CLO_CLO_DAEHAN_1, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002422

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002423
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002424
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002425
	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002426
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002427
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002428
		);
		
	}
}

QUEST_ALICE05
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002429
	);
	
	setting
	{
	
		SetRepeat(0);
		SetCharacter( "MaFl_Alice", LANG_KOR );
		SetEndCondCharacter( "MaFl_Alice", -1, -1, QUEST_DESTINATION_ID_0046 );
		SetBeginCondLevel( 100, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_ALICE04 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_GOGGLOO, 300, -1, -1, QUEST_DESTINATION_ID_0047 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_GREENCRYSTAL, 350, -1, -1, QUEST_DESTINATION_ID_0048 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_HAGNAIL, 400, -1, -1, QUEST_DESTINATION_ID_0051 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_MINIWHEEL, 4000, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_WHEEL, 4000, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_SCRAPSAPPHIRE, 20, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_GOGGLOO, 300 );
		SetEndRemoveItem( 1, II_GEN_GEM_GEM_GREENCRYSTAL, 350 );
		SetEndRemoveItem( 2, II_GEN_GEM_GEM_HAGNAIL, 400 );
		SetEndRemoveItem( 3, II_SYS_SYS_SCR_MINIWHEEL, 4000 );
		SetEndRemoveItem( 4, II_SYS_SYS_SCR_WHEEL, 4000 );
		SetEndRemoveItem( 5, II_SYS_SYS_SCR_SCRAPSAPPHIRE, 20 );
		SetEndRewardItem( -1, 0, -1, II_ARM_S_CLO_CLO_DRAGON1_1, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002430

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002431
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002432
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002433
	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002434
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002435
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002436
		);
		
	}
}

QUEST_ALICE06
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002437
	);
	
	setting
	{
		
		SetRepeat(0);
		SetCharacter( "MaFl_Alice", LANG_KOR );
		SetEndCondCharacter( "MaFl_Alice", -1, -1, QUEST_DESTINATION_ID_0046 );
		SetBeginCondLevel( 110, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_ALICE05 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_THOTHBEAK, 350, -1, -1, QUEST_DESTINATION_ID_0051 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_BLUECRYSTAL, 400, -1, -1, QUEST_DESTINATION_ID_0048 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_REDCRYSTAL, 450, -1, -1, QUEST_DESTINATION_ID_0048 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_KHNEMUCORNU, 500, -1, -1, QUEST_DESTINATION_ID_0052 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_MINIWHEEL, 6000, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_WHEEL, 6000, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_SCRAPEMERALD, 15, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_THOTHBEAK, 350 );
		SetEndRemoveItem( 1, II_GEN_GEM_GEM_BLUECRYSTAL, 400 );
		SetEndRemoveItem( 2, II_GEN_GEM_GEM_REDCRYSTAL, 450 );
		SetEndRemoveItem( 3, II_GEN_GEM_GEM_KHNEMUCORNU, 500 );
		SetEndRemoveItem( 4, II_SYS_SYS_SCR_MINIWHEEL, 6000 );
		SetEndRemoveItem( 5, II_SYS_SYS_SCR_WHEEL, 6000 );
		SetEndRemoveItem( 6, II_SYS_SYS_SCR_SCRAPEMERALD, 15 );
		SetEndRewardItem( -1, 0, -1, II_ARM_S_CLO_TAEGUK_1, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002438

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002439
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002440
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002441
	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002442
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002443
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002444
		);
		
	}
}

QUEST_ALICE07
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002445
	);
	
	setting
	{
		
		SetRepeat(0);
		SetCharacter( "MaFl_Alice", LANG_KOR );
		SetEndCondCharacter( "MaFl_Alice", -1, -1, QUEST_DESTINATION_ID_0046 );
		SetBeginCondLevel( 120, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondPreviousQuest( 1, QUEST_ALICE06 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_DATALBALL, 400, -1, -1, QUEST_DESTINATION_ID_0051 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_YELLOWCRYSTAL, 450, -1, -1, QUEST_DESTINATION_ID_0048 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_GANESALVORY, 500, -1, -1, QUEST_DESTINATION_ID_0053 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_ASURAHEART, 550, -1, -1, QUEST_DESTINATION_ID_0053 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_MINIWHEEL, 8000, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_WHEEL, 8000, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_SCRAPDIAMOND, 15, -1, -1, QUEST_DESTINATION_ID_0054 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_DATALBALL, 400 );
		SetEndRemoveItem( 1, II_GEN_GEM_GEM_YELLOWCRYSTAL, 450 );
		SetEndRemoveItem( 2, II_GEN_GEM_GEM_GANESALVORY, 500 );
		SetEndRemoveItem( 3, II_GEN_GEM_GEM_ASURAHEART, 550 );
		SetEndRemoveItem( 4, II_SYS_SYS_SCR_MINIWHEEL, 8000 );
		SetEndRemoveItem( 5, II_SYS_SYS_SCR_WHEEL, 8000 );
		SetEndRemoveItem( 6, II_SYS_SYS_SCR_SCRAPDIAMOND, 15 );
		SetEndRewardItem( -1, 0, -1, II_ARM_S_CLO_CLO_DRAGON2_1, 1 );
		SetHeadQuest( 6004 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002446

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002447
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002448
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002449
	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002450
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002451
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002452
		);
		
	}
}

QUEST_RECIPE200901
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002453
	);

	setting
	{
		SetHeadQuest( 1992 );
		SetQuestType( QT_GENERAL );
		
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_COOKINGBOOK01, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_COOKINGBOOK02, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_COOKINGBOOK03, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_COOKINGBOOK04, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_COOKINGBOOK05, 1 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_COOKINGBOOK01, 1 );
		SetEndRemoveItem( 1, II_SYS_SYS_QUE_COOKINGBOOK02, 1 );
		SetEndRemoveItem( 2, II_SYS_SYS_QUE_COOKINGBOOK03, 1 );
		SetEndRemoveItem( 3, II_SYS_SYS_QUE_COOKINGBOOK04, 1 );
		SetEndRemoveItem( 4, II_SYS_SYS_QUE_COOKINGBOOK05, 1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_QUE_COOKINGBOOK06, 1 );
		SetEndRewardHide( 1 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002454
	);
	
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002455
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002456
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002457
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_002458
	);
	
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002459
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002460
		);
		
	}
}

QUEST_RECIPE200902
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002461
	);

	setting
	{
		SetHeadQuest( 1992 );
		SetQuestType( QT_GENERAL );
		
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_COOKINGBOOK06, 1 );
		SetEndCondLevel( 1, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_COOKINGBOOK06, 1 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_COOKINGBOOK06, 1 );
		SetEndRewardItem( -1, 0, -1,  II_SYS_SYS_QUE_COOKINGBOOK07, 1 );
		SetEndRewardHide( 1 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002462
	);
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002463
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002464
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002465
	);
	
	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_002466
	);

	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_002467
	);
	
	state 0
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_002468
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002469
		);
		
	}
}

QUEST_RECIPE200903
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002470
	);

	setting
	{
		SetHeadQuest( 1992 );
		SetQuestType( QT_GENERAL );
		
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_QUE_COOKINGBOOK07, 1 );
		SetEndCondLevel( 1, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_COOKINGBOOK07, 1 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_COOKINGBOOK07, 1 );
		SetEndRewardItem( -1, 0, -1, II_CHR_FOO_COO_DUBOO01, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_FLY01, 1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_FOR01, 1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_FUN01, 1 );
		SetEndRewardHide( 1 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002471
	);
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002472
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002473
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002474
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_002475
	);
	
	state 0
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_002476
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002477
		);
		
	}
}

QUEST_SEVENTH2009
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002478
	);

	setting
	{
		SetHeadQuest( 1992 );
		SetCharacter( "MaFl_July05" );
		SetQuestType( QT_GENERAL );
		
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondLevel( 1, 129 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_QUE_TISSUE01, 5 );
		SetEndRemoveItem( 0, II_SYS_SYS_QUE_TISSUE01, 5 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXNATURE01, 1 );
		SetEndRewardHide( 1 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002479
	);
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002480
	);
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002481
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002482
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002483
	);
	
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_INC_002484
	);
	
	state 0
	{
		SetDesc
		(
			IDS_PROPQUEST_INC_002485
		);
		
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002486
		);
		
	}
}

QUEST_MERON
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002487

	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_BOBOKUEX, 5 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_HURAGIA, 5 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_BOBOKUEX, 5 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_HURAGIA, 5 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_BXMERONBASKET, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002488

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002489
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002490

	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002492

	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002491

	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002493
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002494
		);
		
	}
}

QUEST_AUGUSTBEER01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002495

	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_SCR_MINIWHEEL, 30 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_FURIOUSMATCH, 1 );
		SetEndRemoveItem( 0, II_SYS_SYS_SCR_MINIWHEEL, 30 );
		SetEndRemoveItem( 1, II_GEN_GEM_GEM_FURIOUSMATCH, 1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_BEERMACHINE, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002496

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002497

	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002498

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002499
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002500

	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002501

	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002502

	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002503
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002504
		);
		
	}
}

QUEST_AUGUSTBEER02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002505

	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_EVE_BEERMACHINE, 1 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_BEERMALT, 10 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_BEERHOPS, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_BEERMALT, 10 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_BEERHOPS, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_FESTIVALBOX01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002506

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002507

	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002508

	);


	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002509
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002510

	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002511

	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002512

	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002513
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002514
		);
		
	}
}

QUEST_PICKSIROSE
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002515

	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Picksirose", LANG_JAP );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_PLASMA, 5 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_TACHYON, 5 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_PLASMA, 5 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_TACHYON, 5 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_MAGICALBOX01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002516

	);


	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002517
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002518

	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002519

	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002520

	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002521
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002522
		);
		
	}
}

QUEST_BRAVERYCHALLENGE	
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002523

	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetCharacter( "MaFl_Heroevent01" );
		SetBeginCondLevel( 121, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_GEN_MAT_DIAMOND, 50 );
		SetEndCondItem( -1, 0, -1, II_GEN_GEM_GEM_DRAGONCANINE, 2000 );
		SetEndCondKillNPC( 0,MI_DU_METEONYKER, 5000 );
		SetEndRemoveItem( 0, II_GEN_MAT_DIAMOND, 50 );
		SetEndRemoveItem( 1, II_GEN_GEM_GEM_DRAGONCANINE, 2000 );
		SetEndRewardItem( -1, 0, -1, II_ARM_S_CLO_CLO_HERO02, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002524

	);
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002525

	);
	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002526

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002527
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002528

	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002529

	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002530

	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002531
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002532
		);
		
	}
}


QUEST_HALLOWEEN01_2009
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002280
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetCharacter( "MaFl_RedRobeGirl" );
		SetEndCondCharacter( "MaFl_RedRobeGirl" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CANDLE01, 2 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHARM01, 2 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CANDLE01, 2 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_CHARM01, 2 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_STATUE01, 5 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002281

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002282

	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002283

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002284
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002285
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002286
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002287
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002288
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002289
		);
		
	}
}

QUEST_HALLOWEEN02_2009
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002290
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetCharacter( "MaFl_RedRobeGirl" );
		SetEndCondCharacter( "MaFl_RedRobeGirl" );
		SetBeginCondPreviousQuest( 1, QUEST_HALLOWEEN01_2009 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CANDLE01, 2 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHARM01, 2 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CANDLE01, 2 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_CHARM01, 2 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_SALT01, 5 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002291

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002292

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002293
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002294
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002295
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002296
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002297
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002298
		);
		
	}
}

QUEST_HALLOWEEN03_2009
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002299
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetCharacter( "MaFl_RedRobeGirl" );
		SetEndCondCharacter( "MaFl_RedRobeGirl" );
		SetBeginCondPreviousQuest( 1, QUEST_HALLOWEEN02_2009 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CANDLE01, 2 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHARM01, 2 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CANDLE01, 2 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_CHARM01, 2 );
		SetEndRewardItem( -1, 0, -1, II_ARM_S_CLO_MAS_SOUL01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002300

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002301

	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002302

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002303
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002304
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002305
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002306
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002307
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002308
		);
		
	}
}


QUEST_VanHarlen01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002533

	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(0);
		SetCharacter( "MaFl_Vanharlen" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CARLIC, 5 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CROSS, 5 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CARLIC, 5 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_CROSS, 5 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_VANHARLENNECKLACE, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002534

	);


	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002535
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002536

	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002537

	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002538

	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002539
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002540
		);
		
	}
}

QUEST_VanHarlen02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002541

	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_Vanharlen" );
		SetBeginCondItem( -1, 0, -1, II_SYS_SYS_EVE_VANHARLENNECKLACE, 1 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CARLIC, 10 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CROSS, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CARLIC, 10 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_CROSS, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXALCHEMY, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002542

	);


	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002543
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002544

	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002545

	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002546

	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002547
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002548
		);
		
	}
}

QUEST_TEACHERICINISONE
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002549

	);
	
	setting
	{
		
		
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetHeadQuest( 6006 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002550

	);


	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_002551
	);

	SetDialog
	(
		QSAY_BEGIN_YES, 
		IDS_PROPQUEST_INC_002552

	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002553

	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002554

	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002555

	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002556
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002557
		);
		
	}
}

QUEST_TEACHERICINISTWO
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002558

	);
	
	setting
	{
	
		
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetHeadQuest( 6006 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002559

	);
	
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002560

	);


	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002561
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002562

	);

	
	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002563

	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002564

	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002565
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002566
		);
		
	}
}

QUEST_TEACHERICINISTHR
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002567

	);
	
	setting
	{
		
		
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetHeadQuest( 6006 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002568

	);
	SetDialog
	(
		QSAY_BEGIN2,
		IDS_PROPQUEST_INC_002569
	);

	SetDialog
	(
		QSAY_BEGIN_YES, 
		IDS_PROPQUEST_INC_002570

	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002571

	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002572

	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002573

	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002574
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002575
		);
		
	}
}


QUEST_CHRISTMASROMEO	
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002576

	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_CHRISTMAS_ROMEO" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_FRUITOFHEART01, 5 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_FRUITOFHEART01, 5 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXCHARISTMASBLUE, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002577

	);


	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002578
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002579

	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002580

	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002581

	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002582
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002583
		);
		
	}
}

QUEST_CHRISTMASJULIET	
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002584

	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetCharacter( "MaFl_CHRISTMAS_JULIET" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_FRUITOFHEART01, 5 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_FRUITOFHEART01, 5 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXCHARISTMASRED, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002585

	);


	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002586
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002587

	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002588

	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002589

	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002590
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002591
		);
		
	}
}




QUEST_CHRISTMAS2009_1	
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002592

	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHRISTMASSALT01, 10 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHRISTMASWATER01, 10 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHRISTMASSOIL01, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CHRISTMASSALT01, 10 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_CHRISTMASWATER01, 10 );
		SetEndRemoveItem( 2, II_SYS_SYS_EVE_CHRISTMASSOIL01, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_CHRISTMASMEDAL01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002593

	);


	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002594
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002595

	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002596

	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002597

	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002598
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002599
		);
		
	}
}


QUEST_CHRISTMAS2009_2	
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002600

	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHRISTMASBEESWAX01, 10 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHRISTMASGLASS01, 10 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CHRISTMASROPE01, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CHRISTMASBEESWAX01, 10 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_CHRISTMASGLASS01, 10 );
		SetEndRemoveItem( 2, II_SYS_SYS_EVE_CHRISTMASROPE01, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_CHRISTMASMEDAL01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002601

	);


	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002602
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002603

	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002604

	);
	 
	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002605

	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002606
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002607
		);
		
	}
}

QUEST_SNOWMAN01_1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002619
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetCharacter( "MaFl_Snowman01" );
		SetEndCondCharacter( "MaFl_Snowman01" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SNOW01, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SNOW01, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_BALLOON, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002620

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002621

	);

	SetDialog
	(
		QSAY_BEGIN3, 
		IDS_PROPQUEST_INC_002622

	);

	SetDialog
	(
		QSAY_BEGIN4, 
		IDS_PROPQUEST_INC_002623

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002624
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002625
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002626
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002627
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002628
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002629
		);
		
	}
}

QUEST_SNOWMAN02_1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002630
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetBeginCondPreviousQuest( 1, QUEST_SNOWMAN01_1 );
		SetCharacter( "MaFl_Snowman01" );
		SetEndCondCharacter( "MaFl_Snowman01" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_SNOWANGEL01, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_SNOWANGEL01, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_BALLOON01, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002631

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002632

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002633
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002634
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002635
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002636
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002637
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002638
		);
		
	}
}

QUEST_SNOWMAN03_1
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002639
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetBeginCondPreviousQuest( 1, QUEST_SNOWMAN02_1 );
		SetCharacter( "MaFl_Snowman01" );
		SetEndCondCharacter( "MaFl_Snowman02" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_BALLOON02, 1 );
		
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002640

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002641
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002642
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002643
	);
	 
	SetDialog
	(
		QSAY_END_COMPLETE2, 
		IDS_PROPQUEST_INC_002644
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002319
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002645
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002646
		);
		
	}
}

QUEST_VALENTINE2010
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002648
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetRepeat(1);
		SetEndCondCharacter( "MaFl_Cupid" );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_LOVECHOCOLATE, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_FLOWER02, 1 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_LOVECHOCOLATE, 1 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_FLOWER02, 1 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_EVE_BXLOVE01, 1 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002649

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002650
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002651
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002652
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002653
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002654
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002655
		);
		
	}
}

QUEST_NEWBIE1_ASS
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002656
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE01, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE01, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMASSIST15, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFASSIST15, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002657

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002658
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002659
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002660
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002661
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002662
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002663
		);
		
	}
}

QUEST_NEWBIE1_MER
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002664
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE01, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE01, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMMERCENARY15, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFMERCENARY15, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002665

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002666
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002667
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002668
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002669
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002670
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002671
		);
		
	}
}

QUEST_NEWBIE1_MAG
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002672
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE01, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE01, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMMAGICIAN15, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFMAGICIAN15, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002673

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002674
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002675
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002676
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002677
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002678
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002679
		);
		
	}
}

QUEST_NEWBIE1_ACR
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002680
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE01, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE01, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMACROBAT15, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFACROBAT15, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002681

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002682
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002683
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002684
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002685
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002686
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002687
		);
		
	}
}



















QUEST_NEWBIE2_ASS
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002688
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 30, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ASSIST, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE02, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE02, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMASSIST45, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFASSIST45, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002689

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002690
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002691
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002692
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002693
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002694
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002695
		);
		
	}
}

QUEST_NEWBIE2_MER
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002696
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 30, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MERCENARY, JOB_KNIGHT, JOB_BLADE, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE02, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE02, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMMERCENARY45, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFMERCENARY45, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002697

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002698
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002699
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002700
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002701
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002702
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002703
		);
		
	}
}

QUEST_NEWBIE2_MAG
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002704
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 30, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_MAGICIAN, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE02, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE02, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMMAGICIAN45, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFMAGICIAN45, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002705

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002706
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002707
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002708
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002709
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002710
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002711
		);
		
	}
}

QUEST_NEWBIE2_ACR
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002712
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 30, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ACROBAT, JOB_JESTER, JOB_RANGER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_JESTER_HERO, JOB_RANGER_HERO );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE02, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE02, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMACROBAT45, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFACROBAT45, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002713

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002714
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002715
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002716
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002717
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002718
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002719
		);
		
	}
}































QUEST_NEWBIE3_BIL
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002720
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 75, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_BILLPOSTER, JOB_BILLPOSTER_MASTER, JOB_BILLPOSTER_HERO );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE03, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE03, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMBILLPOSTER90, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFBILLPOSTER90, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002721

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002722
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002723
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002724
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002725
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002726
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002727
		);
		
	}
}

QUEST_NEWBIE3_RIN
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002728
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 75, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_RINGMASTER, JOB_RINGMASTER_MASTER, JOB_RINGMASTER_HERO );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE03, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE03, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMRINGMASTER90, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFRINGMASTER90, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002729

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002730
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002731
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002732
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002733
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002734
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002735
		);
		
	}
}

QUEST_NEWBIE3_BLA
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002736
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 75, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_BLADE, JOB_BLADE_MASTER, JOB_BLADE_HERO );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE03, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE03, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMBLADE90, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFBLADE90, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002737

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002738
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002739
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002740
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002741
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002742
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002743
		);
		
	}
}

QUEST_NEWBIE3_KIN
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002744
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 75, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_KNIGHT, JOB_KNIGHT_MASTER, JOB_KNIGHT_HERO );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE03, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE03, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMKNIGHT90, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFKNIGHT90, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002745

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002746
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002747
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002748
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002749
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002750
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002751
		);
		
	}
}

QUEST_NEWBIE3_ELE
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002752
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 75, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_ELEMENTOR, JOB_ELEMENTOR_MASTER, JOB_ELEMENTOR_HERO );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE03, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE03, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMELEMENTOR90, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFELEMENTOR90, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002753

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002754
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002755
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002756
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002757
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002758
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002759
		);
		
	}
}

QUEST_NEWBIE3_PSY
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002760
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 75, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_PSYCHIKEEPER, JOB_PSYCHIKEEPER_MASTER, JOB_PSYCHIKEEPER_HERO );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE03, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE03, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMPSYCHIKEEPER90, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFPSYCHIKEEPER90, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002761

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002762
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002763
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002764
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002765
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002766
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002767
		);
		
	}
}

QUEST_NEWBIE3_JST
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002768
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 75, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_JESTER, JOB_JESTER_MASTER, JOB_JESTER_HERO );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE03, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE03, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMJESTER90, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFJESTER90, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002769

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002770
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002771
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002772
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002773
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002774
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002775
		);
		
	}
}

QUEST_NEWBIE3_RAG
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002776
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Newbie" );
		SetEndCondCharacter( "MaFl_Newbie", 6965, 3241, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 75, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_RANGER, JOB_RANGER_MASTER, JOB_RANGER_HERO );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_NEWBIE03, 1, -1, -1, QUEST_DESTINATION_ID_0097 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_NEWBIE03, 1 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_EVE_BXMRANGER90, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_EVE_BXFRANGER90, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002777

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002778
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002779
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002780
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002781
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002782
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002783
		);
		
	}
}

QUEST_BUBBLEGIFT
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002784
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Bubble" );
		SetRepeat(0);
		SetEndCondCharacter( "MaFl_Bubble", 6962, 3250, QUEST_DESTINATION_ID_0000 );
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_LUCKBAG01, 30, -1, -1, QUEST_DESTINATION_ID_0098 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_LUCKBAG01, 30 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_SCR_BXMKOREAN04, 1, 2 );
		SetEndRewardItem( 1, 0, -1, II_SYS_SYS_SCR_BXFKOREAN04, 1, 2 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002785

	);

	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_INC_002786

	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002787
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002788
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002789
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002790
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002791
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002792
		);
		
	}
}

QUEST_LEPRECHAUN01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002793
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Leprechaun" );
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CLOVER01, 20 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CLOVER01, 20 );
		SetEndRewardItem( 0, 0, -1, II_SYS_SYS_SCR_BXGREEN01, 1 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002794
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002795
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002796
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002797
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002798
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002799
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002800
		);
		
	}
}

QUEST_LEPRECHAUN02
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002801
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Leprechaun" );
		SetRepeat(0);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CLOVER02, 1 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CLOVER02, 1 );
		SetEndRewardItem( 0, 0, -1, II_ARM_S_CLO_CLO_CLOVER, 1 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002802
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002803
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002804
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002805
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002806
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002807
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002808
		);
		
	}
}

QUEST_WHITE2010
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002809
	);
	
	setting
	{
		SetHeadQuest( 6003 );
		SetCharacter( "MaFl_Cupid02" );
		SetRepeat(1);
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_CANDLE02, 10 );
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_CANDLE02, 10 );
		SetEndRewardItem( -1, 0, -1, II_SYS_SYS_SCR_BXCUPID01, 1 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002810
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002811
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002812
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002813
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002814
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002815
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002816
		);
		
	}
}

QUEST_SKELETON01
{
	SetTitle
	(
		IDS_PROPQUEST_INC_002817
	);
	
	setting
	{
		SetHeadQuest( 1992 );
		SetCharacter( "MaFl_Babario" );
		SetRepeat(0); 
		SetBeginCondLevel( 1, 129 );
		SetBeginCondParty( 0, 0, 0, 0 );
		SetBeginCondJob( JOB_VAGRANT, JOB_MERCENARY, JOB_ACROBAT, JOB_ASSIST, JOB_MAGICIAN, JOB_KNIGHT, JOB_BLADE, JOB_JESTER, JOB_RANGER, JOB_RINGMASTER, JOB_BILLPOSTER, JOB_PSYCHIKEEPER, JOB_ELEMENTOR, JOB_KNIGHT_MASTER, JOB_BLADE_MASTER, JOB_JESTER_MASTER, JOB_RANGER_MASTER, JOB_RINGMASTER_MASTER, JOB_BILLPOSTER_MASTER, JOB_PSYCHIKEEPER_MASTER, JOB_ELEMENTOR_MASTER, JOB_KNIGHT_HERO, JOB_BLADE_HERO, JOB_JESTER_HERO, JOB_RANGER_HERO, JOB_RINGMASTER_HERO, JOB_BILLPOSTER_HERO, JOB_PSYCHIKEEPER_HERO, JOB_ELEMENTOR_HERO);
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_BONESKULL01, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_BONERIB01, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_BONELEG01, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_BONELEG02, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_BONEARM01, 1 );
		SetEndCondItem( -1, 0, -1, II_SYS_SYS_EVE_BONEARM02, 1 );		
		SetEndRemoveItem( 0, II_SYS_SYS_EVE_BONESKULL01, 1 );
		SetEndRemoveItem( 1, II_SYS_SYS_EVE_BONERIB01, 1);
		SetEndRemoveItem( 2, II_SYS_SYS_EVE_BONELEG01, 1);
		SetEndRemoveItem( 3, II_SYS_SYS_EVE_BONELEG02, 1);
		SetEndRemoveItem( 4, II_SYS_SYS_EVE_BONEARM01, 1);
		SetEndRemoveItem( 5, II_SYS_SYS_EVE_BONEARM02, 1);	
		SetEndRewardItem( -1, 0, -1, II_PET_SKEL01, 1 );
	}

	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_INC_002818
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_INC_002819
	);

	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_INC_002820
	);

	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_INC_002821
	);

	SetDialog
	(
		QSAY_END_FAILURE1, 
		IDS_PROPQUEST_INC_002822
	);

	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002823
		);
		
	}

	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_INC_002824
		);
		
	}
}

