#pragma once
class Matematica
{
private:
	int x, y;
public:
	Matematica(int x, int y);
	Matematica();
	~Matematica();

	int add();
	int add(int x, int y);

	int getX();
	void setX(int newX);
	Matematica operator+(Matematica &m);
	int operator!= (int y);
protected:

};

