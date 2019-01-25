#include "Juego.h"

juego::juego()
{
	listaJugadores = new lista;
	baraja = new Mazo;
	baraja->barajar();
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

bool juego::cargarPartida(std::string Nombre)
{
	std::ifstream handle;
	handle.open(Nombre += ".txt", std::ios::in);
	if (handle.fail())
	{
		std::cout << "Error al crear\n";
		return false;
	}
	//ahora si la inclusion de archivos
	jugadorGenerico* newplayer;
	short int interC,jt,valor,turno,iteraciones,consecutivo=0;//jt -> jugadores totales
	std::string nick;
	char palo;
	handle >> jt;
	while (jt != 0) {
		handle >> nick;
		handle >> iteraciones;

		if (nick != "Dealer") {
			newplayer = new jugador(nick);
		}
		else {
			newplayer = new dealer;
		}
		for (short int i = 0; i < iteraciones; i++) {
			handle >> palo;
			handle >> valor;
			interC = baraja->BuscarCarta(palo, valor);
			baraja->intercambiar(consecutivo, interC);
			newplayer->pedirCarta(baraja);
			consecutivo++;
		}
		cout << newplayer->Guardarplayer();
		system("pause");
		listaJugadores->insertar(newplayer);
		newplayer = nullptr;
		jt--;
	}
	return true;
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
			} while (jugadores < 0 && jugadores<8);

				if (jugadores == 0) {

				}else {
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

					Mjugadores(jugadores);

				}
				system("cls");
			break;
		case 'c':
		case'C':
		{
			std::string Partida;
			cout << "Digite el nombre del archivo que desea Cargar Partida\n El nombre debe ser exactamente igual" << endl;
			cin >> Partida;
			cargarPartida(Partida);
			jugadores = listaJugadores->Cantidad();
			Mjugadores(jugadores-1);
		}
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
	short int cant = listaJugadores->Cantidad();

	handle <<cant<<" ";
	while (aux != nullptr) {
		handle << aux->Player->Guardarplayer();
		aux = aux->next;
	}
	handle << std::endl << turno;
	handle.close();
}

void juego::Mjugadores(short int jugadores){
	struct Nodo* aux = listaJugadores->getinicio();
	short int marcapasos=0;
	jugador* jug;
	dealer *Dealer;
	for (short int i = 0; i < jugadores; i++)
	{
		aux = aux->next;
	}
	Dealer = static_cast<dealer*>(aux->Player);
	 //cast para acceder
	aux = listaJugadores->getinicio();
	if (preparativo == true) {
		for (short int i = 0; i < jugadores+1; i++)
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
		for (short int i = 0; i < turno && i<jugadores; i++)
		{
			aux = aux->next;
		}
		if (aux->Player->getNick() == "Dealer")
		{
			//codigo del dealer
			system("cls");
			cout << aux->Player->getNick() << endl;
			cout << aux->Player->pedirMano() << endl;
			cout<<"puntos: "<< Dealer->pedirMano()->getCarta(0)->getvalorClasico()<<endl;
			system("pause");
		}else{

			jug = static_cast<jugador*>(aux->Player); //cast para acceder al bool turno y sus metodos

			if (jug->getTurno() != true) {

				bool accion = false;
				while (accion != true) {
					system("cls");
					cout << "Player: ";
					cout << aux->Player->getNick()<<"\t\t\t\t\t"<<Dealer->getNick()<<" Puntos: "<<Dealer->pedirMano()->getCarta(0)->getvalorClasico()<<" *Segunda carta boca abajo*"<< endl;
					cout << aux->Player->pedirMano() << endl;
					cout <<"Puntos actuales: "<< aux->Player->pedirMano()->getPuntos() << endl;
					cout << "(T)omar Carta\t(P)ostrarse\t(G)uardar\t(S)alir" << endl;
					cin >> opcion;


					switch (opcion)
					{
					case 'T':
					case 't':
						system("cls");
						aux->Player->pedirCarta(baraja);
						cout << aux->Player->getNick() << endl;
						cout << aux->Player->pedirMano() << endl;
						cout << aux->Player->pedirMano()->getPuntos() << endl;
						if (aux->Player->pedirMano()->getPuntos() >= 21) {
							marcapasos++;
							jug->setTurno(true);

						}
						system("pause");
						turno++;
						accion = true;
						break;
					case 'P':
					case 'p':
					{
						jug->setTurno(true);
						turno++;
						marcapasos++;
						accion = true;
						break;
					}

					case 'G':
					case 'g':
					{
						std::string nombreP;
						cout << "Desea Guardar esta partida?Digite nombre de la partida para guardarla \n Digite 0 para cancelar" << endl;
						cin >> nombreP;
						if (nombreP != "0") {
							guardarPartida(nombreP);
							accion = false;
						}
						break;
					}
					case 'S':
					case 's':
					{
						system("cls");
						std::string SalirP;
						cout << "Desea salir? si no ha guardado partida perdera sus progresos!!\n digite 'Si' para continuar \n cualquiere otro caracter cancelara la accion \n";
						cin >> SalirP;
						if (SalirP == "si" || SalirP == "Si" || SalirP == "sI" || SalirP == "SI") {
							accion = true;
							salir = true;
						}
						break;
					}
					default:
						system("cls");
						cout << "Accion invalida , digite nuevamente!" << endl;
						Sleep(2000);
						accion = false;
						break;
					}


				}
			}
			else
				turno++;

		}
		 if (marcapasos == jugadores)
			jugadores++;
		if(turno==jugadores)
			turno = 0;
	} while (hayganador!=true && salir==false);
}


