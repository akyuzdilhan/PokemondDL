#pragma once

class CPlayer {

public:

	CPlayer();
	void order();
	void change();
	void object();

private:

	int m_nbMonster;
	int m_nbAttack;
};