#include "lista.h"

lista::lista()
{

}
lista::~lista()
{
	borrar();
}
Nodo * lista::getinicio()
{
	return inicio;
}
void lista::insertar(jugadorGenerico* Jug)
{
	struct Nodo * nuevo;
	nuevo= new struct Nodo;
	nuevo->Player = Jug;
	nuevo->next = nullptr;
	if (listaVacia())
	{
		inicio = nuevo;

	}else {

		struct Nodo* aux = inicio;
		while (aux->next != nullptr)
			aux = aux->next;

		aux->next = nuevo;
	}
}

void lista::borrar()
{

	if (listaVacia()) {
		std::cout << "Lista borrada \n" << std::endl;
	}
	else {
		struct Nodo*aux;
		while (inicio!=false)
		{
			aux = inicio;
			inicio = inicio->next;
			delete aux;
		}
		std::cout << "Lista borrada \n" << std::endl;
	}
	
}
bool lista::listaVacia()
{
	if (inicio == nullptr)
		return true;
	return false;
}
//bool lista::insertar(jugadorGenerico * Jug)
//{
//	if (this->estaVacia()) {
//		struct Nodo * nuevo = new Nodo;
//		nuevo->dato = Jug;
//		nuevo->next = nullptr;
//		inicio = nuevo;
//	}
//	else {
//		struct Nodo*aux = inicio;
//		while (aux->next == nullptr)
//			aux = aux->next;
//
//		struct Nodo * nuevo = new Nodo;
//		nuevo->dato = Jug;
//		nuevo->next = nullptr;
//		aux->next = nuevo;
//
//	}
//}
//
//bool Nodo::estaVacia()
//{
//	return inicio == nullptr;
//}