#pragma once

// Special Trainer Ids.
#define TRAINER_RECORD_MIXING_FRIEND        300
#define TRAINER_RECORD_MIXING_APPRENTICE    400
#define TRAINER_EREADER                     500
#define TRAINER_FRONTIER_BRAIN              1022
#define TRAINER_PLAYER                      1023
#define TRAINER_SECRET_BASE                 1024
#define TRAINER_LINK_OPPONENT               2048
#define TRAINER_OPPONENT_C00                3072
#define TRAINER_STEVEN_PARTNER              3075
#define TRAINER_CUSTOM_PARTNER              3076

#define TRAINER_LORELEI				0x19A
#define TRAINER_LORELEI_REMATCH		0x2DF
#define TRAINER_BRUNO				0x19B
#define TRAINER_BRUNO_REMATCH		0x2E0
#define TRAINER_AGATHA				0x19C
#define TRAINER_AGATHA_REMATCH		0x2E1
#define TRAINER_LANCE				0x19D
#define TRAINER_LANCE_REMATCH		0x2E2

//Front Sprites
#define TRAINER_PIC_ARCHIE 0
#define TRAINER_PIC_AQUA_GRUNT_M 1
#define TRAINER_PIC_AQUA_GRUNT_F 2
#define TRAINER_PIC_AROMA_LADY_RS 3
#define TRAINER_PIC_RUIN_MANIAC_RS 4
#define TRAINER_PIC_CAMERA_DUO 5
#define TRAINER_PIC_RS_TUBER_F 6
#define TRAINER_PIC_RS_TUBER_M 7
#define TRAINER_PIC_RS_COOLTRAINER_M 8
#define TRAINER_PIC_RS_COOLTRAINER_F 9
#define TRAINER_PIC_HEX_MANIAC 0xA
#define TRAINER_PIC_RS_LADY 0xB
#define TRAINER_PIC_RS_BEAUTY 0xC
#define TRAINER_PIC_RICH_BOY 0xD
#define TRAINER_PIC_RS_POKEMANIAC 0xE
#define TRAINER_PIC_RS_SWIMMER_M 0xF
#define TRAINER_PIC_RS_BLACK_BELT 0x10
#define TRAINER_PIC_GUITARIST 0x11
#define TRAINER_PIC_KINDLER 0x12
#define TRAINER_PIC_RS_CAMPER 0x13
#define TRAINER_PIC_BUG_MANIAC 0x14
#define TRAINER_PIC_RS_PSYCHIC_M 0x15
#define TRAINER_PIC_RS_PSYCHIC_F 0x16
#define TRAINER_PIC_RS_GENTLEMAN 0x17
#define TRAINER_PIC_SIDNEY 0x18
#define TRAINER_PIC_PHOEBE 0x19
#define TRAINER_PIC_ROXANNE 0x1A
#define TRAINER_PIC_BRAWLY 0x1B
#define TRAINER_PIC_LIZA_AND_TATE 0x1C
#define TRAINER_PIC_SCHOOL_BOY 0x1D
#define TRAINER_PIC_SCHOOL_GIRL 0x1E
#define TRAINER_PIC_SR_AND_JR 0x1F
#define TRAINER_PIC_POKEFAN_M 0x20
#define TRAINER_PIC_POKRFAN_F 0x21
#define TRAINER_PIC_EXPERT_M 0x22
#define TRAINER_PIC_EXPERT_F 0x23
#define TRAINER_PIC_RS_YOUNGSTER 0x24
#define TRAINER_PIC_STEVEN 0x25
#define TRAINER_PIC_RS_FISHERMAN 0x26
#define TRAINER_PIC_CYCLING_TRIATHLETE_M  0x27
#define TRAINER_PIC_CYCLING_TRIATHLETE_F  0x28
#define TRAINER_PIC_RUNNING_TRIATHLETE_M  0x29
#define TRAINER_PIC_RUNNING_TRIATHLETE_F  0x2A
#define TRAINER_PIC_SWIMMING_TRIATHLETE_M 0x2B
#define TRAINER_PIC_SWIMMING_TRIATHLETE_F 0x2C
#define TRAINER_PIC_DRAGON_TAMER 0x2D
#define TRAINER_PIC_RS_BIRDKEEPER 0x2E
#define TRAINER_PIC_NINJA_BOY 0x2F
#define TRAINER_PIC_RS_CRUSHGIRL 0x30
#define TRAINER_PIC_PARASOL_LADY 0x31
#define TRAINER_PIC_RS_SWIMMER_F 0x32
#define TRAINER_PIC_RS_PICNICKER 0x33
#define TRAINER_PIC_RS_TWINS 0x34
#define TRAINER_PIC_RS_SAILOR 0x35
#define TRAINER_PIC_COLLECTOR 0x36
#define TRAINER_PIC_RS_WALLY 0x37
#define TRAINER_PIC_RS_BRENDAN 0x38
#define TRAINER_PIC_RS_MAY 0x39
#define TRAINER_PIC_RS_BREEDER_M 0x3A
#define TRAINER_PIC_RS_BREEDER_F 0x3B
#define TRAINER_PIC_RS_RANGER_M 0x3C
#define TRAINER_PIC_RS_RANGER_F 0x3D
#define TRAINER_PIC_MAXIE 0x3E
#define TRAINER_PIC_MAGMA_GRUNT_M 0x3F
#define TRAINER_PIC_MAGMA_GRUNT_F 0x40
#define TRAINER_PIC_RS_LASS 0x41
#define TRAINER_PIC_RS_BUGCATCHER 0x42
#define TRAINER_PIC_RS_HIKER 0x43
#define TRAINER_PIC_RS_YOUNG_COUPLE 0x44
#define TRAINER_PIC_EXPERT_DUO 0x45
#define TRAINER_PIC_RS_SIS_AND_BRO 0x46
#define TRAINER_PIC_MATT 0x47
#define TRAINER_PIC_SHELLY 0x48
#define TRAINER_PIC_TABITHA 0x49
#define TRAINER_PIC_COURTNEY 0x4A
#define TRAINER_PIC_WATTSON 0x4B
#define TRAINER_PIC_FLANNERY 0x4C
#define TRAINER_PIC_NORMAN 0x4D
#define TRAINER_PIC_WINONA 0x4E
#define TRAINER_PIC_WALLACE 0x4F
#define TRAINER_PIC_GLACIA 0x50
#define TRAINER_PIC_DRAKE 0x51

