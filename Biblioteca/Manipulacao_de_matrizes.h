int Menor_numero_em_2matrizes (int a[3][3], int b[3][3]){
	int i, j, menorA=a[0][0], menorB=b[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		    if(menorA>a[i][j]){
		    	menorA=a[i][j];
			}
			if(menorB>a[i][j]){
		        menorB=a[i][j];
			}
	    }
	}
	if(menorA<menorB)
	    return menorA;
	else
	    return menorB; 
}

int Num_Perfeito_emMatriz(int a[3][3]){
	int i, j, k, cont=0, aux, soma=0;
	for(i=0;i<3;i++){
	    for(j=0;j<3;j++){
		    aux=a[i][j]/2;
		    for(k=0;k<aux;k++){
			    if(a[3][3]%k==0){
			     	soma+=k;
				}
			}
		    if(soma==a[3][3]){
		    	cont++;
			}
			soma=0;
		
	    }	
	}
	if(cont >=1)
	    return 1;
	else
	    return 0;
}

int Soma_linhas_daMatriz(int a[3][3]){
	int i, j, cont=0, soma_linhas[3], soma=0;
	
	for(i=0;i<3;i++){
	    soma=0;
	    for(j=0;j<3;j++){
            soma+=a[i][j];
	    }
	    soma_linhas[i]=soma;	
	}
	for(i=1;i<3;i++){
		if(soma_linhas[0]==soma_linhas[i])
		    cont++;
	}
		
	if(cont==2)
	    return 1;
	else 
	    return 0;
}
