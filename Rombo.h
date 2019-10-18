#pragma once
#ifndef ROMBO_H
#define ROMBO_H
#include "Figura2D.h"

class Rombo: public Figura2D
{
private:
	float Diagonal,diagonal;
public:
	Rombo();
	Rombo(float, float);

	void setDiagonal(float);
	float getDiagonal();

	void setdiagonal(float);
	float getdiagonal();

	float getArea();
	float getPerimetro();

	void imprimirFigura();

	int getTipo();
};
#endif