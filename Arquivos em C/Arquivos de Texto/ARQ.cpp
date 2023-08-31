/*Programa que leia dois arquivos texto e uma string.
Posteriormente informe se a string está presente nos
dois arquivos, em apenas um deles ou em nenhum.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Verificador(FILE *arquivo, char string[10], int n){
	int tam;
	char string2[n];
	arquivo = fopen("teste.txt","r");
	while (fgets(string2, n, arquivo) != NULL) {
		tam=strlen(string);
		string2[tam-1]='\0'; // Substitui o \n que a fun??o fgets insere pelo \0
		printf("\n%s", string);
		if(strcmp(string, string2)==0)
		    return 1;
		else 
		    return 0;
		
	}
	fclose(arquivo);
}
main () {
	FILE *Id_arquivo;
	int n;
	char str1[10];
	gets(str1);
	n=strlen(str1);
    Verificador(str1 , Id_arquivo, n);	
}
