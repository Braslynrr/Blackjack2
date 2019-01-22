#ifndef JUGADOR_H
#define JUGADOR_
#include "JugadorGenerico.h"

class jugador :public jugadorGenerico
{
private:
	bool turno;
public:
	jugador();
	~jugador();
	
	friend std::ostream& operator<<(std::ostream&, jugador*);
	void pedirCarta(Mazo*);
};

#endif // !JUGADOR_H



