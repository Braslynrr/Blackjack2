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
std::ostream & operator<<(std::ostream &out, dealer *D)
{
	out << "Dealer ";
	for (short int i = 0; i < D->mano1->getCantidad(); i++)
	{
		out << D->mano1->getCarta(i)->getpalo() << " " << D->mano1->getCarta(i)->getvalor() << std::endl;
	}
	return out;
}