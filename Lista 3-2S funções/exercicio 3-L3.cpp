/*3. Receba um caractere como par�metro e verifique se tal caractere � uma
vogal. A fun��o deve retornar 1, para vogal, e 0, para outro caractere.*/
#include<stdio.h>
int verificador(char a){
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	    return 1;
	else
	    return 0;
}
main(){
	char vogal;
	printf("Informe um caractere a ser verificado: ");
	scanf("%c", &vogal);
	printf("%d", verificador(vogal));
	
}
