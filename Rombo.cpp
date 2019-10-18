#include "Rombo.h"
#include <iostream>

using namespace std;

Rombo::Rombo() : Diagonal(0),diagonal(0) {}

Rombo::Rombo(float _Diagonal,float _diagonal)
{
	setDiagonal(_Diagonal);
	setdiagonal(_diagonal);
}

void Rombo::setDiagonal(float b)
{
	if (b >= 0)
		this->Diagonal = b;
	else
		cout << "Error de ingreso en base";
}

float Rombo::getDiagonal()
{
	return this->Diagonal;
}

void Rombo::setdiagonal(float b)
{
	if (b >= 0)
		this->diagonal = b;
	else
		cout << "Error de ingreso en base";
}
float Rombo::getdiagonal()
{
	return this->diagonal;
}

float Rombo::getArea()
{
	return (Diagonal*diagonal)/2;
}
float Rombo::getPerimetro() {
	return 4*(sqrt(Diagonal * Diagonal + diagonal * diagonal) / 2);
}

void Rombo::imprimirFigura()
{
	cout << "Rombo: { Diagonal 1: "<<getDiagonal()<<", Diagonal 2: "<<getdiagonal()<< ", Area:" << getArea() << ", Perimetro: "
		<< getPerimetro() << " }\n";
}

int Rombo::getTipo()
{
	return TipoFigura::rombo;  // Tipo Rombo
}