
#include "stdafx.h"
#include "ElementoListaInt.h"
#include "ElementoInt.h"

ElementoListaInt::ElementoListaInt(int i) :
		i(i) {
}

ElementoListaInt::~ElementoListaInt() {
}

int ElementoListaInt::compareTo(ElementoLista * otro) {
	int cmp = 0;
	ElementoListaInt * eInt = static_cast<ElementoListaInt *>(otro);
	if (eInt != 0) {
		cmp = this->i < eInt->i ? -1 : this->i == eInt->i ? 0 : 1;
	}
	return cmp;
}

void ElementoListaInt::imprimir(ostream& out) const {
	out << i;
}


