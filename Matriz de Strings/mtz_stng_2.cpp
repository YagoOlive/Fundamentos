/*2. Leia uma matriz de 5 strings. Posteriormente leia outra string. O programa deverá exibir uma mensagem
indicando quantas vezes última string lida aparece na matriz de strings.*/
#include<stdio.h>
#include<string.h>

main()
{
	int i, cont_strg_iguais=0;
	char mtz_strg[5][10], string_1[10];
	
	for(i=0;i<5;i++)
	{
		printf("Informe uma frase para a matriz:");
	    gets(mtz_strg[i]);	
	}
	printf("Informe uma string:");
	scanf("%s", &string_1);
	for(i=0;i<5;i++)
	{
		if(strcmp(string_1, mtz_strg[i])==0)
		    cont_strg_iguais++;
	}
	printf("A string %s aparce na matriz %d veze(s).", string_1, cont_strg_iguais);
}



