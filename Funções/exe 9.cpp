/*9. Receba dois caracteres (c1 e c2) e uma string. A função deverá substituir
todas as ocorrências de c1 na string por c2.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Troca_c (char a[100], char c1, char c2){
	int i, tam, cont=0;
	tam=strlen(a);
	for(i=0;i<=tam;i++){
	    if(a[i]==c1)
	        a[i]=c2;
	}
	printf("%s", a);
}
main(){
	char string[100], caractere1, caractere2;
	printf("Informe a string: ");
	gets(string);
	printf("Informe o caractere c1: ");
	scanf("%c", &caractere1); fflush(stdin);
	printf("Informe o caractere c2: ");
	scanf("%c", &caractere2);
	Troca_c(string, caractere1, caractere2);
}
