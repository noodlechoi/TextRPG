// header for memory leak checking
#include <stdlib.h>
#include <crtdbg.h>

#include "ManageObject.h"
#include "UI.h"
#include "header.h"

// 소멸자 virtual 설정
// override 함수는 virtual 지우기
// 싱글톤 패턴 공부하기


int main()
{
	// memory leak check
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	// ui
	CUI ui;
	
	// object manage
	CManageObject manager(ui.inputName());

	ui.startMenu();

	// 게임 루프
	while (true) {
		ui.checkState(manager);
	}

	/*
	* test Character class
	string n1{ "1" }, n2{ "2" };
	CMonster m1(n1);
	CMonster m2(n2);
	m1.attack(m2);
	m1.attack(m2);
	*/
}