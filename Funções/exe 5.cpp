/*5. Receba uma string e a retorne escrita de trás pra frente.*/
#include<stdio.h>
#include<string.h>
char Inverte (char a[100]){
	int tam, i;
	char aux;
	tam=strlen(a)-1;
	for(i=0;i<strlen(a)/2;i++){
		aux=a[i];
		a[i]=a[tam];
		a[tam]=aux;
		tam--;	
	}
	for(i=0;i<strlen(a);i++){
		printf("%c", a[i]);
	}
	
}
main(){
	char string[100];
	gets(string);
	Inverte(string);
}

