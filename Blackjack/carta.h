#ifndef CARTA_H
#define CARTA_H
#include <iostream>

class carta
{
private:
	int valor;
	int palo;
	bool bocaAbajo;
public:
	carta(int,int);
	~carta();
	int getvalor();
	int getpalo();
	bool voltear();
	friend std::ostream& operator<<(std::ostream&, const carta &);
};
#endif // !CARTA_H