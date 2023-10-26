#pragma once
#include "Character.h"

class CPlayer : public CCharacter
{
private:
	// mp, 경험치 추가
	int m_mp_now, m_mp_max;
	int m_exp_now, m_exp_max;
public:
	CPlayer();
	CPlayer(string_view name, size_t level, size_t atk, size_t def, int hp_max, int mp_max, int exp_max);
	~CPlayer();
public:
	virtual void attack(CCharacter& enemy);
	virtual void demaged(const CCharacter& enemy);
	virtual void dead();
};

