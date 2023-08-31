#include<stdio.h>
main()
{
	int i=0, j=0; 
	int mtz[3][3], mtz2[3][3], mtz3[3][3];
	for(i=0;i<3;i++)
	{	
	    for(j=0;j<3;j++)
	    {
		    printf("\ninforme a matriz 1: ");
		    scanf("%d", &mtz[i][j]);
		    printf("informe a matriz 2: ");
		    scanf("%d", &mtz2[i][j]);
     	}
	}
	for(i=0;i<3;i++)
	{	
	    for(j=0;j<3;j++)
	    {
	    	if(mtz[i][j]>mtz2[i][j])
		        mtz3[i][j]=mtz[i][j];
		    else
		        mtz3[i][j]=mtz2[i][j];
     	}
	}
	printf("\n\n MATRIZ GERADA \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
             printf("%d\t", mtz3[i][j]);
		}
		printf("\n");
    }	

}
