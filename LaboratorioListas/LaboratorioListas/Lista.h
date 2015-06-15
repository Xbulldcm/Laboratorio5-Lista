

#ifndef LISTA_H_
#define LISTA_H_

#include "ElementoLista.h"


using namespace std;

class Lista {
	friend ostream & operator<<(ostream &, Lista &);

	protected:
		ElementoLista * primero;
		ElementoLista * ultimo;


    public:
		int cantidadElementos;

		Lista();
		virtual ~Lista();

		void insertarInicio(ElementoLista*);
		void insertarFinal(ElementoLista *);
		void insertarPosicion(ElementoLista *, int);
		void ordenarPosiciones(ElementoLista *, int);
		void eliminar(int);
		void eliminarPrimero();
		void eliminarUltimo();

	private:
		void insertarPosicionRec(ElementoLista *,ElementoLista *,int);
		void eliminarRec(ElementoLista*, int);
		void insertarInicioRec(ElementoLista*,ElementoLista*);
		void insertarElementoRec(ElementoLista *, ElementoLista *);
		void imprimir(ElementoLista *, ostream &);
		

};

#endif /* LISTA_H_ */
