

#ifndef ELEMENTOLISTA_H_
#define ELEMENTOLISTA_H_



using namespace std;

class ElementoLista {

	friend class Lista;
	friend ostream & operator<<(ostream &, const ElementoLista &);

protected:
	ElementoLista();
	ElementoLista * anterior, * siguiente;

public:

	int posicion;

	virtual ~ElementoLista();
	virtual int compareTo(ElementoLista *) = 0;
	virtual void imprimir(ostream &) const = 0;

	bool operator<(ElementoLista &);
	bool operator<=(ElementoLista &);
	bool operator>(ElementoLista &);
	bool operator>=(ElementoLista &);

};

ostream & operator<<(ostream &, const ElementoLista &);

#endif /* ELEMENTOLISTA_H_ */
