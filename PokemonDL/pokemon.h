#pragma once
#ifndef POKEMON_H
#define POKEMON_H
#include <string>

class CPokemon
{
public:

    CPokemon();
    void recevoirDegats(int nbDegats);
    void attaquer(CPokemon& cible);
    std::string monstre();
    bool estVivant();
    
private:

    std::string m_nom;
    std::string m_etat; //un seul etat possible
    int m_vie;
    int m_vitesse;
    int m_speedMin;
    int m_speedMax;
    int m_attaque;
    int m_defense;
<<<<<<< HEAD
    int m_degat; // je suis pas sur de celui là
    float m_coeff; // je suis pas sur de celui là aussi
    // avantage ici ?
}; 
=======
    float m_degat; // je suis pas sur de celui là
    float m_coeff; // je suis pas sur de celui là aussi

    enum class eType
    {
        NORMAL,
        EAU,
        FEU,
        PLANTE,
        INSECTE,
        ROCHE,
        FOUDRE,
        NB_TYPE
    };
};
#endif
>>>>>>> 96af9e4798e309ac09fd2709f0c84fda14d159fd
