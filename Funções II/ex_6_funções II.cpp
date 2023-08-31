/*6. Receba uma matriz M3x3 e retorne a linha e a coluna (por referência) do
maior elemento da matriz.*/
#include<stdio.h>
    void maior_elemento(int matriz[3][3], int *maior_d_linha, int *maior_d_coluna)
	{
		int maior, i, j;
		maior=matriz[0][0];
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(matriz[i][j]>maior)
				{ 
					maior=matriz[i][j];
					*maior_d_linha=i;
					*maior_d_coluna=j;
			    }
			}
		}
	}
		
main()
{
    int i, j, mtz[3][3];
    int maior_d_linha, maior_d_coluna;
    for(i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Informe um valor para a matriz[%d][%d]: ", i, j);
			scanf("%d", &mtz[i][j]);
		}
	}
	maior_elemento(mtz, &maior_d_linha, &maior_d_coluna );
	printf("Linha onde se encontra o maior elemento: %d\nColuna onde se encontra o maior elemento: %d", maior_d_linha, maior_d_coluna);
}
