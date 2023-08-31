/*7. Receba um caractere e uma string e retorne quantas vezes o caractere
aparece na string.*/
#include<stdio.h>
#include<string.h>
int Contador (char a[100], char c){
	int i, tam, cont=0;
	tam=strlen(a);
	for(i=0;i<=tam;i++){
	    if(a[i]==c)
	        cont++;
	}
	return cont;
}
main(){
	char string[100], caractere;
	gets(string);
	scanf("%c", &caractere);
	printf("%d", Contador(string, caractere));
}
