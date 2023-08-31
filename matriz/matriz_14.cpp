#include<stdio.h>
main()
{
	int i=0, j=0; 
	int mtz[3][3];
	for(i=0;i<3;i++)
	{	
	    for(j=0;j<3;j++)
	    {
		    printf("\ninforme um valor para a matriz[%d][%d]:", i, j);
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
	printf("\n\n MATRIZ TRANSPOSTA\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
            printf("%d\t", mtz[j][i]);
		}
		printf("\n");
	}
}
