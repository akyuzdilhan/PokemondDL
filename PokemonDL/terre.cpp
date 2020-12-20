#include "terre.h"

using namespace std;

CRock::CRock() {

}

bool CRock::hide() {
	return m_hide > 0;
}

float CRock::getHide()
{
    return m_hide;
}

void CRock::setHide(float hide) {
    m_hide = hide;
}