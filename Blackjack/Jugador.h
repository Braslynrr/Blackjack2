#ifndef JUGADOR_H
#define JUGADOR_
#include "JugadorGenerico.h"

class jugador :public jugadorGenerico
{
private:
	bool turno;
	Mano* mano1;
public:
	jugador(std::string);
	~jugador();
	friend std::ostream& operator<<(std::ostream&, jugador*);
	Mano* pedirMano();
	void pedirCarta(Mazo*);
};

#endif // !JUGADOR_H



