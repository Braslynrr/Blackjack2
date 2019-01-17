#ifndef JUGADOR_H
#define JUGADOR_
#include "JugadorGenerico.h"

class jugador :public jugadorGenerico
{
public:
	jugador();
	~jugador();
	carta* pedirCarta();
};
#endif // !JUGADOR_H



