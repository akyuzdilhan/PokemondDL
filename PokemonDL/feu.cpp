#include "feu.h"

using namespace std;

bool CFire::burn() {
	return m_burn > 0;
}

float CFire::getBurn()
{
    return m_burn;
}

void CFire::setBurn(float burn) {
    m_burn = burn;
}