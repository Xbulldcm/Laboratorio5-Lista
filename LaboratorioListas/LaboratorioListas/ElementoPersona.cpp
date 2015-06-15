
#include "stdafx.h"
#include "ElementoPersona.h"
#include "Elemento.h"

ElementoPersona::ElementoPersona(Persona* p) :
		p(p) {
}

ElementoPersona::~ElementoPersona() {

}

int ElementoPersona::compareTo(ElementoLista * otro) {
	int cmp = 0;
	ElementoPersona * e = static_cast<ElementoPersona *>(otro);
	if (e != 0) {
		cmp = this->p->ID < e->p->ID ? -1 : this->p->ID == e->p->ID ? 0 : 1;
	}
	return cmp;
}

void ElementoPersona::imprimir(ostream& out) const {
	out << "[" << "ID: " << p->ID << " Nombre: " << p->nombre << " Edad: "
			<< p->edad << "]";
}
