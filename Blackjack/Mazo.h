#ifndef MAZO_H
#define MAZO_H
//#include <sstream>
//#include <string>
#include <stdlib.h>
#include <time.h>
#include "carta.h"
class mazo
{
private:
	carta* cartas[52];
	short int cartaact;
public:
	mazo();
	~mazo();
	friend std::ostream& operator<<(std::ostream&, mazo *);
	void inicializar();
	void barajar();
	carta* tomarCarta();
};


#endif // !1

