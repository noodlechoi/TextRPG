#include <stdlib.h>
#include <crtdbg.h>
#include "UI.h"
#include "header.h"

#include "Character.h"
#include "Player.h"

int main()
{
	// memory leak check
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	string name1= "hi";
	string name2 = "bye";
	CPlayer player1(name1, 1, 10, 1, 10, 10, 10);
	CPlayer player2(name2, 1, 10, 1, 10, 10, 10);

	player1.attack(player2);
}