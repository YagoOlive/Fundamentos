#include<stdio.h>
main()
{
	int i, j, m, per=1; 
	printf("Informe um valor:");
	scanf("%d", &m);
    int mtz[m][m], slinha=0, scoluna=0;
    for(i=0;i<m;i++)
	{
	    for(j=0;j<m;j++)
	    {
          	printf("\ninforme um valor para a matriz[%d][%d]:", i, j);
	        scanf("%d", &mtz[i][j]);
	        if(!(mtz[i][j]>=0)&&(mtz[i][j]<=1))
	            per=0;				
		}
    }
    printf("\n\n MATRIZ \n\n");
        for(i=0;i<m;i++)
	    {
		    for(j=0;j<m;j++)
		    {
                printf("%d\t", mtz[i][j]);
		    }
		    printf("\n");
        }           
    if(per==1)
	{
	    for(i=0;i<m;i++)
	    {   
	        slinha=0;
	        scoluna=0;
		    for(j=0;j<m;j++)
		    {
                slinha+=mtz[i][j];
                scoluna+=mtz[j][i];
		    }
		    if(slinha!=1||scoluna!=1) 
	        per=0;
        }
	}
	if(per==1)
	    printf("\nEh uma matriz de permutacao.");
	else
	    printf("\nNao eh uma matriz de permutacao.");
	 
}
