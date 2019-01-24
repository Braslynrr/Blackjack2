#ifndef DEALER_H
#define DEALER_H

#include "jugadorGenerico.h"

class dealer : public jugadorGenerico
{
private:
	Mano* mano1;
public:
	dealer(std::string="Dealer");
	~dealer();
	void pedirCarta(Mazo*);
	void volteaSegunda();
	Mano* pedirMano();
	std::string Guardarplayer();
};

#endif // !DEALER_H


