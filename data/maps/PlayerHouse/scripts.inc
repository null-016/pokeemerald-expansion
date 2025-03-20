PlayerHouse_MapScripts::
	.byte 0


PlayerHouse_T_StarterConvo::
	goto_if_unset FLAG_SYS_POKEMON_GET, PlayerHouse_T_StarterConvo_1
	return

PlayerHouse_T_StarterConvo_1:
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
	lockall
	msgbox PlayerHouse_T_StarterConvo_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, playerMoveToMom
	waitmovement 0
	applymovement 1, FacePlayer
	waitmovement 0
	msgbox PlayerHouse_T_StarterConvo_Text_1
	waitmessage
	applymovement 2, StartSpeak
	waitmovement 0
	msgbox PlayerHouse_T_StarterConvo_Text_2
	fadenewbgm MUS_RAYQUAZA_APPEARS
	waitmessage
	applymovement 2, FaceDown
	waitmovement 0
	msgbox PlayerHouse_T_StarterConvo_Text_3
	waitmessage
	applymovement 2, FaceAway
	waitmovement 0
	msgbox PlayerHouse_T_StarterConvo_Text_4
	waitmessage
	applymovement 2, FaceDown
	waitmovement 0
	msgbox PlayerHouse_T_StarterConvo_Text_5
	waitmessage
	applymovement 2, FacePlayer
	waitmovement 0
	msgbox PlayerHouse_T_StarterConvo_Text_6
	waitmessage
	fadedefaultbgm
	msgbox PlayerHouse_T_StarterConvo_Text_7
	waitmessage
	msgbox PlayerHouse_T_StarterConvo_Text_8
	waitmessage
	msgbox PlayerHouse_T_StarterConvo_Text_9
	waitmessage
	msgbox PlayerHouse_T_StarterConvo_Text_10
	multichoice 25, 5, MULTI_STARTER_TYPE, 1
	closemessage
	compare VAR_RESULT, 0
	goto_if_eq PlayerHouse_T_StarterConvo_4
	compare VAR_RESULT, 1
	goto_if_eq PlayerHouse_T_StarterConvo_5
	compare VAR_RESULT, 2
	goto_if_eq PlayerHouse_T_StarterConvo_6
PlayerHouse_T_StarterConvo_3:
	msgbox PlayerHouse_T_StarterConvo_Text_11
	multichoice 25, 5, MULTI_STARTER_COLOR, 1
	closemessage
	compare VAR_RESULT, 0
	goto_if_eq PlayerHouse_T_StarterConvo_11
	compare VAR_RESULT, 1
	goto_if_eq PlayerHouse_T_StarterConvo_12
	compare VAR_RESULT, 2
	goto_if_eq PlayerHouse_T_StarterConvo_13
PlayerHouse_T_StarterConvo_10:
	msgbox PlayerHouse_T_StarterConvo_Text_12
	waitmessage
	fadescreen FADE_TO_BLACK
	msgbox PlayerHouse_T_StarterConvo_Text_13
	waitmessage
	delay 20
	fadescreen FADE_FROM_BLACK
	msgbox PlayerHouse_T_StarterConvo_Text_14
	waitmessage
	applymovement 1, FaceAway
	waitmovement 0
	applymovement 2, dadMoveToPlayer
	waitmovement 0
	applymovement 1, FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, FaceUp
	waitmovement 0
	msgbox PlayerHouse_T_StarterConvo_Text_15
	waitmessage
	call PlayerHouse_EventScript_GiveStarter
	setflag FLAG_SYS_B_DASH
	setflag FLAG_EXPSHARE_ON
	setflag FLAG_SYS_POKEMON_GET
	releaseall
	end

PlayerHouse_T_StarterConvo_4:
	setvar VAR_STARTER_TYPE, 0
	goto PlayerHouse_T_StarterConvo_3

PlayerHouse_T_StarterConvo_5:
	setvar VAR_STARTER_TYPE, 1
	goto PlayerHouse_T_StarterConvo_3

PlayerHouse_T_StarterConvo_6:
	setvar VAR_STARTER_TYPE, 2
	goto PlayerHouse_T_StarterConvo_3

PlayerHouse_T_StarterConvo_11:
	setvar VAR_STARTER_COLOR, 0
	goto PlayerHouse_T_StarterConvo_10

PlayerHouse_T_StarterConvo_12:
	setvar VAR_STARTER_COLOR, 1
	goto PlayerHouse_T_StarterConvo_10

PlayerHouse_T_StarterConvo_13:
	setvar VAR_STARTER_COLOR, 2
	goto PlayerHouse_T_StarterConvo_10


