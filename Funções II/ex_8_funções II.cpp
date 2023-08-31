/*8. Receba um caractere, uma string e retorne a string eliminando da mesma o
caractere recebido.*/
#include<stdio.h>
#include<string.h>
    int  anula_caractere(char string[30], char letra)
	{
		int i, tamanho;
		tamanho=strlen(string);
		for(i=0;i<tamanho;i++)
		{
			if(letra==string[i])
			    string[i]='*';
		}
	}

int main()
{
	char caractere, string_1[30];
	printf("Informe um caractere: ");
	scanf("%c", &caractere);
	printf("Entre com os dados da string: ");
	scanf("%s", &string_1);
	anula_caractere(string_1, caractere);
	puts(string_1);
}
