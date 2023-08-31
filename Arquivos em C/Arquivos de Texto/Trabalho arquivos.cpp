/* Programa que leia dois arquivos texto e uma string.
Posteriormente informe se a string está presente nos
dois arquivos, em apenas um deles ou em nenhum.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main () {
	FILE *arq, *arq2; 
	int tam, cont=0, cont2=0;
	char str[81], str2[81];
	printf("Informe uma string: ");
	gets(str2);
	arq = fopen("teste.txt","r");
	while (fgets(str, 80, arq) != NULL) {
		tam=strlen(str);
		str[tam-1]='\0'; // Substitui o \n que a função fgets insere pelo \0
		printf("\n%s", str);
		if(strcmp(str, str2)==0)
			cont++;
	}
	fclose(arq);
	printf("\n");
	arq2 = fopen("test2.txt","r");
	while (fgets(str, 80, arq2) != NULL) {
		tam=strlen(str);
		str[tam-1]='\0'; 
		printf("\n%s", str);
		if(strcmp(str, str2)==0)
			cont2++;
	}
	fclose(arq2);
	printf("\n");
	if(cont==0&&cont2==0)
	    printf("\nA string nao esta presente em nenhum arquivo!");
	else if(cont>0&&cont2>0)
	    printf("\nA string esta presente nos dois arquivos!");
	else if(cont>0||cont2>0)
	    printf("\nA string esta presente em um arquivo!");
}
