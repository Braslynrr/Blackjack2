#ifndef MANO_H
#define MANO_H
#include "Mazo.h"
#include "carta.h"
#include <String>
#include <sstream>

class Mano
{
private:
	carta** cartas;
	int cantidad;
public:
	Mano();
	~Mano();

	void agregarCarta(Mazo*);
	void limpiar();
	int getPuntos();
	void acomodarCartas();
	carta* getCarta(int);
	int getCantidad();
	std::string mostrar();
};
#endif 


