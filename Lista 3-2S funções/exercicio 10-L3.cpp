/*10. Receba dois n�meros inteiros positivos M e N e retorne a soma dos n�meros
pares entre estes n�meros.*/

#include<stdio.h>

int Soma_num(int a, int b){
	int i, aux_mai, aux_men, soma=0;
	if(a>=b){
		aux_mai=a;
		aux_men=b;
	}
	else if(b>a){
		aux_mai=b;
		aux_men=a;
	}
	for(i=aux_men;i<=aux_mai;i++){
		if(i%2==0)
		    soma+=i;
	}
	return soma;	
}

main(){
	int num1, num2;
	printf("Informe dois numeros: ");
	scanf("%d%d", &num1, &num2);
	printf("Ah soma de todos os pares entre os numeros informados eh: %d", Soma_num(num1, num2));
}
