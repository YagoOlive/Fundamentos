/*2. Receba uma matriz A3x3 e altere todos os elementos da sua diagonal
principal para 1.*/
#include<stdio.h>
int Diagonal(int a[3][3]){
	int i, j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j)
			    a[i][j]=1;
		}
	}
	printf("MATRIZ ALTERADA");
	for(i=0;i<3;i++){
        printf("\n");
		for(j=0;j<3;j++){
		    printf("%d ", a[i][j]);
		}
	}
}
main(){
	int matriz[3][3], i, j;
	printf("Informe valores para a matriz: ");
		for(i=0;i<3;i++){
		    for(j=0;j<3;j++){
			    scanf("%d", &matriz[i][j]);
		    }
	    }
	Diagonal(matriz);
}
