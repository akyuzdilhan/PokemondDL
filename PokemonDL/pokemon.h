#pragma once

#include <string>

class CPokemon
{
public:

    void recevoirDegats(int nbDegats);
    void attaquer(CPokemon& cible);
    bool estVivant();

private:

    std::string m_nom;
    std::string m_etat; //un seul etat possible
    int m_vie;
    int m_vitesse;
    int m_attaque;
    int m_defense;
    int m_degat; // je suis pas sur de celui là
    int m_coeff; // je suis pas sur de celui là aussi
    // avantage ici ?
}; 
