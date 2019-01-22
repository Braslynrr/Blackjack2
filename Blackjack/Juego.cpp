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
		cin >> menu;
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
						cout << "Introduzca su Nickname jugador" << i + 1<<endl;
						std::cin>>nombre;
						newplayer = new jugador(nombre);
						listaJugadores->insertar(newplayer);

					}
					newplayer = new dealer;
					listaJugadores->insertar(newplayer);

					Mjugadores(jugadores+1);

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

void juego::Mjugadores(short int jugadores){
	bool hayganador = false;
	bool salir=false;
	do{
		char opcion = ' ';
		struct Nodo* aux = listaJugadores->getinicio();
		for (short int i = 0; i < turno && i<jugadores + 1; i++)
		{
			aux = aux->next;
		}
		if (aux->Player->getNick() == "Dealer")
		{
			//codigo del dealer
			turno = 0;
		}else{
			bool accion = false;
			do {
				system("cls");
				cout << "Player: ";
				cout << aux->Player->getNick();
				cout << "(T)omar Carta\t(P)ostrarse\t(G)uardar\t(S)alir" << endl;
				cin >> opcion;
				switch (opcion)
				{
				case 'T':
				case 't':
					aux->Player->pedirCarta(baraja);
					turno++;
					accion = true;
					break;
				case 'P':
				case 'p':
					turno++;
					accion = true;
					break;

				case 'G':
				case 'g':
					accion = true;
					break;
				case 'S':
				case 's':
					accion = true;
					salir = true;
					break;
				default:
					system("cls");
					cout << "Accion invalida , digite nuevamente!" << endl;
					Sleep(2000);
					accion = false;
					break;
				}
			} while (accion!=true);
		}
	} while (hayganador!=true && salir==false);
}


