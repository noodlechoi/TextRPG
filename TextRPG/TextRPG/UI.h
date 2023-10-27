#pragma once
#include "header.h"
#include "ManageObject.h"

// 메뉴, 정보, 상점, 전투 UI
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
	// 모든 메뉴 선택 입력을 받는 함수
	// 메뉴를 선택할 때, 현재 상태가 변경됨
	int inputMenu();

	void startMenu();
	void homeMenu(); 
	//void showStatus(const CCharacter&) const;

	void checkState(CManageObject&);
};

