#pragma once
#include <string>
#include <vector>

class CPokemon
{
private:
    //ajouter les getteurs et setter
    std::string m_nom;
    std::string m_etat;
    int m_vie;
    std::string m_type;
    int m_vitesse;
    int m_attaque;
    int m_defense;
    int m_degat;
    float m_coeff;

    //CPokemon();

public:

    virtual ~CPokemon(); // vérifier si il faut bien mettre virtual
    CPokemon();
    CPokemon(std::string p_nom, std::string p_type, int p_attaque, int p_vie,  int p_defense, int p_vitesse);
    void recevoirDegats(int nbDegats);
    void attaquer(CPokemon& cible);
    std::vector<CPokemon *> statsMonster();
    bool estVivant();

    std::string getNom();
    std::string getType();
    int getVie();
    int getVitesse();
    int getAttaque();
    int getDefense();
    /*
    virtual float getParalysis() = 0;
    virtual float getHide() = 0;
    virtual float getBurn() = 0; //vérifier si c'est bien des int
    virtual float getDegatPoison() = 0;
    virtual float getGuerrir() = 0;
    virtual float getFlood() = 0;
    virtual float getFall() = 0;
    */
    void setNom(std::string nom);
    void setType(std::string type);
    void setVie(int vie);
    void setVitesse(int vitesse);
    void setAttaque(int attaque);
    void setDefense(int defense);
    /*
    virtual void setParalysis(float paralysis) = 0;
    virtual void setHide(float hide) = 0;
    virtual void setBurn(float burn) = 0;
    virtual void setDegatPoison(float degatPoison) = 0;
    virtual void setGuerrir(float guerrir) = 0;
    virtual void setFlood(float flood) = 0;
    virtual void setFall(float fall) = 0;
    */
};
