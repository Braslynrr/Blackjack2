
#ifndef JUGADOR_H
#define JUGADOR_H
#include "JugadorGenerico.h"

class jugador :public jugadorGenerico
{
private:
	bool turno;
	Mano* mano1;
public:
	jugador(std::string);
	~jugador();
	Mano* pedirMano();
	void pedirCarta(Mazo*);
	std::string Guardarplayer();
};

#endif // !JUGADOR_H