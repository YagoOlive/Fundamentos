/*6. Receba os coeficientes (a, b e c) de uma função de segundo grau e retorne as
suas raízes da equação (passadas como passagem de parâmetro por
referência), caso seja possível calcular.*/

#include<stdio.h>
#include<math.h>

    float equ_2grau(float x1, float x2, float x3){
    	float R1, R2;
    	if(x1!=0)
		{
			float delta=(x2*x2)-4*x1*x3;
			printf("delta: %.2f", delta);
			if(delta>0)
			{			    
				R1=(-x2+(sqrt(delta)))/(2*x1);
				R2=(-x2-(sqrt(delta)))/(2*x1);
				printf("\nPrimeira raiz: %.2f\nSegunda raiz: %.2f", R1, R2);
			}
			else if(delta==0)
			{				
			    R1=(-x2+(sqrt(delta)))/(2*x1);
			    printf("\nRaiz unica: %.2f", R1);
			}
			else
			    printf("Nao existe raiz real para delta menor que 0!");   
		}
		else
		    printf("Impossiel calcular!");
	}

main()
{
	float a, b, c;
	printf("Informe valores para A, B e C:\n");
	scanf("%f%f%f", &a, &b, &c);
    equ_2grau(a, b, c); 
}





