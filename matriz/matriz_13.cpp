/*13. Faça a soma de duas matrizes com mesmo número de linhas e colunas. O número de linhas
e colunas deverá ser fornecido pelo usuário (delimitar máximo de 10 colunas e 10 linhas).*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, j, x1, x2; 

	printf("Informe um valor para a quantidade de linhas das matrizes:");
	scanf("%d", &x1);
	printf("Informe um valor para a quantidade de colunas das matrizes:");
	scanf("%d", &x2);
	
	int mtz[x1][x2], mtz2[x1][x2], aux[x1][x2];
	srand(time(NULL));
	if(x1<10&&x2<10)
	{
	    for(i=0;i<x1;i++)
	    {
		    for(j=0;j<x2;j++)
		    {
                mtz[i][j]=1+rand()%100;
                mtz2[i][j]=1+rand()%100;
		    }
		    printf("\n");
        }
	    printf("\n\n PRIMEIRA MATRIZ \n\n");
	    for(i=0;i<x1;i++)
	    {
		    for(j=0;j<x2;j++)
		    {
                printf("%d\t", mtz[i][j]);
		    }
		    printf("\n");
        }
        printf("\n\n SEGUNDA MATRIZ \n\n");
	    for(i=0;i<x1;i++)
	    {
		    for(j=0;j<x2;j++)
		    {
                printf("%d\t", mtz2[i][j]);
		    }
		    printf("\n");
        }
        printf("\n\n SOMA DAS MATRIZES \n\n");
        for(i=0;i<x1;i++)
	    {
		    for(j=0;j<x2;j++)
		    {
                aux[i][j]=mtz[i][j]+mtz2[i][j];
                printf("%d\t", aux[i][j]);
		    }
		    printf("\n");
        }             
    }
    else
    printf("*****Valores invalidos!*****\n");    
}
