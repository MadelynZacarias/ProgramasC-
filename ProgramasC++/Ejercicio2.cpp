/*Ejercicio 2
 Determinar si un n�mero es par o impar*/

#include<iostream>
using namespace std;
int main(){
	int numero;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	if(numero%2==0){
		cout<<"El numero es par";
	}
	else{
		cout<<"El numero es impar";
	}
}
