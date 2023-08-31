/*17. Receba uma matriz de 5 strings e retorne qual string da matriz (0, 1, 2, 3 ou 4)
possui o maior número de vogais.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Maisv (char string[5][20]){
	int i, j, cont[5]={0,0,0,0,0}, maior;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(string[i][j]=='a'||string[i][j]=='e'||string[i][j]=='i'||string[i][j]=='o'||string[i][j]=='u')
	            cont[i]++;
		}
	}
	maior=cont[0];
	for(i=0;i<5;i++){
		if(maior<cont[i])
		    maior=cont[i];
	}
	printf("%s", string[maior-1]);
}

main(){
	int i;
	char a[5][20];
	
	for(i=0;i<5;i++){
	    printf("Informe uma string:");
	    gets(a[i]);
	}
	Maisv(a);		
}
