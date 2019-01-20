#ifndef JUEGO_H
#define JUEGO_H
#include <fstream>
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
	void guardarPartida(std::string);
};
#endif // !JUEGO_H
