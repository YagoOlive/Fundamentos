/*1. Leia uma matriz de 10 strings. Posteriormente exiba a matriz de strings.*/

#include<stdio.h>
#include<string.h>
main()
{
	char lista_nomes[10][10];
	int i;  
	printf("Lendo a matriz de strings.\n\n");
    for(i=0;i<10;i++)
	{
		printf("Iforme uma frase desejada.\n");
		gets(lista_nomes[i]);
	}
	printf("Numero de frases  desejadas  obtidas.\n\n");
	printf("Exibindo a matriz resultante.\n");
    for(i=0;i<10;i++)
    {
	    puts(lista_nomes[i]);
    }
}
