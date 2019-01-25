#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include "JugadorGenerico.h"
class lista
{
private:
	struct Nodo* inicio;
public:
	lista();
	~lista();
	Nodo* getinicio();
	short int Cantidad();
	void insertar(jugadorGenerico*);
	void borrar();
	bool listaVacia();

};

#endif // !NODO_H


