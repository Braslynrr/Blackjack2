#pragma once
#include "jugadorGenerico.h"

class dealer :jugadorGenerico
{
public:
	dealer();
	~dealer();
	carta* pedirCarta();
	void volteaSegunda();
};

