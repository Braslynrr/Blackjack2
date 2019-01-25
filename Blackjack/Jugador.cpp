#include "Jugador.h"


jugador::jugador(std::string Nick):jugadorGenerico(Nick){
	turno = false;
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

bool jugador::getTurno()
{
	return turno;
}

void jugador::setTurno(bool t)
{
	turno = t;
}

std::string jugador::Guardarplayer()
{
	std::stringstream out;
	out << getNick() << " "<< mano1->getCantidad()<<" ";
	for (short int i = 0; i < mano1->getCantidad(); i++)
	{
		out << mano1->getCarta(i)->getpalo() << " " << mano1->getCarta(i)->getvalor() << " ";
	}
	if(turno == false){
		out << "0"<<std::endl;
	}
	else {
		out << "1"<<std::endl;
	}
	return out.str();
}