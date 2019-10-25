#include <iostream>
#include "ListaEnlazada.h"
#include "Rectangulo.h"
#include "triangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include "Rombo.h"
#include "Trapecio.h"
#include "TrianguloRectangulo.h"
#include "Figura2D.h"
using namespace std;

int main() {
	ListaEnlazada ls;
	ls.AnadirFigura(new Rectangulo(25, 25));
	ls.AnadirFigura(new Circulo(25));
	ls.AnadirFigura(new Rombo(25, 25));
	ls.AnadirFigura(new Cuadrado(25));
	ls.AnadirFigura(new TrianguloRectangulo(25, 25));
	ls.AnadirFigura(new Triangulo(25, 25));
	ls.AnadirFigura(new Trapecio(25, 25, 25, 25, 25));
	ls.ImprimirLista();
	return 1;
}
