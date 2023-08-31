/*15. Receba uma matriz A3x3 e dois índices de colunas (col1 e col2). A função
deverá trocar os valores das colunas designadas pelos índices.*/
#include<stdio.h>
int Troca_col(int a[3][3], int x, int y){
	int i, j, aux;
	for(i=0;i<3;i++){
	
		for(j=0;j<3;j++){
			if(j==x){
				aux=a[y][i];
			    a[y][i]=a[x][i];
			    a[x][i]=aux;
			}
			    
		}		
	}
	for(i=0;i<3;i++){
		printf("/n");
		for(j=0;j<3;j++){
			 printf("%d/n", a[i][j]);   
		}		
	}	
}
main(){
	int matriz[3][3], i, j, ind1, ind2;
	printf("Informe valores para a matriz: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
    printf("Informe o inndice 1:");
    scanf("%d", &ind1);
    printf("Informe o inndice 2:");
    scanf("%d", &ind2);
}
