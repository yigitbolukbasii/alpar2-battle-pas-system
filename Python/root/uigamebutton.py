#bul 

"BUILD" : self.GetChild("BuildGuildBuilding"),

#altına ekle

"BATTLEPASS" : self.GetChild("BattlePass"),


#bul

self.gameButtonDict["EXIT_OBSERVER"].SetEvent(ui.__mem_func__(self.__OnClickExitObserver))

#altına ekle

self.gameButtonDict["BATTLEPASS"].SetEvent(ui.__mem_func__(self.__OnClickBattlePass))

#bul

self.gameButtonDict["BUILD"].Hide()

#altına ekle

	def ShowPassButton(self):
		self.gameButtonDict["BATTLEPASS"].Show()
	
	def HidePassButton(self):
		self.gameButtonDict["BATTLEPASS"].Hide()
		
#bul

helpButton=self.gameButtonDict["HELP"]

#altına ekle

passButton=self.gameButtonDict["BATTLEPASS"]

