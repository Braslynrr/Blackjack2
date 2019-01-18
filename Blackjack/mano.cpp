#include "Mano.h"

mano::mano()
{
	cantidad = 0;
	cartas = new carta*[13];
	for (int i = 0; i < 13; i++)
		cartas[i] = NULL;

}

mano::~mano()
{
	for (int i = 0; i < 13; i++)
		delete cartas[i];
	delete[] cartas;
}

void mano::agregarCarta(mazo * Mazo)
{
	cartas[cantidad] = Mazo->tomarCarta();
}

void mano::limpiar()
{
	for (int i = 0; i < cantidad; i++)
		cartas[i] = NULL;
}

int mano::getPuntos() // faltan validaciones
{
	int suma; 
	for (int i = 0; i < cantidad; i++)
		suma = suma + cartas[i]->getvalor;

	if (suma > 21)
	{
		for (int i = 0; i < cantidad; i++)
			if (cartas[i]->getvalor == 11)
			{
				suma = suma - 10;
				break;
			}
	}
	return suma;
}
