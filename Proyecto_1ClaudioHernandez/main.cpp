#include <iostream>
#include "Lista.h"
#include <windows.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char simbolo =  (char)33;
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	Lista* encabezamiento =  new Lista();
	cout<<"===========SE CREA LISTA VACIA===============";
	Lista* primero =  new Lista();
	encabezamiento->siguiente= primero;
	encabezamiento->elemento->valor=5;
	//primero
	primero->elemento->valor=1;
	primero->siguiente=NULL;
	//se inserta el primero
	cout<<"\n==================METODO IMPRIMIR RESPUESTA ESPERADA [1]============\n ";
	primero->imprimir(primero);
	SetConsoleTextAttribute(hConsole, 2);	
	cout<<"["<<simbolo<<"]";
	SetConsoleTextAttribute(hConsole, 7);
	cout<<"\nfinl:"<<encabezamiento->finL(primero)<<"\n";
	cout<<"\n============METODO INSERTAR---- POSICION 1 , VALOR A INGRESAR 78 , RESPUESTA ESPERADA [78 1]======\n";
	//inserto 78
	encabezamiento->inserta(78,1,&primero);
	encabezamiento->imprimir(primero);
	SetConsoleTextAttribute(hConsole, 2);
	cout<<"["<<simbolo<<"]";
	SetConsoleTextAttribute(hConsole, 7);
	//fin L
	cout<<"\n========FIN(L) RESPUESTA ESPERADA 3==========";
	cout<<"\nfinl:"<<encabezamiento->finL(primero)<<"\n";
	SetConsoleTextAttribute(hConsole, 2);
	cout<<"["<<simbolo<<"]";
	SetConsoleTextAttribute(hConsole, 7);
	//inserto 41
	cout<<"\n===========METODO INSERTAR---- POSICION 1 , VALOR A INGRESAR 41 , RESPUESTA ESPERADA [41 78 1]=========\n";
	encabezamiento->inserta(41,1,&primero);
	encabezamiento->imprimir(primero);
	SetConsoleTextAttribute(hConsole, 2);
	cout<<"["<<simbolo<<"]";
	SetConsoleTextAttribute(hConsole, 7);
	//Fin L
	cout<<"\n========FIN(L) RESPUESTA ESPERADA 4=============";
	cout<<"\nfinl:"<<encabezamiento->finL(primero)<<"\n";
	SetConsoleTextAttribute(hConsole, 2);
	cout<<"["<<simbolo<<"]";
	SetConsoleTextAttribute(hConsole, 7);
	//inserto 85
	cout<<"\n========METODO INSERTAR---- POSICION 2 , VALOR A INGRESAR 85 , RESPUESTA ESPERADA [41 85 78 1 ]==========\n";

	encabezamiento->inserta(85,2,&primero);
	encabezamiento->imprimir(primero);
	SetConsoleTextAttribute(hConsole, 2);
	cout<<"["<<simbolo<<"]";
	SetConsoleTextAttribute(hConsole, 7);
	//FinL
	cout<<"\n=========FIN(L) RESPUESTA ESPERADA 5=====\n";
	cout<<"\nfinl:"<<encabezamiento->finL(primero)<<"\n";
	SetConsoleTextAttribute(hConsole, 2);
	cout<<"["<<simbolo<<"]";
	SetConsoleTextAttribute(hConsole, 7);
	//Localizar un valor
	cout<<"\n===========LOCALIZAR VALOR INGRESADO 78,RESPUESTA ESPERADA 3=========\n";
	cout<<encabezamiento->localiza(78,primero);
	SetConsoleTextAttribute(hConsole, 2);
	cout<<"["<<simbolo<<"]";
	SetConsoleTextAttribute(hConsole, 7);
	//siguiente
	cout<<"\n=======SIGUIENTE ,VALOR INGRESADO 3 RESPUESTA ESPERADA 4==============\n";
	cout<<encabezamiento->sig(3,primero);
	SetConsoleTextAttribute(hConsole, 2);
	cout<<"["<<simbolo<<"]";
	SetConsoleTextAttribute(hConsole, 7);
	//recuperar lista	
	cout<<"\n============RECUPERA , VALOR INGRESADO 4, VALOR ESPERADO 1====================\n";
	cout<<encabezamiento->recupera(4,primero)->elemento->valor;
	SetConsoleTextAttribute(hConsole, 2);
	cout<<"["<<simbolo<<"]";
	SetConsoleTextAttribute(hConsole, 7);
	//anterior de posicion
	cout<<"\n=============ANTERIOR , VALOR INGRESADO 2 , VALOR ESPERADO 1==============\n";
	cout<<encabezamiento->ant(2,primero);
	SetConsoleTextAttribute(hConsole, 2);
	cout<<"["<<simbolo<<"]";
	SetConsoleTextAttribute(hConsole, 7);
	//Primero de la lista;
	cout<<"\n========= PRIMERO VALOR ESPERADO 1=======\n";
	cout<< encabezamiento->primero(encabezamiento);
	SetConsoleTextAttribute(hConsole, 2);
	cout<<"["<<simbolo<<"]";
	SetConsoleTextAttribute(hConsole, 7);
	//suprime
	cout<<"\n==============SUPRIME, posicion ingresado 4 , respuesta esperada [41 85 78]============\n";
	encabezamiento->suprime(4,&primero);
	encabezamiento->imprimir(primero);
	SetConsoleTextAttribute(hConsole, 2);
	cout<<"["<<simbolo<<"]";
	SetConsoleTextAttribute(hConsole, 7);
	//anula
	cout<<"\n============ANULA , RESPUESTA ESPERADA [] ARREGLO VACIO===============\n";
	encabezamiento->anula(&primero);
	encabezamiento->imprimir(primero);
	SetConsoleTextAttribute(hConsole, 2);
	cout<<"["<<simbolo<<"]";
	SetConsoleTextAttribute(hConsole, 7);



	delete encabezamiento;


	return 0;
}