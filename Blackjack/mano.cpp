#include "Mano.h"

Mano::Mano()
{
	cantidad = 0;
	cartas = new carta*[13];
	for (int i = 0; i < 13; i++)
		cartas[i] = NULL;

}

Mano::~Mano()
{
	for (int i = 0; i < 13; i++)
		delete cartas[i];
	delete[] cartas;
}

void Mano::agregarCarta(Mazo * Mazo)
{
	if (cantidad < 13)
	{
		cartas[cantidad] = Mazo->tomarCarta();
		cantidad++;
	
	}
}

void Mano::limpiar()
{
	for (int i = 0; i < cantidad; i++)
		cartas[i] = NULL;
}

int Mano::getPuntos() // faltan validaciones
{
	int cont = 0;
	acomodarCartas();
	int suma=0; 
	for (int i = 0; i < cantidad; i++)
	{
		if (cartas[i]->getvalor() > 10)
			suma = suma + 10;

		else if (cartas[i]->getvalor() == 1)
		{
			suma = suma + cartas[i]->getvalor() + 10;
			cont = cont + 1;
		}

		else
			suma = suma + cartas[i]->getvalor();
	}

	if (cont == 2 && suma > 21)
		suma = suma - 10;
	else if (cont == 3 && suma > 21)
		suma = suma - 20;
	else if (cont == 4 && suma > 21)
		suma = suma - 30;


	

	return suma;
}

void Mano::acomodarCartas()
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

carta * Mano::getCarta(int i)
{
	
 	 return  cartas[i];
}

int Mano::getCantidad()
{
	return cantidad;
}

std::string Mano::mostrar()
{
	std::stringstream s;

	for (int i = 0; i < cantidad; i++)
		s << cartas[i]<<"\n";

	return s.str();
}
