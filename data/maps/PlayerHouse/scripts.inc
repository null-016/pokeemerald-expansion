PlayerHouse_MapScripts::
	.byte 0


PlayerHouse_T_StarterConvo::
# 4 "data/maps/PlayerHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, PlayerHouse_T_StarterConvo_1
	return

PlayerHouse_T_StarterConvo_1:
# 5 "data/maps/PlayerHouse/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 6 "data/maps/PlayerHouse/scripts.pory"
	lockall
# 7 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_0
# 8 "data/maps/PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerMoveToMom
# 9 "data/maps/PlayerHouse/scripts.pory"
	waitmovement 0
# 10 "data/maps/PlayerHouse/scripts.pory"
	applymovement 1, FacePlayer
# 11 "data/maps/PlayerHouse/scripts.pory"
	waitmovement 0
# 12 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_1
# 14 "data/maps/PlayerHouse/scripts.pory"
	waitmessage
# 15 "data/maps/PlayerHouse/scripts.pory"
	applymovement 2, StartSpeak
# 16 "data/maps/PlayerHouse/scripts.pory"
	waitmovement 0
# 17 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_2
# 20 "data/maps/PlayerHouse/scripts.pory"
	fadenewbgm MUS_RAYQUAZA_APPEARS
# 21 "data/maps/PlayerHouse/scripts.pory"
	waitmessage
# 22 "data/maps/PlayerHouse/scripts.pory"
	applymovement 2, FaceDown
# 23 "data/maps/PlayerHouse/scripts.pory"
	waitmovement 0
# 24 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_3
# 26 "data/maps/PlayerHouse/scripts.pory"
	waitmessage
# 27 "data/maps/PlayerHouse/scripts.pory"
	applymovement 2, FaceAway
# 28 "data/maps/PlayerHouse/scripts.pory"
	waitmovement 0
# 29 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_4
# 30 "data/maps/PlayerHouse/scripts.pory"
	waitmessage
# 31 "data/maps/PlayerHouse/scripts.pory"
	applymovement 2, FaceDown
# 32 "data/maps/PlayerHouse/scripts.pory"
	waitmovement 0
# 33 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_5
# 35 "data/maps/PlayerHouse/scripts.pory"
	waitmessage
# 36 "data/maps/PlayerHouse/scripts.pory"
	applymovement 2, FacePlayer
# 37 "data/maps/PlayerHouse/scripts.pory"
	waitmovement 0
# 38 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_6
# 41 "data/maps/PlayerHouse/scripts.pory"
	waitmessage
# 42 "data/maps/PlayerHouse/scripts.pory"
	fadedefaultbgm
# 43 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_7
# 45 "data/maps/PlayerHouse/scripts.pory"
	waitmessage
# 46 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_8
# 48 "data/maps/PlayerHouse/scripts.pory"
	waitmessage
# 49 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_9
# 50 "data/maps/PlayerHouse/scripts.pory"
	waitmessage
# 51 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_10
# 52 "data/maps/PlayerHouse/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_TYPE, 1
# 53 "data/maps/PlayerHouse/scripts.pory"
	closemessage
# 54 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerHouse_T_StarterConvo_4
# 56 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PlayerHouse_T_StarterConvo_5
# 58 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PlayerHouse_T_StarterConvo_6
PlayerHouse_T_StarterConvo_3:
# 61 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_11
# 62 "data/maps/PlayerHouse/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_COLOR, 1
# 63 "data/maps/PlayerHouse/scripts.pory"
	closemessage
# 64 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerHouse_T_StarterConvo_11
# 66 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PlayerHouse_T_StarterConvo_12
# 68 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PlayerHouse_T_StarterConvo_13
PlayerHouse_T_StarterConvo_10:
# 71 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_12
# 72 "data/maps/PlayerHouse/scripts.pory"
	waitmessage
# 73 "data/maps/PlayerHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 74 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_13
# 75 "data/maps/PlayerHouse/scripts.pory"
	waitmessage
# 76 "data/maps/PlayerHouse/scripts.pory"
	delay 20
# 77 "data/maps/PlayerHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 80 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_14
# 81 "data/maps/PlayerHouse/scripts.pory"
	waitmessage
# 82 "data/maps/PlayerHouse/scripts.pory"
	applymovement 1, FaceAway
