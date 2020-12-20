#include <fstream>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <regex>
#include <string>
#include <sstream>
#include <vector>

#include "pokemon.h"
#include "foudre.h"
#include "eau.h"
#include "feu.h"
#include "insecte.h"
#include "plante.h"
#include "terre.h"

using namespace std;

vector<CPokemon *> CPokemon::statsMonster() {
    ifstream infile("monsters.pkmn");
    srand(time(NULL));
    string namePokemon, typePokemon, name, type, ligne;
    float specialiteFichier = 0.00, specialite = 0.00, specialiteFichier2 = 0.00, specialite2 = 0.00;
    int hp = 0, hpminfichier = 0, hpmaxfichier = 0, speed = 0, speedminfichier = 0, speedmaxfichier = 0, attack = 0, attackminfichier = 0, attackmaxfichier = 0, defense = 0, defenseminfichier = 0, defensemaxfichier = 0;
    vector<CPokemon*> vectorPokemons;  // le pointeur permet de caster le pokemon dans les classes filles

    string line;
    while (std::getline(infile, line))
    {
        while (std::getline(infile, line) && line != "EndMonster")
        { 
            std::istringstream iss(line);
            if (iss >> ligne) {
                if (ligne == "Name") {
                    if (iss >> name) {
                        namePokemon = name;
                    }
                }
                if (ligne == "Type") {
                    if (iss >> type) {
                        typePokemon = type;
                    }
                }  
                if (ligne == "HP") {
                    if (iss >> hpminfichier >> hpmaxfichier) {
                        hp = rand()% (hpmaxfichier - hpminfichier +1) + hpminfichier;
                    }
                }
                if (ligne == "Speed") {
                    if (iss >> speedminfichier >> speedmaxfichier) {
                        speed = rand() % (speedmaxfichier - speedminfichier + 1) + speedminfichier;
                    }
                }
                if (ligne == "Attack") {
                    if (iss >> attackminfichier >> attackmaxfichier) {
                        attack = rand() % (attackmaxfichier - attackminfichier + 1) + attackminfichier;
                    }
                }
                if (ligne == "Defense") {
                    if (iss >> defenseminfichier >> defensemaxfichier) {
                        defense = rand() % (defensemaxfichier - defenseminfichier + 1) + defenseminfichier;
                    }
                }
                if (ligne == "Paralysis" || ligne == "Protect" || ligne == "Burn" || ligne == "Heal" || ligne == "Poison" || ligne == "Flood") {
                    if (iss >> specialiteFichier) {
                        specialite = specialiteFichier;
                    }
                }
                if (ligne == "Fall") {
                    if (iss >> specialiteFichier2) {
                        specialite2 = specialiteFichier2;
                    }
                }
            }
            CPokemon* pokemon = new CPokemon();
            
            if (typePokemon == "Electric") {
                pokemon = new CElectric();
                static_cast<CElectric*>(pokemon)->setParalysis(specialite);
            }
            else if (typePokemon == "Water") { 
                pokemon = new CWater();
                static_cast<CWater*>(pokemon)->setFlood(specialite);
                static_cast<CWater*>(pokemon)->setFall(specialite2);
            }
            else if (typePokemon == "Rock") {
                pokemon = new CRock();
                static_cast<CRock*>(pokemon)->setHide(specialite);
            }
            else if (typePokemon == "Fire") {
                pokemon = new CFire();   // créer un pointeur de Pokemon et l'ajouter dans le vector /
                static_cast<CFire*>(pokemon)->setBurn(specialite);
            }
            else if (typePokemon == "Plant") {
                pokemon = new CPlant();
                static_cast<CPlant*>(pokemon)->setGuerrir(specialite);
            }
            else if (typePokemon == "Insect") {
                pokemon = new CInsect();
                static_cast<CInsect*>(pokemon)->setDegatPoison(specialite);
            }
            
            pokemon->setNom(namePokemon);   // créer les getter et le setter et faire un pokmon.setName(name); pokemon.setHP(hp);
            pokemon->setType(typePokemon);
            pokemon->setVie(speed);
            pokemon->setVitesse(hp);
            pokemon->setAttaque(attack);
            pokemon->setDefense(defense);
                // faire l'instanciation pour les classes filles
                // faire une classe qui lit les fichiers, readfile.cpp
            vectorPokemons.push_back(pokemon);
        }
        cout << "nom : " << namePokemon << " type : " << typePokemon << " vie : " << hp << " vitesse : " << speed << " attaque : " << attack << " defense : " << defense << " specialité : " << specialite << " specialité2 : " << specialite2 << endl;
    }
    return vectorPokemons;
}
/*
vector<CPokemon*> CPokemon::statsMonster() {


}
*/

CPokemon::CPokemon(string p_nom, string p_type, int p_attaque, int p_vie, int p_defense, int p_vitesse) {
    m_nom = p_nom;
    m_type = p_type;
    m_attaque = p_attaque;
    m_vie = p_vie;
    m_defense = p_defense;
    m_vitesse = p_vitesse;
}

CPokemon::CPokemon() {

}

CPokemon::~CPokemon() {

}

void CPokemon::recevoirDegats(int nbDegats) {
	m_vie -= nbDegats;

	if (m_vie < 0) { //Permet de ne pas avoir une vie négative
		m_vie = 0; //Le monstre est mort
	}
}

void CPokemon::attaquer(CPokemon& monster) {
	m_degat = 20 * (m_attaque / monster.m_defense) * m_coeff;
	monster.recevoirDegats(m_degat);
}

bool CPokemon::estVivant() {
	return m_vie > 0;
}

string CPokemon::getNom()
{
    return m_nom;
}
string CPokemon::getType()
{
    return m_type;
}
int CPokemon::getVie()
{
    return m_vie;
}
int CPokemon::getVitesse()
{
    return m_vitesse;
}
int CPokemon::getAttaque()
{
    return m_attaque;
}
int CPokemon::getDefense()
{
    return m_defense;
}

void CPokemon::setNom(std::string nom) {
    m_nom = nom;
}
void CPokemon::setType(std::string type) {
    m_type = type;
}
void CPokemon::setVie(int vie) {
    m_vie = vie;
}
void CPokemon::setVitesse(int vitesse) {
    m_vitesse = vitesse;
}
void CPokemon::setAttaque(int attaque) {
    m_attaque = attaque;
}
void CPokemon::setDefense(int defense) {
    m_defense = defense;
}