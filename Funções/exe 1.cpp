/*1. Receba um vetor[10] de inteiros e retorne o menor elemento do vetor.*/
#include<stdio.h>
int Menor(int a[10]){
	int aux, i;
	aux=a[0];
	for(i=1;i<10;i++){
		if(aux>a[i])
		    aux=a[i];
	}
	return aux;
}
main(){
	int vetor[10], i;
	printf("Informe 10 valores para o vetor: ");
	for(i=0;i<10;i++){
		scanf("%d", &vetor[i]);
	}
	printf("Menor inteiro no vetor: %d", Menor(vetor));
}
