#include "Jugador.h"

jugador::jugador(std::string Nombre, mano* Mano)
{
	setNickname(Nombre);
	setMano(Mano);
}

jugador::~jugador()
{
}
