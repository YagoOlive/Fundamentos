/*12. Receba uma string e retorne se a mesma é palíndromo.*/
#include<stdio.h>
#include<string.h>
char Palindromo (char a[100]){
	int tam, i;
	char aux, b[100];
	tam=strlen(a)-1;
	strcpy(b, a);
	for(i=0;i<strlen(b)/2;i++){
		aux=b[i];
		b[i]=b[tam];
		b[tam]=aux;
		tam--;	
	}
	if(strcmp(a, b)==0){
		printf("E palindromo!");
	}
	else{
		printf("nao eh palindromo!");
	}	
}

main(){
	char string[100];
	gets(string);
	Palindromo(string);
}
