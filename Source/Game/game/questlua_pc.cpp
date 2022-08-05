//uygun yerlere ekle

#ifdef ENABLE_BATTLE_PASS
	int pc_do_battle_pass(lua_State* L)
	{
		LPCHARACTER ch = CQuestManager::instance().GetCurrentCharacterPtr();
		if (!ch)
			return 0;

		if (ch->v_counts.empty())
			return 0;

		if (!ch->v_counts.empty())
		{
			for (int i = 0; i<ch->missions_bp.size(); ++i)
			{
				if (ch->missions_bp[i].type == (int)lua_tonumber(L, 1)){ ch->DoMission(i, (DWORD)lua_tonumber(L, 2)); }
			}
		}
		return 1;
	}
#endif

#ifdef ENABLE_BATTLE_PASS
			{ "do_mission",				pc_do_battle_pass				},
#endif