#pragma once
#include"Personagem.h"
class Inimigo: public Personagem
{
	private:
	int x;
public:
	Inimigo(int x, int y);
	~Inimigo();

};

