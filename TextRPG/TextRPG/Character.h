#pragma once
#include "header.h"

// 몬스터와 플레이어의 기초 클래스
class CCharacter
{
private:
	enum StartState
	{
		LEVEL = 1,
		ATK = 10,
		DEF = 10,
		HP = 100,
		MP = 100,
		EXP = 300,
	};

	const string m_name;
	size_t m_level;
	// 공격력, 방어력s
	size_t m_atk;
	size_t m_def;
	// 현재, 최대
	int m_hp_now, m_hp_max;
	int m_mp_now, m_mp_max;
public:
	CCharacter();
	CCharacter(string_view name);
	~CCharacter();
public:
	// attack, damaged, dead 함수가 연계되어서 실행됨
	// 
	// 내가 적을 공격
	virtual void attack(CCharacter& enemy);
	// 적이 나를 공격(내가 공격 받음)
	// 적 객체를 전달 받음
	virtual void demaged(const CCharacter& enemy);
	virtual void dead() = 0;
	// show 함수
	virtual void showAllState() const;

	// getter 함수
	// return {now, max}
	pair<int, int> getHP() const;
	string getName() const;
	size_t getDef() const;
	// player class에 전달하기 위한 getter
	size_t getExp() const;

};

