#pragma once
#include <sstream>
#include <string>
#include <stdlib.h>
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