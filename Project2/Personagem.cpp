#include "Personagem.h"

Personagem::Personagem()
{
}

Personagem::~Personagem()
{
}

void Personagem::tomarDano(int dano)
{
	vida -= dano;
}
