#pragma once
#include "ListaEnlazada.h"
#include "Rectangulo.h"
#include "TrianguloRectangulo.h"
#include "triangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include "Rombo.h"
#include "Trapecio.h"
#include "Figura2D.h"
#include <iostream>
using namespace std;
ListaEnlazada::ListaEnlazada(void) :primero(nullptr) {}

bool ListaEnlazada::estaVacia() {
	return primero == nullptr;
}

void ListaEnlazada::AnadirFigura(TipoFigura tipo,int base, int altura,int Basemenor,int diagonal1,int diagonal2) {
	Figura2D* figura;
	Nodo* nuevo;
	switch (tipo)
	{
	case rectangulo:
		figura = new Rectangulo(base, altura);
		 nuevo = new Nodo(figura, nullptr);
		 AnadirAlista(nuevo);
		break;
	case trianguloRectangulo:
		figura = new TrianguloRectangulo(base, altura);
		nuevo = new Nodo(figura, nullptr);
		AnadirAlista(nuevo);
		break;
	case triangulo:
		figura = new Triangulo(base, altura);
		nuevo = new Nodo(figura, nullptr);
		AnadirAlista(nuevo);
		break;
	case cuadrado:
		figura = new Cuadrado(base);
		nuevo = new Nodo(figura, nullptr);
		AnadirAlista(nuevo);
		break;
	case circulo:
		figura = new Circulo(base);
		nuevo = new Nodo(figura, nullptr);
		AnadirAlista(nuevo);
		break;
	case rombo:
		figura = new Rombo(base,altura);
		nuevo = new Nodo(figura, nullptr);
		AnadirAlista(nuevo);
		break;
	case trapecio:
		figura = new Trapecio(base, Basemenor,altura,diagonal1,diagonal2);
		nuevo = new Nodo(figura, nullptr);
		AnadirAlista(nuevo);
		break;
	}
}

void ListaEnlazada::AnadirAlista(Nodo* figura) {
	if (estaVacia()) {
		primero = figura;
		return;
	} else {
		Nodo* actual = primero;
		while (actual->getSiguiente() != nullptr)
		{
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(figura);
	}
}

void ListaEnlazada::ImprimirLista(void) {
	Nodo* actual = primero;
	while (actual != nullptr)
	{
		actual->getFigura()->imprimirFigura();
		actual = actual->getSiguiente();
	}
}
