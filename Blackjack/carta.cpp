#include "carta.h"

carta::carta(short int V, char P) :valor(V), palo(P), bocaAbajo(false) {}

carta::~carta() {}

int carta::getvalor()
{
	return valor;
}

int carta::getpalo()
{
	return palo;
}

void carta::voltear()
{
	if (bocaAbajo == false) {
		bocaAbajo = true;
	}
	else {
		bocaAbajo = false;
	}
}

bool carta::getBocaabajo()
{
	return bocaAbajo;
}

std::ostream& operator<<(std::ostream&out, const carta *C)
{

		switch (C->valor)
		{
		case 1:
			out << "A" << C->palo ;
			break;
		case 10:
			out << C->valor << C->palo ;
			break;
		case 11:
			out << "J" << C->palo;
			break;
		case 12:
			out << "Q" << C->palo;
			break;
		case 13:
			out << "K" << C->palo;
			break;
		default:
			out << C->valor << C->palo ;
			break;
		}
	return out;
}