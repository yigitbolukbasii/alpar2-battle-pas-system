#bul

self.__XMasBoom_Update()

#altýna ekle

		if constInfo.status_battle_pass == 1:
			self.interface.Show_BattlePass()
		else:
			self.interface.Hide_BattlePass()
			
#bul

"DayMode"				: self.__DayMode_Update, 

#altýna ekle

			"missions_bp"					: self.SMissionsBP,
			"info_missions_bp"				: self.SInfoMissions,
			"size_missions_bp"				: self.SizeMissions,
			"rewards_missions_bp"			: self.SRewardsMissions,
			"final_reward"					: self.SFinalRewards,
			"show_battlepass"				: self.interface.ShowBoardBpass,
			"battlepass_status"				: self.SBattlePass,
			
#bul

	def __PartyRequestDenied(self):
		self.PopupMessage(localeInfo.PARTY_REQUEST_DENIED)

#altýna ekle

	def SMissionsBP(self, i, type, vnum, counts):
		constInfo.missions_bp[int(i)]={"iType":type, "iVnum":vnum, "iCount":counts}
	
	def SInfoMissions(self, i, counts, status, nume):
		nume = str(nume).replace("#", " ")
		constInfo.info_missions_bp[int(i)]={"iCounts":counts, "iStatus":status, "Name":nume}

	def SRewardsMissions(self, i, vnum1, vnum2, vnum3, count1, count2, count3):
		constInfo.rewards_bp[int(i)]={"iVnum1":vnum1, "iVnum2":vnum2, "iVnum3":vnum3,"iCount1":count1, "iCount2":count2, "iCount3":count3}
	
	def SizeMissions(self, size):
		constInfo.size_battle_pass = int(size)
		
	def SBattlePass(self, status):
		constInfo.status_battle_pass = int(status)

	def SFinalRewards(self, vnum1, vnum2, vnum3, count1, count2, count3):
		constInfo.final_rewards = [int(vnum1),int(vnum2),int(vnum3),int(count1),int(count2),int(count3)]