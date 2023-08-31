/*9. Receba o peso e a altura e retorne o IMC (índice de Massa Corporal) de uma
pessoa. A fórmula é: IMC = peso/altura2*/
#include<stdio.h>
float Imc(float a, float p){
	float imc;
    imc=p/(a*a);
	return imc;	
}
main(){
	float alt, ps;
	printf("Informe a altura(m): ");
	scanf("%f", &alt);
	printf("Informe o peso(kg): ");
	scanf("%f", &ps);
	printf("O IMC eh: %.2f", Imc(alt, ps));	
}

