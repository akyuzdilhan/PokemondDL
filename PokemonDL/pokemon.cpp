#include "pokemon.h"

using namespace std;

void CPokemon::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    //On enl�ve le nombre de d�g�ts re�us � la vie du personnage

    if (m_vie < 0) //Pour �viter d'avoir une vie n�gative
    {
        m_vie = 0; //On met la vie � 0 (cela veut dire mort)
    }
}

void CPokemon::attaquer(CPokemon& cible)
{
    m_degat = 20 * (m_attaque / cible.m_defense) * m_coeff; // je sais pas si �a va ici
    cible.recevoirDegats(m_degat);
    //On inflige � la cible les d�g�ts que cause notre arme
}

bool CPokemon::estVivant()
{
    return m_vie > 0;
}