#include<stdio.h>
main()
{
	int i=0, j=0; 
	int mtz[4][4], cont;
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
	    for(j=0;j<4;j++)
	    {
	    	if(mtz[i][j]>10)
		        cont++;
     	}
	}
	printf("%d valor(es) eh maior que 10 nessa matriz. ", cont);
}
