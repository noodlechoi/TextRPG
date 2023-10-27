#include "Monster.h"
#include "Random.h"

// ================================================================================================ //
// Monster class
CMonster::CMonster() : CCharacter(), m_kind{None}
{
}


CMonster::CMonster(string_view name, size_t kind) : CCharacter(name), m_kind{kind}
{
}

CMonster::~CMonster()
{
	
}

void CMonster::attack(CCharacter& enemy)
{
	// attack, damaged, dead �Լ��� ����Ǿ �����
	// CCharacter Ŭ���� ���Ƿ� �̵�
	CCharacter::attack(enemy);
}

void CMonster::demaged(const CCharacter& enemy)
{
	
}

void CMonster::dead()
{
	cout << format("{}��(��) óġ�Ǿ����ϴ�.", m_name) << endl;
}

void CMonster::showAllState() const
{
	CCharacter::showAllState();
	cout << format("kind : {}", m_kind) << endl;
	cout << endl;
}
// ================================================================================================ //
//
//// ================================================================================================ //
//// Slime class
//
//CSlime::CSlime() : CMonster("S" + to_string(g_cnt), Kind::Slime)
//{
//	g_cnt++;
//}
//CSlime::~CSlime()
//{
//	g_cnt--;
//}
//
//// ================================================================================================ //
//
//// ================================================================================================ //
//// Ork class
//Ork::Ork() : CMonster("O" + to_string(g_cnt), Kind::Ork)
//{
//	g_cnt++;
//}
//Ork::~Ork()
//{
//	g_cnt--;
//}
//// ================================================================================================ //
//
//// ================================================================================================ //
//// Basilisk class
//
//Basilisk::Basilisk() : CMonster("B" + to_string(g_cnt), Kind::Basilisk)
//{
//	g_cnt++;
//}
//Basilisk::~Basilisk()
//{
//	g_cnt--;
//}
//// ================================================================================================ //
