/*Programa que leia dois arquivos texto e uma string.
Posteriormente informe se a string está presente nos
dois arquivos, em apenas um deles ou em nenhum.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main () {
	FILE *arquivo;
	int tam;
	char str[10], str2[100];
	fgets(str);
	arquivo = fopen("teste.txt","r");
	while (fgets(str2, 10, arquivo) != NULL) {
		tam=strlen(str2);
		str[tam-1]='\0'; // Substitui o \n que a fun??o fgets insere pelo \0
		printf("\n%s", str);
		if(strcmp(str, str2)==0)
			printf("\n***** Tem *****");
	}
	fclose(arquivo);
}
