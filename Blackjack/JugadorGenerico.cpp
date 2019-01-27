#include "JugadorGenerico.h"

jugadorGenerico::jugadorGenerico(std::string Nickname)
{
	nickname = Nickname;
}

jugadorGenerico::~jugadorGenerico()
{
}

std::string jugadorGenerico::getNick()
{
	return nickname;
}
