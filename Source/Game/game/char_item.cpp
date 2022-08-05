//bul

if (-1 != iLimitRealtimeStartFirstUseFlagIndex)

//sat©¥r sonuna ekle

#ifdef ENABLE_BATTLE_PASS
	if (!v_counts.empty())
	{
		for (int i = 0; i<missions_bp.size(); ++i)
		{
			if (missions_bp[i].type == 1 && item->GetVnum() == missions_bp[i].vnum)
			{
				DoMission(i, 1);
			}
		}
	}
#endif

//bul

case ITEM_ELK_VNUM:

//sat©¥r sonuna ekle

#ifdef ENABLE_BATTLE_PASS
							case ITEM_BATTLE_PASS:
							{
								if (!v_counts.empty())
								{
									ChatPacket(CHAT_TYPE_INFO, "Zaten aktif durumda");
									return false;
								}

								FILE 	*fileID;
								char file_name[256 + 1];

								snprintf(file_name, sizeof(file_name), "%s/battlepass_players/%s.txt", LocaleService_GetBasePath().c_str(), GetName());
								fileID = fopen(file_name, "w");

								if (NULL == fileID)
									return false;

								for (int i = 0; i<missions_bp.size(); ++i)
								{
									fprintf(fileID, "MISSION	%d	%d\n", 0, 0);
								}

								fclose(fileID);

								Load_BattlePass();
								ChatPacket(CHAT_TYPE_INFO, "Bu ay icin savas karti etkinlestirildi!");
								item->SetCount(item->GetCount() - 1);
							}
							break;
#endif