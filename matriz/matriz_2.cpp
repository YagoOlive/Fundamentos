#include<stdio.h>
main()
{
	int i=0, j=0; 
	int mtz[5][5];
	
	for(i=0;i<5;i++)
	{	
	    for(j=0;j<5;j++)
	    {
		    if(i==j)
			{
				mtz[i][j]=1;
			}
			else
				mtz[i][j]=0;
     	}
	}
	printf("\n\n MATRIZ \n\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
             printf("%d\t", mtz[i][j]);
		}
		printf("\n");
    }	

}
