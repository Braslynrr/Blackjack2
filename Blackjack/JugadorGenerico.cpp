#include "JugadorGenerico.h"

#include "JugadorGenerico.h"

jugadorGenerico::jugadorGenerico(std::string Nickname, Mano* mano2)
{
	nickname = Nickname;
	mano1 = mano2;
}

jugadorGenerico::~jugadorGenerico()
{
}

carta * jugadorGenerico::pedirCarta()
{
	return nullptr;
}

bool jugadorGenerico::sePaso()
{
	return false;
}