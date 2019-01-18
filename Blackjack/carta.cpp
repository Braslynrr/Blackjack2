#include "carta.h"

carta::carta(short int V,char P):valor(V),palo(P),bocaAbajo(false){}

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

std::ostream& operator<<(std::ostream&out,const carta *C)
{

	if (C->bocaAbajo)
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
		switch (C->valor)
		{
		case 1:
			out << "|  A " << C->palo <<"   |" << std::endl;
			break;
		case 10:
			out << "|  " << C->valor <<" "<< C->palo << "  |" << std::endl;
			break;
		case 11:
			out << "|  J " << C->palo << "   |" << std::endl;
			break;
		case 12:
			 out << "|  Q " << C->palo << "   |" << std::endl;
			break;
		case 13:
			out << "|  K " << C->palo << "   |" << std::endl ;
			break;
		default:
			out << "|  " << C->valor << " " << C->palo << "   |" << std::endl;
			break;
		}
		out << "|        |" << std::endl;
		out << "|        |" << std::endl;
		out << " --------"<< std::endl;
	}
	return out;
}
