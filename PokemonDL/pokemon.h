#pragma once
#define POKEMON_H
#include <string>

class CPokemon
{
public:

    CPokemon();
    void recevoirDegats(int nbDegats);
    void attaquer(CPokemon& cible);
    void statsMonster();
    bool estVivant();
    int genereVie(int m_vieMin, int m_vieMax);
    int genereVitesse(int m_vitesseMin, int m_vitesseMax);

private:

    std::string m_nom[18];
    std::string m_etat; //un seul etat possible
    int m_vie; //
    int m_vieMin;
    int m_vieMax;
    int m_vitesse; //
    int m_vitesseMin;
    int m_vitesseMax;
    int m_attaque; //
    int m_defense; //
    int m_degat; // je suis pas sur de celui l�
    float m_coeff; // je suis pas sur de celui l� aussi
    // avantage ici ?
}; 

    float m_degat; // je suis pas sur de celui l�
    float m_coeff; // je suis pas sur de celui l� aussi

    enum class eType // mettre dans un fichier � part pour rassebler tout mes enum
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
//};
