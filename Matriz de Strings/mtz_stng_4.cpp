/*4. Leia uma matriz de 5 strings. Posteriormente leia um caractere. O programa deverá exibir uma mensagem
indicando quantas vezes o caractere lido aparece individualmente em cada uma das 5 strings da matriz.*/
#include<stdio.h>
#include<string.h>

main()
{
	int i, j, tamanho;
	char mtz_strg[5][10], caractere;
	int  cont_caractere_linh0=0, cont_caractere_linh1=0, cont_caractere_linh2=0, cont_caractere_linh3=0, cont_caractere_linh4=0;;
	
	for(i=0;i<5;i++)
	{
		printf("Informe uma frase para a matriz:");
	    gets(mtz_strg[i]);	
	}
	printf("Informe um caractere:");
	scanf("%c", &caractere);
	
    for(i=0;i<1;i++)
	{
		tamanho=strlen(mtz_strg[i]); 
		for(j=0;j<tamanho;j++){
			if(mtz_strg[0][j]==caractere)
				cont_caractere_linh0++;
		}
	}
	for(i=1;i<2;i++)
	{
		tamanho=strlen(mtz_strg[i]); 
		for(j=0;j<tamanho;j++){
			if(mtz_strg[1][j]==caractere)
				cont_caractere_linh1++;
		}
	}
		for(i=2;i<3;i++)
	{
		tamanho=strlen(mtz_strg[i]); 
		for(j=0;j<tamanho;j++){
			if(mtz_strg[2][j]==caractere)
				cont_caractere_linh2++;
		}
	}
		for(i=3;i<4;i++)
	{
		tamanho=strlen(mtz_strg[i]); 
		for(j=0;j<tamanho;j++){
			if(mtz_strg[3][j]==caractere)
				cont_caractere_linh3++;
		}
	}
		for(i=4;i<5;i++)
	{
		tamanho=strlen(mtz_strg[i]); 
		for(j=0;j<tamanho;j++){
			if(mtz_strg[4][j]==caractere)
				cont_caractere_linh4++;
		}
	}

	printf("O caractere %c aparce na linha 0, %d vez(es).\n", caractere, cont_caractere_linh0);
	printf("O caractere %c aparce na linha 1, %d vez(es).\n", caractere, cont_caractere_linh1);
	printf("O caractere %c aparce na linha 2, %d vez(es).\n", caractere, cont_caractere_linh2);
	printf("O caractere %c aparce na linha 3, %d vez(es).\n", caractere, cont_caractere_linh3);
	printf("O caractere %c aparce na linha 4, %d vez(es).\n", caractere, cont_caractere_linh4);
}
