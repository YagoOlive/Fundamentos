/*Receba a média final de um aluno por parâmetro e retorne o seu conceito,
conforme a tabela a seguir: de 0,0 a 4,9 D /de 5,0 a 6,9 C /de 7,0 a 8,9 B/ de 9,0 a 10,0 A*/

#include<stdio.h>

int Conceito(float a){
	char conceito;
	if(a>0&&a<5)
	    conceito='D';
	else if(a>=5&&a<7)
	    conceito='C';
	else if(a>=7&&a<9)
	    conceito='B';
	else if(a>=9&&a<=10)
	    conceito='A';
	return conceito;
}
main(){
	float nota;
	printf("Informe a media final do aluno: ");
	scanf("%f", &nota);
	printf("O conceito do aluno eh: %c", Conceito(nota));
}
