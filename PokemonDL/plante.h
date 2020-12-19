#pragma once
#include "herbe.h"

// nv 
class CPlant : public CGrass
{
private:
	float m_guerrir;

public:
	float getGuerrir();

	void setGuerrir(float guerrir);
};