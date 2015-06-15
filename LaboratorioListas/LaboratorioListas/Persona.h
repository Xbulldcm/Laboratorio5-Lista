

#ifndef PERSONA_H_
#define PERSONA_H_

#include "Elemento.h"

using namespace std;

class Persona {
public:
	int ID;
	int edad;
	string nombre;
	Persona(int, string,int);
	virtual ~Persona();
	int compareTo(Elemento *);
	void imprimir(ostream &) const;
};

#endif /* PERSONA_H_ */
