//uygun yerlere ekle

#ifdef ENABLE_BATTLE_PASS
ACMD(final_reward_battlepass);
ACMD(open_battlepass);
#endif

#ifdef ENABLE_BATTLE_PASS
	{ "open_battlepass", open_battlepass, 0, POS_DEAD, GM_PLAYER },
	{ "final_reward_battlepass", final_reward_battlepass, 0, POS_DEAD, GM_PLAYER },
#endif