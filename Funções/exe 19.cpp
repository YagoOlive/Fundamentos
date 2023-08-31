/*19. Receba três vetores de inteiros, sendo dois vetores (vet1 e vet2) de 10
elementos já preenchidos e gere um terceiro vetor (vet3) com os elementos
dos vetores 1 e 2 intercalados. A primeira posição do vetor 3 deve ter o
primeiro elemento do vetor 1, a segunda posição do vetor 3 deve ter o primeiro
elemento do vetor 2, a terceira posição do vetor 3 deve ter o segundo
elemento do vetor1, e assim sucessivamente.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Intercala (int a[10], int b[10], int c[20]){
	int i, j=0, k=0;
	for(i=0;i<20;i++){
		if(i%2==0){
			c[i]=a[j];
			j++;
		}
		else{
			c[i]=b[k];
			k++;
		}
	}
	for(i=0;i<20;i++){
		printf("%d\n", c[i]);
	}
}

main(){
	int vett[20], vet1[10]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19}, vet2[10]={2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	Intercala(vet1, vet2, vett);		
}
