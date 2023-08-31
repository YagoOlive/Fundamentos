/*12. Receba uma string e retorne se a mesma é palíndromo.*/
#include<stdio.h>
#include<string.h>
    int inverte_string( char string[30], char auxiliar[30])
	{
	    
		int tamanho, i;
		tamanho=(strlen(string))-1;
		for(i=0;i<=tamanho;i++)
		{
			auxiliar[i]=string[tamanho-i];
		}		
	}

    int compara( char string[30])
	{
		char auxiliar[30];
		int tamanho, cont=0, i;
		inverte_string(string, auxiliar);
		if(strcmp(string, auxiliar)==0)
		    return 1;
		else
		    return 0;
		    
	}
	
main()
{
	char inverter[30];
	int auxiliar;
	printf("Entre com os dados da string: ");
	scanf("%s", &inverter);
	
	if(compara(inverter)==1)
        printf("Essa string eh um palindromo!");
    else
        printf("Essa string nao eh um palindromo!");
       	
}
