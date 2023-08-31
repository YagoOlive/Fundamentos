/*16. Receba uma string e retorne quantos por cento da string recebida é formada
por vogais. Exemplo: a string “bola” é 50% composta por vogais.*/
#include<stdio.h>
#include<string.h>
float Contv (char a[100]){
	int tam, i, contv=0;
	float x;
	tam=strlen(a);

	for(i=0;i<tam;i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		    contv++;	
	}
	x=(contv*100)/tam;
	return x;
}

main(){
	char string[100];
	gets(string);
	printf("%.2f", Contv(string));
}
