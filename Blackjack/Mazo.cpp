#include "Mazo.h"

Mazo::Mazo()
{
	cartas = new carta*[52];
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

Mazo::~Mazo()
{
	for (short int n = 0; n < 52; n++)
		delete cartas[n];
	delete[] cartas;
}

void Mazo::inicializar()
{
	for (short int n = 0; n < 52; n++)
		delete cartas[n];
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

void Mazo::reiniciaCA()
{
	cartaact = 0;
}

void Mazo::intercambiar(short int Pos1, short int Pos2)
{
	if (Pos1 != Pos2)
	{
		Pos1++;
	}
	carta* aux = cartas[Pos1];
	cartas[Pos1] = cartas[Pos2];
	cartas[Pos2] = aux;
	aux = nullptr;
}

short int Mazo::BuscarCarta(char Pa, short int Num)
{

	for(short int i =0;i<52;i++)
		if(cartas[i]->getpalo()==Pa&&cartas[i]->getvalor()==Num)
			return i;
	return -1;
}

void Mazo::barajar() {
	srand(static_cast<unsigned int>(time(nullptr)));
	short int bara1;
	short int bara2;
	for (short int i = 0; i < 9; i++)
	{
		bara1 = rand() % 13;
		bara2 = rand() % 38 + 13;
		intercambiar(bara1, bara2);
	}
	for (short int i = 0; i < 9; i++)
	{
		bara1 = rand() % 13;
		bara2 = rand() % 13;
		intercambiar(bara1, bara2);
		Sleep(10);
	}
	for (short int i = 0; i < 9; i++)
	{
		bara1 = rand() % 38 + 13;
		bara2 = rand() % 38 + 13;

	}
	for (short int i = 0; i < 9; i++)
	{
		bara1 = rand() % 39 + 13;
		bara2 = rand() % 13 + 26;
		intercambiar(bara1, bara2);
	}
}

carta * Mazo::tomarCarta()
{
	cartaact++;
	if (cartaact <= 51)
	{
		return cartas[cartaact];
	}
	return nullptr;
}

std::ostream & operator<<(std::ostream &out, Mazo * Mazo)
{
	for (short i = 0; i < 52; i++)
	{
		out << Mazo->cartas[i] << std::endl;
	}
	return out;
}
