#pragma once
#include "pokemon.h"

class CRock : public CPokemon
{
private:
	float m_hide;

public:
	CRock();
<<<<<<< HEAD
	std::vector<CRock*> statsMonster();
=======
>>>>>>> cf99808476d4348dcf0f0a0b110a4015f5b22fa1
	bool hide();

	float getHide();

	void setHide(float m_hide);
};