#include<stdio.h>
main()
{
	int i=0, j=0; 
	int mtz[3][3], n=3;
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
	for(i=0;i<3;i++)
	{	
	    for(j=0;j<3;j++)
	    {
		    if(i!=j&&i+j!=n-1)
			{
				
				if(mtz[i][j]<0)
				{
					mtz[i][j]=0;
				}
			}  
     	}
	}
	  printf("\n\n ******MATRIZ GERDA****** \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
            printf("%d\t", mtz[i][j]);
		}
		printf("\n");
    }
}
