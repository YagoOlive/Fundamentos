#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	FILE *G;
	char c;
	int contc=0, conta=0, contg=0, contt=0;
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
		if(c=='A'){
			conta++;
		}		    
		if(c=='G'){
			contg++; 
		}		    
		if(c=='T'){
			contt++; 
		}
		    
	}
	printf("Guanina: %d\nTinina: %d\nAnina: %d\nCitosina: %d\n", contg, contt, conta, contc);
}

