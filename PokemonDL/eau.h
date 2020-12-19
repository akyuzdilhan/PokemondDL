#pragma once
#include "pokemon.h"

class CWater : public CPokemon
{
private:
	int m_flood; // probabilité d'inonder le terrain
	int m_fall; // probabilité pour l'adversaire de chuter

public:

	CWater();
	bool flood(); // indique si le terrain est inondé ou non suite à l’attaque

	float getFlood();
	float getFall();

	void setFlood(float flood);
	void setFall(float fall);
};