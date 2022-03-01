#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>
#include<cmath>
#include<iomanip>
using namespace std;
string strTexto = "";
int intEspacios = 0;
int intLargoTexto = 0; 
const int intAnchoPantalla = 100;
int j=0;
int i = 0;
int opc;
int numero;
float a,b,suma,resta,multiplicacion,division,
 o;
double kilometros, millas, metros, pulgadas, libras, kilos;
string palabra;
string palindroma;
int unidades,decenas,centenas,millar;
int n1, n2, n3, n4, n5;
int n;
int decimal;
short binario[8];
char hexa[16];
int la, an;
int main() {
	
	cout<<"\n\n\n\n\n\n\n\n";
	while(i < intAnchoPantalla)
	{
		cout << "*";
		i = i + 1;
	}
	
	i = 0;
	while(i < intAnchoPantalla)
	{
		if(i == 0 || i == (intAnchoPantalla - 1))
		cout<<"*";
		else 
		cout<<"*";
		i++;
	}
	
	strTexto = "UNIVERSIDAD MARIANO GALVEZ GUATEMALA";
	intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2);
	
	cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*";
	
	strTexto = "INGENIERIA EN SISTEMAS DE INFORMACION Y CIENCIAS DE LA COMPUTACION";
	intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2);
	cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*";
	
	strTexto = "SEDE TIERRA NUEVA";
	intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2);
	cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*";
	
	strTexto = "PLAN FIN DE SEMANA";
	intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2);
	cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*";
	
	strTexto = "PROGRAMACION 1";
	intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2);
	cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*";
		
	strTexto = "MENU PRICIPAL";
	intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
	cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*";
	
	i = 0;
	while(i < intAnchoPantalla)
	{
		if(i == 0 || i == (intAnchoPantalla -1))
		cout<<"*";
		
		else
		cout<<"*";
		i = i + 1;
	}
	i = 0;
	while(i < intAnchoPantalla)
	{
		cout << "*";
		i++;
	}
	
	cout <<"\n\n\nATENCION: AJUSTE ESTA VENTA PARA OBSERVAR PERFECTAMENTE LOS SIGUENTES EJERCICIOS...Presione "
	<<"la tecla Enter cuando este listo..."
	;
	
	cout<<"\n\n\nPresione Enter para continuar...";
	getch();
	
	system("cls");
	
	cout<<"\n\n";
	
	i = 0; 


  cout<<"\n...Bienvendo al menu principal... ";
  cout<<"\n\n";
  cout<<"\n\n\nEJERCICIOS REALIZADOS: ";
  cout<<"\n";
  cout<<"\nno.1 Suma, Resta, Multiplicacion y Division de dos numeros";
  cout<<"\nno.2 Determinar si un numero es par o impar";
  cout<<"\nno.3 Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa";
  cout<<"\nno.4 Determinar si una palabra o un numero es palindromo.";
  cout<<"\nno.5 Conversion de numeros arabigos a romanos (minimo 1,000)";
  cout<<"\nno.6 Conversion de numeros enteros a letras";
  cout<<"\nno.8 Una tabla de multiplicar";
  cout<<"\nno.9 Todas las tablas de multiplicar del 1 al 10";
  cout<<"\nno.11 Conversion de numeros decimales a binario";
  cout<<"\nno.13 Crear Figuras Geometricas Basicas.";
  cout<<"\nno.16 Calcular la hipotenusa";
  cout<<"\n";
  cout<<"\nSeleccione una opcion: ";
  cin>>opc;
  
	switch(opc)
	{
		case 1: cout<<"Suma, Resta, Multiplicacion y Division de dos numeros";
		cout<<"\n"; 
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
		break;
		
		case 2: cout<<"Determinar si un numero es par o impar";
		cout<<"\n";
		cout<<"Ingrese un numero: ";
   		cin>>numero;
	
		if(numero%2==0){
		cout<<"El numero es par";
		}
		else{
		cout<<"El numero es impar";
		}
		break;
		
		case 3: cout<<"Ingrese una opcion: "<<endl;
				cout <<"1. kilometros a millas"<<endl;
				cout<<"2. metros a pulgadas"<<endl;
				cout<<"3. libras a kilos"<<endl;
				cin >>opc;
					switch(opc)
				{
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
	    case 4: cout<<"Ingrese palabra a verificar: ";
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
				  break;
		case 5: cout<<"Digite un numero: ";
				cin>>numero;
				cout<<"El numero "<<numero<<" en romano es: "<<endl;
				unidades = numero%10; numero /= 10;
				decenas = numero%10; numero /= 10;
				centenas = numero%10; numero /=10;
				millar = numero%10; numero /= 10;
	
				switch(millar){
						case 1: cout<<"M"; break;
						case 2: cout<<"MM"; break;
						case 3: cout<<"MMM"; break;
				}
				switch(centenas){
						case 1: cout<<"C"; break;
						case 2: cout<<"CC"; break;
						case 3: cout<<"CCC"; break;
						case 4: cout<<"CD"; break;
						case 5: cout<<"D"; break;
						case 6: cout<<"DC"; break;
						case 7: cout<<"DCC"; break;
						case 8: cout<<"DCCC"; break;
						case 9: cout<<"CM"; break;		
				}
					switch(decenas){
						case 1: cout<<"X"; break;
						case 2: cout<<"XX"; break;
						case 3: cout<<"XXX"; break;
						case 4: cout<<"XL"; break;
						case 5: cout<<"L"; break;
						case 6: cout<<"LX"; break;
						case 7: cout<<"LXX"; break;
						case 8: cout<<"LXXX"; break;
						case 9: cout<<"XC"; break;		
					}
					switch(unidades){
						case 1: cout<<"I"; break;
						case 2: cout<<"II"; break;
						case 3: cout<<"III"; break;
						case 4: cout<<"IV"; break;
						case 5: cout<<"V"; break;
						case 6: cout<<"VI"; break;
						case 7: cout<<"VII"; break;
						case 8: cout<<"VIII"; break;
						case 9: cout<<"IX"; break;		
					}
					break;
					
		case 6: cout<<"conversion de numeros enteros a letras";
				cout<<"\n";
				cout<<"Escribe un numero:  "; cin>>numero; 
  				cout<<"\n\nEl numero es: ";
  					 n1 = numero / 10000;
 					 n2 = (numero / 1000) % 10;
                     n3 = (numero / 100) % 10;
                     n4 = (numero / 10) % 10;
                     n5 = (numero % 10);
					if(numero > 10000){
      					cout<<"El numero ingresado excede el rango de valores";
 					}else{
    				if(n1 == 1)
					{
     					cout<<"Diez mil";
    			    }
     				 //Sentencia para determinar los miles
   				         if(n2 == 1)
							{
   				    		cout<<"MIL ";
    			        	}else if(n2 == 2)
							{
   					         cout<<"DOS MIL ";
     				        }else if(n2 == 3)
							 {
    				         cout<<"TRES MIL ";
   					        }else if(n2 == 4)
							   {
  					         cout<<"CUATRO MIL ";
    			            }else if(n2 == 5
							){
                             cout<<"CINCO MIL ";
                            }else if(n2 == 6)
							{
      					     cout<<"SEIS MIL ";
      				  	    }else if(n2 == 7)
								{
    				         cout<<"SIETE MIL ";
   					        }else if(n2 == 8)
							   {
   					         cout<<"OCHO MIL ";
   					        }else if(n2 == 9)
							   {
   					         cout<<"NUEVE MIL ";
  				           }
   						    //Setencia para determinar los cientos
   						   if(n3 == 1 && n4 == 0 && n5 == 0)
							  {
       						  cout<<"CIEN";
    						  }else if(n3 == 1)
							  {
         					  cout<<"CIENTO ";
      				     	  }else if(n3 == 2)
								 {
                              cout<<"DOSCIENTOS ";
                              }else if(n3 == 3)
							  {
                              cout<<"TRESCIENTOS ";
                              }else if(n3 == 4)
							  {
                              cout<<"CUATROCIENTOS ";
                              }else if(n3 == 5)
							  {
                              cout<<"QUINIENTOS ";
                              }else if(n3 == 6)
							  {
                              cout<<"SEISCIENTOS ";
 						      }else if(n3 == 7)
							   {
         					  cout<<"SETECIENTOS ";
    					      }else if(n3 == 8)
							  {
         				      cout<<"OCHOCIENTOS ";
     				          }else if(n3 == 9)
							   {
                              cout<<"NOVECIENTOS ";
    					      }
      						//Setencia para determinar las decenas
      					      if(n4 == 1 && n5 == 0)
								{
                                  cout<<"Diez";
                                }else if(n4 == 1 && n5 == 1)
								{
                                   cout<<"ONCE";
                                }else if(n4 == 1 && n5 == 2)
								{
                                  cout<<"DOCE";
                                }else if(n4 == 1 && n5 == 3)
								{
                                  cout<<"TRECE";
                                }else if(n4 == 1 && n5 == 4)
								{
                                  cout<<"CATORCE";
                                }else if(n4 == 1 && n5 == 5)
								{
                                  cout<<"QUINCE";
                                }else if(n4 == 1)
								{
                                  cout<<"DIECI";
                                }
                               if(n4 == 2 && n5 == 0)
							   {
                                 cout<<"VEINTE";
                               }else if(n4 == 2)
							   {
                                 cout<<"VEINTI";
                               }else if(n4 == 3 && n5 == 0)
							   {
                                 cout<<"TREINTA";
                               }else if(n4 == 3)
							   {
                                 cout<<"TREINTA Y ";
                               }else if(n4 == 4 && n5 == 0)
							   {
                                 cout<<"CUARENTA";
                               }else if(n4 == 4)
							   {
                                 cout<<"CUARENTA Y ";
                               }else if(n4 == 5 && n5 == 0)
							   {
                                 cout<<"CINCUENTA";
                               }else if(n4 == 5){
                                 cout<<"CINCUENTA Y ";
                               }else if(n4 == 6 && n5 == 0)
							   {
                                 cout<<"SESENTA";
                               }else if(n4 == 6)
							   {
                                 cout<<"SESENTA Y ";
                               }else if(n4 == 7 && n5 == 0)
							   {
                                 cout<<"SETENTA";
                               }else if(n4 == 7)
							   {
                                 cout<<"SETENTA Y ";
                               }else if(n4 == 8 && n5 == 0)
							   {
                                 cout<<"OCHENTA";
                               }else if(n4 == 8)
							   {
                                 cout<<"OCHENTA Y ";
                               }else if(n4 == 9 && n5 == 0)
							   {
                                 cout<<"NOVENTA";
                               }
                                 else if(n4 == 9)
								 {
                                    cout<<"NOVENTA Y ";
                                 }
                                    //Sentencia para determinar las unidades 
                              if(n5 == 1 && n4 > 1){
                                    cout<<"UNO";
                              }else if(n5 == 1 && n4 == 0)
							  {
                                cout<<"UNO"; 
                              }else if(n5 == 2 && n4 > 1)
							  {
                                cout<<"DOS";
                              }else if(n5 == 2 && n4 == 0)
							  {
                                cout<<"DOS";
                              }else if(n5 == 3 && n4 > 1)
							  {
                                cout<<"TRES";
                              }else if(n5 == 3 && n4 == 0)
							  {
                                cout<<"TRES"; 
                              }else if(n5 == 4 && n4 > 1)
							  {
                                cout<<"CUATRO";
                              }else if(n5 == 4 && n4 == 0)
							  {
                                cout<<"CUATRO"; 
                              }else if(n5 == 5 && n4 > 1)
							  {
                                cout<<"CINCO";
                              }else if(n5 == 5 && n4 == 0)
							  {
                                cout<<"CINCO";
                              }else if(n5 == 6)
							  {
                                cout<<"SEIS";
                              }else if(n5 == 7)
							  {
                                cout<<"SIETE";
                              }else if(n5 == 8)
							  {
                                cout<<"OCHO";
                              }else if(n5 == 9)
							  {
                                cout<<"NUEVE";
                              } 
    
	                }
	                break;
	    case 7: cout<<"Ingrese un numero y mostrara su tabla de multiplicar";
	            cout<<"\n";
	    			do{
	                	cout<<"Ingrese un numero: ";
	                	cin>>n;
                	}while((n<1) || (n>10));	
                	for(int x=1;x<=10;x++){
	                 	cout<<n<<" x "<<x<<" = "<<n*x<<endl;
                    }
                    break;
        case 8: cout<<"TABLAS DE MULTIPLICAR DEL 1 AL 10";
                cout<<"\n";
		        	for(i=1;i<11;i++)
                 	{
	                	printf("_________________________\n\t\tTABLA DEL %d\n",i);
	                	for(j=1;j<11;j++)
		            	printf("%d x %d = %d \n",i,j,i*j);
        
		            }    
		            break;
       case 9: cout<<" Conversion de numero decimal a binario: ";
                cout<<"\n\n";       
                 cout << "Ingresa el numero en decimal a convertir:" << endl;
                 
                 cin >> decimal;
                 for (int i = 0; i < 8; i++)
                 {
                     binario[i] = decimal % 2;
                     decimal /= 2;
                 }
                 cout << "El numero en binario es:" << endl;
                 for (int i = 7; i >= 0; i--)
                {
                 cout << binario[i];
                }
                break;
       case 13: cout<<"Figuras geometricas: ";
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
	 break;

     }
   case 16: cout<<"calcular la hipotenusa";
   	cout<<"Ingrese el lado adyacente del triangulo: ";
	cin>>a;
	cout<<"Ingrese el lado opuesto del triangulo: ";
	cin>>o;
	
	cout << sqrt(a*a + o*o);
   
}   }

