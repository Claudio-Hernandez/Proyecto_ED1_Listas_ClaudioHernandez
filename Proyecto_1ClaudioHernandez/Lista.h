#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "tipo_elemento.h"
using namespace std;
class Lista
{

	
	public:
		tipo_elemento* elemento= new tipo_elemento();
		Lista* siguiente;		
		Lista* posicion;	
		Lista();
		void anula(Lista**);
		void suprime(int pos , Lista** lista);
		Lista* recupera(int pos,Lista* lista);
		void imprimir(Lista*);
		int  primero(Lista*);
		void inserta(int x,int p,Lista** P);
		int localiza(int x,Lista* p);
		int sig(int p,Lista* v);
		int ant(int p,Lista* v);
		int finL(Lista* l);
			
		
		
		~Lista();
	protected:
};

#endif