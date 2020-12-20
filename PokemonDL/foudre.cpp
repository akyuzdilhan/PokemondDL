#include "pokemon.h"
#include "foudre.h"
#include <iostream>
#include <time.h>

using namespace std;

CElectric::CElectric() {

}

bool CElectric::paralyze() {
    srand(time(NULL));
    m_paralysis = (rand() % (100 - 1 + 1)) + 1;
    if (m_paralysis == 100) {
        cout << "Vous êtes paralyse !" << endl;
    }
    else {
        cout << "A vous d'attaquer !" << endl;
    }
	return m_paralysis > 0;
}

float CElectric::getParalysis()
{
    return m_paralysis;
}

void CElectric::setParalysis(float paralysis) {
    m_paralysis = paralysis;
}