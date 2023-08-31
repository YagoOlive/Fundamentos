// 1. Leia uma matriz de 5 strings. Posteriormente exiba as 5 strings informadas.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int i;
	char string[5][100];
	
	for(i=0;i<5;i++){
	    printf("Informe uma string:");
	    gets(string[i]);
	}
	for(i=0;i<5;i++){
	    puts(string[i]);
	}	
}
