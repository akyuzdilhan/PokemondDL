#include "pokemon.h"
#include <fstream>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <regex>
#include <string>
#include <vector>
#define FILE_MONSTERS "D:\\Utilisateurs\\Léo\\Documents\\Léo\\Ecole\\Apprentissage\\ESIEA\\POO\\Projet\\PokemondDL\\PokemonDL\\Donnees\\monsters.pkmn"
#define FILE_ATTACK "D:\\Utilisateurs\\Léo\\Documents\\Léo\\Ecole\\Apprentissage\\ESIEA\\POO\\Projet\\PokemondDL\\PokemonDL\\Donnees\\attacks.pkmn"
#define FILE_OBJECTS "D:\\Utilisateurs\\Léo\\Documents\\Léo\\Ecole\\Apprentissage\\ESIEA\\POO\\Projet\\PokemondDL\\PokemonDL\\Donnees\\objects.pkmn"

using namespace std;




string CPokemon::monstre() {
    ifstream monstres(FILE_MONSTERS, ios::in);
    string ligne;
    string namePokemon = "vide";
    string typePokemon, hp, speed, attack, defense;

    while (!monstres.eof()) {
        getline(monstres, ligne);
            if (ligne != "") {
                if (regex_match(ligne.substr(1), regex("Name.*"))) {
                    namePokemon = ligne.substr(7);
                    cout << namePokemon << endl;
                }
                else if (regex_match(ligne.substr(1), regex("Type.*"))) {
                    typePokemon = ligne.substr(7);
                    cout << typePokemon << endl;
                }
                else if (regex_match(ligne.substr(1), regex("HP.*"))) {
                    hp = ligne.substr(6);
                    cout << hp << endl;
                }
                else if (regex_match(ligne.substr(1), regex("Speed.*"))) {
                    speed = ligne.substr(8);
                    cout << speed << endl;
                }
                else if (regex_match(ligne.substr(1), regex("Attack.*"))) {
                    attack = ligne.substr(9);
                    cout << attack << endl;
                }
                else if (regex_match(ligne.substr(1), regex("Defense.*"))) {
                    defense = ligne.substr(10);
                    cout << defense << endl;
                }
            }
    }
    return namePokemon;
}

CPokemon::CPokemon()
{
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