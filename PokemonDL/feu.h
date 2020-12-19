#pragma once
#include "pokemon.h"

class CFire : public CPokemon
{
private:
	int m_burn;

public:
	CFire();
	bool burn();

	int getBurn();

	void setBurn(float burn);
};