/*18. Receba uma matriz de 5 strings e uma string. Retorne 1 se a string estiver
presente na matriz, ou 0, caso contrário.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Compara (char string[5][20], char string2[20]){
	int i, j, cont[5]={0,0,0,0,0}, cont2=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(strcmp(string2, string[i])==0)
	            cont2++;
		}
	}
	if(cont2>0)
	    return 1;
	else
	    return 0;
}

main(){
	int i;
	char a[5][20], b[20];
	
	for(i=0;i<5;i++){
	    printf("Informe uma string:");
	    gets(a[i]);
	}
	printf("Informe uma string: ");
	gets(b);
	printf("%d", Compara(a, b));		
}
