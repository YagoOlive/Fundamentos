/*3. Receba uma matriz A3x3 e retorne a soma dos elementos da sua diagonal
principal e da sua diagonal secundária.*/
#include<stdio.h>
int Soma_diagonais(int a[3][3]){
	int i, j, soma=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				soma+=a[i][j];
			}
			if(j==(2-i)){
				soma+=a[i][j];
			}	    
		}
	}
	return soma;	
}
main(){
	int matriz[3][3], i, j;
	printf("Informe valores para a matriz: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("Soma das diagonais: %d", Soma_diagonais(matriz));
}

   
