/*5. Receba um valor inteiro e positivo e retorne o valor 1, caso o número seja um
número primo, ou 0, caso contrário.*/
#include<stdio.h>
int numero_primo(int numero, int primo, int i){
	for(i=2; i<=numero/2; i++){
        if((numero%i)==0)
            primo++;
            if(primo==0)
                return 1;
            else
                return 0;
    } 
}
main(){
	int num, i, cont;
	printf("Informe um valor:");
	scanf("%d", &num);
	if(num<0)
	    printf("Valor invalido!");
	else
	   printf("%d", numero_primo(num, cont, i));
}
