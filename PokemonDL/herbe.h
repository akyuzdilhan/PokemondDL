#pragma once
#include "pokemon.h"

class CGrass : public CPokemon
{
public:
	bool recoveryHide(int m_vie);
	
	CGrass();
private:
	bool m_winHide;

};
