#include "Juego.h"

juego::juego()
{
	listaJugadores = new lista;
	baraja = new Mazo;
	turno = 0;
	preparativo = true;
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

	Nodo* aux = listaJugadores->getinicio();

	std::ofstream handle;

	handle.open(nombre += ".txt", std::ios::out);
	if (handle.fail())
	{
		std::cout << "Error al crear\n";
		exit(1);
	}
	while (aux != nullptr) {
		handle << aux->Player->Guardarplayer();
		aux = aux->next;
	}
	handle << std::endl << turno;
	handle.close();
}

void juego::Mjugadores(short int jugadores){
	struct Nodo* aux = listaJugadores->getinicio();

	jugador* jug;
	 //cast para acceder

	if (preparativo == true) {
		for (short int i = 0; i < jugadores; i++)
		{
			aux->Player->pedirCarta(baraja);
			aux->Player->pedirCarta(baraja);
			aux = aux->next;
		}
		preparativo = false;
	}
	bool hayganador = false;
	bool salir=false;
	do{
		char opcion = ' ';
		 aux = listaJugadores->getinicio();
		for (short int i = 0; i < turno && i<jugadores + 1; i++)
		{
			aux = aux->next;
		}
		if (aux->Player->getNick() == "Dealer")
		{
			//codigo del dealer
			system("cls");
			

			cout << aux->Player->getNick() << endl;
			cout << aux->Player->pedirMano() << endl;
			system("pause");
			turno = 0;
		}else{

			jug = static_cast<jugador*>(aux->Player); //cast para acceder al bool turno y sus metodos

			bool accion = false;
			do {
				system("cls");
				cout << "Player: ";
				cout << aux->Player->getNick()<<endl;
				cout << aux->Player->pedirMano() << endl;
				cout << "(T)omar Carta\t(P)ostrarse\t(G)uardar\t(S)alir" << endl;
				cin >> opcion;

				
					switch (opcion)
					{
					case 'T':
					case 't':
						system("pause");
						aux->Player->pedirCarta(baraja);
						cout << aux->Player->getNick() << endl;
						cout << aux->Player->pedirMano() << endl;
						system("pause");
						turno++;
						accion = true;
						break;
					case 'P':
					case 'p':
					{
						jug->setTurno(true);
						turno++;
						accion = true;
						break;
					}

					case 'G':
					case 'g':
						cout << "Desea Guardar esta partida?" << endl;
						guardarPartida("Partidon");
						accion = false;
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


