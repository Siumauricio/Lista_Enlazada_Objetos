#include "Trapecio.h"
#include <iostream>

using namespace std;

Trapecio::Trapecio() : Base(0), base(0) {}

Trapecio::Trapecio(float _Base, float _base,float _altura,float _Diagonal,float _diagonal)
{
	setBase(_Base);
	setbase(_base);
	setAltura(_altura);
	setDiagonal(_Diagonal);
	setdiagonal(_diagonal);
}

void Trapecio::setBase(float b)
{
	if (b >= 0)
		this->Base = b;
	else
		cout << "Error de ingreso en base";
}

float Trapecio::getBase()
{
	return this->Base;
}

void Trapecio::setbase(float b)
{
	if (b >= 0)
		this->base = b;
	else
		cout << "Error de ingreso en base";
}
float Trapecio::getbase()
{
	return this->base;
}
void Trapecio::setDiagonal(float b)
{
	if (b >= 0)
		this->Diagonal = b;
	else
		cout << "Error de ingreso en base";
}

float Trapecio::getDiagonal()
{
	return this->Diagonal;
}

void Trapecio::setdiagonal(float b)
{
	if (b >= 0)
		this->diagonal = b;
	else
		cout << "Error de ingreso en base";
}
float Trapecio::getdiagonal()
{
	return this->diagonal;
}

void Trapecio::setAltura(float a)
{
	if (a >= 0)
		this->altura = a;
	else
		cout << "Error de ingreso en altura";
}

float Trapecio::getAltura()
{
	return this->altura;
}

float Trapecio::getArea()
{
	return (Base + base) / 2*altura;
}
float Trapecio::getPerimetro() {
	return Base+base+Diagonal+diagonal;
}

void Trapecio::imprimirFigura()
{
	cout << "Trapecio: { Base Mayor: "<<getBase()  <<", Base Menor: "<<getbase()<< ", Altura: "<<getAltura() <<", Diagonal 1: "<<getDiagonal()<<", Diagonal 2: "<<getdiagonal() <<", Area: " << getArea() << ", Perimetro: "
		<< getPerimetro() << " }\n";
}

int Trapecio::getTipo()
{
	return TipoFigura::trapecio;  // Tipo Trapecio
}