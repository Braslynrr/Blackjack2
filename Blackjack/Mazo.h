#ifndef MAZO_H
#define MAZO_H
//#include <sstream>
//#include <string>
//#include <stdlib.h>

class mazo
{
private:
	carta* cartas[];
public:
	mazo();
	~mazo();

	void inicializar();
	void barajar();
	carta* tomarCarta();
};


#endif // !1

