#bul

		{ 
			"name":"StatusPlusButton", 
			"type" : "button", 
			"x" : 80, 
			"y" : SCREEN_HEIGHT-100, 
			"default_image" : "d:/ymir work/ui/game/windows/btn_bigplus_up.sub",
			"over_image" : "d:/ymir work/ui/game/windows/btn_bigplus_over.sub",
			"down_image" : "d:/ymir work/ui/game/windows/btn_bigplus_down.sub",

			"children" :
			(
				{ 
					"name":"StatusPlusLabel", 
					"type":"text", 
					"x": 16, 
					"y": 40, 
					"text":uiScriptLocale.GAME_STAT_UP, 
					"r":1.0, "g":1.0, "b":1.0, "a":1.0, 
					"text_horizontal_align":"center" 
				},		
			),
		},
		
#üstüne ekle
		
		{
			"name" : "BattlePass",
			"type" : "button",

			"x" : SCREEN_WIDTH-115,
			"y" : 220, 
			"default_image" : "d:/ymir work/battle_pass/open_battlepass.tga",
			"over_image" : "d:/ymir work/battle_pass/open_battlepass.tga",
			"down_image" : "d:/ymir work/battle_pass/open_battlepass.tga",
		},