# 83 "data/maps/PlayerHouse/scripts.pory"
	waitmovement 0
# 84 "data/maps/PlayerHouse/scripts.pory"
	applymovement 2, dadMoveToPlayer
# 85 "data/maps/PlayerHouse/scripts.pory"
	waitmovement 0
# 86 "data/maps/PlayerHouse/scripts.pory"
	applymovement 1, FacePlayer
# 87 "data/maps/PlayerHouse/scripts.pory"
	waitmovement 0
# 88 "data/maps/PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceUp
# 89 "data/maps/PlayerHouse/scripts.pory"
	waitmovement 0
# 91 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_T_StarterConvo_Text_15
# 92 "data/maps/PlayerHouse/scripts.pory"
	waitmessage
# 94 "data/maps/PlayerHouse/scripts.pory"
	call PlayerHouse_EventScript_GiveStarter
# 95 "data/maps/PlayerHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 96 "data/maps/PlayerHouse/scripts.pory"
	releaseall
	end

PlayerHouse_T_StarterConvo_4:
# 55 "data/maps/PlayerHouse/scripts.pory"
	setvar VAR_STARTER_TYPE, 0
	goto PlayerHouse_T_StarterConvo_3

PlayerHouse_T_StarterConvo_5:
# 57 "data/maps/PlayerHouse/scripts.pory"
	setvar VAR_STARTER_TYPE, 1
	goto PlayerHouse_T_StarterConvo_3

PlayerHouse_T_StarterConvo_6:
# 59 "data/maps/PlayerHouse/scripts.pory"
	setvar VAR_STARTER_TYPE, 2
	goto PlayerHouse_T_StarterConvo_3

PlayerHouse_T_StarterConvo_11:
# 65 "data/maps/PlayerHouse/scripts.pory"
	setvar VAR_STARTER_COLOR, 0
	goto PlayerHouse_T_StarterConvo_10

PlayerHouse_T_StarterConvo_12:
# 67 "data/maps/PlayerHouse/scripts.pory"
	setvar VAR_STARTER_COLOR, 1
	goto PlayerHouse_T_StarterConvo_10

PlayerHouse_T_StarterConvo_13:
# 69 "data/maps/PlayerHouse/scripts.pory"
	setvar VAR_STARTER_COLOR, 2
	goto PlayerHouse_T_StarterConvo_10


PlayerHouse_EventScript_GiveStarter::
# 102 "data/maps/PlayerHouse/scripts.pory"
	switch VAR_STARTER_TYPE
# 103 "data/maps/PlayerHouse/scripts.pory"
	case 0, PlayerHouse_EventScript_GiveStarter_2
# 178 "data/maps/PlayerHouse/scripts.pory"
	case 1, PlayerHouse_EventScript_GiveStarter_3
# 253 "data/maps/PlayerHouse/scripts.pory"
	case 2, PlayerHouse_EventScript_GiveStarter_4
# 329 "data/maps/PlayerHouse/scripts.pory"
	showmonpic SPECIES_DRATINI, 10, 3
# 330 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_5
# 331 "data/maps/PlayerHouse/scripts.pory"
	givemon SPECIES_DRATINI, 5, ITEM_NONE
# 332 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_21
# 337 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_22
# 343 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 344 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_2:
# 104 "data/maps/PlayerHouse/scripts.pory"
	switch VAR_STARTER_COLOR
# 105 "data/maps/PlayerHouse/scripts.pory"
	case 0, PlayerHouse_EventScript_GiveStarter_7
# 123 "data/maps/PlayerHouse/scripts.pory"
	case 1, PlayerHouse_EventScript_GiveStarter_8
# 141 "data/maps/PlayerHouse/scripts.pory"
	case 2, PlayerHouse_EventScript_GiveStarter_9
# 160 "data/maps/PlayerHouse/scripts.pory"
	showmonpic SPECIES_DRATINI, 10, 3
# 161 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_5
# 162 "data/maps/PlayerHouse/scripts.pory"
	givemon SPECIES_DRATINI, 5, ITEM_NONE
# 163 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_41
# 168 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_42
# 174 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 175 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_3:
# 179 "data/maps/PlayerHouse/scripts.pory"
	switch VAR_STARTER_COLOR
# 180 "data/maps/PlayerHouse/scripts.pory"
	case 0, PlayerHouse_EventScript_GiveStarter_12
