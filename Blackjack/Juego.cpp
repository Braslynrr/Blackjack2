#include "Juego.h"

juego::juego()
{
	turno = 1;
	listaJugadores = new lista;
	baraja = new Mazo;

}

juego::juego(std::string Nombre)
{
	std::ifstream handle;

	handle.open(Nombre+=".txt");
	
	char m, s, k; //Temporales para dejar la estructura de lectura;

		handle >> s;
		handle >> k;
		handle >> m;


	handle.close();
}

juego::~juego()
{
	delete listaJugadores;
	delete baraja;
}

int juego::getTurno()
{
	return turno;
}

Mazo * juego::getMazo()
{
	return baraja;
}

void juego::setTurno(int T)
{
	turno = T;
}

void juego::guardarPartida(std::string nombre)
{
	Nodo* aux = listaJugadores->getinicio();

	std::ofstream handle; 

	handle.open(nombre  += ".txt", std::ios::out); 
	if (handle.fail())  
	{
		std::cout << "Error al crear\n";
		exit(1);
	}
	while (aux->next != nullptr) {
		handle << aux->Player;
		aux = aux->next;
	}
	handle <<std::endl<<turno;
	handle.close();
}

lista * juego::getLista()
{
	return listaJugadores;
}
