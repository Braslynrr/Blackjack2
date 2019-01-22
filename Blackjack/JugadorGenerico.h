#ifndef JUGADORENERICO_H
#define JUGADORENERICO_H
#include <string>
#include "Mano.h"

class jugadorGenerico
{
protected:
	std::string nickname;
public:
	jugadorGenerico(std::string= " ");
	~jugadorGenerico();
	std::string getNombre();
	virtual void pedirCarta(Mazo*)=0{}
	virtual Mano* pedirMano() = 0 {}
	bool sePaso();
};

#endif // JUGADORENERICO_H
