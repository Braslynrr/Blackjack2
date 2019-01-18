#include <iostream>
#include <string>
#include "Mazo.h"

using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main() {
	mazo* maso1=new mazo;
	maso1->barajar();
	cout <<maso1->tomarCarta();
	return 0;
}