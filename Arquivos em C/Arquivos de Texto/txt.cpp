#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	FILE *arq;
	char c;
	arq= fopen("A.txt", "r");
	if((arq==NULL)){
		printf("problemas ao abrir o arquivo!\n");
		return 0;
	}
	rewind(arq); // faz a leitua do arquivo
	while(!feof(arq)){  //condiciona o curso a percorrer os dados ate o fim do arquivo
		c = fgetc(arq);
		printf("%c", c);
	}
}

