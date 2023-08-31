/*8. Receba um valor X numérico, calcule e retorne o valor de f(x), sendo
f(x) = 8 / (2 - x).*/
#include<stdio.h>
float funcoes(float x){
	if(x!=2)
	    return 8/(2-x);
	else
	    printf("Impossivel calcular!");
}
main()
{
	float a;
	printf("informe um valor para a funcao:");
	scanf("%f", &a);
	
	printf("Resultado da funcao:%.2f", funcoes(a));
}
