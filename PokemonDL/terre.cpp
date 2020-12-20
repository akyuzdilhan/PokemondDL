#include "terre.h"
#include "pokemon.cpp"

using namespace std;
/*
vector<CRock*> CRock::statsMonster() {
    CRock::statsMonster();
    ifstream infile("monsters.pkmn");
    string namePokemon, typePokemon, name, type, ligne;
    float specialiteFichier, specialite, specialiteFichier2, specialite2;
    int hp, hpminfichier, hpmaxfichier, speed, speedminfichier, speedmaxfichier, attack, attackminfichier, attackmaxfichier, defense, defenseminfichier, defensemaxfichier;
    vector<CRock*> vectorPokemons;  // le pointeur permet de caster le pokemon dans les classes filles

    std::string line;
    while (std::getline(infile, line))
    {
        std::istringstream iss(line);
        if (iss >> ligne) {
            if (ligne == "Protect") {
                if (iss >> specialiteFichier) {
                    specialite = specialiteFichier;
                }
            }
        }
        CRock* pokemon = new CRock();
        if (typePokemon == "Rock") {
            pokemon->setHide(specialite);
        }
        vectorPokemons.push_back(pokemon);
    }
    return vectorPokemons;
}
*/
bool CRock::hide() {
	return m_hide > 0;
}

float CRock::getHide()
{
    return m_hide;
}

void CRock::setHide(float hide) {
    m_hide = hide;
}