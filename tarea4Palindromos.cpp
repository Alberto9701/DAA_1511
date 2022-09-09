#include<iostream>
using namespace std;

int main(){
	int horas=0;
	int minutos=0;
	int contadorPalindromos=0;
	
	while(horas<24){
		minutos=0;
		while(minutos<60){
			if(((horas/10)==(minutos%10)) && ((horas%10) ==(minutos/10))){
				contadorPalindromos++;
				cout<<contadorPalindromos<<".- ";
				if(horas<10) cout<<"0";
				cout<<horas<<":";
				if(minutos<10) cout<<"0";
				cout<<minutos<<endl;
			}
			minutos++;
		}
		horas++;
		
	}
	
	return 0;
}
