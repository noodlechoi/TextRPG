#include "Monster.h"

// ���� ����
extern mt19937 gen;

CMonster::CMonster() : CCharacter()
{
	// ���� ���� : 0 ~ 2
	uniform_int_distribution<size_t> dist(CMonster::Kind::Slime, CMonster::Kind::Basilisk);

	this->m_kind = dist(gen);
}


CMonster::CMonster(string_view name, size_t kind) : CCharacter(name)
{
	// ���� ���� : 0 ~ 2
	uniform_int_distribution<size_t> dist(CMonster::Kind::Slime, CMonster::Kind::Basilisk);

	this->m_kind = dist(gen);
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
	cout << format("{}��(��) óġ�Ǿ����ϴ�.") << endl;
}

void CMonster::showAllState() const
{
	CCharacter::showAllState();
	cout << format("kind : {}", m_kind) << endl;
	cout << endl;
}