#include <iostream>
#include "Matematica.h"
#include "Inimigo.h"
#include "Heroi.h"

int main() {
	Matematica m1(10, 5), m2(7, 8);
	Matematica m3 = m1 + m2;
	int x = m3 != 5;
	std::cout << m3.getX() << std::endl;
	return 0;
}