#include <iostream>
#include <string>
#include <Windows.h>
#include "Mazo.h"
#include "lista.h"
#include "Juego.h"
#include "Jugador.h"
#include "Dealer.h"

using std::cout;
using std::cin;
using std::endl;
using std::getline;

void jugar(int,juego*);
void casos(juego*, Nodo*, int,int,char);

int main() {
	juego g;
	bool salir = false;
	char menu=' ';
	int jugadores;
	do {
		system("cls");
		cout << "\t \t Blacjack" << endl<<endl;
		cout << "(N)uevo juego\t(C)argar partida\t(S)alir" << endl;
		menu = cin.get();
		cin.ignore();
		switch (menu)
		{
		case'N':
		case 'n':
		{
				  cout << "Ingrese la cantidad de jugadores para esta partida (maximo 7)";
				  cin >> jugadores;
				  juego* j = new juego;
				  jugar(jugadores, j);
		}

			break;
		case 'c':
		case'C':


			break;
		case 's':
		case'S':
			/*if()*/
			salir = true;
			break;
		default:
			system("cls");
			cout << "Digito una opcion invalida! intente de nuevo" << endl;
			Sleep(2000);
			break;
		}

	} while (salir == false);


	return 0;
}

void jugar(int NumeroJ, juego * Juego)
{
	
	char opcion=' ';
	jugadorGenerico* jugadores;
	jugadores = new dealer;
	Juego->getLista()->insertar(jugadores);
	for (int i = 0; i < NumeroJ; i++)
	{
		jugadores = new jugador("Paco");
		Juego->getLista()->insertar(jugadores);
	}

	struct Nodo* aux;
	aux = Juego->getLista()->getinicio();

	int turno = Juego->getTurno();
	int contadorPaso = 0;
	do
	{

		switch (turno)
		{
		case 1:
		{
			cout << "(T)omar Carta\t(P)ostrarse\t(G)uardar y salir";
			cin >> opcion;
			casos(Juego, aux, turno, NumeroJ, opcion);
			
		}
		case 2:
		{
			cout << "(T)omar Carta\t(P)ostrarse\t(G)uardar y salir";
			cin >> opcion;

		}
		case 3:
		{
			cout << "(T)omar Carta\t(P)ostrarse\t(G)uardar y salir";
			cin >> opcion;

			
		}
		case 4:
		{
			cout << "(T)omar Carta\t(P)ostrarse\t(G)uardar y salir";
			cin >> opcion;

			
		}
		case 5:
		{
			cout << "(T)omar Carta\t(P)ostrarse\t(G)uardar y salir";
			cin >> opcion;

			
		}
		case 6:
		{
			cout << "(T)omar Carta\t(P)ostrarse\t(G)uardar y salir";
			cin >> opcion;

		
		}
		case 7:
		{
			cout << "(T)omar Carta\t(P)ostrarse\t(G)uardar y salir";
			cin >> opcion;

		}

		}

	} while (contadorPaso < NumeroJ);
	
}

void casos(juego * Juego , Nodo * Aux, int turno,int NumeroJ,char opcion1)
{

	if (opcion1 == 'T' || opcion1 == 't')
		Aux->next->Player->pedirCarta(Juego->getMazo());
	{
		if (turno == NumeroJ)
			Juego->setTurno(1);
		else
			Juego->setTurno(turno + 1);
	}
}
