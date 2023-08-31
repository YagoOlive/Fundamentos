/*12Leia uma matriz A3x5 com o salário de 3 funcionários durante 4 semanas.
 A quinta coluna conterá a soma total do salário dos funcionários. */
#include<stdio.h>
main()
{
	int i=0, j=0; 
	int mtz[3][4], mtz2[3][5], salario1=0, salario2=0, salario3=0;
	for(i=0;i<3;i++)
	{	
	    for(j=0;j<4;j++)
	    {
	    	if(i==0)
	    	{ 
		        printf("Informe o salario do funcionario %d na semana %d:", i+1, j+1);
		        scanf("%d", &mtz[i][j]);
            }
            else if(i==1)
	    	{ 
		        printf("Informe o salario do funcionario %d na semana %d:", i+1, j+1);
		        scanf("%d", &mtz[i][j]);
            }
            else if(i==2)
	    	{ 
		        printf("Informe o salario do funcionario %d na semana %d:", i+1, j+1);
		        scanf("%d", &mtz[i][j]);
            }  
		}
    }
    printf("\n\n MATRIZ \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
            printf("%d\t", mtz[i][j]);
		}
		printf("\n");
    }
   	for(i=0;i<3;i++)
	{	
	    for(j=0;j<4;j++)
	    {
	    	if(i==0)
	    	{ 
		        salario1+=mtz[i][j];
            }
            else if(i==1)
	    	{ 
		        salario2+=mtz[i][j];
            }
            else if(i==2)
	    	{ 
		        salario3+=mtz[i][j];
            } 
		}
    }
    mtz2[0][4]=salario1;
    mtz2[1][4]=salario2;
    mtz2[2][4]=salario3;
    for(i=0;i<3;i++)
	{	
	    for(j=0;j<4;j++)
	    {
	    	mtz2[i][j]=mtz[i][j];
		}
    }
    printf("\n\n *****MATRIZ GERADA*****\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
            printf("%d\t", mtz2[i][j]);
		}
		printf("\n");
    }
}
