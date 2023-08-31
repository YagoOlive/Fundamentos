#include<stdio.h>
main()
{
	int i=0, j=0; 
	int mtz[4][4], aux;
	for(i=0;i<4;i++)
	{	
	    for(j=0;j<4;j++)
	    {
		    printf("\ninforme um valor para a matriz[%d][%d]:", i, j);
		    scanf("%d", &mtz[i][j]);
     	}
	}
	for(i=0;i<4;i++)
	{
	        aux=mtz[0][i];
	        mtz[0][i]=mtz[3][i];
            mtz[3][i]=aux;	
    
	}
	for(i=0;i<4;i++)
	{	
	    for(j=0;j<4;j++)
	    {
		    printf("%d\t", mtz[i][j]);
     	}
     	printf("\n");
	}
	
}
