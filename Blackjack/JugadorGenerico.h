#ifndef JUGADORENERICO_H
#define JUGADORENERICO_H
//#include <sstream>
//#include <stdlib.h>


#include <string>
#include "Mano.h"

class jugadorGenerico
{
protected:
	std::string nickname;
	Mano* mano1;
public:
	jugadorGenerico(std::string = " ", Mano * = NULL);
	~jugadorGenerico();

	virtual void pedirCarta(Mazo*) = 0 {}
	bool sePaso();
};

#endif // JUGADORENERICO_H