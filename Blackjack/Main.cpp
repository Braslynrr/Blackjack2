#include <iostream>
#include <string>
#include <Windows.h>
#include "Mazo.h"
#include "Mano.h"
using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main() {
	Mazo* maz = new Mazo;
	Mano* man = new Mano;
	maz->barajar();
	man->agregarCarta(maz);
	man->agregarCarta(maz);

	cout << man->getCarta(0)<<endl;
	cout << man->getCarta(1)<<endl;
	

	cout << man->getPuntos();
	system("pause");
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
			salir = true;
			break;
		default:
			system("cls");
			cout << "Digito una opcion invalida! intente de nuevo" << endl;
			Sleep(1000);
			break;
		}

	} while (salir == false);

	


	return 0;
}