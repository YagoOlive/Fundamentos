/*8. Receba um valor X numérico, calcule e retorne o valor de f(x), sendo
f(x) = 8 / (2 - x).*/
#include<stdio.h>
float Funcao(float a){
	float fun;
    fun=8/(2-a);
	return fun;	
}
main(){
	float x;
	printf("Informe um numero: ");
	scanf("%f", &x);
	printf("A funcao resulta: %.2f", Funcao(x));	
}
