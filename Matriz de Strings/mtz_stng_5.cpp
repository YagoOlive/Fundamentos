/*5. Leia uma matriz de 5 strings. Posteriormente exiba quantas vogais a matriz de strings possui como um todo.*/
#include<stdio.h>
#include<string.h>

main()
{
	int i, j, tamanho, cont_vogais=0;
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
	    }
	}
	printf("Na matriz as vogais aparecem %d vez(es).", cont_vogais);
}
