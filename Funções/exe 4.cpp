/*4. Receba um vetor A[10] de inteiros e um número. Retorne quantas vezes o
número aparece no vetor.*/
#include<stdio.h>
int Contador(int a[10], int c){
	int aux=0, i;
	for(i=1;i<10;i++){
		if(c==a[i])
		    aux++;
	}
	return aux;
}
main(){
	int vetor[10], i, num;
	printf("Informe 10 valores para o vetor: ");
	for(i=0;i<10;i++){
		scanf("%d", &vetor[i]);
	}
	printf("Informe um numero: ");
	scanf("%d", &num);
	printf("Contador: %d", Contador(vetor, num));
}
