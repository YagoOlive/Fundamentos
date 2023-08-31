/*5. Receba uma string e a retorne escrita de trás pra frente.*/
#include<stdio.h>
#include<string.h>
    void inverte_string( char string[30], char auxiliar[30])
	{
		int tamanho, i;
		tamanho=(strlen(string))-1;
		for(i=0;i<=tamanho;i++)
		{
			auxiliar[i]=string[tamanho-i];
		}
	}
main()
{
	char inverter[30], aux[30];
	int i;
	printf("Entre com os dados da string: ");
	scanf("%s", &inverter);
	inverte_string(inverter, aux);
    for(i=0;i<=30;i++)
	{
		
	}
	puts(aux);
}

