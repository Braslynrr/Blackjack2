#include "JugadorGenerico.h"

#include "JugadorGenerico.h"

jugadorGenerico::jugadorGenerico(std::string Nickname, Mano* mano2)
{
	nickname = Nickname;
	Mano* mano1 = mano2;
}

jugadorGenerico::~jugadorGenerico()
{
}

std::string jugadorGenerico::getNick()
{
	return nickname;
}


bool jugadorGenerico::sePaso()
{
	return false;
}