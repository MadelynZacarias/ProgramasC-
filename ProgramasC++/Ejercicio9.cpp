//Todas las tablas de multiplicar del 1 al 10//
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int i,j;
	for(i=1;i<11;i++)
	{
		printf("_________________________\n\t\tTABLA DEL %d\n",i);
		for(j=1;j<11;j++)
			printf("%d x %d = %d \n",i,j,i*j);
	}
}




