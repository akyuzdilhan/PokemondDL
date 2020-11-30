#pragma once

class CWater
{
public:

	CWater();
	bool flood(); // indique si le terrain est inondé ou non suite à l’attaque

private:
	int m_flood; // probabilité d'inonder le terrain
	int m_fall; // probabilité pour l'adversaire de chuter
};