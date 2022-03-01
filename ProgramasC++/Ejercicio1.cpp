//Suma, Resta, Multiplicación y División de dos números//

#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	float a,b,suma,resta,multiplicacion,division;
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	
	suma = a+b;
	resta = a-b;
	multiplicacion = a*b;
	division = a/b;
	
	cout<<"Suma es: "<<a<<"+"<<b<<" = "<<suma<<endl;
	cout<<"Resta es: "<<a<<"-"<<b<<" = "<<resta<<endl;
	cout<<"Multiplicacion es: "<<a<<"*"<<b<<" = "<<multiplicacion<<endl;
	cout<<"Division es: "<<a<<"/"<<b<<" = "<<division<<endl;
}
