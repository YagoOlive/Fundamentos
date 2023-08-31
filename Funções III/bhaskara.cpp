#include<stdio.h>
#include<math.h>
main(){
	float a, b, c, delta, x, x2;
	printf("Informe valores para A, B e C:\n");
	scanf("%d%d%d", &a, &b, &c);
	if(a==0)
	    printf("Valor informado para o indice A invalido!");
	else{
		    delta=b*b-4*a*c;
	        x=(-b+(sqrt(delta)))/(2*a);
	        x2=(-b-(sqrt(delta)))/(2*a);
	}
	printf("Raiz 1: %f\nRaiz 2: %f",  x, x2);
}
