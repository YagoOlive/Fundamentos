#include<stdio.h>
main()
{
	int maior, i=0, j=0, maiorcoluna=0, maiorlinha=0; 
	int mtz[3][3];
	
	for(i=0;i<3;i++)
	{	
	    for(j=0;j<3;j++)
	    {
		printf("Elemento [%d][%d]=", j, i);
		scanf("%d", &mtz[i][j]);
	}
	}
	maior=mtz[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
            if(maior<mtz[i][j])
			{
				maior=mtz[i][j];
				maiorcoluna=i;
				maiorlinha=j;
			}
		}
    }	
	printf("Maior %d esta na linha %d e na coluna %d", maior, maiorlinha, maiorcoluna);
}
