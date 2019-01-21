#include <iostream>
#include <string>
#include <Windows.h>
#include "Mazo.h"
#include "lista.h"
#include "Juego.h"

using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main() {
	juego juego1;
	bool salir = false;
	char menu=' ';
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