#include<iostream>
using namespace std;

int main(){
	int edificio[6][4]; //declaramos una matriz, la cual representará a los edificios y a las puertas
	int letra; //esta variable nos ayudara a imprimir la letra del cuarto
	int nMasGrande=0; //esta variable almacenará el numero de habitantes mas grande
	int piso=0;//esta variable almacenará el piso donde se encuentra el n-mas grande de habitantes
	int puerta=0; //esta variable almacenará la puerta donde se encuentra el n-mas grande de habitantes
	
	//llenamos los cuartos de los edificios
	for(int i=0;i<6;i++){
		letra=65; // 65 es la A en ascii
		for(int j=0;j<4;j++){
			printf("\ningrese el numero de habitantes de la puerta %c del piso %i: ",letra,i+1);
			cin>>edificio[i][j];
			letra++;//pasamos a la letra B,C,D y E
			
			//con este if se guarda el numero mas grande y se guarda el piso
			//y la puerta de ese numero mas grande
			if(edificio[i][j] > nMasGrande){
				nMasGrande = edificio[i][j];
				piso = i;
				puerta = j;
			}
		}
	}
	
	//usamos switch para las puertas
	switch(puerta){
		case 0:
			cout<<endl<<"El numero mas grande de habitantes esta en la puerta A"<<" ";
			break;
		case 1:
			cout<<endl<<"El numero mas grande de habitantes esta en la puerta B"<<" ";
			break;
		case 2:
			cout<<endl<<"El numero mas grande de habitantes esta en la puerta C"<<" ";
			break;
		case 3:
			cout<<endl<<"El numero mas grande de habitantes esta en la puerta D"<<" ";
			break;
	}
	
	//usamos switch para la letra de la puerta
	switch(piso){
		case 0:
			cout<<"del piso "<<piso+1<<" con: "<<edificio[piso][puerta]<<" habitantes";
			break;
		case 1:
			cout<<"del piso "<<piso+1<<" con: "<<edificio[piso][puerta]<<" habitantes";
			break;
		case 2:
			cout<<"del piso "<<piso+1<<" con: "<<edificio[piso][puerta]<<" habitantes";
			break;
		case 3:
			cout<<"del piso "<<piso+1<<" con: "<<edificio[piso][puerta]<<" habitantes";
			break;
		case 4:
			cout<<"del piso "<<piso+1<<" con: "<<edificio[piso][puerta]<<" habitantes";
			break;
		case 5:
			cout<<"del piso "<<piso+1<<" con: "<<edificio[piso][puerta]<<" habitantes";
			break;
	}
	
	
}
