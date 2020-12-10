#ifndef DRESSEUR_H
#define DRESSEUR_H
#pragma once

class CPlayer {

public:

	CPlayer();
	void order();
	void change();
	void object();
	void readAttack();

private:

	int m_nbMonster;
	int m_nbAttack;

	enum class eAttack {

		attack1,
		attack2,
		attack3,
		attack4,
		nb_attack
	};

	enum class eMonster {

		monster1,
		monster2,
		monster3,
		nb_monster
	};

};
#endif