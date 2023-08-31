/*7. Receba o capital, os juros e os meses de um empréstimo, calcule e retorne o
montante final do empréstimo realizado. M=Capital (1+Juros)Meses*/
#include<stdio.h>
#include<math.h>
float emprestimo(float cpt, float jrs, float mses){
	float mont;
	jrs=jrs/100;
	mont=cpt*pow(1+jrs,mses);
	printf("Montante final: %2.f", mont);
}
main()
{
	float capital, juros, meses;
	printf("Informe o capital:");
	scanf("%f", &capital);
	printf("Informe o juros:");
	scanf("%f", &juros);
	printf("Informe os meses:");
	scanf("%f", &meses);
	emprestimo(capital, juros, meses);
}
