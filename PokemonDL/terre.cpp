#include "terre.h"

using namespace std;

bool CRock::hide() {
	return m_hide > 0;
}

int CRock::getHide()
{
    return m_hide;
}

void CRock::setHide(float hide) {
    m_hide = hide;
}