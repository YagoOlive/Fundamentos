#include<stdio.h>
main()
{
	int i=0, j=0; 
	int mtz[3][3], aux, aux2=0, n=3;
	for(i=0;i<3;i++)
	{	
	    for(j=0;j<3;j++)
	    {
		    printf("Informe um valor para a matriz [%d][%d]:", i, j);
		    scanf("%d", &mtz[i][j]);
	    }
    }
    printf("\n\n MATRIZ \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
             printf("%d\t", mtz[i][j]);
		}
		printf("\n");
    }
    aux=-1;
	for(i=0;i<3;i++)
	{	
	    for(j=0;j<3;j++)
	    {
		    if(i==j)
			{
				
				if(mtz[i][j]>aux)
				{
					aux=mtz[i][j];
				}
			}
		    if(i+j==n-1)
		    aux2+=mtz[i][j];
     	}
	}
	printf("Maior elemento da diagonal principal:%d\nSoma dos elementos da diagonal secundaria:%d\n", aux, aux2);
}
