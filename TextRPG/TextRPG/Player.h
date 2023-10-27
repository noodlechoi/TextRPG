#pragma once
#include "Character.h"

class CPlayer : public CCharacter
{
private:
	// mp, 경험치 추가
	size_t m_exp_now, m_exp_max;
public:
	CPlayer();
	CPlayer(string_view name);
	~CPlayer();
public:
	virtual void attack(CCharacter& enemy) override;
	virtual void demaged(const CCharacter& enemy) override;
	virtual void dead() override;

	virtual void showAllState() const override;
};

