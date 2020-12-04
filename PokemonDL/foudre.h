#pragma once
#include "pokemon.h"

class CElectrique : public CPokemon
{
public:
	bool paralyze();

private:
	int m_paralysis;
};
