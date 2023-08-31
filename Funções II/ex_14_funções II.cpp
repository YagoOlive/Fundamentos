/*14. Receba uma matriz real A3x3 e retorne se a mesma possui elementos
repetidos.*/
#include<stdio.h>
    int verifica_repeticao(int mtz[3][3])
	{
		int i, j, k, l;
		int auxiliar;
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				auxiliar=mtz[i][j];
				for(k=0;k<3;k++){
					for(l=0;l<3;l++){
						if((auxiliar==mtz[k][l])&&((i!=k)&&(j!=l)))
						    return 1;
					}
				}
			}
		}
		return 0;
	}
main()
{
	int matriz[3][3];
	int i, j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Informe um valor para a matriz: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	if(verifica_repeticao(matriz)==1)
	    printf("Essa matriz possui elementos repitidos!");    
	else if(verifica_repeticao(matriz)==0)
	    printf("Essa matriz nao possui elementos repitidos!");
}
