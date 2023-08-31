#include<stdio.h>
main()
{
	int i, j, n;
	printf("Informe o numero de linhas:");
	scanf("%d", &n);
	if(n>10)
	{
		printf("*****Valor invalido!*****");
	}
	else
	{
	    int mtz[n][n];
	    for(i=0;i<n;i++)
	    {
		    for(j=0;j<n;j++)
	        {
	        	mtz[i][j]=0;
	    	    mtz[i][0]=1;
			    if(j==i)
			    {
				    mtz[i][j]=1;
			    }
			    if(mtz==0)
				{			    				
			        mtz[i][j]=mtz[i-1][j-1]+mtz[i-1][j];
			    }
	        }
	    }
	    printf("\n\n TRIANGULO DE PASCAL \n\n");
        for(i=0;i<n;i++)
	    {
		    for(j=0;j<n;j++)
		    {
		    	 if(mtz[i][j]==0)
				{			    				
			        mtz[i][j]=mtz[i-1][j-1]+mtz[i-1][j];
			    }
			     if(j>i)
			    {
				    mtz[i][j]=0;
			    }
                printf("%d\t", mtz[i][j]);
		    }
		    printf("\n");
        }  
    }
}
