#pragma once
#include "pokemon.h"

class CFire : public CPokemon
{
public:
	bool burn();

private:
	int m_burn;
};
