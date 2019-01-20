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

void dealer::pedirCarta(Mazo* m)
{
	mano1->agregarCarta(m);
	if(mano1->getCantidad()==2)
		mano1->getCarta(1)->voltear();
}

void dealer::volteaSegunda()
{
	mano1->getCarta(1)->voltear();


}
