/*Receba uma string e retorne (1-sim; 0-não) se a mesma possui a sequência:
X Y Z Y X Z ...*/
#include<stdio.h>
#include<string.h>
    int sequencia(char str[30]){
    	int i, tam;
    	tam=strlen(str);
		for(i=0;i<tam;i++){
			if(str[i]=='x'&&str[i+1]=='y'&&str[i+2]=='z'&&str[i+3]=='y'&&str[i+4]=='x'&&str[i+5]=='z')
			    return 1;   
		}
		return 0;
	}


main()
{
	char string[30];
	int aux;
	printf("Informe os dados da string: ");
	gets(string);
	aux=sequencia(string);
	printf("%d", aux);
}
