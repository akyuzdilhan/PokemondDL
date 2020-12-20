#include "eau.h"

using namespace std;

bool CWater::flood() {
	return m_flood > 0;
}

CWater::CWater() {

}

float CWater::getFlood()
{
    return m_flood;
}
float CWater::getFall()
{
    return m_fall;
}

void CWater::setFlood(float flood) {
    m_flood = flood;
}
void CWater::setFall(float fall) {
    m_fall = fall;
}