#include "Mazo.h"

Mazo::Mazo()
{
	cartaact =0;
	for (short int p = 0; p < 4; p++) {
		for (short int i = 0; i < 13; i++) {
			switch (p)
			{
			case 0:
				cartas[cartaact] = new carta(i + 1, 'D');
				break;
			case 1:
				cartas[cartaact] = new carta(i + 1, 'E');
				break;
			case 2:
				cartas[cartaact] = new carta(i + 1, 'T');
				break;
			case 3:
				cartas[cartaact] = new carta(i + 1, 'C');
				break;
			}
			cartaact++;
		}
	}
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

	cartaact = 0;
	for (short int p = 0; p < 4; p++) {
		for (short int i = 0; i < 13; i++) {
			switch (p)
			{
			case 0:
				cartas[cartaact] = new carta(i + 1, 'D');
				break;
			case 1:
				cartas[cartaact] = new carta(i + 1, 'E');
				break;
			case 2:
				cartas[cartaact] = new carta(i + 1, 'T');
				break;
			case 3:
				cartas[cartaact] = new carta(i + 1, 'C');
				break;
			}
			cartaact++;
		}
	}
	cartaact = -1;
}

void Mazo::intercambiar(short int Pos1, short int Pos2)
{
	if (Pos1==Pos2)
	{
		Pos1++;
	}
	carta* aux= cartas[Pos1];
	cartas[Pos1] = cartas[Pos2];
	cartas[Pos2] = aux;
	aux = nullptr;
}

void Mazo::barajar(){
	short int bara1;
	short int bara2;
	for (short int i = 0; i < 52; i++)
	{
		srand(time(NULL));
		bara1 = rand() % 53;
		bara2 = rand() % 53;
		intercambiar(bara1, bara2);
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
