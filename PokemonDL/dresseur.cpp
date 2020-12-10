#include "dresseur.h"
#include <fstream>
#include <iostream>
#include <regex>
#include <string>
#define FILE_ATTACK "D:\\Utilisateurs\\Léo\\Documents\\Léo\\Ecole\\Apprentissage\\ESIEA\\POO\\Projet\\PokemondDL\\PokemonDL\\Donnees\\attacks.pkmn"

using namespace std;

void CPlayer::readAttack() {
        ifstream attacks(FILE_ATTACK, ios::in);
        string ligne;
        string nameAttack = "vide";
        string typeAttack, power, nbUse, fail;

    while (!attacks.eof()) {
        getline(attacks, ligne);
        if (ligne != "") {
            if (regex_match(ligne.substr(1), regex("Name.*"))) {
                nameAttack = ligne.substr(6);
                cout << nameAttack << endl;
            }
            /*else if (regex_match(ligne.substr(1), regex("Type.*"))) {
                typeAttack = ligne.substr(7);
                cout << typeAttack << endl;
            }
            else if (regex_match(ligne.substr(1), regex("HP.*"))) {
                power = ligne.substr(6);
                cout << power << endl;
            }
            else if (regex_match(ligne.substr(1), regex("Speed.*"))) {
                nbUse = ligne.substr(8);
                cout << nbUse << endl;
            }
            else if (regex_match(ligne.substr(1), regex("Attack.*"))) {
                fail = ligne.substr(9);
                cout << fail << endl;
            }*/
        }
    }
}


/*void CPlayer::order() {
	switch (m_nbAttack) {
	case eAttack::attack1:
		cout << "" << endl;
	case eAttack::attack2:
		cout << "" << endl;
	case eAttack::attack3:
		cout << "" << endl;
	case eAttack::attack4:
		cout << "" << endl;
	}
}

void CPlayer::change() {
	if (m_nbMonster >= 1) {
		switch (m_nbMonster) {
		case eMonster::monster1:
		}
	}
}*/