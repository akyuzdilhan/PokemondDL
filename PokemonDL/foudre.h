#pragma once
#include "pokemon.h"

class CElectric : public CPokemon
{
private:
	float m_paralysis;


public:

	CElectric();
	bool paralyze();

	float getParalysis();

	void setParalysis(float paralysis);

};