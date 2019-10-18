#pragma once
#include <iostream>
#include "Figura2D.h"
#ifndef NODO_H
#define NODO_H

class Nodo {

private:
	Figura2D* figura;
	Nodo* siguiente;
public:
	Nodo(void);
	Nodo(Figura2D*, Nodo*);
	Nodo(int);
	~Nodo(void);//Eliminar la memoria

	Figura2D* getFigura();
	void setFigura(Figura2D*);
	void setSiguiente(Nodo*);
	Nodo* getSiguiente(void);
};
#endif