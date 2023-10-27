#include "Player.h"

CPlayer::CPlayer() : CCharacter(), m_exp_now{ CCharacter::getExp() }, m_exp_max{ CCharacter::getExp() }
{
}

CPlayer::CPlayer(string_view name) : CCharacter(name), m_exp_now{ CCharacter::getExp() }, m_exp_max{ CCharacter::getExp() }
{

}

CPlayer::~CPlayer()
{

}


void CPlayer::attack(CCharacter& enemy)
{
	CCharacter::demaged(enemy);
}

void CPlayer::demaged(const CCharacter& enemy)
{
}

void CPlayer::dead()
{

}