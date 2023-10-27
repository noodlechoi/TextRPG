#include <stdlib.h>
#include <crtdbg.h>
#include "ManageObject.h"
#include "UI.h"
#include "header.h"


// 랜덤 엔진 설정
random_device rd;
mt19937 gen(rd());

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
	CMonster m1(n1, 1, 5, 5, 10, 0);
	CMonster m2(n2, 1, 5, 5, 10, 0);
	m1.attack(m2);
	m1.attack(m2);*/
}