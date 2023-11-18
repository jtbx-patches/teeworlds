/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#include <game/server/gamecontext.h>
#include "generated/protocol.h"
#include "ictf.h"

CGameControllerICTF::CGameControllerICTF(CGameContext *pGameServer)
: CGameControllerCTF(pGameServer)
{
	m_pGameType = "iCTF";
}
