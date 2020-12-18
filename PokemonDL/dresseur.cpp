#include "dresseur.h"
#include <fstream>
#include <iostream>
#include <regex>
#include <string>
// #define FILE_ATTACK "D:\\Utilisateurs\\Léo\\Documents\\Léo\\Ecole\\Apprentissage\\ESIEA\\POO\\Projet\\PokemondDL\\PokemonDL\\Donnees\\attacks.pkmn"
#define FILE_ATTACK "C:\\Users\\dilha\\Documents\\ESIEA\\POO\\PokemonDL\\PokemonDL\\Donnees\\attacks.pkmn"

using namespace std;

CPlayer::CPlayer() {

}

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
            else if (regex_match(ligne.substr(1), regex("Type.*"))) {
                typeAttack = ligne.substr(6);
                cout << typeAttack << endl;
            }
            else if (regex_match(ligne.substr(1), regex("Power.*"))) {
                power = ligne.substr(7);
                cout << power << endl;
            }
            else if (regex_match(ligne.substr(1), regex("NbUse.*"))) {
                nbUse = ligne.substr(7);
                cout << nbUse << endl;
            }
            else if (regex_match(ligne.substr(1), regex("Fail.*"))) {
                fail = ligne.substr(6);
                cout << fail << endl;
                cout << "" << endl;
            }
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