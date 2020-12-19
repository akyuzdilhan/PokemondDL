#pragma once
#define POKEMON_H
#include <string>

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

    CPokemon();

public:

    virtual ~CPokemon(); // vérifier si il faut bien mettre virtual
    CPokemon(std::string p_nom, std::string p_type, int p_attaque, int p_vie,  int p_defense, int p_vitesse);
    void recevoirDegats(int nbDegats);
    void attaquer(CPokemon& cible);
    std::vector<CPokemon*> statsMonster();
    bool estVivant();

    std::string GetNom();
    std::string GetType();
    int GetVie();
    int GetVitesse();
    int GetAttaque();
    int GetDefense();
    virtual int getParalysis();
    virtual int getHide();
    virtual int getBurn(); //vérifier si c'est bien des int
    virtual int getDegatPoison(); 
    virtual float getGuerrir();
    virtual float getFlood();
    virtual float getFall();

    void setNom(std::string nom);
    void setType(std::string type);
    void setVie(int vie);
    void setVitesse(int vitesse);
    void setAttaque(int attaque);
    void setDefense(int defense);
    virtual void setParalysis(float paralysis);
    virtual void setHide(float hide);
    virtual void setBurn(float burn);
    virtual void setDegatPoison(float degatPoison);
    virtual void setGuerrir(float guerrir);
    virtual void setFlood(float flood);
    virtual void setFall(float fall);
};
