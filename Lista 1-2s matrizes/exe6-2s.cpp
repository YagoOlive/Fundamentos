/*6. Leia uma matriz de 5 strings. Posteriormente exiba a porcentagem de vogais em cada string em relação aos
demais caracteres.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int i, j, cont=0, conttodas=0, porcentual;
	char string[5][5], caractere;
	
	for(i=0;i<5;i++){
	    printf("Informe uma string:");
	    gets(string[i]);
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			conttodas++;
			if(string[i][j]=='a'||string[i][j]=='e'||string[i][j]=='i'||string[i][j]=='o'||string[i][j]=='u')
	            cont++;
		}
	}
	porcentual=(cont*100)/conttodas;
	printf("O porcentual de vogais e %d porcento", porcentual);	
}
