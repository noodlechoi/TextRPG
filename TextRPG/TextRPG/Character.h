#pragma once
#include "header.h"

// ���Ϳ� �÷��̾��� ���� Ŭ����
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
	// ���ݷ�, ����s
	size_t m_atk;
	size_t m_def;
	// ����, �ִ�
	int m_hp_now, m_hp_max;
	int m_mp_now, m_mp_max;
public:
	CCharacter();
	CCharacter(string_view name);
	~CCharacter();
public:
	// attack, damaged, dead �Լ��� ����Ǿ �����
	// 
	// ���� ���� ����
	virtual void attack(CCharacter& enemy);
	// ���� ���� ����(���� ���� ����)
	// �� ��ü�� ���� ����
	virtual void demaged(const CCharacter& enemy);
	virtual void dead() = 0;
	// show �Լ�
	virtual void showAllState() const;

	// getter �Լ�
	// return {now, max}
	pair<int, int> getHP() const;
	string getName() const;
	size_t getDef() const;
	// player class�� �����ϱ� ���� getter
	size_t getExp() const;

};

