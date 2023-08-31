/*3. Receba um caractere como parâmetro e verifique se tal caractere é uma
vogal. A função deve retornar 1, para vogal, e 0, para outro caractere.*/
#include<stdio.h>
   char verificador_vogais(char caractere){
   	    if(caractere=='a'||caractere=='e'||caractere=='i'||caractere=='o'||caractere=='u')
   	        return 1;
   	    else
		    return 0;    
   }
main(){
	char carac;
	printf("Informe um caractere:");
	scanf("%c", &carac);
	printf("%d", verificador_vogais(carac));
}