PlayerHouse_EventScript_GiveStarter::
	switch VAR_STARTER_TYPE
	case 0, PlayerHouse_EventScript_GiveStarter_2
	case 1, PlayerHouse_EventScript_GiveStarter_3
	case 2, PlayerHouse_EventScript_GiveStarter_4
	showmonpic SPECIES_DRATINI, 10, 3
	msgbox PlayerHouse_EventScript_GiveStarter_Text_5
	givemon SPECIES_DRATINI, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_21
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_22
	hidemonpic
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_2:
	switch VAR_STARTER_COLOR
	case 0, PlayerHouse_EventScript_GiveStarter_7
	case 1, PlayerHouse_EventScript_GiveStarter_8
	case 2, PlayerHouse_EventScript_GiveStarter_9
	showmonpic SPECIES_DRATINI, 10, 3
	msgbox PlayerHouse_EventScript_GiveStarter_Text_5
	givemon SPECIES_DRATINI, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_41
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_42
	hidemonpic
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_3:
	switch VAR_STARTER_COLOR
	case 0, PlayerHouse_EventScript_GiveStarter_12
	case 1, PlayerHouse_EventScript_GiveStarter_13
	case 2, PlayerHouse_EventScript_GiveStarter_14
	showmonpic SPECIES_GIBLE, 10, 3
	msgbox PlayerHouse_EventScript_GiveStarter_Text_11
	givemon SPECIES_GIBLE, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_61
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_62
	hidemonpic
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_4:
	switch VAR_STARTER_COLOR
	case 0, PlayerHouse_EventScript_GiveStarter_17
	case 1, PlayerHouse_EventScript_GiveStarter_18
	case 2, PlayerHouse_EventScript_GiveStarter_19
	showmonpic SPECIES_BELDUM, 10, 3
	msgbox PlayerHouse_EventScript_GiveStarter_Text_17
	givemon SPECIES_BELDUM, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_81
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_82
	hidemonpic
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_7:
	showmonpic SPECIES_TOGEPI, 10, 3
	msgbox PlayerHouse_EventScript_GiveStarter_Text_0
	givemon SPECIES_TOGEPI, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_26
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_27
	hidemonpic
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_8:
	showmonpic SPECIES_RALTS, 10, 3
	msgbox PlayerHouse_EventScript_GiveStarter_Text_3
	givemon SPECIES_GARDEVOIR, 35, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_31
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_32
	hidemonpic
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_9:
	showmonpic SPECIES_DRATINI, 10, 3
	msgbox PlayerHouse_EventScript_GiveStarter_Text_5
	givemon SPECIES_DRATINI, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_36
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_37
	hidemonpic
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_12:
	showmonpic SPECIES_ABRA, 10, 3
	msgbox PlayerHouse_EventScript_GiveStarter_Text_7
	givemon SPECIES_ABRA, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_46
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_47
	hidemonpic
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_13:
	showmonpic SPECIES_LITWICK, 10, 3
	msgbox PlayerHouse_EventScript_GiveStarter_Text_9
	givemon SPECIES_LITWICK, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_51
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_52
	hidemonpic
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_14:
	showmonpic SPECIES_GIBLE, 10, 3
	msgbox PlayerHouse_EventScript_GiveStarter_Text_11
	givemon SPECIES_GIBLE, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_56
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_57
	hidemonpic
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_17:
	showmonpic SPECIES_VENIPEDE, 10, 3
	msgbox PlayerHouse_EventScript_GiveStarter_Text_13
	givemon SPECIES_VENIPEDE, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_66
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_67
	hidemonpic
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_18:
	showmonpic SPECIES_ZIGZAGOON_GALAR, 10, 3
	msgbox PlayerHouse_EventScript_GiveStarter_Text_15
	givemon SPECIES_ZIGZAGOON_GALAR, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_71
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_72
	hidemonpic
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_19:
	showmonpic SPECIES_BELDUM, 10, 3
	msgbox PlayerHouse_EventScript_GiveStarter_Text_17
	givemon SPECIES_BELDUM, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayerHouse_EventScript_GiveStarter_76
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayerHouse_EventScript_GiveStarter_77
	hidemonpic
	msgbox PlayerHouse_EventScript_GiveStarter_Text_2
	return

PlayerHouse_EventScript_GiveStarter_21:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_6
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_22:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_6
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_26:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_1
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_27:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_1
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_31:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_4
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_32:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_4
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_36:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_6
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_37:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_6
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_41:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_6
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_42:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_6
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_46:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_8
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_47:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_8
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_51:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_10
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_52:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_10
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_56:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_12
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_57:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_12
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_61:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_12
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_62:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_12
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_66:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_14
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_67:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_14
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_71:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_16
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_72:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_16
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_76:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_18
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_77:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_18
	call NicknameBoxMon
	return

PlayerHouse_EventScript_GiveStarter_81:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_18
	call NicknamePartyMon
	return

PlayerHouse_EventScript_GiveStarter_82:
	playfanfare MUS_OBTAIN_ITEM
	msgbox PlayerHouse_EventScript_GiveStarter_Text_18
	call NicknameBoxMon
	return


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


playerMoveToMom:
	face_left
	walk_left
	walk_left
	face_down
	walk_down
	walk_down
	walk_down
	face_left
	step_end

dadMoveToPlayer:
	face_up
	walk_up
	walk_up
	face_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	walk_down
	step_end

FacePlayer:
	face_right
	step_end

