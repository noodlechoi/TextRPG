#include "ManageObject.h"


CManageObject::CManageObject() : m_player(), m_monsters{nullptr}, m_ui()
{

}

CManageObject::~CManageObject()
{
	if (m_monsters) {
		delete[] m_monsters;
	}
}