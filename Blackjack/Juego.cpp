#include "Juego.h"

juego::juego(Mazo *M, lista *L):baraja(M),listaJugadores(L){}

juego::~juego()
{
	delete listaJugadores;
	delete baraja;
}

void juego::guardarPartida(std::string nombre)
{


	std::ofstream handle; 

	handle.open(nombre  += ".txt", std::ios::out); 
	if (handle.fail())  
	{
		std::cout << "Error al crear\n";
		exit(1);
	}
	
		
	handle.close();
}
