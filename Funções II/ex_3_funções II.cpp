/*3. Receba uma matriz A3x3 e retorne a soma dos elementos da sua diagonal
principal e da sua diagonal secundária.*/
#include<stdio.h>
    void soma_diagonais(int matriz[3][3], int *soma_d_principal, int *soma_d_secundaria)
	{
		int i, j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(i==j)
				    *soma_d_principal+=matriz[i][j];
			}
		}
		
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(i+j==2)
				    *soma_d_secundaria+=matriz[i][j];
			}
		}
	
	}
main()
{
    int i, j, mtz[3][3];
    int aux_p, aux_s;
    for(i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Informe um valor para a matriz: ");
			scanf("%d", &mtz[i][j]);
		}
	}
	soma_diagonais(mtz, &aux_p, &aux_s);
	printf("Soma da diagonal principal: %d\nSoma da diagonal secundaria: %d", aux_p, aux_s);
}
