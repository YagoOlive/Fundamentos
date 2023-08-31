/*16. Receba uma string e retorne quantos por cento da string recebida é formada
por vogais. Exemplo: a string “bola” é 50% composta por vogais.*/
#include<stdio.h>
#include<string.h>
    int cont_vogais(char stg[30])
	{
		int i;
		float auxiliar, contador, tamanho;
		tamanho=strlen(stg);
		for(i=0;i<tamanho;i++)
		{
			if(stg[i]=='A'||stg[i]=='a'||stg[i]=='E'||stg[i]=='e'||stg[i]=='I'||stg[i]=='i'||stg[i]=='O'||stg[i]=='o'||stg[i]=='U'||stg[i]=='u')
				contador++;
			
		}
		auxiliar=(contador/tamanho)*100;
		return auxiliar;
	}
main()
{
	char string[30];
	float porcentagem;
	printf("Entre com os dados da string: ");
	gets(string);
	porcentagem=cont_vogais(string);
	printf("%2.f%% sao vogais!", porcentagem);
}
