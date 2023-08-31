/*4. Leia uma matriz de 5 strings. Posteriormente leia um caractere. O programa deverá exibir uma mensagem
indicando quantas vezes o caractere lido aparece individualmente em cada uma das 5 strings da matriz.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int i, j, cont=0, cont1[5];
	char string[5][5], caractere;
	
	for(i=0;i<5;i++){
	    printf("Informe uma string:");
	    gets(string[i]);
	}
	printf("Informe o caractere a ser verificado:");
	scanf("%s", &caractere);
	for(i=0;i<5;i++){
		cont=0;
		for(j=0;j<5;j++){
			if(string[i][j]==caractere)
	            cont++;
		}
		cont1[i]=cont;
	}
	for(i=0;i<5;i++){
	    printf("O caractere foi encontrado %d vezes dentro da string %d\n", cont1[i], i);	
    }
}
