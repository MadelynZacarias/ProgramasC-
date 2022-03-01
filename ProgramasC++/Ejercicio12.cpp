//Conversión de números decimales a hexadecimales//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int decimal;
	char hexa[8];
	char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	printf("Escribe un numero en decimal\n");
	scanf("%d",&decimal);
	int i=0;
	while(decimal>=16){
		hexa[i]=hex[decimal%16];
		decimal=decimal/16;
		i++;
	}
	hexa[i]=hex[decimal];
	printf("El numero hexadecimal es:\n");
	int j=0;
	for(j=i;j>=0;j--){
		printf("%c",hexa[j]);
	}
	
	
	return 0;
}


