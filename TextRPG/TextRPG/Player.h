#pragma once
#include "Character.h"

class CPlayer : public CCharacter
{
private:
	// mp, ����ġ �߰�
	int m_exp_now, m_exp_max;
public:
	CPlayer();
	CPlayer(string_view name);
	~CPlayer();
public:
	virtual void attack(CCharacter& enemy);
	virtual void demaged(const CCharacter& enemy);
	virtual void dead();
};

