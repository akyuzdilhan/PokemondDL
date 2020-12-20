#pragma once
#include <string>
<<<<<<< HEAD
#include <vector>
=======
#include <vector> //include la bibliothèque vector donc 30 erreurs de moins
>>>>>>> cf99808476d4348dcf0f0a0b110a4015f5b22fa1

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

<<<<<<< HEAD
    //CPokemon();

public:

    virtual ~CPokemon(); // vérifier si il faut bien mettre virtual
    CPokemon();
=======
    
protected:

    CPokemon(); //s'il n'est pas en protected 1 erreur apparaît

public:

    virtual ~CPokemon(); // vérifier s'il faut bien mettre virtual
>>>>>>> cf99808476d4348dcf0f0a0b110a4015f5b22fa1
    CPokemon(std::string p_nom, std::string p_type, int p_attaque, int p_vie,  int p_defense, int p_vitesse);
    void recevoirDegats(int nbDegats);
    void attaquer(CPokemon& cible);
    std::vector<CPokemon *> statsMonster();
    bool estVivant();

<<<<<<< HEAD
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
=======
    std::string GetNom();
    std::string GetType();
    int GetVie();
    int GetVitesse();
    int GetAttaque();
    int GetDefense();
    virtual float getParalysis();
    virtual int getHide();
    virtual float getBurn(); //passage en float dans tout les fichiers nécessaires
    virtual float getDegatPoison(); 
    virtual float getGuerrir();
    virtual float getFlood();
    virtual float getFall();

>>>>>>> cf99808476d4348dcf0f0a0b110a4015f5b22fa1
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
