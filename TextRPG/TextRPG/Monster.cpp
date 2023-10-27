#include "Monster.h"

// 랜덤 엔진
extern mt19937 gen;

CMonster::CMonster() : CCharacter()
{
	// 범위 설정 : 0 ~ 2
	uniform_int_distribution<size_t> dist(CMonster::Kind::Slime, CMonster::Kind::Basilisk);

	this->m_kind = dist(gen);
}


CMonster::CMonster(string_view name, size_t kind) : CCharacter(name)
{
	// 범위 설정 : 0 ~ 2
	uniform_int_distribution<size_t> dist(CMonster::Kind::Slime, CMonster::Kind::Basilisk);

	this->m_kind = dist(gen);
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