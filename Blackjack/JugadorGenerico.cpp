#include "JugadorGenerico.h"

#include "JugadorGenerico.h"

jugadorGenerico::jugadorGenerico(std::string Nickname, mano* mano2)
{
	nickname = Nickname;
	mano1 = mano2;
}

jugadorGenerico::~jugadorGenerico()
{
}

void jugadorGenerico::setNickname(std::string Nombre)
{
	nickname = Nombre;

}

void jugadorGenerico::setMano(mano * Mano)
{
	mano1 = Mano;
}

carta * jugadorGenerico::pedirCarta()
{
	return nullptr;
}

bool jugadorGenerico::sePaso()
{
	return false;
}