#pragma once
#ifndef TRAPECIO_H
#define TRAPECIO_H
#include "Figura2D.h"

class Trapecio : public Figura2D
{
private:
	float Base, base, altura,Diagonal, diagonal;
public:
	Trapecio();
	Trapecio(float, float,float,float,float);

	void setBase(float);
	float getBase();

	void setAltura(float);
	float getAltura();

	void setbase(float);
	float getbase();

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