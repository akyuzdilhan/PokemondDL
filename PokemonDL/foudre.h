#pragma once
#include "pokemon.h"

class CElectric : public CPokemon
{
private:
	int m_paralysis;


public:

	CElectric();
	bool paralyze();

	int getParalysis();

	void setParalysis(float paralysis);

};