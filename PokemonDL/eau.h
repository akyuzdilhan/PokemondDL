#pragma once

class CWater
{
public:

	CWater();
	bool flood(); // indique si le terrain est inond� ou non suite � l�attaque

private:
	int m_flood; // probabilit� d'inonder le terrain
	int m_fall; // probabilit� pour l'adversaire de chuter
};