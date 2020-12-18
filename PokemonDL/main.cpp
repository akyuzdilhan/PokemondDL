#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include "pokemon.h"
#include "dresseur.h"
<<<<<<< HEAD
#include "pokemon.h"
=======
#include "foudre.h"
>>>>>>> c8e7dcd7cc265f1a04287ff2015db02398d76d2b
/*#define FILE_MONSTERS "D:\\Utilisateurs\\Léo\\Documents\\Léo\\Ecole\\Apprentissage\\ESIEA\\POO\\Projet\\PokemonDL\\Donnees\\monsters.pkmn"
#define FILE_ATTACK "D:\\Utilisateurs\\Léo\\Documents\\Léo\\Ecole\\Apprentissage\\ESIEA\\POO\\Projet\\PokemondDL\\PokemonDL\\Donnees\\attacks.pkmn"*/

using namespace std;

int main(int argc, char** argv) {
    
    CPokemon stats;
    CPlayer attaques;

    stats.statsMonster();
    attaques.readAttack();
}