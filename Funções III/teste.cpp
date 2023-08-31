/*2. Exiba os números de 0 a 50 na tela.*/
#include<stdio.h>
   int contador_0a50(int numero){
        while(numero<50){
            numero++;
            printf("%d\n", numero);
        }
	}
main()
{
	int num=0;
	contador_0a50(num);
}
