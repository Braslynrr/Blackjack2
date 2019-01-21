#ifndef JUEGO_H
#define JUEGO_H
#include <fstream>
#include "lista.h"
#include "Mazo.h"

class juego
{
private:
	lista* listaJugadores;
	Mazo* baraja;
	int turno;
public:
	juego();
	juego(std::string);
	~juego();
	
	void jugar();
	int getTurno();
	Mazo* getMazo();
	void setTurno(int);
	void guardarPartida(std::string);
	lista* getLista();
};
#endif // !JUEGO_H
