#include "Lista.h"

Lista::Lista() {
}
int Lista::sig(int pos,Lista* v) {
	int valor;
	if(pos==finL(v)) {
		valor =  0;
	} else if(pos==finL(v)-1){
		valor =finL(v);
	}else {

		for(int i=1; i<=pos; i++) {

			if(v->siguiente!=NULL) {
				valor =  pos+1;
			} else {
				valor =  v->finL(v);
			}
			v=v->siguiente;
		}
	}
	return valor;
}
Lista* Lista::recupera(int pos, Lista* lista) {
	for(int i=1; i<pos; i++) {
		if(lista->siguiente!=NULL) {
			lista = lista->siguiente;
		}
	}
	return lista;
}
void Lista::anula(Lista** lista) {

	if((*lista)->siguiente==NULL) {
		*lista=NULL;
		delete *lista;
	} else {
		if((*lista)->siguiente!=NULL) {
			*lista = (*lista)->siguiente;
			anula(lista);
		}
	}

	//lista->siguiente=NULL;
}
int Lista::primero(Lista* l) {
	Lista* temp = l;
	while(temp!=NULL) {
		if(temp->siguiente!=NULL) {
			return 1;
		} else {
			return temp->finL(temp);
		}
	}
	return 0;

}
void Lista::suprime(int pos,Lista** l) {
	if(pos==1) {
		*l=(*l)->siguiente;
	} else if(pos==(*l)->finL(*l)) {
		cout<<"No esta definido si es fin L";
	} else {

		Lista* temp = *l;
		for(int i=0; i<=pos-3; i++) {
			temp =  (temp)->siguiente;
		}
		(temp)->siguiente= temp->siguiente->siguiente;
		//if((*l)->siguiente!=NULL){
		//	*l=(*l)->siguiente;
		//	}
	}

}
int Lista::ant(int pos,Lista* v) {
	int valor;
	if(pos==1) {
		cout<<"No esta definido";
	} else {
		int cont;
		while(v!=NULL) {
			cont++;
			v=v->siguiente;

		}
		if(pos>cont) {
			valor=0;
		} else {
			valor= pos-1;
		}
	}


	return valor;
}
void Lista::inserta(int x,int pos,Lista** p) {
	Lista* nuevo =  new Lista();
	Lista* temp =  *p;
	nuevo->elemento->valor=x;
	if(pos==1) {
		nuevo->siguiente=*p;
		*p=nuevo;
	} else if(pos==finL(temp)) {

		int aux=0;
		while(*p!=NULL) {

			if((temp)->siguiente==NULL) {
				(temp)->siguiente= nuevo;
				nuevo->siguiente=NULL;
				aux=1;
			}
			if(aux==1) {
				break;
			}
			temp=(temp)->siguiente;
		}
	} else {
		Lista* temp2 =*p;
		for(int i =0; i<pos-2; i++) {
			temp2= temp2->siguiente;
		}
		nuevo->siguiente =  temp2->siguiente;
		temp2->siguiente=nuevo;
	}
}
Lista::~Lista() {
	delete siguiente;
}
void Lista::imprimir(Lista* n) {
	cout<<"[";
	while(n!=NULL) {
		int v =  n->elemento->valor;
		cout<<v<<" ";


		n=n->siguiente;
	}
	cout<<"]";


}
int Lista::localiza(int x,Lista* p) {
	int cont=1;
	Lista* temp =  p;
	int valor2=-37;
	while(temp!=NULL) {
		if(temp->elemento->valor==x) {
			valor2=0;
			return cont;
		}
		cont++;
		temp=temp->siguiente;
	}
	if(valor2!=0) {
		cont= temp->finL(temp);
	}
	return cont;
}
int Lista::finL(Lista* l) {
	Lista* pos=l;
	int cant=0;
	while(pos!=NULL) {
		cant++;
		pos= pos->siguiente;
	}
	return cant+1;
}