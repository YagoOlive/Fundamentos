/*11. Receba 3 notas de um aluno e uma letra. Se a letra for ‘A’ a função deve
retornar a média aritmética das notas do aluno. Se for ‘P’, deve retornar a sua
média ponderada (pesos: 5, 3 e 2).*/
#include<stdio.h>
#include<math.h>

float Media_A(float n1, float n2, float n3){
	float media;
	media=(n1+n2+n3)/3;
	return media;	
}
float Media_P(float n1, float n2, float n3){
	float mediaP;
	media=((n1*5)+(na*3)+(n3*2))/3;
	return mediaP;

int main(){
	float nota1, nota2, nota3;
	char caractere='a';
	printf("Informe as tres notas do aluno: ");
	scanf("%f%f%f", &nota1, &nota2, &nota3);
	while(caractere!=x){
		printf("\n***MENU***\nx- Sair\A- Media Aritmetica\nP- Media Ponderada\n");
		scanf("%c", &caractere);
		switch(caractere){
			case 'a':
				printf("Media Aritmetica eh: %.2f", Media_A(nota1, nota2, nota3));
			break;
			case 'a':
				printf("Media Ponderada eh: %.2f", Media_P(nota1, nota2, nota3));
			break;
		}
		
	}

}


