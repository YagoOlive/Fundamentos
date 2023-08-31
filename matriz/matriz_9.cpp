#include<stdio.h>
main()
{
	int i=0, j=0; 
	int mtz[8][8];
	for(i=0;i<8;i++)
	{	
	    for(j=0;j<8;j++)
	    {
		    printf("Informe um valor para a matriz [%d][%d]:", i, j);
		    scanf("%d", &mtz[i][j]);
	    }
    }
	for(i=0;i<8;i++)
	{	
	    for(j=0;j<8;j++)
	    {
		    if(i<j)
			{
				mtz[i][j]=0;
			}
     	}
	}
	printf("\n\n MATRIZ \n\n");
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
             printf("%d\t", mtz[i][j]);
		}
		printf("\n");
    }	
}
