/*6. Receba uma matriz M3x3 e retorne a linha e a coluna (por referência) do
maior elemento da matriz.*/
#include<stdio.h>
int Maior(int a[3][3]){
	int i, j, maior;
	maior=a[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(maior<a[i][j]){
				maior=a[i][j];
			}	    
		}
	}
	return maior;	
}
main(){
	int matriz[3][3], i, j;
	printf("Informe valores para a matriz: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("Maior elemento da matriz: %d", Maior(matriz));
}
