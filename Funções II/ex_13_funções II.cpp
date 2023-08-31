/*13. Receba uma matriz real A3x3 e retorne quantas colunas nulas existem em A.*/
    int verifica_coluna(int mtz[3][3])
	{
		int i, j;
		int cont_col=0, col_0=0, col_1=0, col_2=0;
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(j==0)
				    col_0+=mtz[i][j];
				else if(j==1)
				    col_1+=mtz[i][j];
				else if(j==2)
				    col_2+=mtz[i][j];
			}	
		}
	    if(col_0==0)
	        cont_col++;
	        if(col_1==0)
	            cont_col++;
	            if(col_2==0)
	                cont_col++;
	    return cont_col;
	}
#include<stdio.h>
main()
{
	int i, j, matriz[3][3], aux;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Informe um valor para a matriz: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	aux=verifica_coluna(matriz);
	printf("%d coluna(s) nula(s)!", aux);
}
