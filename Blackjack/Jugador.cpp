#include "Jugador.h"


jugador::jugador(std::string Nombre)
{
	nickname = Nombre;
	Mano* mano1 = new Mano;
}

jugador::~jugador()
{
	delete mano1;
}

void jugador::pedirCarta(Mazo* m)
{
	mano1->agregarCarta(m);
}

std::ostream & operator<<(std::ostream &out, jugador *J)
{
	out << J->getNick() << " ";
	for (short int i = 0; i < J->mano1->getCantidad(); i++)
	{
		out << J->mano1->getCarta(i)->getpalo() << " " << J->mano1->getCarta(i)->getvalor() << std::endl;
	}
	return out;
}