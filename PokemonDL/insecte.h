#pragma once
#include "herbe.h"

class CInsect : public CGrass
{
public:

private:
	bool m_probabilityPoison; // probabilité d'empoisonner
	bool m_degatPoison; // dégat de l'empoisonnement (1/10 des dégats)
};