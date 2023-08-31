/* Leitura de strings em arquivos
   Verifica se a string str2
   está	no arquivo teste.txt
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main () {
	FILE *arq; int tam;
	char str[81], str2[81];
	strcpy(str2,"Engenharia de Software");
	arq=arq = fopen("teste.txt","r");
	while (fgets(str, 80, arq) != NULL) {
		tam=strlen(str);
		str[tam-1]='\0'; // Substitui o \n que a função fgets insere pelo \0
		printf("\n%s", str);
		if(strcmp(str, str2)==0)
			printf("***** Tem *****");
	}
	fclose(arq);
}
