#ifndef MANO_H
#define MANO_H
#include "mazo.h"
#include "carta.h"
class mano
{
private:
	carta cartas[];
public:
	mano();
	~mano();

	void agregarCarta(mazo*);
	void limpiar();
	int getPuntos();
};
#endif 


