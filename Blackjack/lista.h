#pragma once
#include "nodo.h"
class lista
{
private:
	nodo inicio;
public:
	lista();
	~lista();
	nodo* getInicio();
	void insertar(nodo);
	void borrar(nodo);
	bool listaVacia();

};
