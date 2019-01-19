#ifndef JUEGO_H
#define JUEGO_H
#include "lista.h"
#include "Mazo.h"

class juego
{
private:
	lista listaJugadores;
	Mazo baraja;
public:
	juego();
	~juego();
	void jugar();
};
#endif // !JUEGO_H
