#include<stdio.h>
main()
{
	int i=0, j=0; 
	int mtz[3][3], x, cont=0, aux=0, aux2=0;
	for(i=0;i<3;i++)
	{	
	    for(j=0;j<3;j++)
	    {
		    printf("\ninforme um valor para a matriz[%d][%d]:", i, j);
		    scanf("%d", &mtz[i][j]);
     	}
	}
	printf("\ninforme um valor x:");
	scanf("%d", &x);
	for(i=0;i<3;i++)
	{	
	    for(j=0;j<3;j++)
	    {
	    	if(mtz[i][j]==x)
			{	
			    cont++;
			    aux=i;
			    aux2=j;	
	    	}
	    }
    }
    if(cont>=1)
	    printf("Valor %d encontrado na linha %d e coluna %d.", x, aux, aux2);
    else
    	printf("Valor %d nao encontrado na matriz.", x);
}