//FR/LG Specific
#define TRAINER_PIC_YOUNGSTER 0x52
#define TRAINER_PIC_BUG_CATCHER 0x53
#define TRAINER_PIC_LASS 0x54
#define TRAINER_PIC_SAILOR 0x55
#define TRAINER_PIC_CAMPER 0x56
#define TRAINER_PIC_PICNICKER 0x57
#define TRAINER_PIC_POKEMANIAC 0x58
#define TRAINER_PIC_SUPER_NERD 0x59
#define TRAINER_PIC_HIKER 0x5A
#define TRAINER_PIC_BIKER 0x5B
#define TRAINER_PIC_BURGLAR 0x5C
#define TRAINER_PIC_WORKER 0x5D
#define TRAINER_PIC_FISHERMAN 0x5E
#define TRAINER_PIC_SWIMMER_M 0x5F
#define TRAINER_PIC_CUE_BALL 0x60
#define TRAINER_PIC_GAMBLER 0x61
#define TRAINER_PIC_BEAUTY 0x62
#define TRAINER_PIC_SWIMMER_F 0x63
#define TRAINER_PIC_PSYCHIC_M 0x64
#define TRAINER_PIC_ROCKER 0x65
#define TRAINER_PIC_JUGGLER 0x66
#define TRAINER_PIC_TAMER 0x67
#define TRAINER_PIC_BIRD_KEEPER 0x68
#define TRAINER_PIC_BLACK_BELT 0x69
#define TRAINER_PIC_BLUE 0x6A
#define TRAINER_PIC_SCIENTIST_M 0x6B
#define TRAINER_PIC_GIOVANNI 0x6C
#define TRAINER_PIC_ROCKET_GRUNT_M 0x6D
#define TRAINER_PIC_COOLTRAINER_M 0x6E
#define TRAINER_PIC_COOLTRAINER_F 0x6F 
#define TRAINER_PIC_LORLEI 0x70
#define TRAINER_PIC_BRUNO 0x71
#define TRAINER_PIC_AGATHA 0x72
#define TRAINER_PIC_LANCE 0x73
#define TRAINER_PIC_BROCK 0x74
#define TRAINER_PIC_MISTY 0x75
#define TRAINER_PIC_LT_SURGE 0x76
#define TRAINER_PIC_ERIKA 0x77
#define TRAINER_PIC_KOGA 0x78
#define TRAINER_PIC_BLAINE 0x79
#define TRAINER_PIC_SABRINA 0x7A
#define TRAINER_PIC_GENTLEMAN 0x7B
#define TRAINER_PIC_BLUE_2 0x7C
#define TRAINER_PIC_BLUE_3 0x7D
#define TRAINER_PIC_CHANNELER 0x7E
#define TRAINER_PIC_TWINS 0x7F
#define TRAINER_PIC_COOL_COUPLE 0x80
#define TRAINER_PIC_YOUNG_COUPLE 0x81
#define TRAINER_PIC_CRUSH_KIN 0x82
#define TRAINER_PIC_SIS_AND_BRO 0x83
#define TRAINER_PIC_PROF_OAK 0x84
#define TRAINER_PIC_BRENDAN 0x85
#define TRAINER_PIC_MAY 0x86
#define TRAINER_PIC_PLAYER_M 0x87
#define TRAINER_PIC_PLAYER_F 0x88
#define TRAINER_PIC_ROCKET_GRUNT_F 0x89
#define TRAINER_PIC_PSYCHIC_F 0x8A
#define TRAINER_PIC_CRUSH_GIRL 0x8B
#define TRAINER_PIC_TUBER_F 0x8C
#define TRAINER_PIC_PKMN_BREEDER_F 0x8D
#define TRAINER_PIC_PKMN_RANGER_M 0x8E
#define TRAINER_PIC_PKMN_RANGER_F 0x8F
#define TRAINER_PIC_AROMA_LADY 0x90
#define TRAINER_PIC_RUIN_MANIAC 0x91
#define TRAINER_PIC_SELPHY 0x92
#define TRAINER_PIC_PAINTER 0x93

