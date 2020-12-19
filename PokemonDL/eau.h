#pragma once
#include "pokemon.h"

class CWater : public CPokemon
{
private:
	int m_flood; // probabilit� d'inonder le terrain
	int m_fall; // probabilit� pour l'adversaire de chuter

public:

	CWater();
	bool flood(); // indique si le terrain est inond� ou non suite � l�attaque

	float getFlood();
	float getFall();

	void setFlood(float flood);
	void setFall(float fall);
};