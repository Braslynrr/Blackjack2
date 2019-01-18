#include "Nodo.h"

Nodo::Nodo()
{
	inicio = nullptr;

}

bool Nodo::insertar(jugadorGenerico * Jug)
{
	if (this->estaVacia()) {
		struct Nodo * nuevo = new Nodo;
		nuevo->dato = Jug;
		nuevo->next = nullptr;
		inicio = nuevo;
	}else{
		struct Nodo*aux = inicio;
		while (aux->next==nullptr)
			aux = aux->next;

		struct Nodo * nuevo = new Nodo;
		nuevo->dato = Jug;
		nuevo->next = nullptr;
		aux->next = nuevo;

	}
}

bool Nodo::estaVacia()
{
	return inicio==nullptr;
}
