/*6. Receba os coeficientes (a, b e c) de uma função de segundo grau e retorne as
suas raízes da equação (passadas como passagem de parâmetro por
referência), caso seja possível calcular.*/
#include<stdio.h>
#include<math.h>
float raiz1=0, raiz2=0;
int funcao2(float a, float b, float c, float *r1, float *r2){
	float delta;
	delta=(b*b)-(4*a*c);
	if(delta<0){
		printf("Nao existe raizes reais!");
	}
	else{
		
	    *r1=((b*(-1))+(sqrt(delta)))/(2*a);
		*r2=(b*(-1)-sqrt(delta))/(2*a);
		printf("Raiz 1: %.2f\nRaiz 2: %.2f", *r1, *r2);		
	}
}
main(){
	float num1, num2, num3, raiz1, raiz2;
	
	printf("Informe os coeficientes da equacao: ");
	scanf("%f%f%f", &num1 ,&num2 ,&num3);
	funcao2(num1, num2, num3, &raiz1, &raiz2);
}
