#pragma once
#include "Player.h"
#include "Monster.h"

class CManageObject
{
private:
	CPlayer m_player;
	CMonster* m_monsters;

public:
	CManageObject();
	CManageObject(string_view name);
	~CManageObject();
public:
	void showStatus();
};

