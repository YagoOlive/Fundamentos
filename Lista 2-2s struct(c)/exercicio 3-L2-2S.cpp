/*3. Faça um programa para cadastrar os produtos de uma loja com os seguintes dados: código,
descrição, estoque mínimo, estoque atual e preço. Crie uma funcionalidade para mostrar todos
os dados dos produtos que contenham o estoque atual menor que o estoque mínimo.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Loja {
   int codigo;
   char descricao[100];
   int etq_minimo;
   int etq_atual;
   float preco;
};
main(){
	struct Loja produtos[10];
	int tam=0, aux=1, i;
	
	while(aux!=0){
		system("cls"); 
		printf("\nMENU\n0- Sair\n1- Cadastrar produto\n2- Exibir produtos caastrados \n3- Exibir dados dos produtos com baixo estoque\n");
		scanf("%d", &aux);
		switch(aux){
			case 1: 
				fflush(stdin);
				printf("Codigo: "); scanf("%d",&produtos[tam].codigo); fflush(stdin);
			    printf("Descricao: "); gets(produtos[tam].descricao);
			    printf("Estoque minimo: "); scanf("%d",&produtos[tam].etq_minimo); fflush(stdin);
			   	printf("Estoque atual: "); scanf("%d",&produtos[tam].etq_atual); fflush(stdin);
			   	printf("Preco: "); scanf("%f",&produtos[tam].preco); 
			    tam++;
			break;
			case 2: 
			    printf("\n*** Produtos cadastrados ***\n");
				for(i=0;i<tam;i++){
					printf("\nCodigo: %d", produtos[i].codigo);
				    printf("\nDescricao: %s", produtos[i].descricao);
			        printf("\nEstoque minimo: %d", produtos[i].etq_minimo);
			   	    printf("\nEstoque atual: %d", produtos[i].etq_atual);
			   	    printf("\nPreco: R$%.2f\n", produtos[i].preco);  
				}
				system("pause");
			break;
			case 3: 
			    printf("\n*** Produtos com baixo estoque ***\n");
				for(i=0;i<tam;i++){
					if(produtos[i].etq_atual<produtos[i].etq_minimo){
					    printf("\nCodigo: %d", produtos[i].codigo);
				        printf("\nDescricao: %s", produtos[i].descricao);
			            printf("\nEstoque minimo: %d", produtos[i].etq_minimo);
			   	        printf("\nEstoque atual: %d", produtos[i].etq_atual);
			   	        printf("\nPreco: R$%.2f\n", produtos[i].preco); 
				    } 
				}
				system("pause");
			break;
	    }
	}
}
