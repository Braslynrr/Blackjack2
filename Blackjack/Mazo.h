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
	void intercambiar(short int,short int);
	void barajar();
	carta* tomarCarta();
};


#endif // !1

