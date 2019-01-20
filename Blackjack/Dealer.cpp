#include "Dealer.h"

dealer::dealer()
{
	nickname = "Dealer";
	Mano* mano1 = new Mano;
}

dealer::~dealer()
{
	delete mano1;
}

carta * dealer::pedirCarta(Mazo* m)
{
	mano1->agregarCarta(m);
}
