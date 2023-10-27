#include "UI.h"

CUI::CUI() : m_now_state{NowState::StartMenu }
{

}

CUI::~CUI()
{

}

void CUI::startMenu()
{
	while (true) {
		cout << format("Hello Text RPG!") << endl;
		cout << Menu << ". Menu" << endl;
		cout << Exit << ". Exit" << endl;

		m_now_state = inputMenu();

		if (m_now_state == Menu || m_now_state == Exit) {
			break;
		}
		
		// �������� �ʴ� ���� �Է� ��
		cout << format("�������� �ʴ� �����Դϴ�. �ٽ� �Է����ּ���.") << endl;
	}

}

void CUI::homeMenu()
{
	while (true) {
		cout << Player << ". Show Player Status" << endl;
		cout << Shop << ". Move Shop" << endl;
		cout << Battle << ". Move Field" << endl;
		cout << Exit << ". Exit" << endl;

		m_now_state = inputMenu();

		if (m_now_state == Player || m_now_state == Shop || m_now_state == Battle || m_now_state == Exit) {
			break;
		}

		// �������� �ʴ� ���� �Է� ��
		cout << format("�������� �ʴ� �����Դϴ�. �ٽ� �Է����ּ���.") << endl;
	}
}

string CUI::inputName()
{
	string name;
	cout << format("Input your name : ");
	cin >> name;

	return name;
}

int CUI::inputMenu()
{
	int num;
	cout << format("Choose Menu (Input number) : ");
	cin >> num;
	cout << endl;

	return num;
}

//void CUI::showStatus(const CCharacter& character) const
//{
//	character.showAllState();
//}

void CUI::checkState(CManageObject& manager)
{
	switch (m_now_state)
	{
	case Menu:
		homeMenu();
		break;
	case Player:
		manager.showStatus();
		m_now_state = Menu;
		break;
	case Shop:

		break;
	case Battle:

		break;
	case Exit:
		cout << format("������ �����մϴ�.") << endl;
		exit(0);
		break;
	default:
		cout << format("�������� �ʴ� �����Դϴ�. ������ �����մϴ�.") << endl;
		exit(-1);
		break;
	}
}
