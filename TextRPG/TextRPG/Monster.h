#pragma once
#include "Character.h"

class CMonster : public CCharacter
{
private:
	enum Kind : size_t
	{
		Slime,
		Ork,
		Basilisk,
	};

	// 객체 생성시 랜덤으로 kind 설정
	size_t m_kind;
public:
	CMonster();
	CMonster(string_view name);
	~CMonster();
public:

	virtual void attack(CCharacter& enemy) override;
	virtual void demaged(const CCharacter& enemy) override;
	virtual void dead() override;

	virtual void showAllState() const override;
};