# 198 "data/maps/PlayerHouse/scripts.pory"
	case 1, PlayerHouse_EventScript_GiveStarter_13
# 216 "data/maps/PlayerHouse/scripts.pory"
	case 2, PlayerHouse_EventScript_GiveStarter_14
# 235 "data/maps/PlayerHouse/scripts.pory"
	showmonpic SPECIES_GIBLE, 10, 3
# 236 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_11
# 237 "data/maps/PlayerHouse/scripts.pory"
	givemon SPECIES_GIBLE, 5, ITEM_NONE
# 238 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_61
# 243 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_62
# 249 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 250 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_4:
# 254 "data/maps/PlayerHouse/scripts.pory"
	switch VAR_STARTER_COLOR
# 255 "data/maps/PlayerHouse/scripts.pory"
	case 0, PlayerHouse_EventScript_GiveStarter_17
# 273 "data/maps/PlayerHouse/scripts.pory"
	case 1, PlayerHouse_EventScript_GiveStarter_18
# 291 "data/maps/PlayerHouse/scripts.pory"
	case 2, PlayerHouse_EventScript_GiveStarter_19
# 310 "data/maps/PlayerHouse/scripts.pory"
	showmonpic SPECIES_BELDUM, 10, 3
# 311 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_17
# 312 "data/maps/PlayerHouse/scripts.pory"
	givemon SPECIES_BELDUM, 5, ITEM_NONE
# 313 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_81
# 318 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_82
# 324 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 325 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_7:
# 106 "data/maps/PlayerHouse/scripts.pory"
	showmonpic SPECIES_TOGEPI, 10, 3
# 107 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_0
# 108 "data/maps/PlayerHouse/scripts.pory"
	givemon SPECIES_TOGEPI, 5, ITEM_NONE
# 109 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_26
# 114 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_27
# 120 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 121 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_8:
# 124 "data/maps/PlayerHouse/scripts.pory"
	showmonpic SPECIES_RALTS, 10, 3
# 125 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_3
# 126 "data/maps/PlayerHouse/scripts.pory"
	givemon SPECIES_RALTS, 5, ITEM_NONE
# 127 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_31
# 132 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_32
# 138 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 139 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_9:
# 142 "data/maps/PlayerHouse/scripts.pory"
	showmonpic SPECIES_DRATINI, 10, 3
# 143 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_5
# 144 "data/maps/PlayerHouse/scripts.pory"
	givemon SPECIES_DRATINI, 5, ITEM_NONE
# 145 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_36
# 150 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_37
# 156 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 157 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_12:
# 181 "data/maps/PlayerHouse/scripts.pory"
	showmonpic SPECIES_ABRA, 10, 3
# 182 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_7
# 183 "data/maps/PlayerHouse/scripts.pory"
	givemon SPECIES_ABRA, 5, ITEM_NONE
# 184 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_46
# 189 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_47
# 195 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 196 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_13:
# 199 "data/maps/PlayerHouse/scripts.pory"
	showmonpic SPECIES_LITWICK, 10, 3
# 200 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_9
# 201 "data/maps/PlayerHouse/scripts.pory"
	givemon SPECIES_LITWICK, 5, ITEM_NONE
# 202 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_51
# 207 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_52
# 213 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 214 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_14:
# 217 "data/maps/PlayerHouse/scripts.pory"
	showmonpic SPECIES_GIBLE, 10, 3
# 218 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_11
# 219 "data/maps/PlayerHouse/scripts.pory"
	givemon SPECIES_GIBLE, 5, ITEM_NONE
# 220 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_56
# 225 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_57
# 231 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 232 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_17:
# 256 "data/maps/PlayerHouse/scripts.pory"
	showmonpic SPECIES_VENIPEDE, 10, 3
# 257 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_13
# 258 "data/maps/PlayerHouse/scripts.pory"
	givemon SPECIES_VENIPEDE, 5, ITEM_NONE
# 259 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_66
# 264 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_67
# 270 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 271 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_18:
# 274 "data/maps/PlayerHouse/scripts.pory"
	showmonpic SPECIES_ZIGZAGOON_GALAR, 10, 3
# 275 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_15
# 276 "data/maps/PlayerHouse/scripts.pory"
	givemon SPECIES_ZIGZAGOON_GALAR, 5, ITEM_NONE
