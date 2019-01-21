#include "Jugador.h"


jugador::jugador(std::string Nombre)
{
	turno = false;
	nickname = Nombre;
	Mano* mano1 = new Mano;
}

jugador::~jugador()
{
	delete mano1;
}


void jugador::pedirCarta(Mazo* m)
{
	mano1->agregarCarta(m);
}
