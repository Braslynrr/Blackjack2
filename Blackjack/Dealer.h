#ifndef DEALER_H
#define DEALER_H

#include "jugadorGenerico.h"

class dealer : public jugadorGenerico
{
public:
	dealer(Mano*);
	~dealer();
	carta* pedirCarta();
	void volteaSegunda();
};

#endif // !DEALER_H




