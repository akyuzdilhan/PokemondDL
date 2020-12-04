#pragma once
#include "pokemon.h"

class CRock : public CPokemon
{
public:
	bool hide();

private:
	int m_hide; 
};
