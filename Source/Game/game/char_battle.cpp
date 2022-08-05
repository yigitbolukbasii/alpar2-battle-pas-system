//bul

pkAttacker->GiveGold(iGold / iSplitCount);

//ustune ekle

#ifdef ENABLE_BATTLE_PASS
			if (!pkAttacker->v_counts.empty())
			{
				for (int i = 0; i<pkAttacker->missions_bp.size(); ++i)
				{
					if (pkAttacker->missions_bp[i].type == 9){ pkAttacker->DoMission(i, iGold / iSplitCount); }
				}
			}
#endif

//bul

item->StartDestroyEvent();

//ustune ekle

#ifdef ENABLE_BATTLE_PASS
			if (!pkAttacker->v_counts.empty())
			{
				for (int i = 0; i<pkAttacker->missions_bp.size(); ++i)
				{
					if (pkAttacker->missions_bp[i].type == 10 && item->GetVnum() == pkAttacker->missions_bp[i].vnum){ pkAttacker->DoMission(i, 1); }
				}
			}
#endif

//bul

sys_log(1, "DEAD_BY_PC: %s %p KILLER %s %p", GetName(), this, pkKiller->GetName(), get_pointer(pkKiller));

//alt©¥na ekle

#ifdef ENABLE_BATTLE_PASS
			if (!pkKiller->v_counts.empty())
			{
				for (int i = 0; i<pkKiller->missions_bp.size(); ++i)
				{
					if (pkKiller->missions_bp[i].type == 12){ pkKiller->DoMission(i, 1); }
				}
			}
#endif

//bul

if (true == IsMonster() && 2493 == GetMobTable().dwVnum)

//sat©¥r sonuna ekle

#ifdef ENABLE_BATTLE_PASS
	if (pkKiller && GetRaceNum() > 100)
	{
		if (!pkKiller->v_counts.empty())
		{
			for (int i = 0; i<pkKiller->missions_bp.size(); ++i)
			{
				if (GetRaceNum() == pkKiller->missions_bp[i].vnum && pkKiller->missions_bp[i].type == 2)
				{
					pkKiller->DoMission(i, 1);
				}
			}

		}
	}
#endif

//bul

float damMul = this->GetDamMul();
	float tempDam = dam;
#ifdef ENABLE_ATTENDANCE_EVENT
	dam = (GetRaceNum() >= 6910 && GetRaceNum() <= 6914) ? 1 : tempDam * damMul + 0.5f;
#else
	dam = tempDam * damMul + 0.5f;
#endif

//alt©¥na ekle

#ifdef ENABLE_BATTLE_PASS
	if (!pAttacker->v_counts.empty() && pAttacker->IsPC())
	{
		for (int i = 0; i<pAttacker->missions_bp.size(); ++i)
		{
			if (pAttacker->missions_bp[i].type == 7 && !this->IsPC()){ pAttacker->DoMission(i, dam); }
			if (pAttacker->missions_bp[i].type == 8 && this->IsPC()){ pAttacker->DoMission(i, dam); }
			if (pAttacker->missions_bp[i].type == 11 && this->IsPC() && dam >= pAttacker->missions_bp[i].count){ pAttacker->DoMission(i, dam); }
		}
	}
#endif