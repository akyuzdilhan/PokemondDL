#include "objects.h"
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

ifstream infile("objects.pkmn");
string namePokemon, typePokemon, name, type, ligne;
int hp, hpminfichier, hpmaxfichier, speed, speedminfichier, speedmaxfichier, attack, attackminfichier, attackmaxfichier, defense, defenseminfichier, defensemaxfichier;
vector<CPokemon*> vectorPokemons;  // le pointeur permet de caster le pokemon dans les classes filles

std::string line;
while (std::getline(infile, line))
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
            if (iss >> speedminfichier >> speedmaxfichier) {
                speed = rand() % (speedmaxfichier - speedminfichier + 1) + speedminfichier;
            }
        }
        if (ligne == "Speed") {
            if (iss >> speedminfichier >> speedmaxfichier) {
                hp = rand() % (speedmaxfichier - speedminfichier + 1) + speedminfichier;
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
    }
    CPokemon* pokemon = new CPokemon();
    if (typePokemon == "Electric") {
        pokemon = new CElectric();

    }
    else if (typePokemon == "Water") {
        pokemon = new CWater();
    }
    else if (typePokemon == "Rock") {
        pokemon = new CRock();
    }
    else if (typePokemon == "Fire") {
        pokemon = new CFire();   // créer un pointeur de Pokemon et l'ajouter dans le vector /
    }
    else if (typePokemon == "Plant") {
        pokemon = new CPlant();
    }
    else if (typePokemon == "Insect") {
        pokemon = new CInsect();
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
}

void boirePotion() {

}