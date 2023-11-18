/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#include <game/server/gamecontext.h>
#include "generated/protocol.h"
#include "ctf.h"
#include "gctf.h"

CGameControllerGCTF::CGameControllerGCTF(CGameContext *pGameServer)
: CGameControllerCTF(pGameServer)
{
	m_pGameType = "gCTF";
}
