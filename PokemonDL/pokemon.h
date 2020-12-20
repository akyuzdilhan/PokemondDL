#pragma once
#include <string>
#include <vector>

class CPokemon
{
private:
    std::string m_nom;
    std::string m_etat;
    int m_vie;
    std::string m_type;
    int m_vitesse;
    int m_attaque;
    int m_defense;
    int m_degat;
    int m_power;
    int m_nbUse;
    float m_coeff;
    float m_fail;

public:

    CPokemon();
    virtual ~CPokemon();
    CPokemon(std::string p_nom, std::string p_type, int p_attaque, int p_vie,  int p_defense, int p_vitesse);
    void recevoirDegats(int nbDegats);
    void attaquer(CPokemon& cible);
    std::vector<CPokemon *> statsMonster();
    std::vector<CPokemon*> attacksMonster();
    bool estVivant();

    std::string getNom();
    std::string getType();
    int getVie();
    int getVitesse();
    int getAttaque();
    int getDefense();
    int getPower();
    int getNbUse();
    float getFail();

    void setNom(std::string nom);
    void setType(std::string type);
    void setVie(int vie);
    void setVitesse(int vitesse);
    void setAttaque(int attaque);
    void setDefense(int defense);
    void setPower(int power);
    void setNbUse(int nbUse);
    void setFail(float fail);

};
