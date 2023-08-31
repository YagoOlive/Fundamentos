#include<stdio.h>

float imc(float p, float alt){
 	return p/(alt*alt);
}
main()
{
    float peso, altura, resultado;
    printf("Informe o peso:");
 	scanf("%f", &peso);
 	
 	printf("Informe a altura:");
 	scanf("%f", &altura);
 	
 	printf("Seu IMC eh %.2f", imc(peso, altura));
}
