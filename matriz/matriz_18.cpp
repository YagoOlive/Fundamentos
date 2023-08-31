/*18. Carregue uma matriz A5x5 com números inteiros, calcule e mostre a soma:
a. Dos elementos da linha 4;
b. Dos elementos da coluna 2;
c. Dos elementos da diagonal principal;
d. Dos elementos da diagonal secundária;*/
#include<stdio.h>
main()
{
	int i=0, j=0, soma4=0, soma2=0, dig_principal=0, dig_secundaria=0; 
	int mtz[5][5], n=5;
	for(i=0;i<5;i++)
	{	
	    for(j=0;j<5;j++)
	    {
		    printf("\ninforme um valor para a matriz[%d][%d]:", i, j);
		    scanf("%d", &mtz[i][j]);
     	}
	}
	printf("\n\n MATRIZ \n\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
            printf("%d\t", mtz[i][j]);
            if(i==j)
			{
			 	dig_principal+=mtz[i][j];
			}
			if(i+j==n-1)
			{
			 	dig_secundaria+=mtz[i][j];
			}
			if(i==4)
			{
			 	soma4+=mtz[i][j];
			}
			if(j==2)
			{
			 	soma2+=mtz[i][j];
			}
		}
		printf("\n");
	}  	 
	printf("\nSoma dos elementos da linha 4:%d.\nSoma dos elementos da coluna 2:%d.\n", soma4, soma2);  
    printf("Soma dos elementos da diagonal principal:%d.\nSoma dos elementos da diagonal secundaria:%d.", dig_principal, dig_secundaria);
}
