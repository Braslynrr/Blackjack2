#include "Juego.h"

juego::juego()
{
	lista listaJugadores;
	Mazo baraja;
}

juego::~juego()
{
	
}

void juego::guardarPartida(std::string nombre)
{

	std::ofstream archivo; 

	archivo.open(nombre += ".txt", std::ios::out); 

	if (archivo.fail()) 
	{
		std::cout << "Error al crear\n";
		exit(1);
	}
	archivo <<" " ;

	archivo.close();
}
