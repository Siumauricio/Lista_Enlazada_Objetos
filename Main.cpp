
#include <iostream>
#include <conio.h>
#include "ListaEnlazada.h"

using namespace std;
int main()
{
	ListaEnlazada ls;
	int null = 0;
	ls.AnadirFigura(rectangulo, 25,45, null, null, null);
	ls.AnadirFigura(trianguloRectangulo,15,9, null, null, null);
	ls.AnadirFigura(triangulo, 67, 89, null, null, null);
	ls.AnadirFigura(cuadrado, 5, null, null, null, null);
	ls.AnadirFigura(circulo, 5, null, null, null, null);
	ls.AnadirFigura(rombo, 36,24, null, null, null);
	ls.AnadirFigura(trapecio, 5, 6,8,9,2);
	ls.AnadirFigura(cuadrado, 10, null, null, null, null);
	ls.ImprimirLista();
}