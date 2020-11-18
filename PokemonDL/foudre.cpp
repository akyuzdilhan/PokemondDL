#include "foudre.h"

using namespace std;

bool CElectrique::paralyze()
{
	return m_paralysis > 0; // indiquer si l'ennemie est paralysé
}