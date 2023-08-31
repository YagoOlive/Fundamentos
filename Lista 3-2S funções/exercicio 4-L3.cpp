/*4. Receba três valores inteiros e retorne o menor deles.*/
#include<stdio.h>
int menor(int a, int b, int c){
	int aux;
	if(a<=b)
	    aux=a;
	else
	    aux=b;
	if(aux>=c)
	    aux=c;
	return aux;
	
}
main(){
	int num1, num2, num3;
	printf("Informe tres numeros a ser verificados: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("O menor numero eh: %d", menor(num1, num2, num3));
	
}
