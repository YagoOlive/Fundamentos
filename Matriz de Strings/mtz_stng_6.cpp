/*6. Leia uma matriz de 5 strings. Posteriormente exiba a porcentagem de vogais a matriz de strings possui em
relação aos demais caracteres.*/
#include<stdio.h>
#include<string.h>

main()
{
	int i, tamanho, j;
	float  cont_vogais=0, cont_consoantes, total;
	char mtz_strg[5][10];
	
	for(i=0;i<5;i++)
	{
		printf("Informe uma frase para a matriz:");
	    gets(mtz_strg[i]);	
	}
	
	for(i=0;i<5;i++)
	{
	    tamanho=strlen(mtz_strg[i]);
		for(j=0;j<tamanho;j++)
		{ 
		    if(mtz_strg[i][j]=='a'||mtz_strg[i][j]=='e'||mtz_strg[i][j]=='i'||mtz_strg[i][j]=='o'||mtz_strg[i][j]=='u')
		        cont_vogais++;
		    else
		        cont_consoantes++;
	    }
	}
	total=(cont_vogais/(cont_vogais+cont_consoantes))*100;
	printf("%.2f%% dos caracteres sao vogais.", total);
}
