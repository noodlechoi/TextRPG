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
	// 적 객체가 데미지를 입는다.
	cout << format("{} attack {} to {}", m_name, enemy.m_name, enemy.m_def) << endl;

	enemy.CCharacter::demaged(*this);
}

void CCharacter::demaged(const CCharacter& enemy)
{
	// 적의 공격력에 비례해서 hp가 깎인다.
	m_hp_now -= enemy.m_atk;

	// 사망 체크
	cout << format("{} is demaged by {}", m_name, enemy.m_name) << endl;
	cout << format("HP : {} / {}", m_hp_now, m_hp_max) << endl;
	if (m_hp_now <= 0) {
		CCharacter::dead();
	}

	// 각 클래스에 대해 추가
	demaged(enemy);
}

void CCharacter::dead()
{
	cout << format("{} is dead", m_name) << endl;

	// 각 클래스에 대해 추가!
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