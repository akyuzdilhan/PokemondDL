#pragma once
#include "herbe.h"

class CInsect : public CGrass
{
private:
	float m_probabilityPoison; // probabilit� d'empoisonner
	float m_degatPoison; // d�gat de l'empoisonnement (1/10 des d�gats)

public:
	float getDegatPoison();

	void setDegatPoison(float degatPoison);
};
