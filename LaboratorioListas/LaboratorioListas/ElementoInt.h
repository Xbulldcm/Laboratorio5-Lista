

#ifndef ELEMENTOINT_H_
#define ELEMENTOINT_H_

#include "ElementoLista.h"


using namespace std;

class ElementoInt : public ElementoLista {
private:
	int i;

public:

	int compareTo(ElementoLista *);
	void imprimir(ostream &) const;
	ElementoInt(int);
	virtual ~ElementoInt();
};

#endif /* ELEMENTOINT_H_ */
