#pragma once
#include "JugadorGenerico.h"

class jugador :jugadorGenerico
{
public:
	jugador();
	~jugador();
	carta* pedirCarta();
};