# 277 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_71
# 282 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_72
# 288 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 289 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_19:
# 292 "data/maps/PlayerHouse/scripts.pory"
	showmonpic SPECIES_BELDUM, 10, 3
# 293 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_17
# 294 "data/maps/PlayerHouse/scripts.pory"
	givemon SPECIES_BELDUM, 5, ITEM_NONE
# 295 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_76
# 300 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_77
# 306 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 307 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_21:
# 333 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 334 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_6
# 335 "data/maps/PlayerHouse/scripts.pory"
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_22:
# 338 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 339 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_6
# 340 "data/maps/PlayerHouse/scripts.pory"
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_26:
# 110 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 111 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_1
# 112 "data/maps/PlayerHouse/scripts.pory"
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_27:
# 115 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 116 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_1
# 117 "data/maps/PlayerHouse/scripts.pory"
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_31:
# 128 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 129 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_4
# 130 "data/maps/PlayerHouse/scripts.pory"
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_32:
# 133 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 134 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_4
# 135 "data/maps/PlayerHouse/scripts.pory"
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_36:
# 146 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 147 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_6
# 148 "data/maps/PlayerHouse/scripts.pory"
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_37:
# 151 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 152 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_6
# 153 "data/maps/PlayerHouse/scripts.pory"
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_41:
# 164 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 165 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_6
# 166 "data/maps/PlayerHouse/scripts.pory"
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_42:
# 169 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 170 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_6
# 171 "data/maps/PlayerHouse/scripts.pory"
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_46:
# 185 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 186 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_8
# 187 "data/maps/PlayerHouse/scripts.pory"
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_47:
# 190 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 191 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_8
# 192 "data/maps/PlayerHouse/scripts.pory"
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_51:
# 203 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 204 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_10
# 205 "data/maps/PlayerHouse/scripts.pory"
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_52:
# 208 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 209 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_10
# 210 "data/maps/PlayerHouse/scripts.pory"
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_56:
# 221 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 222 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_12
# 223 "data/maps/PlayerHouse/scripts.pory"
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_57:
# 226 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 227 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_12
# 228 "data/maps/PlayerHouse/scripts.pory"
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_61:
# 239 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 240 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_12
# 241 "data/maps/PlayerHouse/scripts.pory"
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_62:
# 244 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 245 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_12
# 246 "data/maps/PlayerHouse/scripts.pory"
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_66:
# 260 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 261 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_14
# 262 "data/maps/PlayerHouse/scripts.pory"
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_67:
# 265 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 266 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_14
# 267 "data/maps/PlayerHouse/scripts.pory"
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_71:
# 278 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 279 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_16
# 280 "data/maps/PlayerHouse/scripts.pory"
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_72:
# 283 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 284 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_16
# 285 "data/maps/PlayerHouse/scripts.pory"
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_76:
# 296 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 297 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_18
# 298 "data/maps/PlayerHouse/scripts.pory"
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_77:
# 301 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 302 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_18
# 303 "data/maps/PlayerHouse/scripts.pory"
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_81:
# 314 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 315 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_18
# 316 "data/maps/PlayerHouse/scripts.pory"
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_82:
# 319 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 320 "data/maps/PlayerHouse/scripts.pory"
	msgbox PlayerHouse_EventScript_GiveStarter_Text_18
# 321 "data/maps/PlayerHouse/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 351 "data/maps/PlayerHouse/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 352 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 353 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 354 "data/maps/PlayerHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 355 "data/maps/PlayerHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 360 "data/maps/PlayerHouse/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 361 "data/maps/PlayerHouse/scripts.pory"
	hidemonpic
# 362 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 365 "data/maps/PlayerHouse/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 363 "data/maps/PlayerHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


# 368 "data/maps/PlayerHouse/scripts.pory"
playerMoveToMom:
# 369 "data/maps/PlayerHouse/scripts.pory"
	face_left
# 370 "data/maps/PlayerHouse/scripts.pory"
	walk_left
# 370 "data/maps/PlayerHouse/scripts.pory"
	walk_left
# 371 "data/maps/PlayerHouse/scripts.pory"
	face_down
# 372 "data/maps/PlayerHouse/scripts.pory"
	walk_down
# 372 "data/maps/PlayerHouse/scripts.pory"
	walk_down
# 372 "data/maps/PlayerHouse/scripts.pory"
	walk_down
