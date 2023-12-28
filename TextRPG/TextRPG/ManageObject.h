#pragma once
#include "Player.h"
#include "Monster.h"

class CManageObject
{
private:
	CPlayer m_player;
	//std::vector<CMonster> m_monsters;s

public:
	CManageObject();
	CManageObject(string_view name);
	~CManageObject();
public:
	void showStatus();
};

