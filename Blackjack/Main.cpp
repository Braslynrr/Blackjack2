#include <iostream>
#include <string>
#include "carta.h"

using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main() {
	carta C1(5, 1);
	C1.voltear();
	cout << C1;
	return 0;
}