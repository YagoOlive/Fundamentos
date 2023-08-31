/*4. Crie uma struct representando os alunos de um determinado curso. A struct deve conter a
matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira
prova.
(a) Permita ao usuário entrar com os dados de 5 alunos;
(b) Exiba o nome do aluno com maior nota da primeira prova;
(c) Exiba o nome do aluno com maior média geral (média da nota das 3 provas);
(d) Exiba o nome do aluno com menor média geral;
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Dados {
   int matricula;
   char nome[50];
   float nota1;
   float nota2;
   float nota3;
};

main(){
	struct Dados alunos[5];
	int tam=0, aux=1, aux2, i;
	float maior_nota, media;
	char nome_aluno2;
	
	while(aux!=0){
		system("cls"); 
		printf("\n***MENU***\n0- Sair\n1- Cadastrar alunos\n2- Alunos cadastrados\n3- Maior nota prova 1\n4- Maior media geral\n5- Menor media geral\n6- Aprovados/Reprovados\n");
		scanf("%d", &aux);
		switch(aux){
			case 1: 
				fflush(stdin);
			    printf("Matricula: "); scanf("%d",&alunos[tam].matricula); fflush(stdin);
			    printf("Nome: "); gets(alunos[tam].nome);
			    printf("Nota da primeira prova: "); scanf("%f",&alunos[tam].nota1); fflush(stdin);
			    printf("Nota da segunda prova: "); scanf("%f",&alunos[tam].nota2); fflush(stdin);
			    printf("Nota da terceira prova: "); scanf("%f",&alunos[tam].nota3);
			    tam++;
			break;
			case 2:
				printf("\n*** Alunos Cadastrados ***\n");
				for(i=0;i<tam;i++){
					
					printf("\nNome: %s", alunos[i].nome);
					printf("\nMatricula: %d",alunos[i].matricula);
				    printf("\nNota da primeira prova: %.2f", alunos[i].nota1); 
			        printf("\nNota da segunda prova: %.2f", alunos[i].nota2);
			        printf("\nNota da terceira prova: %.2f\n", alunos[i].nota3);   
				}
				system("pause");
			break;
			case 3: 
			    maior_nota=0;
			    for(i=0;i<tam;i++){
			    	if(maior_nota<alunos[i].nota1){
			    		aux2=i;
			    		maior_nota=alunos[i].nota1;
			    		
					}	
				}
				printf("*** MAIOR NOTA NA PRIMEIRA PROVA ***");
				printf("\nNome: %s", alunos[aux2].nome);
				printf("\nNota da primeira prova: %.2f\n", alunos[aux2].nota1); 
			    system("pause");
			break;
			case 4:
				media=0;
				aux2=0;
				for(i=0;i<tam;i++){
			    	if(media<(alunos[i].nota1+alunos[i].nota2+alunos[i].nota3)/3){
			    		media=(alunos[i].nota1+alunos[i].nota2+alunos[i].nota3)/3;
			    		aux2=i;
					}	
				}
				printf("*** MAIOR MEDIA GERAL ***");
				printf("\nNome: %s", alunos[aux2].nome);
			    printf("\nMedia do aluno: %.2f\n", media);
			    system("pause");
			break;
			case 5:
				media=30;
				aux2=0;
				for(i=0;i<tam;i++){
			    	if(media>(alunos[i].nota1+alunos[i].nota2+alunos[i].nota3)/3){
			    		media=(alunos[i].nota1+alunos[i].nota2+alunos[i].nota3)/3;
			    		aux2=i;
					}	
				}
				printf("*** MENOR MEDIA GERAL ***");
				printf("\nNome: %s", alunos[aux2].nome);
			    printf("\nMedia do aluno: %.2f\n", media);
			    system("pause");
			break;
			case 6:
				for(i=0;i<tam;i++){
			    	if((alunos[i].nota1+alunos[i].nota2+alunos[i].nota3)/3>=6 ){
			    		printf("O aluno %s foi aprovado!", alunos[i].nome);
					}
					else{
						printf("\nO aluno %s foi reprovado!", alunos[i].nome);
					}	
				}
				system("pause");
			break;			
		}
    } 
}
