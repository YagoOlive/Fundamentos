/*11. Receba uma string contendo 5 dígitos de números inteiros e um caractere. A
função deve retirar da string recebida todas as ocorrências do caractere. Em
seguida, eliminar todos os zeros a esquerda do valor lido. Exemplo: se o
usuário digitar ‘2’ “00025” o programa deverá exibir apenas o valor 5.*/
    int exclui_caractere(int str[5], int x)
	{
		int i, j;
		for(i=0;i<5;i++){
			if(str[i]==x)
			{
				for(j=0;j<=str[i];j++){
					str[j]=0;
				}
			}
		}
	}
#include<stdio.h> 
#include<string.h>
main()
{
	int string[5], i, caractere;
	
	for(i=0;i<5;i++)
	{
		printf("Informe um caractere para a string: ");
		scanf("%d", &string[i]);
	}
	printf("Informe um caractere: ");
	scanf("%d", &caractere);
	exclui_caractere(string, caractere);
	for(i=0;i<5;i++){
		if(string[i]!=0)
			printf("%d", string[i]);
	}

	
}
