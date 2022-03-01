//Crear Figuras Geométricas Básicas//
#include <iostream>
#include <stdlib.h>
 
using namespace std;
 
int main(int argc, char** argv)
{ 
    int i, j, la, an;
    cout<<"********MENU*******"<<endl;
    cout<<"1. Cuadrado  "<<endl;
    cout<<"2. Rectangulo"<<endl;
    cout<<"3. Circulo   "<<endl;
    
    cout<<"Selecciona una opcion"<<endl;
    cin>>la;
    
 	switch(la){
	 case 1:
	 	
		int x,y,n,a;
		a=0; x=0; y=0; n=5;
		

		
		for (y=1; y!=n+1; y++)
		{
		for (x=1; x!=n+1; x++)
		{
		if (y==1)
		cout<<"*";
		else
		{
		if (y==n)
		cout<<"*";
		else
		{
		if (x==1) cout<<"*";
		else
		{
		if (x==n) cout<<"*";
		else
		cout<<" ";
		}
		}
		}
		}
		cout<<endl;
		}
		
		system("PAUSE");
		return 0 ;
	 	
	 	
	 break;
	 
	 case 2:
	
		for (int i = 0; i < 2; i++){
			for(int j = 0; j < 4;j++){
				if (i != 0 && i != (2 - 1)){
					if (j == 0 || j == (4 - 1)){
						cout << "\t*";
					}else{
						cout << "\t ";
					}
				}else{
					cout << "\t*";
				}
			}
			cout << "\n";
		}
		return 0;
	 break;
	 
	 case 3:
	 	cout <<"\n";
		cout <<"          *******             \n";
		cout <<"      ***************         \n";
		cout <<"    *******************       \n";
		cout <<"  ***********************     \n";
		cout <<" *************************    \n";
		cout <<"***************************   \n";
		cout <<"***************************   \n";
		cout <<"***************************   \n";
		cout <<"***************************   \n";
		cout <<" *************************    \n";
		cout <<"  ***********************     \n";
		cout <<"    *******************       \n";
		cout <<"      ***************         \n";
		cout <<"          *******             \n";
		
		 
	 cout<<"\n\n\nGRACIAS";	
}
	 

    return 0;
}
