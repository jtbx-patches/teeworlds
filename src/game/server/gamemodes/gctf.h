/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef GAME_SERVER_GAMEMODES_GCTF_H
#define GAME_SERVER_GAMEMODES_GCTF_H
#include <game/server/gamecontroller.h>
#include <game/server/entity.h>
#include "ctf.h"

class CGameControllerGCTF : public CGameControllerCTF
{
public:
	CGameControllerGCTF(class CGameContext *pGameServer);
	virtual bool IsInstagib() const { return true; }
	virtual int InstagibWeapon() const { return WEAPON_GRENADE; }
};

#endif

