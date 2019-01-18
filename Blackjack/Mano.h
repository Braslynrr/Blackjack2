#ifndef MANO_H
#define MANO_H
#include "mazo.h"
#include "carta.h"
#include "Nodo.h"
class mano
{
private:
	carta** cartas;
	int cantidad;
public:
	mano();
	~mano();

	void agregarCarta(mazo*);
	void limpiar();
	int getPuntos();
	void acomodarCartas();
};
#endif 


