/*9. Receba dois caracteres (c1 e c2) e uma string. A função deverá substituir
todas as ocorrências de c1 na string por c2.*/
#include<stdio.h>
#include<string.h>
    int  troca_caractere(char string[30], char letra_1, char letra_2)
	{
		int i, tamanho;
		tamanho=strlen(string);
		for(i=0;i<tamanho;i++)
		{
			if(string[i]==letra_1){
			    string[i]=letra_2;
			}
		}
	}

int main()
{
	char c1, c2;
	char string_1[30];
	printf("Entre com os dados da string: ");
	scanf("%s", &string_1);
	printf("Informe um caractere para c1: ");
	scanf("%s",&c1);
	printf("Informe um caractere para c2: ");
	scanf("%s",&c2);
	
	
	
	troca_caractere(string_1, c1, c2);
	printf("%s", string_1);
}
