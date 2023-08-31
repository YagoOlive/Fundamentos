/*3. Leia uma matriz de 5 strings. Posteriormente leia um caractere. O programa deverá exibir uma mensagem
indicando quantas vezes o caractere lido aparece na matriz de strings como um todo.*/
#include<stdio.h>
#include<string.h>

main()
{
	int i, j, tamanho, cont_caractere_iguais=0;
	char mtz_strg[5][10], caractere;
	
	for(i=0;i<5;i++)
	{
		printf("Informe uma frase para a matriz:");
	    gets(mtz_strg[i]);	
	}
	printf("Informe um caractere:");
	scanf("%c", &caractere);
	for(i=0;i<5;i++)
	{
	    tamanho=strlen(mtz_strg[i]);
		for(j=0;j<tamanho;j++)
		{ 
		    if(mtz_strg[i][j]==caractere)
		        cont_caractere_iguais++;
	    }
	}
	printf("O caractere %c aparce na matriz %d veze(s).", caractere, cont_caractere_iguais);
}

