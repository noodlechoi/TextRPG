#pragma once
#include "header.h"

// 몬스터와 플레이어의 기초 클래스
class CCharacter
{
private:

	const string m_name;
	size_t m_level;
	// 공격력, 방어력s
	size_t m_atk;
	size_t m_def;
	// 현재, 최대
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

