
#include "stdafx.h"
#include "ElementoLista.h"

ElementoLista::ElementoLista() {
	posicion = 0;
	anterior = NULL;
	siguiente = NULL;
}

ElementoLista::~ElementoLista() {
	if (anterior != NULL) {
		delete anterior;
	}
	if (siguiente != NULL) {
		delete siguiente;
	}
}

ostream & operator<<(ostream & out, const ElementoLista & e) {
	e.imprimir(out);
	return out;
}

bool ElementoLista::operator <(ElementoLista& otro) {
	return this->compareTo(&otro) < 0;
}

bool ElementoLista::operator <=(ElementoLista& otro) {
	return this->compareTo(&otro) <= 0;
}

bool ElementoLista::operator >(ElementoLista& otro) {
	return this->compareTo(&otro) > 0;
}

bool ElementoLista::operator >=(ElementoLista& otro) {
	return this->compareTo(&otro) >= 0;
}
