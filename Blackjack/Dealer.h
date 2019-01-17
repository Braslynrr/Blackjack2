#ifndef DEALER_H
#define DEALER_H

#include "jugadorGenerico.h"

class dealer :jugadorGenerico
{
public:
	dealer();
	~dealer();
	carta* pedirCarta();
	void volteaSegunda();
};

#endif // !DEALER_H




