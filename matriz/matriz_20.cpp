#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, j, l=4, c=4; 
	int mtz[l][c], colunas=0, linhas=0, zeros=0;
	srand(time(NULL));
    for(i=0;i<l;i++)
	{
	    for(j=0;j<c;j++)
	    {
            mtz[i][j]=0+rand()%2;
		}
    }
    printf("\n *****MATRIZ*****\n");
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
            printf("%d\t", mtz[i][j]);
		}
		printf("\n");
    }
    for(i=0;i<l;i++)
	{
		zeros=0;
		for(j=0;j<c;j++)
		{
            if(mtz[i][j]==0)
			{
				zeros++;
			}
		}
		if(zeros==c)
		{
			linhas++;
		}
    }
    printf("Linhas nulas:%d.\n", linhas);
    for(j=0;j<c;j++)
	{
		zeros=0;
		for(i=0;i<l;i++)
		{
            if(mtz[i][j]==0)
			{
				zeros++;
			}
		}
		if(zeros==l)
		{
			colunas++;
		}
    }
    printf("Colunas nulas:%d.", colunas);
}
