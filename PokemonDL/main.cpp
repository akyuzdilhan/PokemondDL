#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include "pokemon.h"
#include "dresseur.h"
#include "foudre.h"

using namespace std;

int main(int argc, char** argv) {
    
    CPokemon stats;
    CPokemon attaques;

    stats.statsMonster();
    attaques.attacksMonster();
}