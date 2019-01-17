#pragma once
#include <sstream>
#include <string>
#include <stdlib.h>

#include "mano.h"

class jugadorGenerico
{
	std::string nickname;
	mano* mano1;
public:
	jugadorGenerico();
	~jugadorGenerico();

	carta* pedirCarta();
	bool sePaso();
};