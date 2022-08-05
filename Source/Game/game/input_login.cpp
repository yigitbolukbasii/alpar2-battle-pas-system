//bul
_send_bonus_info(ch);

//alt©¥na ekle

#ifdef ENABLE_BATTLE_PASS
	ch->ExternBattlePass();
	ch->Load_BattlePass();
#endif