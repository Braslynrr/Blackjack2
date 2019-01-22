#include "JugadorGenerico.h"

#include "JugadorGenerico.h"

jugadorGenerico::jugadorGenerico(std::string Nickname)
{
	nickname = Nickname;
}

jugadorGenerico::~jugadorGenerico()
{
}


std::string jugadorGenerico::getNombre()
{
	return nickname;
}

bool jugadorGenerico::sePaso()
{
	return false;
}