FaceAway:
	face_left
	step_end

StartSpeak:
	walk_right
	step_end

FaceDown:
	face_down
	step_end

FaceUp:
	face_up
	step_end

PlayerHouse_T_StarterConvo_Text_0:
	.string "Mom: Hi {PLAYER} dear, can you come\n"
	.string "here for a second?$"

PlayerHouse_T_StarterConvo_Text_1:
	.string "Mom: I've been talking with your dad\n"
	.string "about your wish for your own pokemon,\l"
	.string "and your inspiration to be a great\l"
	.string "pokemon trainer like Branden & May.$"

PlayerHouse_T_StarterConvo_Text_2:
	.string "Dad: I've always been on the side of not\n"
	.string "encouraging you to walk the path of a\l"
	.string "trainer. You know, I was working for the\l"
	.string "Pokemon League a few years ago, when\l"
	.string "Kyogre & Groudon nearly destroyed\l"
	.string "Hoenn.$"

PlayerHouse_T_StarterConvo_Text_3:
	.string "I was summoned among a few other\n"
	.string "league staff trying to stop those\l"
	.string "beasts from their rampage, but was\l"
	.string "utterly powerless against those\l"
	.string "legendaries.$"

PlayerHouse_T_StarterConvo_Text_4:
	.string "Dad: All I could do was run away to our\n"
	.string "home, keep you and your mom safe.$"

PlayerHouse_T_StarterConvo_Text_5:
	.string "I have been a pokemon trainer for a\n"
	.string "good number of years. I thought I was\l"
	.string "decently skilled as a trainer.$"

PlayerHouse_T_StarterConvo_Text_6:
	.string "That moment crushed my pride. I don't\n"
	.string "regret running away for protecting my\l"
	.string "family, but I also don't wish you to\l"
	.string "experience anything similar. Plus we are\l"
	.string "concerned about your safety.$"

PlayerHouse_T_StarterConvo_Text_7:
	.string "Mom: While I understand where your Dad\n"
	.string "is coming from, I also believe it is your\l"
	.string "right to pursue your dream, at least\l"
	.string "should have you giving it a shot.$"

PlayerHouse_T_StarterConvo_Text_8:
	.string "Dad: Your 14th birthday is coming up.\n"
	.string "This could be the best time for a\l"
	.string "pokemon to be your present. It has been\l"
	.string "6 years of peacefulness, but becoming a\l"
	.string "pokemon trainer still means danger is\l"
	.string "always by your side.$"

PlayerHouse_T_StarterConvo_Text_9:
	.string "Mom: Promise us to be careful out there,\n"
	.string "OK?$"

PlayerHouse_T_StarterConvo_Text_10:
	.string "Mom: Alright, enough with the\n"
	.string "depressing talk. What kind of pokemon\l"
	.string "do you want?: )$"

PlayerHouse_T_StarterConvo_Text_11:
	.string "Mom: What color of the pokemon do you\n"
	.string "have in mind? : )$"

PlayerHouse_T_StarterConvo_Text_12:
	.string "Dad: OK, leave it to me.$"

PlayerHouse_T_StarterConvo_Text_13:
	.string "On {PLAYER}'s birthday...$"

PlayerHouse_T_StarterConvo_Text_14:
	.string "Mom: Ready to meet your first partner?$"

PlayerHouse_T_StarterConvo_Text_15:
	.string "Dad: Here you go.$"

PlayerHouse_EventScript_GiveStarter_Text_0:
	.string "A Cute looking and Yellow pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_1:
	.string "Recieved Togepi!$"

PlayerHouse_EventScript_GiveStarter_Text_2:
	.string "No More Room$"

PlayerHouse_EventScript_GiveStarter_Text_3:
	.string "A Cute looking and White pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_4:
	.string "Recieved Ralts!$"

PlayerHouse_EventScript_GiveStarter_Text_5:
	.string "A Cute looking and Blue pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_6:
	.string "Recieved Dratini!$"

PlayerHouse_EventScript_GiveStarter_Text_7:
	.string "A Cool looking and Yellow pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_8:
	.string "Recieved Abra!$"

PlayerHouse_EventScript_GiveStarter_Text_9:
	.string "A Cool looking and White pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_10:
	.string "Recieved Litwick!$"

PlayerHouse_EventScript_GiveStarter_Text_11:
	.string "A Cool looking and Green pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_12:
	.string "Recieved Gible!$"

PlayerHouse_EventScript_GiveStarter_Text_13:
	.string "A Tough looking and Red pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_14:
	.string "Recieved Venipede!$"

PlayerHouse_EventScript_GiveStarter_Text_15:
	.string "A Tough looking, Black and White pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_16:
	.string "Recieved Galarian Zigzagoon!$"

PlayerHouse_EventScript_GiveStarter_Text_17:
	.string "A Tough looking and Blue pokemon.$"

PlayerHouse_EventScript_GiveStarter_Text_18:
	.string "Recieved Beldum!$"

NicknamePartyMon_Text_0:
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
	.string "Transferred to PC$"
