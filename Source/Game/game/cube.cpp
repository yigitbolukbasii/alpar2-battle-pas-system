//Bul
if (0 < cube_proto->gold)
		ch->PointChange(POINT_GOLD, -static_cast<int>(cube_proto->gold), false);

//Alt©¥na ekle

#ifdef ENABLE_BATTLE_PASS
	if (!ch->v_counts.empty())
	{
		for (int i = 0; i<ch->missions_bp.size(); ++i)
		{
			if (ch->missions_bp[i].type == 5)
			{
				ch->DoMission(i, 1);
			}
		}
	}
#endif