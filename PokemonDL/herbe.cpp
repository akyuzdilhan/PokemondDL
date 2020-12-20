#include "herbe.h"

using namespace std;

CGrass::CGrass() {

}

bool CGrass::recoveryHide(int m_vie)
{
	m_vie *= m_winHide;
	return m_winHide; // indiquer si l'ennemie est paralysé
}