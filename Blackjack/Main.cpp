#include <iostream>
#include <string>
#include "Mazo.h"

using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main() {
	Mazo* Maso1=new Mazo;
	Maso1->barajar();
	cout <<Maso1->tomarCarta();
	cout << Maso1->tomarCarta();
	cout << Maso1->tomarCarta();
	return 0;
}