# 373 "data/maps/PlayerHouse/scripts.pory"
	face_left
	step_end

# 376 "data/maps/PlayerHouse/scripts.pory"
dadMoveToPlayer:
# 377 "data/maps/PlayerHouse/scripts.pory"
	face_up
# 378 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 378 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 379 "data/maps/PlayerHouse/scripts.pory"
	face_right
# 380 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 380 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 380 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 380 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 381 "data/maps/PlayerHouse/scripts.pory"
	face_down
# 382 "data/maps/PlayerHouse/scripts.pory"
	walk_down
	step_end

# 385 "data/maps/PlayerHouse/scripts.pory"
FacePlayer:
# 386 "data/maps/PlayerHouse/scripts.pory"
	face_right
	step_end

# 389 "data/maps/PlayerHouse/scripts.pory"
FaceAway:
# 390 "data/maps/PlayerHouse/scripts.pory"
	face_left
	step_end

# 393 "data/maps/PlayerHouse/scripts.pory"
StartSpeak:
# 394 "data/maps/PlayerHouse/scripts.pory"
	walk_right
	step_end

# 397 "data/maps/PlayerHouse/scripts.pory"
FaceDown:
# 398 "data/maps/PlayerHouse/scripts.pory"
	face_down
	step_end

# 401 "data/maps/PlayerHouse/scripts.pory"
FaceUp:
# 402 "data/maps/PlayerHouse/scripts.pory"
	face_up
	step_end

PlayerHouse_T_StarterConvo_Text_0:
# 7 "data/maps/PlayerHouse/scripts.pory"
	.string "Mom: Hi {PLAYER} dear, can you come\n"
	.string "here for a second?$"

PlayerHouse_T_StarterConvo_Text_1:
# 12 "data/maps/PlayerHouse/scripts.pory"
	.string "Mom: I've been talking with your dad\n"
	.string "about your wish for your own pokemon,\l"
	.string "and your inspiration to be a great\l"
	.string "pokemon trainer like Branden & May.$"

PlayerHouse_T_StarterConvo_Text_2:
# 17 "data/maps/PlayerHouse/scripts.pory"
	.string "Dad: I've always been on the side of not\n"
	.string "encouraging you to walk the path of a\l"
	.string "trainer. You know, I was working for the\l"
	.string "Pokemon League a few years ago, when\l"
	.string "Kyogre & Groudon nearly destroyed\l"
	.string "Hoenn.$"

PlayerHouse_T_StarterConvo_Text_3:
# 24 "data/maps/PlayerHouse/scripts.pory"
	.string "I was summoned among a few other\n"
	.string "league staff trying to stop those\l"
	.string "beasts from their rampage, but was\l"
	.string "utterly powerless against those\l"
	.string "legendaries.$"

PlayerHouse_T_StarterConvo_Text_4:
# 29 "data/maps/PlayerHouse/scripts.pory"
	.string "Dad: All I could do was run away to our\n"
	.string "home, keep you and your mom safe.$"

PlayerHouse_T_StarterConvo_Text_5:
# 33 "data/maps/PlayerHouse/scripts.pory"
	.string "I have been a pokemon trainer for a\n"
	.string "good number of years. I thought I was\l"
	.string "decently skilled as a trainer.$"

PlayerHouse_T_StarterConvo_Text_6:
# 38 "data/maps/PlayerHouse/scripts.pory"
	.string "That moment crushed my pride. I don't\n"
	.string "regret running away for protecting my\l"
	.string "family, but I also don't wish you to\l"
	.string "experience anything similar. Plus we are\l"
	.string "concerned about your safety.$"

PlayerHouse_T_StarterConvo_Text_7:
# 43 "data/maps/PlayerHouse/scripts.pory"
	.string "Mom: While I understand where your Dad\n"
	.string "is coming from, I also believe it is your\l"
	.string "right to pursue your dream, at least\l"
	.string "should have you giving it a shot.$"

PlayerHouse_T_StarterConvo_Text_8:
# 46 "data/maps/PlayerHouse/scripts.pory"
	.string "Dad: Your 14th birthday is coming up.\n"
	.string "This could be the best time for a\l"
	.string "pokemon to be your present. It has been\l"
	.string "6 years of peacefulness, but becoming a\l"
	.string "pokemon trainer still means danger is\l"
	.string "always by your side.$"

