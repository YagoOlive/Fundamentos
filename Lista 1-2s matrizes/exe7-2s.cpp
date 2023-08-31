/*7. Leia uma matriz de 5 strings. Posteriormente exiba qual string da matriz (0, 1, 2, 3 ou 4) possui o maior número
de vogais.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int i, j, cont=0, contstring[5], maior, indice;
	char string[5][5], caractere;
	
	for(i=0;i<5;i++){
	    printf("Informe uma string:");
	    gets(string[i]);
	}
	for(i=0;i<5;i++){
		cont=0;
		for(j=0;j<5;j++){
			if(string[i][j]=='a'||string[i][j]=='e'||string[i][j]=='i'||string[i][j]=='o'||string[i][j]=='u')
	            cont++;
		}
		contstring[i]=cont;
	}
	for(i=0;i<5;i++){
	   maior=contstring[0];
	   if(contstring[i]>maior){
	        maior=contstring[i];
	        indice=i;
	    }
	}
	printf("a string com mais vogais e a %d", indice);	
}
