#include "Dealer.h"

dealer::dealer(std::string nick):jugadorGenerico(nick){
	mano1 = new Mano;
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
Mano * dealer::pedirMano()
{
	return mano1;
}
std::string dealer::Guardarplayer()
{
	std::stringstream out;
	out << "Dealer ";
	for (short int i = 0; i < mano1->getCantidad(); i++)
	{
		out << mano1->getCarta(i)->getpalo() << " " << mano1->getCarta(i)->getvalor() <<" ";
	}
	return out.str();
}