/*13. Receba uma matriz real A3x3 e retorne quantas colunas nulas existem em A.*/
#include<stdio.h>
int Coluna_nula(int a[3][3]){
	int i, j, cont, cont_col=0;
	for(i=0;i<3;i++){
		cont=0;
		for(j=0;j<3;j++){
			if(a[j][i]==0)
			    cont++;
		}
		if(cont==3)
		    cont_col++;
	}
	return cont_col;	
}
main(){
	int matriz[3][3], i, j;
	printf("Informe valores para a matriz: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("Quantidade de colunas nulas: %d", Coluna_nula(matriz));
}
