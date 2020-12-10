#pragma once
#include "pokemon.h"

class CElectric : public CPokemon
{
public:

	CElectric();
	bool paralyze();

private:
	int m_paralysis;
};