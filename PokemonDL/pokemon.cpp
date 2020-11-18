#include "pokemon.h"

using namespace std;

void CPokemon::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    //On enlève le nombre de dégâts reçus à la vie du personnage

    if (m_vie < 0) //Pour éviter d'avoir une vie négative
    {
        m_vie = 0; //On met la vie à 0 (cela veut dire mort)
    }
}

void CPokemon::attaquer(CPokemon& cible)
{
    m_degat = 20 * (m_attaque / cible.m_defense) * m_coeff; // je sais pas si ça va ici
    cible.recevoirDegats(m_degat);
    //On inflige à la cible les dégâts que cause notre arme
}

bool CPokemon::estVivant()
{
    return m_vie > 0;
}