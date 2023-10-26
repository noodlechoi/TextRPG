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
	// ���� ������ ���� �������� �Դ´�.
	enemy.demaged(*this);
}

void CCharacter::demaged(const CCharacter& enemy)
{
	// ���� ���ݷ¿� ����ؼ� hp�� ���δ�.
	m_hp_now -= enemy.m_atk;
	// �� Ŭ�������� ��� ���� �߰�!
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
