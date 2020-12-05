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
	bool m_probabilityPoison; // probabilit� d'empoisonner
	bool m_degatPoison; // d�gat de l'empoisonnement (1/10 des d�gats)
};