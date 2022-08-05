//Bul

					TPacketGCFishing p;
					p.header = HEADER_GC_FISHING;
					p.subheader = FISHING_SUBHEADER_GC_FISH;
					p.info = item_vnum;
					ch->GetDesc()->Packet(&p, sizeof(TPacketGCFishing));
					
//Ustune ekle USTUNE

#ifdef ENABLE_BATTLE_PASS
					if (!ch->v_counts.empty())
					{
						for (int i = 0; i<ch->missions_bp.size(); ++i)
						{
							if (ch->missions_bp[i].type == 6){ ch->DoMission(i, 1); }
						}
					}
#endif
