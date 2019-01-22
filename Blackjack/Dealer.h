#ifndef DEALER_H
#define DEALER_H

#include "jugadorGenerico.h"

class dealer : public jugadorGenerico
{
public:
	dealer();
	~dealer();
	friend std::ostream& operator<<(std::ostream&, dealer*);
	void pedirCarta(Mazo*);
	void volteaSegunda();
};

#endif // !DEALER_H


