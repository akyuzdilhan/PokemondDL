#pragma once
#include "pokemon.h"

class CRock : public CPokemon
{
private:
	int m_hide;

public:
	// CRock();
	bool hide();

	int getHide();

	void setHide(float m_hide);
};