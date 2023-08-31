/*5. Leia uma matriz de 5 strings. Posteriormente exiba quantas vogais a matriz de strings possui como um todo.*/
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
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(string[i][j]=='a'||string[i][j]=='e'||string[i][j]=='i'||string[i][j]=='o'||string[i][j]=='u')
	            cont++;
		}
	}
	printf("Existem %d vogais dentro da matriz!", cont);	
}
