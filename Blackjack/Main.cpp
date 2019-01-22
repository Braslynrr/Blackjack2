#include "Juego.h"

int main() {
	Mazo mas;
	jugador J("Paco");
	J.pedirCarta(&mas);
	cout << &J<<endl;
	system("pause");
	juego juego1;
	juego1.jugar();
	return 0;
}