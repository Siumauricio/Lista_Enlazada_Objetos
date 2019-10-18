#include "Cuadrado.h"
#include <iostream>

using namespace std;

Cuadrado::Cuadrado() : Lado(0){}

Cuadrado::Cuadrado(float lado)
{
	setLado(lado);
}

void Cuadrado::setLado(float b)
{
	if (b >= 0)
		this->Lado = b;
	else
		cout << "Error de ingreso en base";
}
float Cuadrado::getLado()
{
	return this->Lado;
}

float Cuadrado::getArea()
{
	return Lado*Lado;
}

float Cuadrado::getPerimetro()
{
	return Lado * 4;
}
float Cuadrado::getAltura()
{
	return this->Lado;
}

float Cuadrado::getBase()
{
	return this->Lado;
}

void Cuadrado::imprimirFigura()
{
	cout << "Cuadrado: { Base: " << getBase() << ", Altura: "
		<< getAltura() << ", Area: " << getArea() << ", Perimetro: "
		<< getPerimetro() << " }\n";
}

int Cuadrado::getTipo()
{
	return TipoFigura::cuadrado;  // Tipo Cuadrado
}