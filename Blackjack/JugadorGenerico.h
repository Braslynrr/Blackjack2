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
	mano* mano1;
public:
	jugadorGenerico(std::string= " " , mano * =  NULL);
	~jugadorGenerico();

	virtual carta* pedirCarta();                                                                                                                                                                                                                                                                                                                                                  
	bool sePaso();
};

#endif // JUGADORENERICO_H
