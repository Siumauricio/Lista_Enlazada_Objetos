#pragma once
#ifndef CUADRADO_H
#define CUADRADO_H
#include "Figura2D.h"

class Cuadrado : public Figura2D
{
private:
	float Lado;
public:
	Cuadrado();
	Cuadrado(float);

	void setLado(float);
	float getLado();

	float getArea();
	float getPerimetro();

	float getBase();
	float getAltura();

	void imprimirFigura();

	int getTipo();
};
#endif