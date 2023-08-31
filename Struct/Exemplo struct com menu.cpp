#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Imovel{
   char tipo[50];
   char endereco[100];
   float valor;
   char situacao[50];
};

main(){
	struct Imovel imobiliaria[10];
	int tam=0, op=1, i;
	
	while(op!=0){
		system("cls"); // Limpa a tela
		printf("\nMENU\n0- Sair\n1- Cadastrar imovel\n2- Exibir imoveis cadastrados\n");
		scanf("%d", &op);
		switch(op){
			case 1: // Faz a leitura de uma struct Imovel armazenando-a no vetor na posição indicada pela variável tam
				 fflush(stdin);
			     printf("Tipo: "); gets(imobiliaria[tam].tipo);fflush(stdin);
			     printf("Endereco: "); gets(imobiliaria[tam].endereco);
			     printf("Valor: "); scanf("%f",&imobiliaria[tam].valor);fflush(stdin);
			     printf("Situacao: "); gets(imobiliaria[tam].situacao);
			     tam++;//Incrementa a variável
			break;
			case 2://Exibe as structs armazenadas no vetor
				printf("\n*** Imoveis Cadastrados ***\n");
				for(i=0;i<tam;i++){
				  printf("\nTipo: %s", imobiliaria[i].tipo);
			      printf("\nEndereco: %s", imobiliaria[i].endereco);
			      printf("\nSalario: R$%.2f", imobiliaria[i].valor);
			      printf("\nSituacao: %s\n", imobiliaria[i].situacao);
				}
				system("pause");
			break;
		}//Fim do switch
	}//Fim do while
}// Fim do programa
