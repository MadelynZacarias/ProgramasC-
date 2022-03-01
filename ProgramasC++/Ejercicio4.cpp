//Determinar si una palabra o un número es palíndromo./*

#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string palabra;
	string palindroma;
	int i = 0;
	cout<<"Ingrese palabra a verificar: ";
	cin>> palabra;
	for(i = palabra.size() - 1; i >= 0; i--){
		palindroma += palabra[i]; 
	}
	if(palabra == palindroma){
		cout<<" La palabra "<<palabra<<" es palindroma ";
	}
	else{
		cout<<" La palabra "<<palabra<< " no es palindroma ";
	}
}



