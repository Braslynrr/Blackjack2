#ifndef JUGADORENERICO_H
#define JUGADORENERICO_H
//#include <sstream>
//#include <stdlib.h>


#include <string>
#include "mano.h"

class jugadorGenerico
{
	std::string nickname;
	mano* mano1;
public:
	jugadorGenerico(std::string,mano *);
	~jugadorGenerico();

	virtual carta* pedirCarta();
	bool sePaso();
};

#endif // JUGADORENERICO_H
