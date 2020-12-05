#pragma once
#include "pokemon.h"

class CFire : public CPokemon
{
public:

	CFire();
	bool burn();

private:
	int m_burn;
};