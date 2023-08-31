/*1. Receba um vetor[10] de inteiros e retorne o menor elemento do vetor.*/
#include<stdio.h>
    int menor_valor(int vet[10])
	{
		int i, auxiliar;
		auxiliar=vet[0];
		for(i=0; i<10;i++)
		{
			if(vet[i]<auxiliar)
			    auxiliar=vet[i];
		}
		return auxiliar;
	}
main()
{
    int i, vetor[10], aux;
    for(i=0; i<10;i++)
		{
			printf("Informe um valor para o vetor: ");
			scanf("%d", &vetor[i]);
		}
		aux=menor_valor(vetor);
		printf("Menor valor: %d", aux);
}
