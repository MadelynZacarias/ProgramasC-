//Una tabla de multiplicar//
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	do{
		cout<<"Ingrese un numero: ";
		cin>>n;
	}while((n<1) || (n>10));
	
	for(int x=1;x<=10;x++){
		cout<<n<<" x "<<x<<" = "<<n*x<<endl;
	}
}
