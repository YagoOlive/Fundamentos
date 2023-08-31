#include<stdio.h>
main()
{
	int i=0, j=0, maior1, maior2, maior3, maior4, maior5; 
	int mtz[5][5], mtz2[5][5], aux1=0, aux2=0;
	for(i=0;i<5;i++)
	{	
	    for(j=0;j<5;j++)
	    {
		    printf("\ninforme um valor para a matriz[%d][%d]:", i, j);
		    scanf("%d", &mtz[i][j]);
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
	maior1=0;
	maior2=0;
	maior3=0;
	maior4=0;
	maior5=0;
	for(i=0;i<5;i++)
	{	
	    for(j=0;j<5;j++)
	    {
	        if(mtz[0][j]>maior1)
			{	
			    maior1=mtz[0][j];
			   
	    	}
	    	if(mtz[1][j]>maior2)
			    {	
			        maior2=mtz[1][j];
	    	    }
			if(mtz[2][j]>maior3)
			{	
			    maior3=mtz[2][j];
	    	}
			if(mtz[3][j]>maior4)
			{	
			    maior4=mtz[3][j];
	    	}
			if(mtz[4][j]>maior5)
			{	
			    maior5=mtz[4][j];
	    	}			    				
	    }
    }   	    
    printf("\n\n MATRIZ GERADA \n\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			mtz2[0][j]=mtz[0][j]*maior1;
			mtz2[1][j]=mtz[1][j]*maior2;
			mtz2[2][j]=mtz[2][j]*maior3;
			mtz2[3][j]=mtz[3][j]*maior4;
			mtz2[4][j]=mtz[4][j]*maior5;
            printf("%d\t", mtz2[i][j]);
		}
		printf("\n");
    }
}
