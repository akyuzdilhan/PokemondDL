#pragma once
#include "herbe.h"

class CInsect : public CGrass
{
private:
	bool m_probabilityPoison; // probabilit� d'empoisonner
	bool m_degatPoison; // d�gat de l'empoisonnement (1/10 des d�gats)

public:
	int getDegatPoison();

	void setDegatPoison(float degatPoison);
};
