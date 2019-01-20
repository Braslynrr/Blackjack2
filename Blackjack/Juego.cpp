#include "Juego.h"

juego::juego(Mazo *M, lista *L):baraja(M),listaJugadores(L){}

juego::~juego()
{
	delete listaJugadores;
	delete baraja;
}
