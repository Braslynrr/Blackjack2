//#include <sstream>
//#include <string>
//#include <stdlib.h>

#include "jugadorGenerico.h"

	struct Nodo {
		jugadorGenerico* dato;
		struct Nodo *next;
		struct Nodo *inicio;
		Nodo();
		~Nodo();
		bool insertar(jugadorGenerico*);
		bool borrar();//comodin xD
		bool estaVacia();
	};



