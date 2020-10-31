#include "Matematica.h"

Matematica::Matematica(int x, int y)
{
	this->x = x;
	this->y = y;
}

Matematica::Matematica()
{
}

Matematica::~Matematica()
{
}

int Matematica::add() {
	return x + y;
}

int Matematica::add(int x, int y)
{
	return x + y;
}

int Matematica::getX()
{
	return this->x;
}

void Matematica::setX(int newX)
{
	this->x = newX;
}

Matematica Matematica::operator+ (Matematica &m) {
	return Matematica(x + m.x, y + m.y);
}

 int Matematica::operator!= (int y) {
	return x * y;
}