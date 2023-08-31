/*10. Receba uma string e retorne (1-sim; 0-não) se a mesma possui a sequência:
X Y Z X Y Z ...
Exemplos: ’”X“, “XY”, “XYZ”, “XYZX”...*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Sequencia (char a[100]){
	int i, tam, cont=0;
	tam=strlen(a);
	for(i=0;i<=strlen(a);i++){
	    if(i%3==0&&a[i]=='x'&&(i+1)%3==1&&a[i+1]=='y'&&(i+2)%3==2&&a[i+2]=='z'){
	    	cont++;
		}       
	}
	if(cont>0)
	    printf("Ha sequencia!");
	else
	    printf("Nao ha sequencia");
}
main(){
	char string[100];
	printf("Informe a string: ");
	gets(string);
	Sequencia(string);
}
