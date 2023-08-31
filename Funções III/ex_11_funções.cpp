/*11. Receba 3 notas de um aluno e uma letra. Se a letra for ‘A’ a função retorna a
média aritmética das notas do aluno. Se for ‘P’, retorna a sua média
ponderada (pesos: 5, 3 e 2).*/
#include<stdio.h>
float med_a(float x1, float x2, float x3){
	float med_aritmetica=(x1+x2+x3)/3;
	printf("Media Aritmetica: %2.f", med_aritmetica);
}
float med_p(float x1, float x2, float x3){
	float med_ponderada=((x1*5)+(x2*3)+(x3*2))/10;
	printf("Media Ponderada: %2.f", med_ponderada);
}

main()
{ 
    float n1, n2, n3;
    char caractere;
    printf("Informe  nota 1:");
    scanf("%f", &n1);
    printf("Informe  nota 2:");
    scanf("%f", &n2); 
    printf("Informe  nota 3:");
    scanf("%f", &n3);
    
	printf("\nInforme o caractere correspondente:");
	scanf("%s", &caractere);
	
	    if(caractere=='a'||caractere=='A')
		{
	        med_a(n1, n2, n3);
	    }
		else if(caractere=='p'||caractere=='P')
		{
	        med_p(n1, n2, n3);
	    }
	    else
		{
	        printf("Caractere informado invalido!");
	    }
}
	

