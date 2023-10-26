#include "Character.h"

CCharacter::CCharacter() : m_name{}, m_level{1}, m_atk{}, m_def{}, m_hp_now{}, m_hp_max{}
{
}

CCharacter::CCharacter(string_view name, size_t level, size_t atk, size_t def, int hp_max) : m_name{name}, m_level{level}, m_atk{atk}, m_def{def}, m_hp_now{ hp_max }, m_hp_max{ hp_max }
{
}

CCharacter::~CCharacter()
{
}


void CCharacter::attack(CCharacter& enemy)
{
	// 내가 때리면 적이 데미지를 입는다.
	enemy.demaged(*this);
}

void CCharacter::demaged(const CCharacter& enemy)
{
	// 적의 공격력에 비례해서 hp가 깎인다.
	m_hp_now -= enemy.m_atk;
	// 각 클래스마다 사망 조건 추가!
}

void CCharacter::dead()
{

}

pair<int, int> CCharacter::getHP() const
{
	return { this->m_hp_max, this->m_hp_now};
}

string CCharacter::getName() const
{
	return this->m_name;
}

size_t CCharacter::getDef() const
{
	return this->m_def;
}
