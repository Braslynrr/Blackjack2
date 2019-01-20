#include "Juego.h"

juego::juego()
{
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
