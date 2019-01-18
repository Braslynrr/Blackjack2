#include "Jugador.h"

jugador::jugador(std::string Nombre, mano* Mano)
{
	nickname = Nombre;
	mano1 = Mano;
}

jugador::~jugador()
{
}
