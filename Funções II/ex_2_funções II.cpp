/*2. Receba uma matriz A3x3 e altere todos os elementos da sua diagonal
principal para 1.*/
#include<stdio.h>
    void diagonal_principal(int matriz[3][3])
	{
		int i, j;
		
		for(i=0; i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			    if(i==j)
			        matriz[i][j]=1;
		    }
		}
	}
main()
{
    int i, j, mtz[3][3];
    for(i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Informe um valor para a matriz: ");
			scanf("%d", &mtz[i][j]);
		}
	}
    diagonal_principal(mtz);
    printf("\n\n MATRIZ RESULTANTE \n\n");
    for(i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("%d\t", mtz[i][j]);	
		}
		printf("\n");
	}	
}




