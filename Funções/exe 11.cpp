/*11. Receba uma string contendo 5 d�gitos de n�meros inteiros e um caractere. A
fun��o deve retirar da string recebida todas as ocorr�ncias do caractere. Em
seguida, eliminar todos os zeros a esquerda do valor lido. Exemplo: se o
usu�rio digitar �2� �00025� o programa dever� exibir apenas o valor 5.
40584 , 4 = 058   58
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Zero_esq (char a[5], char c){
	int i, j;	
	for(i=0;i<5;i++){
	    if(a[i]==c){
	    	for(j=i;j<5;j++){
	    		a[j]=a[j+1];
			}
	    }
	}   
    unsigned int aux= atoi(a);
    return aux;

}
main(){
	char string[5], caractere;
	printf("Informe a string: ");
	gets(string);
	printf("Informe o caractere: ");
	scanf("%c", &caractere);
	printf("%d", Zero_esq(string, caractere));
}
