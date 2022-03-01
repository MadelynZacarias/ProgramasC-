//Simulación de un Cajero (Autómata)//

// PROTOTIPOS
void menu();
void depositar(int cantidad);
void retirar(int cantidad);


// VARIABLE GLOBAL
int saldo_actual = 100;
int cantidad;

#include <iostream>
#include <stdio.h> 
using namespace std;
main(void)
{
	menu();
}

void menu()
{
	// VARIABLE PARA ALMACENAR LA OPCION
	
	int opc;

	
	printf("1. Consultar saldo");
	printf("\n2. Depositar");
	printf("\n3. Retirar");
	printf("\n4. Salir");
	
	// ALMACENAMOS SU OPCION
	printf("\nDigite su opcion: ");
	scanf("%i" , &opc);
	
	// CREAMOS UN SWITCH PARA REDIRECCIONAR A LAS FUNCIONES
	switch(opc)
	{
		case 1: printf("\nTu saldo actual es de %i " , saldo_actual);
		break;
		
		case 2:
		printf("\nCuanto dinero desea depositar: ");
		scanf("%i" , &cantidad); 
		depositar(cantidad); // LE ENVIAMOS EL PARAMETRO A LA FUNCION
		break;
		
		case 3:
		printf("\nCuanto dinero desea retirar: ");
		scanf("%i" , &cantidad); 
		retirar(cantidad); // LE ENVIAMOS EL PARAMETRO A LA FUNCION
		break;
		
		case 4:
			break; // CERRAMOS EL PROGRAMA
		
		default:
			printf("\nOpcion no valida");
		
		
	}
	
	
}

// CREAR LAS FUNCIONES DEPOSITAR
void depositar(int cantidad)
{
	
	saldo_actual += cantidad; // ACTUALIZAMOS EL SALDO ACTUAL
	printf("\nHas depositado exitosamente %i Quetzales, tu saldo actual es de %i Quetzales" , cantidad , saldo_actual );
	
}

// FUNCION PARA RETIRAR
void retirar(int cantidad)
{
	// CONDICIONAL DE CHECKEO
	if (cantidad <= saldo_actual) // SI SE CUMPLE, ENTRAMOS AL CONDICIONAL
	{
	
	saldo_actual -= cantidad;
	
	printf("\nHas retirado exitosamente %i USD, tu saldo actual es de %i USD" , cantidad , saldo_actual );
	
	}
	else
	{
		printf("\nNo tienes suficiente dinero, tu saldo actual es de %i", saldo_actual);
	}
	
}
