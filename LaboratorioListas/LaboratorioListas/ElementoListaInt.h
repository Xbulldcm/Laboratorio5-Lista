

#ifndef ELEMENTOLISTAINT_H_
#define ELEMENTOLISTAINT_H_

#include "ElementoLista.h"


using namespace std;

class ElementoListaInt : public ElementoLista {
private:
	int i;

public:

	int compareTo(ElementoLista *);
	void imprimir(ostream &) const;
	ElementoListaInt(int);
	virtual ~ElementoListaInt();
};

#endif /* ELEMENTOLISTAINT_H_ */
