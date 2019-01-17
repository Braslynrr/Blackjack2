//#include <sstream>
//#include <string>
//#include <stdlib.h>
#include "jugadorGenerico.h"
class nodo
{
private:
	nodo* next;
	jugadorGenerico* dato;
public:
	nodo();
	~nodo();
	nodo* getNextNodo();
};


