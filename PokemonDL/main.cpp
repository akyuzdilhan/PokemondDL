#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include "pokemon.h"
#include "dresseur.h"
#include "foudre.h"
/*#define FILE_MONSTERS "D:\\Utilisateurs\\Léo\\Documents\\Léo\\Ecole\\Apprentissage\\ESIEA\\POO\\Projet\\PokemonDL\\Donnees\\monsters.pkmn"
#define FILE_ATTACK "D:\\Utilisateurs\\Léo\\Documents\\Léo\\Ecole\\Apprentissage\\ESIEA\\POO\\Projet\\PokemondDL\\PokemonDL\\Donnees\\attacks.pkmn"*/

using namespace std;

int main(int argc, char** argv) {
    
    CPokemon stats;
    CPokemon attaques;

    stats.statsMonster();
    attaques.attacksMonster();
}