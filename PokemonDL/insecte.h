#pragma once
#include "herbe.h"

class CInsect : public CGrass
{
private:
	float m_probabilityPoison; // probabilité d'empoisonner
	float m_degatPoison; // dégat de l'empoisonnement (1/10 des dégats)

public:
	float getDegatPoison();

	void setDegatPoison(float degatPoison);
};
