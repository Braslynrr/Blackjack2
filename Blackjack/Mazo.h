#ifndef MAZO_H
#define MAZO_H
#include <time.h>
#include <Windows.h>
#include "carta.h"
class Mazo
{
private:
	carta** cartas;
	short int cartaact;
public:
	Mazo();
	~Mazo();
	friend std::ostream& operator<<(std::ostream&, Mazo *);
	void inicializar();
	void reiniciaCA();
	void intercambiar(short int,short int);
	short int BuscarCarta(char,short int);
	void barajar();
	carta* tomarCarta();
};


#endif // !1

