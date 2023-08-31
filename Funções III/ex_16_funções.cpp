/*16. Receba a média final de um aluno por parâmetro e retorne o seu conceito,
conforme a tabela a seguir:*/
#include<stdio.h>
float med_a(float x){
	if(x<=4.9)
	{
	    printf("Conceito D!");
	}
	else if(x>4.9&&x<=6.9)
	{
	    printf("Conceito C!");
	}
	else if(x>6.9&&x<=8.9)
	{
	    printf("Conceito B!");
	}
	else
	{
	    printf("Conceito A!");
	}
}
main()
{
	float nota;
	printf("Informe a nota aluno(0 a 10):");
	scanf("%f", &nota);
	med_a(nota);
}
