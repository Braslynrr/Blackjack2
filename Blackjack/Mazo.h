#pragma once
#include <sstream>
#include <string>
#include <stdlib.h>

class mazo
{
private:
	carta* cartas[];
public:
	mazo();
	~mazo();

	void inicializar();
	void barajar();
	carta* tomarCarta();
};

