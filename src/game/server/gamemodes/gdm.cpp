/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#include <game/server/gamecontext.h>
#include "generated/protocol.h"
#include "gdm.h"

CGameControllerGDM::CGameControllerGDM(CGameContext *pGameServer)
: CGameControllerDM(pGameServer)
{
	m_pGameType = "gDM";
}
