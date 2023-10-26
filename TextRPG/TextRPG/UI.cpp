#include "UI.h"

CUI::CUI()
{

}

CUI::~CUI()
{

}

void CUI:: printMenu()
{
	cout << format("Text RPG") << endl;
	cout << format("Input name : ") << endl;
	// input in player name
	InputName();
}

string CUI::InputName()
{
	string name;
	cin >> name;

	return name;
}