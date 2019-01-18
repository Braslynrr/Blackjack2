#include "Dealer.h"

dealer::dealer(Mano * ManoDealer)
{
	nickname = "Dealer";
	mano1 = ManoDealer;
}

dealer::~dealer()
{
}

carta * dealer::pedirCarta()
{
	return nullptr;
}
