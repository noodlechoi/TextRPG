#include "Character.h"

CCharacter::CCharacter() : m_name{"player"}, m_level{ StartState::LEVEL }, m_atk{ StartState::ATK }, m_def{ StartState::DEF }
							, m_hp_now{ StartState::HP }, m_hp_max{ StartState::HP }, m_mp_now{ StartState::MP }, m_mp_max{ StartState::MP }
{
}

CCharacter::CCharacter(string_view name) : m_name{name}, m_level{StartState::LEVEL}, m_atk{ StartState::ATK}, m_def{ StartState::DEF}
											, m_hp_now{ StartState::HP }, m_hp_max{ StartState::HP }, m_mp_now{ StartState::MP }, m_mp_max{ StartState::MP }
{
}

CCharacter::~CCharacter()
{
}


void CCharacter::attack(CCharacter& enemy)
{
	// �� ��ü�� �������� �Դ´�.
	cout << format("{} attack {} to {}", m_name, enemy.m_name, enemy.m_def) << endl;

	enemy.CCharacter::demaged(*this);
}

void CCharacter::demaged(const CCharacter& enemy)
{
	// ���� ���ݷ¿� ����ؼ� hp�� ���δ�.
	m_hp_now -= enemy.m_atk;

	// ��� üũ
	cout << format("{} is demaged by {}", m_name, enemy.m_name) << endl;
	cout << format("HP : {} / {}", m_hp_now, m_hp_max) << endl;
	if (m_hp_now <= 0) {
		CCharacter::dead();
	}

	// �� Ŭ������ ���� �߰�
	demaged(enemy);
}

void CCharacter::dead()
{
	cout << format("{} is dead", m_name) << endl;

	// �� Ŭ������ ���� �߰�!
	dead();
}

size_t CCharacter::getExp() const
{
	return StartState::EXP;
}

void CCharacter::showAllState() const
{
	cout << format("name : {}", m_name) << endl;
	cout << format("level : {}", m_level) << endl;
	cout << format("ATK : {}", m_atk) << endl;
	cout << format("DEF : {}", m_def) << endl;
	cout << format("HP : {} / {}", m_hp_now, m_hp_max) << endl;
	cout << format("MP : {} / {}", m_mp_now, m_mp_max) << endl;
}