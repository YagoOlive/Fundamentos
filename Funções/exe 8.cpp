/*8. Receba um caractere, uma string e retorne a string eliminando da mesma o
caractere recebido.*/
#include<stdio.h>
#include<string.h>
int Apaga_c (char a[100], char c){
	int i, tam, cont=0;
	tam=strlen(a);
	for(i=0;i<=tam;i++){
	    if(a[i]==c)
	        a[i]='*';
	}
	printf("%s", a);
}
main(){
	char string[100], caractere;
	gets(string);
	scanf("%c", &caractere);
	Apaga_c(string, caractere);
}
