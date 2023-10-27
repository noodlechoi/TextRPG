#pragma once
#include "header.h"
#include "ManageObject.h"

// �޴�, ����, ����, ���� UI
class CUI
{
private:
	enum NowState
	{
		StartMenu = 0,
		Menu,
		// player states
		Player,
		Shop,
		Battle,
		Exit,
	};

	int m_now_state;
public:
	CUI();
	~CUI();
public:
	string inputName();
	// ��� �޴� ���� �Է��� �޴� �Լ�
	// �޴��� ������ ��, ���� ���°� �����
	int inputMenu();

	void startMenu();
	void homeMenu(); 
	//void showStatus(const CCharacter&) const;

	void checkState(CManageObject&);
};

