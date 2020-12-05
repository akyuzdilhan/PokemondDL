#pragma once
#include "pokemon.h"

class CGrass : public CPokemon
{
public:
<<<<<<< HEAD
	bool recoveryHide(int m_vie);
	
=======

	CGrass();
>>>>>>> 96af9e4798e309ac09fd2709f0c84fda14d159fd
private:
	bool m_winHide;

<<<<<<< HEAD
};

class CPlant : public CGrass
{
public :
	// j'ai pas compris
private :
	// j'ai pas compris
};

class CInsect : public CGrass
{
public:

private:
	bool m_probabilityPoison; // probabilité d'empoisonner
	bool m_degatPoison; // dégat de l'empoisonnement (1/10 des dégats)
=======
>>>>>>> 96af9e4798e309ac09fd2709f0c84fda14d159fd
};