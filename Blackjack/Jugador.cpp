#include "Jugador.h"


jugador::jugador(std::string Nombre, Mano* Mano)
{
	nickname = Nombre;
	mano1 = Mano;
}

jugador::~jugador()
{
}

carta * jugador::pedirCarta(Mazo* m)
{
	mano1->agregarCarta(m);
}
