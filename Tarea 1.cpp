#include<iostream>
using namespace std;

struct nodo{
	int valor;
	nodo *puntero1;
	nodo *puntero2;
	nodo *puntero3;
};

//funciones para realizar los enlaces
void enlaceHacia57(nodo *&);
void enlaceHacia99(nodo *&);

int main(){
	nodo *head = new nodo();
	head->valor = 20;
	head->puntero3 = NULL;
	
	//llamando a las funciones para realizar los enlaces
	enlaceHacia57(head);
	enlaceHacia99(head);
	
	//impresion de 57 desde head
	cout<<head->puntero1->puntero2->valor<<endl;
	//impresion de 99 desde head
	cout<<head->puntero2->puntero3->puntero2->valor<<endl;
	
	return 0;
}

void enlaceHacia57(nodo *&head){
	//nodos auxiliares para realizar los enlaces entre los nodos
	nodo *auxiliar = new nodo();
	nodo *actual = new nodo();
	
	auxiliar->valor=23;
	auxiliar->puntero1=NULL;
	auxiliar->puntero3=NULL;
	head->puntero1=auxiliar; //enlazamos head con el valor actual que tiene el nodo auxiliar
	actual=auxiliar; //guardamos este nodo auxiliar temporalmente en la variable actual para despues enlazarlo
	
	auxiliar=new nodo();
	auxiliar->valor=57;
	auxiliar->puntero1=NULL;
	auxiliar->puntero2=NULL;
	auxiliar->puntero3=NULL;
	actual->puntero2=auxiliar;
	actual=auxiliar;
	
}

void enlaceHacia99(nodo *&head){
	//nodos auxiliares para realizar los enlaces entre los nodos
	nodo *auxiliar = new nodo();
	nodo *actual = new nodo();
	
	auxiliar->valor=19;
	auxiliar->puntero1=NULL;
	auxiliar->puntero2=NULL;
	head->puntero2=auxiliar;
	actual=auxiliar;
	
	auxiliar=new nodo();
	auxiliar->valor=67;
	auxiliar->puntero1=NULL;
	auxiliar->puntero3=NULL;
	actual->puntero3=auxiliar;
	actual=auxiliar;
	
	auxiliar=new nodo();
	auxiliar->valor=99;
	auxiliar->puntero1=NULL;
	auxiliar->puntero2=NULL;
	auxiliar->puntero3=NULL;
	actual->puntero2=auxiliar;
	actual=auxiliar;
	
	
}
