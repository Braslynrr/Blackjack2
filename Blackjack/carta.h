#ifndef CARTA_H
#define CARTA_H
//#include <sstream>
//#include <string>
//#include <stdlib.h>
class carta
{
private:
	int valor;
	int palo;
	bool bocaAbajo;
public:
	carta();
	~carta();
	void getvalor();
	void getpalo();
	bool voltear();


};
#endif // !CARTA_H