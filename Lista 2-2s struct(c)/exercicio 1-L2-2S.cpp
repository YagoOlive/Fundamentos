/*Faça um programa que cadastre (utilizando vetores de registros) e exiba instâncias do seguinte
registro:Dados Pessoais Código Nome Telefone Aniversário Cidade Estado*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Dados {
   char nome[50];
   int codigo[100];
   int telefone[15];
   int aniversario[10];
   char cidade[50];
   char estado[50];
};

main(){
	struct Dados pessoais[10];
	int tam=0, aux=1, i;
	
	while(aux!=0){
		system("cls"); 
		printf("\nMENU\n0- Sair\n1- Cadastrar dados\n2- Dados cadastrados\n");
		scanf("%d", &aux);
		switch(aux){
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
			
		}
    } 
}
