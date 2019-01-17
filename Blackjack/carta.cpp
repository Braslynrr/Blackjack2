#include "carta.h"

carta::carta(int V, int P):valor(V),palo(P),bocaAbajo(true){}

carta::~carta(){}

int carta::getvalor()
{
	return valor;
}

int carta::getpalo()
{
	return palo;
}

bool carta::voltear()
{
	if (bocaAbajo==false){
		return false;
	}
	bocaAbajo = false;
	return true;
}

std::ostream& operator<<(std::ostream&out,const carta &C)// cambiar a punteros , son referencias por testing
{

	if (C.bocaAbajo)
	{
		out << " ________" << std::endl;
		out << "|        |" << std::endl;
		out << "|        |" << std::endl;
		out << "|        |" << std::endl;
		out << "|        |" << std::endl;
		out << "|        |" << std::endl;
		out << " --------" << std::endl;
	}else{
		out << "_________" << std::endl;
		out << "|        |" << std::endl;
		out << "|        |" << std::endl;
		C.valor == 1 ? out << "|  " << C.palo << " " << C.valor << "   |" << std::endl : out << "|    " << C.palo << "" << "   |" << std::endl;
		out << "|        |" << std::endl;
		out << "|        |" << std::endl;
		out << " --------" << std::endl;
		
	}
	return out;
}
