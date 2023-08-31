#include<stdio.h>
main()
{
	int i=0, j=0, maior, menor; 
	int mtz[3][3], aux1=0, aux2=0, aux3=0, aux4=0;
	for(i=0;i<3;i++)
	{	
	    for(j=0;j<3;j++)
	    {
		    printf("\ninforme um valor para a matriz[%d][%d]:", i, j);
		    scanf("%d", &mtz[i][j]);
     	}
	}
	maior=mtz[0][0];
	menor=mtz[0][0];
	for(i=0;i<3;i++)
	{	
	    for(j=0;j<3;j++)
	    {
	    	if(mtz[i][j]>maior)
			{	
			maior=mtz[i][j];
			aux1=i;
			aux2=j;
	    	}
	    	if(mtz[i][j]<maior)
			{	
			menor=mtz[i][j];
			aux3=i;
			aux4=j;
	    	}
	    }
    }
    printf("Maior eh %d esta na linha %d e na coluna %d\nMenor eh %d esta na linha %d e na coluna %d", maior, aux1, aux2, menor, aux3, aux4);
}
