#pragma once
#include "Nodo.h"

Nodo::Nodo(void) :siguiente(nullptr) {}

Nodo::Nodo(Figura2D* _valor, Nodo* _siguiente) {
	setSiguiente(_siguiente);
	setFigura(_valor);
}

Nodo::~Nodo(void) {}

Figura2D*Nodo::getFigura() {
	return figura;
}
void Nodo::setFigura(Figura2D* _valor) {
	this->figura = _valor;
}
void Nodo::setSiguiente(Nodo* _siguiente) {
	this->siguiente = _siguiente;
}
Nodo* Nodo::getSiguiente() {
	return this->siguiente;
}
