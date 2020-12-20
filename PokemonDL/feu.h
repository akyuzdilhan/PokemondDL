#pragma once
#include "pokemon.h"

class CFire : public CPokemon
{
private:
	float m_burn;

public:
	CFire();
	bool burn();

	float getBurn();

	void setBurn(float burn);
};