#include "Monster.h"
#include "Random.h"

CMonster::CMonster() : CCharacter()
{
	CRandom rand_num;

	this->m_kind = rand_num.getInt(Slime, Basilisk);
}


CMonster::CMonster(string_view name) : CCharacter(name)
{
	CRandom rand_num;

	this->m_kind = rand_num.getInt(Slime, Basilisk);
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