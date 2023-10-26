#include "Player.h"

CPlayer::CPlayer() : CCharacter(), m_mp_now{}, m_mp_max{}, m_exp_now{}, m_exp_max{}
{

}

CPlayer::CPlayer(string_view name, size_t level, size_t atk, size_t def, int hp_max, int mp_max, int exp_max) : CCharacter(name, level, atk, def, hp_max), m_mp_now{}, m_mp_max{}, m_exp_now{}, m_exp_max{}
{

}

CPlayer::~CPlayer()
{

}


void CPlayer::attack(CCharacter& enemy)
{
	// �÷��̾ ����
	enemy.demaged(*this);
	cout << format("{} attack {} to {}", this->getName(), enemy.getName(), enemy.getDef()) << endl;
}

void CPlayer::demaged(const CCharacter& enemy)
{
	// ���� Ŭ�������� �������� ����
	CCharacter::demaged(enemy);
	// ��� üũ
	auto [hp_max, hp_now] { CCharacter::getHP()};
	cout << format("{} is demaged by {}", this->getName(), enemy.getName()) << endl;
	cout << format("HP : {} / {}", hp_now, hp_max) << endl;
	if (hp_now <= 0) {
		this->dead();
	}
}

void CPlayer::dead()
{
	cout << format("{} is dead", this->getName()) << endl;

}