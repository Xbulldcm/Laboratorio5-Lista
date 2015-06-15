

#ifndef ELEMENTODOUBLE_H_
#define ELEMENTODOUBLE_H_

#include "ElementoLista.h"

using namespace std;

class ElementoDouble : public ElementoLista {

private:
	double d;
public:
	ElementoDouble(double d);
	~ElementoDouble();
	int compareTo(ElementoLista *);
	void imprimir(ostream &) const;
};

#endif /* ELEMENTODOUBLE_H_ */
