/*14. Receba um n�mero inteiro e verifique se � um valor perfeito ou n�o. Um valor
� dito perfeito quando ele � igual a soma dos seus divisores excetuando o
pr�prio valor. (Ex: 6 � perfeito, 6 = 1 + 2 + 3, que s�o seus divisores).*/
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
