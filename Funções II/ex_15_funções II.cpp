/*15. Receba uma matriz A3x3 e dois índices de colunas (col1 e col2). A função
deverá trocar os valores das colunas designadas pelos índices.*/
#include<stdio.h>
    int troca_coluna(int mtz[3][3], int x1, int x2)
	{
		int i, auxiliar;
		for(i=0;i<3;i++)
	    {
		    auxiliar=mtz[i][x1];
		    mtz[i][x1]=mtz[i][x2];
		    mtz[i][x2]=auxiliar;			    							    		    
	    }
	}
main()
{
	int matriz[3][3], col1, col2;
	int i, j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Informe um valor para a matriz: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("informe um indice: ");
	scanf("%d", &col1);
	printf("informe um indice: ");
	scanf("%d", &col2);
	printf("\n\n MATRIZ \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
             printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	troca_coluna(matriz, col1, col2);
	printf("\n\n MATRIZ \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
             printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}
