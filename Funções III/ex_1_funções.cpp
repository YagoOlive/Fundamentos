/*1. Receba um valor inteiro e verifique se o valor é par ou ímpar. A função deve
retornar 1, para par, e 0, para ímpar.*/
#include<stdio.h>
 int par_impar(int numero){
 	if(numero%2==0)
 	    return 1;
 	else
	    return 0;    
 }
main()
{
	int num;
	printf("Informe um numero:");
	scanf("%d", &num);
	printf("%d", par_impar(num));
}
