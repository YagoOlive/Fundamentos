/* 2. Leia uma matriz de 5 strings. Posteriormente leia outra string. 
O programa deverá exibir uma mensagem indicando quantas vezes a string lida aparece na matriz.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int i, cont=0;
	char string[5][100], string2[10];
	
	for(i=0;i<5;i++){
	    printf("Informe uma string:");
	    gets(string[i]);
	}
	printf("Informe a string a ser verificada:");
	gets(string2);
	for(i=0;i<5;i++){
	    if(strcmp(string[i], string2)==0)
	        cont++;
	}
	printf("A string foi encontrada %d vezes dentro da matriz!", cont);	
}
