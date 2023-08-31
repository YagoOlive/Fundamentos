/*4. Receba três valores inteiros e retorne o menor deles.*/
#include<stdio.h>
  int menor_valor(int v1,int v2,int v3){
  	    if(v1<v2&&v2<v3)
  	        return v1;
  	    else if(v2<v3)
  	        return v2;
  	    else
  	        return v3;
  }
main(){
	int num1, num2, num3;
	printf("Informe tres valores:");
	scanf("%d%d%d", &num1,&num2,&num3);
	printf("\nMenor valor: %d", menor_valor(num1, num2, num3));
}
