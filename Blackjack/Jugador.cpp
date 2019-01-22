#include "Jugador.h"


jugador::jugador(std::string Nick):jugadorGenerico(Nick){
    mano1 = new Mano;
}

jugador::~jugador()
{
	delete mano1;
}

Mano * jugador::pedirMano()
{
	return mano1;
}

void jugador::pedirCarta(Mazo* m)
{
	mano1->agregarCarta(m);
}

std::string jugador::Guardarplayer()
{
	std::stringstream out;
	out << getNick() << " ";
	for (short int i = 0; i < mano1->getCantidad(); i++)
	{
		out << mano1->getCarta(i)->getpalo() << " " << mano1->getCarta(i)->getvalor() << " ";
	}
	out << std::endl;
	return out.str();
}