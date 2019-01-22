#include "JugadorGenerico.h"

#include "JugadorGenerico.h"

jugadorGenerico::jugadorGenerico(std::string Nickname)
{
	nickname = Nickname;
	mano1 = new Mano;
}

jugadorGenerico::~jugadorGenerico()
{
	delete mano1;
}


std::string jugadorGenerico::getNombre()
{
	return nickname;
}

bool jugadorGenerico::sePaso()
{
	return false;
}