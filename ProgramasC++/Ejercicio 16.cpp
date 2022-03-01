#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	float a, o;
	cout<<"Ingrese el lado adyacente del triangulo: ";
	cin>>a;
	cout<<"Ingrese el lado opuesto del triangulo: ";
	cin>>o;
	
	cout << sqrt(a*a + o*o);
}
