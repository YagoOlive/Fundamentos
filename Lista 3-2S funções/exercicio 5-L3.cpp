/*5. Receba um valor inteiro e positivo e retorne o valor 1, caso o número seja um
número primo, ou 0, caso contrário.*/
#include<stdio.h>
int primo(int a){
	int i, cont=0;
	for(i=1;i<=(a/2);i++){
		if(a%i==0){
			cont++;	
		}		
	}
	if(cont==1&&a!=1)
	    return 1;
	else
	    return 0;
}
main(){
	int num;
	printf("Informe um numero a ser verificado: ");
	scanf("%d", &num);
	printf("%d", primo(num));
	
}
