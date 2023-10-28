/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef GAME_SERVER_GAMEMODES_PG_H
#define GAME_SERVER_GAMEMODES_PG_H
#include <game/server/gamecontroller.h>

class CGameControllerPG : public IGameController
{
public:
	CGameControllerPG(class CGameContext *pGameServer);
};

#endif
