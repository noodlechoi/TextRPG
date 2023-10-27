#pragma once
#include "Player.h"
#include "Monster.h"
#include "UI.h"

class CManageObject
{
private:
	CPlayer m_player;
	CMonster* m_monsters;

	CUI m_ui;
public:
	CManageObject();
	~CManageObject();
};

