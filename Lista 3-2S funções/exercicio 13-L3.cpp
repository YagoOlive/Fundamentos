/*13. Receba um valor inteiro positivo e retorne quantos divisores inteiros positivos
esse n�mero possui (com exce��o do pr�prio n�mero).*/
#include<stdio.h>

int Divisores_n(int a){
    int i, cont=0;
	for(i=1;i<=(a/2);i++){
		if(a%i==0){
			cont++;
		}
	}
	return cont;	
}

main(){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    printf("%d", Divisores_n(numero));
}
