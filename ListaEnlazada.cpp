#pragma once
#include "ListaEnlazada.h"
#include "Rectangulo.h"
#include "Figura2D.h"
#include <iostream>
using namespace std;
ListaEnlazada::ListaEnlazada(void) :primero(nullptr) {}

bool ListaEnlazada::estaVacia() {
	return primero == nullptr;
}

void ListaEnlazada::AnadirFigura(Figura2D*figura) {
	Nodo* nuevo = new Nodo(figura, nullptr);
	AnadirAlista(nuevo);
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
