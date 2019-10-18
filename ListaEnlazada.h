#pragma once
#include "Nodo.h"
#include "Figura2D.h"
#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H

class ListaEnlazada {
private:
	Nodo* primero;
public:
	ListaEnlazada(void);
	bool estaVacia(void);
	void AnadirFigura(TipoFigura,int ,int,int ,int,int);
	void AnadirAlista(Nodo*);
	void ImprimirLista();
};
#endif // !NODO_H

