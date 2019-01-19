#include "Dealer.h"

dealer::dealer(Mano * ManoDealer)
{
	nickname = "Dealer";
	mano1 = ManoDealer;
}

dealer::~dealer()
{
}

carta * dealer::pedirCarta(Mazo* m)
{
	mano1->agregarCarta(m);
}
