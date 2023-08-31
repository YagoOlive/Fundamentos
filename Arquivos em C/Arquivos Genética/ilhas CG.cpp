#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	FILE *G;
	char c;
	int contc=0, contgc=0;
	G= fopen("Genetica.fasta", "r");
	if((G==NULL)){
		printf("problemas ao abrir o arquivo!\n");
		return 0;
	}
	rewind(G); 
	while(!feof(G)){  
		c = fgetc(G);
		if(c=='C'){
			contc++;
		}
		if(c=='G'&&contc>0){
			contgc++;
			contc=0;
		}	    	    
	}
	printf("Ilhas CG: %d\n", contgc);
}