//Backsprites
#define TRAINER_BACK_PIC_RED              	0
#define TRAINER_BACK_PIC_LEAF             	1
#define TRAINER_BACK_PIC_BRENDAN          	2
#define TRAINER_BACK_PIC_MAY              	3
#define TRAINER_BACK_PIC_POKE_DUDE        	4
#define TRAINER_BACK_PIC_OLD_MAN 			5

#ifndef UNBOUND //CHANGE THESE

#define TRAINER_ENCOUNTER_MUSIC_MALE         0 // standard male encounter music
#define TRAINER_ENCOUNTER_MUSIC_FEMALE       1 // standard female encounter music
#define TRAINER_ENCOUNTER_MUSIC_GIRL         2 // used for male Tubers and Young Couples too
#define TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS   3
#define TRAINER_ENCOUNTER_MUSIC_INTENSE      4
#define TRAINER_ENCOUNTER_MUSIC_COOL         5
#define TRAINER_ENCOUNTER_MUSIC_AQUA         6
#define TRAINER_ENCOUNTER_MUSIC_MAGMA        7
#define TRAINER_ENCOUNTER_MUSIC_SWIMMER      8
#define TRAINER_ENCOUNTER_MUSIC_TWINS        9 // used for other trainer classes too
#define TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR  10
#define TRAINER_ENCOUNTER_MUSIC_HIKER       11 // used for other trainer classes too
#define TRAINER_ENCOUNTER_MUSIC_INTERVIEWER 12
#define TRAINER_ENCOUNTER_MUSIC_RICH        13 // Rich Boys and Gentlemen

#else //For Unbound

#define TRAINER_ENCOUNTER_MALE         			0
#define TRAINER_ENCOUNTER_FEMALE       			1
#define TRAINER_ENCOUNTER_LADY        	 		2
#define TRAINER_ENCOUNTER_SUSPICIOUS  			3
#define TRAINER_ENCOUNTER_INTENSE      			4
#define TRAINER_ENCOUNTER_ACE_TRAINER       	5
#define TRAINER_ENCOUNTER_HIKER         		6
#define TRAINER_ENCOUNTER_MYSTERIOUS_TRAINER    7
#define TRAINER_ENCOUNTER_SAILOR      			8
#define TRAINER_ENCOUNTER_GAMBLER        		9
#define TRAINER_ENCOUNTER_ARTIST  				10
#define TRAINER_ENCOUNTER_SHADOW       			11
#define TRAINER_ENCOUNTER_LOR 					12
#define TRAINER_ENCOUNTER_ELITE_4        		13
#define TRAINER_ENCOUNTER_CYNTHIA				14