PlayerHouse_T_StarterConvo_Text_9:
# 49 "data/maps/PlayerHouse/scripts.pory"
	.string "Mom: Promise us to be careful out there,\n"
	.string "OK?$"

PlayerHouse_T_StarterConvo_Text_10:
# 51 "data/maps/PlayerHouse/scripts.pory"
	.string "Mom: Alright, enough with the\n"
	.string "depressing talk. What kind of pokemon\l"
	.string "do you want?: )$"

PlayerHouse_T_StarterConvo_Text_11:
# 61 "data/maps/PlayerHouse/scripts.pory"
	.string "Mom: What color of the pokemon do you\n"
	.string "have in mind? : )$"

PlayerHouse_T_StarterConvo_Text_12:
# 71 "data/maps/PlayerHouse/scripts.pory"
	.string "Dad: OK, leave it to me.$"

PlayerHouse_T_StarterConvo_Text_13:
# 74 "data/maps/PlayerHouse/scripts.pory"
	.string "On {PLAYER}'s birthday...$"

PlayerHouse_T_StarterConvo_Text_14:
# 80 "data/maps/PlayerHouse/scripts.pory"
	.string "Mom: Ready to meet your first partner?$"

PlayerHouse_T_StarterConvo_Text_15:
# 91 "data/maps/PlayerHouse/scripts.pory"
	.string "Dad: Here you go.$"

PlayerHouse_EventScript_GiveStarter_Text_0:
# 107 "data/maps/PlayerHouse/scripts.pory"
	.string "A Cute looking and Yellow pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_1:
# 111 "data/maps/PlayerHouse/scripts.pory"
	.string "Recieved Togepi!$"

PlayerHouse_EventScript_GiveStarter_Text_2:
# 121 "data/maps/PlayerHouse/scripts.pory"
	.string "No More Room$"

PlayerHouse_EventScript_GiveStarter_Text_3:
# 125 "data/maps/PlayerHouse/scripts.pory"
	.string "A Cute looking and White pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_4:
# 129 "data/maps/PlayerHouse/scripts.pory"
	.string "Recieved Ralts!$"

PlayerHouse_EventScript_GiveStarter_Text_5:
# 143 "data/maps/PlayerHouse/scripts.pory"
	.string "A Cute looking and Blue pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_6:
# 147 "data/maps/PlayerHouse/scripts.pory"
	.string "Recieved Dratini!$"

PlayerHouse_EventScript_GiveStarter_Text_7:
# 182 "data/maps/PlayerHouse/scripts.pory"
	.string "A Cool looking and Yellow pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_8:
# 186 "data/maps/PlayerHouse/scripts.pory"
	.string "Recieved Abra!$"

PlayerHouse_EventScript_GiveStarter_Text_9:
# 200 "data/maps/PlayerHouse/scripts.pory"
	.string "A Cool looking and White pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_10:
# 204 "data/maps/PlayerHouse/scripts.pory"
	.string "Recieved Litwick!$"

PlayerHouse_EventScript_GiveStarter_Text_11:
# 218 "data/maps/PlayerHouse/scripts.pory"
	.string "A Cool looking and Green pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_12:
# 222 "data/maps/PlayerHouse/scripts.pory"
	.string "Recieved Gible!$"

PlayerHouse_EventScript_GiveStarter_Text_13:
# 257 "data/maps/PlayerHouse/scripts.pory"
	.string "A Tough looking and Red pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_14:
# 261 "data/maps/PlayerHouse/scripts.pory"
	.string "Recieved Venipede!$"

PlayerHouse_EventScript_GiveStarter_Text_15:
# 275 "data/maps/PlayerHouse/scripts.pory"
	.string "A Tough looking, Black and White pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_16:
# 279 "data/maps/PlayerHouse/scripts.pory"
	.string "Recieved Galarian Zigzagoon!$"

PlayerHouse_EventScript_GiveStarter_Text_17:
# 293 "data/maps/PlayerHouse/scripts.pory"
	.string "A Tough looking and Blue pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_18:
# 297 "data/maps/PlayerHouse/scripts.pory"
	.string "Recieved Beldum!$"

NicknamePartyMon_Text_0:
# 351 "data/maps/PlayerHouse/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 365 "data/maps/PlayerHouse/scripts.pory"
	.string "Transferred to PC$"
