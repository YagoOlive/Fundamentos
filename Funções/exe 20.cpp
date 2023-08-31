/*20. Receba um vetor de inteiros com 10 números e uma letra. Se a letra for ‘C’,
ordene o vetor em ordem crescente. Se a letra for ‘D’, em ordem decrescente.
Faça uma pesquisa na Internet sobre o método de ordenação Bolha (Bubble
sort).*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Ordena (int a[10], char c){
	int i, j, aux;
	if(c=='C'||c=='c'){
		for(i=0;i<10;i++){
			for(j=i+1;j<10;j++){
			    if(a[i]>a[j]){
			    	aux=a[i];
			    	a[i]=a[j];
			    	a[j]=aux;
				}    	
			}
	    }
		for(i=0;i<10;i++){
		    printf("%d\n", a[i]);
	    }
	}    
    else if(c=='D'||c=='d'){
	    for(i=0;i<10;i++){
			for(j=i+1;j<10;j++){
			    if(a[i]<a[j]){
			    	aux=a[i];
			    	a[i]=a[j];
			    	a[j]=aux;
				}	
			}
		}
		for(i=0;i<10;i++){
		    printf("%d\n", a[i]);
	    }
    }
    else
        printf("Entrada invalida!");
}

main(){
	int vet1[10]={20, 17, 39, 21, 1, 9, 6, 4, 7, 11};
	char letra;
	printf("Informe a letra: ");
	scanf("%c", &letra);
	Ordena(vet1, letra);
}
