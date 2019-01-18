#ifndef DEALER_H
#define DEALER_H

#include "jugadorGenerico.h"

class dealer : public jugadorGenerico
{
public:
	dealer(mano*);
	~dealer();
	carta* pedirCarta();
	void volteaSegunda();
};

#endif // !DEALER_H




