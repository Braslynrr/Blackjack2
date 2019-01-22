#ifndef JUEGO_H
#define JUEGO_H
#include <fstream>
#include <iostream>
#include <string>
#include <Windows.h>
#include "lista.h"
#include "Mazo.h"
#include "Jugador.h"
#include "Dealer.h"

using std::cout;
using std::cin;
using std::endl;
using std::getline;


class juego
{
private:
	lista* listaJugadores;
	Mazo* baraja;
	short int turno;
public:
	juego();
	juego(std::string);
	~juego();
	
	void jugar();
	void guardarPartida(std::string);
	void casos();
};
#endif // !JUEGO_H
