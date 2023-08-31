/*3. Leia uma matriz de 5 strings. Posteriormente leia um caractere. O programa deverá exibir uma mensagem
indicando quantas vezes o caractere lido aparece na matriz de strings como um todo.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int i, j, cont=0;
	char string[5][5], caractere;
	
	for(i=0;i<5;i++){
	    printf("Informe uma string:");
	    gets(string[i]);
	}
	printf("Informe o caractere a ser verificado:");
	scanf("%s", &caractere);
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(string[i][j]==caractere)
	            cont++;
		}
	}
	printf("O caractere foi encontrado %d vezes dentro da matriz!", cont);	
}
