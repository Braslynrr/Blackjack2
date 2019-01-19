#ifndef MAZO_H
#define MAZO_H
//#include <sstream>
//#include <string>
#include <stdlib.h>
#include <time.h>
#include "carta.h"
class Mazo
{
private:
	carta* cartas[52];
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

