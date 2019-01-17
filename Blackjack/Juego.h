#pragma once
#include "lista.h"
#include "Mazo.h"

class juego
{
private:
	lista listaJugadores();
	mazo baraja();
public:
	juego();
	~juego();
	void jugar();
};
