#pragma once
#include"Personagem.h"
class Inimigo: public Personagem
{
	private:
	int x;
	int y;
public:
	Inimigo(int x, int y);
	~Inimigo();

};

