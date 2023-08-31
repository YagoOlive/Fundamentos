/*15. Leia uma matriz real Amxn e faça a multiplicação dessa matriz por um escalar K informado
pelo usuário.*/
#include<stdio.h>
main()
{
	int i, j, x1, x2, k; 

	printf("Informe um valor para a quantidade de linhas da matriz:");
	scanf("%d", &x1);
	printf("Informe um valor para a quantidade de colunas da matriz:");
	scanf("%d", &x2);
	printf("Informe o valor escalar:");
	scanf("%d", &k);
	int mtz[x1][x2], aux[x1][x2];

    for(i=0;i<x1;i++)
	{
		for(j=0;j<x2;j++)
		{
		    printf("Informe um valor para a matriz[%d][%d]:", i, j);
	        scanf("%d", &mtz[i][j]);	
		}
		printf("\n");
    }
	printf("\n\n MATRIZ GERADA \n\n");
	for(i=0;i<x1;i++)
	{
		for(j=0;j<x2;j++)
		{
			aux[i][j]=mtz[i][j]*k;
            printf("%d\t", aux[i][j]);
		}
	    printf("\n");
    }
}
