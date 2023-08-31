/*7. Receba o capital, os juros e os meses de um empréstimo, calcule e retorne o
montante final do empréstimo realizado. M=Capital (1+Juros)Meses*/
#include<stdio.h>
#include<math.h>

float Emprestimo(float cap, float jr, float ms){
	int montante;
	montante=cap*(pow((1+(jr/100)),ms));
	return montante;	
}
main(){
	float capital, juros, meses;
	
	printf("Informe o capital do emprestimo: ");
	scanf("%f", &capital);
	printf("Informe o juros do emprestimo: ");
	scanf("%f", &juros);
	printf("Informe a quantidade de meses do emprestimo: ");
	scanf("%f", &meses);
	printf("O montante do emprestimo eh: %.2f", Emprestimo(capital, juros, meses));
	
}