#define TRAINER_PIC_INTERVIEWER 0x3
#define TRAINER_PIC_CAMERA_MAN 0x4
#define TRAINER_PIC_POKE_KID 0x6
#define TRAINER_PIC_TUBER_M 0x7
#define TRAINER_PIC_RIVAL 0x8
#define TRAINER_PIC_RICH_GIRL 0xB
#define TRAINER_PIC_FIRE_BREATHER 0xE
#define TRAINER_PIC_BIRD_KEEPER_F 0xF
#define TRAINER_PIC_CAMPING_DUO 0x10
#define TRAINER_PIC_BIG_MO 0x13
#define TRAINER_PIC_RANCHER_M 0x15
#define TRAINER_PIC_RANCHER_F 0x16
#define TRAINER_PIC_MEL 0x18
#define TRAINER_PIC_MAXIMA 0x19
#define TRAINER_PIC_OFFICER 0x24
#define TRAINER_PIC_AKLOVE 0x26
#define TRAINER_PIC_CYCLIST_M 0x27
#define TRAINER_PIC_CYCLIST_F 0x28
#define TRAINER_PIC_JOGGER 0x29
#define TRAINER_PIC_JAX 0x2E
#define TRAINER_PIC_SCIENTIST_F 0x35
#define TRAINER_PIC_PKMN_BREEDER_M 0x3A
#define TRAINER_PIC_IDOL 0x3B
#define TRAINER_PIC_WAITER 0x3C
#define TRAINER_PIC_WAITRESS 0x3D
#define TRAINER_PIC_CYNTHIA 0x3E
#define TRAINER_PIC_SKIIER_F 0x3F
#define TRAINER_PIC_SKIIER_M 0x40
#define TRAINER_PIC_SKELI 0x41
#define TRAINER_PIC_GOLCHE 0x42
#define TRAINER_PIC_NURSE 0x43
#define TRAINER_PIC_MARLON 0x49
#define TRAINER_PIC_IVORY 0x4A
#define TRAINER_PIC_LOR_GRUNT 0x4B
#define TRAINER_PIC_PAT 0x4C
#define TRAINER_PIC_RED 0x4D
#define TRAINER_PIC_ALICE 0x4E
#define TRAINER_PIC_CANDICE 0x4F
#define TRAINER_PIC_GAIL 0x50
#define TRAINER_PIC_PALMER 0x51
#define TRAINER_PIC_ROUGHNECK 0x60
#define TRAINER_PIC_BIRD_KEEPER_M 0x68
#define TRAINER_PIC_SHADOW_GRUNT_M 0x6D
#define TRAINER_PIC_ACE_TRAINER_M 0x6E
#define TRAINER_PIC_ACE_TRAINER_F 0x6F 
#define TRAINER_PIC_MIRSKLE 0x73
#define TRAINER_PIC_ZEPH 0x74
#define TRAINER_PIC_GALAVAN 0x76
#define TRAINER_PIC_VEGA 0x78
#define TRAINER_PIC_MEDIUM 0x7E
#define TRAINER_PIC_ACE_DUO 0x80
#define TRAINER_PIC_SHADOW_GRUNT_F 0x89

#define TRAINER_PIC_PABLO TRAINER_PIC_WORKER
#define TRAINER_PIC_PAULA TRAINER_PIC_TAMER

#define TRAINER_BACK_PIC_MARLON				6
#define TRAINER_BACK_PIC_POKE_KID			7
#define TRAINER_BACK_PIC_RIVAL				8
#define TRAINER_BACK_PIC_JAX				9

#endif

#define F_TRAINER_FEMALE (1 << 7)

// All trainer parties specify the IV, level, and species for each Pokémon in the
// party. Some trainer parties also specify held items and custom moves for each
// Pokémon.
#define F_TRAINER_PARTY_CUSTOM_MOVESET (1 << 0)
#define F_TRAINER_PARTY_HELD_ITEM      (1 << 1)
