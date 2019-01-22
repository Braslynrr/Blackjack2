#include "Juego.h"

juego::juego()
{
	listaJugadores = new lista;
	baraja = new Mazo;
	turno = 0;
}

juego::juego(std::string Nombre)
{
	std::ifstream handle;

	handle.open(Nombre+=".txt");
	
	char m, s, k; //Temporales para dejar la estructura de lectura;

		handle >> s;
		handle >> k;
		handle >> m;


	handle.close();
}

juego::~juego()
{
	delete listaJugadores;
	delete baraja;
}

void juego::jugar()
{
	std::string nombre;
	short int jugadores=0;
	bool salir = false;
	char menu = ' ';
	do {
		system("cls");
		cout << "\t \t Blacjack" << endl << endl;
		cout << "(N)uevo juego\t(C)argar partida\t(S)alir" << endl;
		menu = cin.get();
		cin.ignore();
		switch (menu)
		{
		case'N':
		case 'n':
			do {
				system("cls");
				cout << "Digite el numero de jugadores que van a jugar(MAX 7)" << endl;
				if (std::cin>>jugadores) {

				}
				else {
					system("cls");
					std::cout << "Caracter invalido" << endl;
					std::cin.clear();
					std::cin.ignore(1024, '\n');
					Sleep(2000);
				}
			} while (jugadores <= 0 && jugadores<=7);

				if (jugadores == 0) {

				}
				else {
					char opcion = ' ';
					jugadorGenerico* newplayer;
					for (short int i = 0; i < jugadores; i++)
					{
						std::cin>>nombre;
						newplayer = new jugador(nombre);
						listaJugadores->insertar(newplayer);

					}
					newplayer = new dealer;
					listaJugadores->insertar(newplayer);

					struct Nodo* aux;
					aux = listaJugadores->getinicio();

				}
				system("cls");
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



}

void juego::guardarPartida(std::string nombre)
{


	std::ofstream handle; 

	handle.open(nombre  += ".txt", std::ios::out); 
	if (handle.fail())  
	{
		std::cout << "Error al crear\n";
		exit(1);
	}
	
		
	handle.close();
}

void juego::casos(Nodo * Aux, int NumeroJ, char opcion1)
{
	if (opcion1 == 'T' || opcion1 == 't')
		Aux->next->Player->pedirCarta(baraja);

	if (turno == NumeroJ)
		turno = 1;
	else
		turno += 1;
}

void juego::jugar(int NumeroJ,char opcion)
{
	int contadorPaso = 0;
	do
	{

		switch (turno)
		{
		case 1:
		{
			cout << "(T)omar Carta\t(P)ostrarse\t(G)uardar y salir";
			cin >> opcion;
			casos(listaJugadores->getinicio(), NumeroJ, opcion);

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


