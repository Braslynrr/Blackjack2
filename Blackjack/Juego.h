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
	bool preparativo;
	short int marcapasos;
public:
	juego();
	~juego();
	bool cargarPartida(std::string);
	void jugar();
	bool DealerPide(short int,short int);
	void guardarPartida(std::string);
	void Mjugadores(short int);
};
#endif // !JUEGO_H
