/*1. Receba um valor inteiro e verifique se o valor � par ou �mpar. A fun��o deve
retornar 1, para par, e 0, para �mpar.*/
#include<stdio.h>
int impar_par(int a){
	if(a%2==0)
	    return 1;
	else
	    return 0;
}
main(){
	int num;
	printf("Informe um numero a ser verificado: ");
	scanf("%d", &num);
	printf("%d", impar_par(num));
	
}
