/*7. Receba um caractere e uma string e retorne quantas vezes o caractere
aparece na string.*/
#include<stdio.h>
#include<string.h>
    int  verifica_caractere(char string[30], char letra)
	{
		int i, tamanho, contador=0;
		tamanho=strlen(string);
		for(i=0;i<tamanho;i++)
		{
			if(letra==string[i])
			    contador++;
		}
		if(contador>0)
		    return contador;
		else
		    return 0;
	}

int main()
{
	char caractere, string_1[30];
	int repetidor;
	printf("Informe um caractere: ");
	scanf("%c", &caractere);
	printf("Entre com os dados da string: ");
	scanf("%s", &string_1);
	repetidor= verifica_caractere(string_1, caractere);
	printf("O caractere aparece %d vez(es) na string!", repetidor);
}
