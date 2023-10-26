#pragma once
#include "header.h"

// ���Ϳ� �÷��̾��� ���� Ŭ����
class CCharacter
{
private:

	const string m_name;
	size_t m_level;
	// ���ݷ�, ����s
	size_t m_atk;
	size_t m_def;
	// ����, �ִ�
	int m_hp_now, m_hp_max;
public:
	CCharacter();
	CCharacter(string_view name, size_t level, size_t atk, size_t def, int hp_max);
	~CCharacter();
public:
	virtual void attack(CCharacter& enemy);
	virtual void demaged(const CCharacter& enemy);
	virtual void dead() = 0;

	// max, now
	pair<int, int> getHP() const;
	string getName() const;
	size_t getDef() const;
};

