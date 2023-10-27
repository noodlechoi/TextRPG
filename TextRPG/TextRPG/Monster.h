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

	// ��ü ������ �������� kind ����
	size_t m_kind;
public:
	CMonster();
	CMonster(string_view name, size_t kind);
	~CMonster();
public:

	virtual void attack(CCharacter& enemy);
	virtual void demaged(const CCharacter& enemy);
	virtual void dead();
};

