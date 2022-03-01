/*Ejercicio #3
 Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa*/
 
#include<iostream>
using namespace std;
main(void){
	int opcion;
	double kilometros, millas, metros, pulgadas, libras, kilos;
	
	cout<<"Ingrese una opcion: "<<endl;
	cout <<"1. kilometros a millas"<<endl;
	cout<<"2. metros a pulgadas"<<endl;
	cout<<"3. libras a kilos"<<endl;
	cin >>opcion;
	
	switch(opcion){
		case 1: cout<<"---kilometros a millas---"<<endl;
				cout<<"Ingrese la cantidad de kilometros a convertir: "<<endl;
				cin>>kilometros;
				millas = kilometros * 0.621;
				cout<<kilometros <<" kilometros equivalen a "<<millas<<" millas "<<endl;
				kilometros = millas *1.609;
				cout<<millas<<" millas equivalen a "<<kilometros<<" kilometros "<<endl;
				break;
				
		case 2: cout<<"---metros a pulgadas---"<<endl;
				cout<<"Ingrese la cantidad de metros a convertir: "<<endl;
				cin>>metros;
				pulgadas = metros * 39.37;
				cout<<metros<<" metros equivalen a "<<pulgadas<<" pulgadas "<<endl;
				metros = pulgadas * 0.0254;
				cout<<pulgadas<<" pulgadas equivalen a "<<metros<<" metros "<<endl;
				break;
				
		case 3: cout<<"---libras a kilos---"<<endl;		
				cout<<"Ingrese la cantidad de libras a convertir: "<<endl;
				cin>>libras;
				kilos = libras * 0.4546;
				cout<<libras << " libras equivalen a "<<kilos<<" kilos "<<endl;	
				libras = kilos * 2.205;
				cout<<kilos<< " kilos equivalen a "<<libras<<" libras "<<endl;
				break;
				
	    
		default: cout<<"La opcion ingresada no es la correcta."<<endl;
		break;
	}
	
}


