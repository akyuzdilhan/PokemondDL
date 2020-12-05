#pragma once
#include "pokemon.h"

class CElectrique : public CPokemon
{
public:

	CElectrique();
	bool paralyze();

private:
	int m_paralysis;
};