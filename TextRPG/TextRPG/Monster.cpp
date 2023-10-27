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
	// attack, damaged, dead 함수가 연계되어서 실행됨
	// CCharacter 클래스 정의로 이동
	CCharacter::attack(enemy);
}

void CMonster::demaged(const CCharacter& enemy)
{
	
}

void CMonster::dead()
{
	cout << format("{}이(가) 처치되었습니다.") << endl;
}

void CMonster::showAllState() const
{
	CCharacter::showAllState();
	cout << format("kind : {}", m_kind) << endl;
	cout << endl;
}