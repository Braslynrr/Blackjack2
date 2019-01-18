#include "Mazo.h"

Mazo::Mazo()
{
	for (short int n = 0; n < 52; n++)
		cartas[n] = nullptr;
	cartaact = -1;
}

Mazo::~Mazo()
{
		delete[] cartas;
	for (short int n = 0; n < 52; n++)
		cartas[n] = nullptr;
}

void Mazo::inicializar()
{
	delete[] cartas;
	for (short int n = 0; n < 52; n++)
		cartas[n] = nullptr;
	cartaact = -1;
}

void Mazo::barajar(){
	short int baraja=0;
	srand(time(NULL));

	for (short int p = 0; p < 4; p++) {
		for (short int i = 0; i < 13; i++) {
			do {
				baraja = rand() % 53;
			} while (cartas[baraja] != nullptr);
			switch (p)
			{
			case 0:
				cartas[baraja] = new carta(i+1, 'D');
				break;
			case 1:
				cartas[baraja] = new carta(i+1, 'E');
				break;
			case 2:
				cartas[baraja] = new carta(i+1, 'T');
				break;
			case 3:
				cartas[baraja] = new carta(i+1, 'C');
				break;
			}
		}
	}
}

carta * Mazo::tomarCarta()
{
	cartaact++;
	return cartas[cartaact];
}

std::ostream & operator<<(std::ostream &out, Mazo * Mazo)
{
	for (short i = 0; i < 52; i++)
	{
		out << Mazo->cartas[i]<<std::endl;
	}
	return out;
}
