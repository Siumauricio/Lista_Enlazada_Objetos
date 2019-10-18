#pragma once
#ifndef CIRCULO_H
#define CIRCULO_H
#include "Figura2D.h"

class Circulo : public Figura2D
{
private:
	float radio;
public:
	Circulo();
	Circulo(float);

	void setRadio(float);
	float getRadio();

	float getArea();
	float getPerimetro();

	void imprimirFigura();

	int getTipo();
};
#endif