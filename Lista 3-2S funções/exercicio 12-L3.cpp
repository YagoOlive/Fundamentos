/*12. Receba um valor inteiro e verifique se o valor é positivo, negativo ou zero. A
funcao deve retornar 1 para valores positivos, -1 para negativos e 0 para o
valor 0.*/
#include<stdio.h>

int Sinal_numero(int a){
    if(a<0){
        return -1;
    }
    else if(a==0){
        return 0;
    }
    else if(a>0){
        return 1;
    }
}
main(){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    printf("%d", Sinal_numero(numero));
}
