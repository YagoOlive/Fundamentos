/*5. Considerando a struct do Ex 1, faça um programa que leia os dados de 5 pessoas e
posteriormente coloque os registros em ordem alfabética no vetor (considere somente a primeira
letra do campo nome para comparação). Exiba o vetor de registros em ordem alfabética.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Dados {
   char nome[50];
   int codigo;
   int telefone;
   int aniversario;
   char cidade[50];
   char estado[50];
};

main(){
	struct Dados pessoais[5];
	int tam=0, aux2=1, i, j;
	char aux[50];
	
	while(aux!=0){
		system("cls"); 
		printf("\nMENU\n0- Sair\n1- Cadastrar dados\n2- Dados cadastrados\n3- Ordem alfabetica\n");
		scanf("%d", &aux2);
		switch(aux2){
			case 1: 
				fflush(stdin);
			    printf("Nome: "); gets(pessoais[tam].nome); fflush(stdin);
			    printf("Codigo: "); scanf("%d",&pessoais[tam].codigo); fflush(stdin);
			    printf("Telefone: "); scanf("%d",&pessoais[tam].telefone); fflush(stdin);
			    printf("Aniversario: "); scanf("%d",&pessoais[tam].aniversario); fflush(stdin);
			    printf("Cidade: "); gets(pessoais[tam].cidade); fflush(stdin);
			    printf("EStado: "); gets(pessoais[tam].estado);
			    tam++;
			break;
			case 2:
				printf("\n*** Dados Cadastrados ***\n");
				for(i=0;i<tam;i++){
					
					printf("\nNome: %s", pessoais[i].nome);
					printf("\nCodigo: %d", pessoais[i].codigo);
				    printf("\nTelefone: %d", pessoais[i].telefone);
				    printf("\nAniversario: %d", pessoais[i].aniversario);
				    printf("\nCidade: %s", pessoais[i].cidade);
				    printf("\nEstado: %s\n", pessoais[i].estado);
				}
				system("pause");
			break;
			case 3:
			   for(i=0;i<tam;i++){
				    for(j=i+1;j<tam;j++){
				        if(strcmp(pessoais[i].nome, pessoais[j].nome)==1){
				            strcpy(aux, pessoais[i].nome);
						    strcpy(pessoais[i].nome, pessoais[j].nome);
						    strcpy(pessoais[j].nome, aux);	
				        }
			        }
			    }
			    printf("*** EM ORDEM ALFABETICA ***");
				for(i=0;i<tam;i++){
					printf("\nNome: %s", pessoais[i].nome);
					printf("\nCodigo: %d", pessoais[i].codigo);
				    printf("\nTelefone: %d", pessoais[i].telefone);
				    printf("\nAniversario: %d", pessoais[i].aniversario);
				    printf("\nCidade: %s", pessoais[i].cidade);
				    printf("\nEstado: %s\n", pessoais[i].estado);
				}
				system("pause");
		}
    } 
}
