#ifndef NODO_H
#define NODO_H
#include "nodo.h"

class lista
{
private:
	struct nodo* inicio;
public:
	lista();
	~lista();
	nodo* getInicio();
	void insertar(nodo);
	void borrar(nodo);
	bool listaVacia();

};

#endif // !NODO_H


