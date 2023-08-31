/*14. Receba um número inteiro e verifique se é um valor perfeito ou não. Um valor
é dito perfeito quando ele é igual a soma dos seus divisores excetuando o
próprio valor. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores).*/
#include<stdio.h>

int Perfeito_n(int a){
    int i, soma=0;
	for(i=1;i<=(a/2);i++){
		if(a%i==0){
			soma+=i;
		}
	}
	if(soma==a)
	    return 1;
	else
		return 0;	
}

main(){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    if(Perfeito_n(numero)==1)
        printf("O numero eh perfeito!");
    else
        printf("O numero nao eh perfeito!");
}
