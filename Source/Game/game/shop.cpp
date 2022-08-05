//bul

// ¡¾?AO ¢©?¢©??? : ??¡¾Y A¢§?o
	if (m_pkPC)
	{


//Ustune ekle

#ifdef ENABLE_BATTLE_PASS
	if (!m_pkPC)
	{
		if (!ch->v_counts.empty())
		{
			for (int i = 0; i<ch->missions_bp.size(); ++i)
			{
				if (ch->missions_bp[i].type == 3){ ch->DoMission(i, dwPrice); }
			}
		}
	}
#endif