/*2. Faça um programa que realize o cadastro de imóveis (utilizando vetores de registros) contendo
os seguintes campos: tipo (loja, apartamento, casa, kit, etc.), endereço, bairro, valor, situação
(aluguel ou venda). O programa deverá também disponibilizar funcionalidade para:
a. consulta com o campo tipo informado pelo usuário;
b. consulta com o campo situação.
c. exibir o valor total da soma de todos os imóveis com situação “venda”;
d. exibir o valor total da soma de todos os imóveis com situação “aluguel”;
e. exibir o valor total dos imóveis com situação e valor mínimo informados pelo usuário.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Imovel{
   char tipo[50];
   char endereco[50];
   char bairro[50];
   float valor;
   char situacao[50];
};

main(){
	struct Imovel imobiliaria[10];
	int tam=0, aux=1, i, j=0;
	float valor_total=0, valor_total2=0, valor_minimo=0;
	char auxtipo[50], auxsituacao[50], auxsoma[50];
	
	while(aux!=0){
		system("cls");
		printf("\n***MENU***\n0- Sair\n1- Cadastrar imovel\n2- Exibir imoveis cadastrados\n3- Consltar por tipo\n4- Consultar por situacao\n5- soma do valor de todos os imoveis disponiveis\n6- soma do valor total dos imoveis por situacao e valor minimo\n");
		scanf("%d", &aux);
		switch(aux){
			case 1:
				fflush(stdin);
			    printf("Tipo: "); gets(imobiliaria[tam].tipo); fflush(stdin);
			    printf("Endereco: "); gets(imobiliaria[tam].endereco); fflush(stdin);
			    printf("Bairro: "); gets(imobiliaria[tam].bairro);
			    printf("Valor: "); scanf("%f",&imobiliaria[tam].valor); fflush(stdin);
			    printf("Situacao: "); gets(imobiliaria[tam].situacao);
			    tam++;
			break;
			case 2:
				printf("\n*** Imoveis Cadastrados ***\n");
				for(i=0;i<tam;i++){
				  printf("\nTipo: %s", imobiliaria[i].tipo);
			      printf("\nEndereco: %s", imobiliaria[i].endereco);
			      printf("\nBairro: %s", imobiliaria[i].bairro);
			      printf("\nValor: R$%.2f", imobiliaria[i].valor);
			      printf("\nSituacao: %s\n", imobiliaria[i].situacao);
				}
				system("pause");
			break;
			case 3:
			    printf("Informe o tipo de imovel que procura(loja, apartamento, casa, kit): ");
			    scanf("%s", &auxtipo);
			    system("cls");
				printf("\n*** Imoveis Cadastrados do tipo %s ***\n", auxtipo);
			    for(i=0;i<tam;i++){
			    	if(strcmp(auxtipo, imobiliaria[i].tipo)==0){
			    		
			            printf("\nEndereco: %s", imobiliaria[i].endereco);
			            printf("\nBairro: %s", imobiliaria[i].bairro);
			            printf("\nValor: R$%.2f", imobiliaria[i].valor);
			            printf("\nSituacao: %s\n", imobiliaria[i].situacao);
					}
					else{
						printf("Nenhum imovel desse tipo encontrado\n");
					}
					   	    
				}	    
			    system("pause");
			break;
			case 4:
			    printf("Informe a situacao de imovel que deseja(venda ou aluguel): ");
			    scanf("%s", &auxsituacao);
			    system("cls");
			    printf("\n*** Imoveis Cadastrados com a situacao %s ***\n", auxsituacao);
			    for(i=0;i<tam;i++){
			    	if(strcmp(auxsituacao, imobiliaria[i].situacao)==0){
			    		printf("\nTipo: %s", imobiliaria[i].tipo);
			            printf("\nEndereco: %s", imobiliaria[i].endereco);
			            printf("\nBairro: %s", imobiliaria[i].bairro);
			            printf("\nValor: R$%.2f\n", imobiliaria[i].valor);
			       	}
					else
					    printf("\nNenhum imovel encontrado\n");
				}
			    system("pause");
			break;
			case 5:
				valor_total=0;
			    printf("Informe a situacao dos imovel que deseja(venda ou aluguel): ");
			    scanf("%s", &auxsoma);
			    system("cls");
			    for(i=0;i<tam;i++){
			    	if(strcmp(auxsoma, imobiliaria[i].situacao)==0){
			    		valor_total+=imobiliaria[i].valor;
			       	}	
				}
				printf("O valor total de imoveis nessa situacao e R$%.2f\n", valor_total);
			    system("pause"); 
			break;
			case 6:
				valor_total2=0;
			    printf("Informe a situacao dos imoveis que deseja(venda ou aluguel): ");
			    scanf("%s", &auxsoma);
			    printf("\nInforme o valor minimo: ");
			    scanf("%f", &valor_minimo);
			    system("cls");
			    for(i=0;i<tam;i++){
			    	if(strcmp(auxsoma, imobiliaria[i].situacao)==0&&valor_minimo<=imobiliaria[i].valor){
			    		valor_total2+=imobiliaria[i].valor;
			       	}	
				}
				printf("O valor total de imoveis nessas condicoes e R$%.2f", valor_total2);
			    system("pause"); 
			break;
		}
    } 
}
