#pragma once
#include "Character.h"

class CMonster : public CCharacter
{
protected:
	enum Kind : size_t
	{
		None,
		Slime,
		Ork,
		Basilisk,
	};

	// 객체 생성시 랜덤으로 kind 설정
	size_t m_kind;
public:
	CMonster();
	CMonster(string_view name, size_t kind);
	~CMonster();
public:

	virtual void attack(CCharacter& enemy) override;
	virtual void demaged(const CCharacter& enemy) override;
	virtual void dead() override;

	virtual void showAllState() const override;
};
//
//class CSlime : public CMonster
//{
//private:
//	static size_t g_cnt;
//public:
//	CSlime();
//	~CSlime();
//public:
//};
//
//class Ork : public CMonster
//{
//private:
//	static size_t g_cnt;
//
//public:
//	Ork();
//	~Ork();
//public:
//};
//
//class Basilisk : public CMonster
//{
//private:
//	static size_t g_cnt;
//
//public:
//	Basilisk();
//	~Basilisk();
//public:
//};