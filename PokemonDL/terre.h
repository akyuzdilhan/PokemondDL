#pragma once
#include "pokemon.h"

class CRock : public CPokemon
{
private:
	float m_hide;

public:
	CRock();
	
	bool hide();

	float getHide();

	void setHide(float m_hide);
};