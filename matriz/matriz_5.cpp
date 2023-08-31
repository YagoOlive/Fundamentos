#include<stdio.h>
main()
{
	int i=0, j=0, coluna0=0, coluna1=0, coluna2=0, coluna3=0; 
	int mtz[4][4], linha0=0, linha1=0, linha2=0, linha3=0;
	for(i=0;i<4;i++)
	{	
	    for(j=0;j<4;j++)
	    {
		    printf("\ninforme um valor para matriz[%d][%d]:", i, j);
		    scanf("%d", &mtz[i][j]);
     	}
	}
		printf("\n\n MATRIZ \n\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
             printf("%d\t", mtz[i][j]);
		}
		printf("\n\n");
    }	
	for(i=0;i<4;i++)
	{	
	    for(j=0;j<4;j++)
	    {
		    if(i==0)
		        linha0+=mtz[i][j];
		    else if(i==1)
		        linha1+=mtz[i][j];
		    else if(i==2)
		        linha2+=mtz[i][j];
		    else if(i==3)
		        linha3+=mtz[i][j];
		        
		    if(j==0)
		        coluna0+=mtz[i][j];
		    else if(j==1)
		        coluna1+=mtz[i][j];
		    else if(j==2)
		        coluna2+=mtz[i][j];
		    else if(j==3)
		        coluna3+=mtz[i][j]; 
     	}
	}
    if(linha0%2==0)
        printf("soma da linha 0 eh %d, e eh par\n", linha0);
    else
        printf("soma da linha 0 eh %d, e eh impar\n", linha0);
	if(linha1%2==0)
        printf("soma da linha 1 eh %d, e eh par\n", linha1);
    else
        printf("soma da linha 1 eh %d, e eh impar\n", linha1);
	if(linha2%2==0)
        printf("soma da linha 2 eh %d, e eh par\n", linha2);
    else
        printf("soma da linha 2 eh %d, e eh impar\n", linha2);
    if(linha3%2==0)
        printf("soma da linha 3 eh %d, e eh par\n", linha3);
    else
        printf("soma da linha 3 eh %d, e eh impar\n", linha3);
        
    if(coluna0%2==0)
        printf("soma da coluna 0 eh %d, e eh par\n", coluna0);
    else
        printf("soma da coluna 0 eh %d, e eh impar\n", coluna0);    
    if(coluna1%2==0)
        printf("soma da coluna 1 eh %d, e eh par\n", coluna1);
    else
        printf("soma da coluna 1 eh %d, e eh impar\n", coluna1);    
    if(coluna2%2==0)
        printf("soma da coluna 2 eh %d, e eh par\n", coluna2);
    else
        printf("soma da coluna 2 eh %d, e eh impar\n", coluna2);
    if(coluna3%2==0)
        printf("soma da coluna 3 eh %d, e eh par\n", coluna3);
    else
        printf("soma da coluna 3 eh %d, e eh impar\n", coluna3);    
}
