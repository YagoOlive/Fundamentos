/*14. Receba uma matriz real A3x3 e retorne se a mesma possui elementos
repetidos (1-sim; 0-não).*/
#include<stdio.h>
int Repetido(int a[3][3]){
	int i, j, k, l, teste, cont=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			teste=a[i][j];
		    for(k=0;k<3;k++){
		        for(l=0;l<3;l++){
			        if(teste==a[k][l]&&i!=k&&j!=l)
			        	cont++;
					
							        
	            }
			}
		}
	}
	if(cont!=0)
	    return 1;
	else
	    return 0;	
}
main(){
	int matriz[3][3], i, j;
	printf("Informe valores para a matriz: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("%d", Repetido(matriz));
}
