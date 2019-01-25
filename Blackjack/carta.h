#ifndef CARTA_H
#define CARTA_H
#include <iostream>

class carta
{
private:
	short int valor;
	char palo;
	bool bocaAbajo;
public:
	carta(short int,char);
	~carta();
	short int getvalor();
	short int getvalorClasico();
	char getpalo();
	void voltear();
	bool getBocaabajo();
	friend std::ostream& operator<<(std::ostream&, const carta *);
};
#endif // !CARTA_H