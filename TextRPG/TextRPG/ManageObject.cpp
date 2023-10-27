#include "ManageObject.h"


CManageObject::CManageObject() : m_player(), m_monsters{nullptr}
{

}


CManageObject::CManageObject(string_view name) : m_player(name), m_monsters{ nullptr }
{

}

CManageObject::~CManageObject()
{
	if (m_monsters) {
		delete[] m_monsters;
	}
}

void CManageObject::showStatus()
{
	m_player.showAllState();
}