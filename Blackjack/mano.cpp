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
	int suma=0; 
	for (int i = 0; i < cantidad; i++)
	{
		if (cartas[i]->getvalor() > 10)
			suma = suma + 10;

		else if (cartas[i]->getvalor() == 1)
			suma = suma + cartas[i]->getvalor() + 10;

		else
			suma = suma + cartas[i]->getvalor();
	}

	int cont = 4;
	bool flag=false;
	do
	{
		for (int i = cantidad - cont; i < cantidad; i++)
		{
			if (cartas[i]->getvalor() == 1)
			{
				suma = suma - 10;
				cont -= 1;
				if (suma < 21)
					break;
			}
		}
		flag = true;
	} while (suma > 21 || flag == false);

	return suma;
}

void mano::acomodarCartas()
{
	int cont=0;
	carta* aux;
	for (int i=0;i<cantidad-cont;i++)
		if (cartas[i]->getvalor() == 1)
		{
			aux = cartas[i];
			for (int j=i;j<cantidad-1;j++)
			{ 
				cartas[j] = cartas[j + 1];
			}
			cartas[cantidad - 1] = aux;
			cont += 1;
		}
}
