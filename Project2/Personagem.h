#pragma once
class Personagem
{
protected:
	int vida, dano;
public:
	Personagem();
	~Personagem();

	void tomarDano(int dano);

	int getVida() {
		return vida;
	}

	int getDano() {
		return dano;
	}
};

