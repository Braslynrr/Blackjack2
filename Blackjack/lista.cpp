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
short int lista::Cantidad()
{
	struct Nodo* aux;
	aux = inicio;
	short int cantidad=0;
	if (inicio == nullptr) {
		return 0;
	}
	else {
		while (aux != nullptr) {
			cantidad++;
			aux = aux->next;
		}
	}
	return cantidad;
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
		while (inicio!=nullptr)
		{
			aux = inicio;
			inicio = inicio->next;
			delete aux;
		}
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