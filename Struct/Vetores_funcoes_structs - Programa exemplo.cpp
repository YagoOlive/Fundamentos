#include <stdio.h> 
#include <string.h>

int tamanho=0;

// Definição da struct
struct Ficha{
   char nome[200];
   int idade;
   float salario;
};

// Insere uma struct no vetor
void insere(Ficha fichario[], Ficha f){
	fichario[tamanho]=f;
	tamanho++;
}

// Exibe as structs cadastradas no vetor
void exibe(Ficha fichario[]){
	int i;
	for(i=0;i<tamanho;i++){
		printf("\nNome: %s", fichario[i].nome);
      	printf("\nIdade: %d", fichario[i].idade);
      	printf("\nSalario: R$%.2f\n", fichario[i].salario);
	}
}

main(){
	struct Ficha fichario[50]; // Vetor de 50 structs Ficha
	Ficha f;
    strcpy(f.nome, "Ana");
    f.idade=25;
    f.salario=2000;
    insere(fichario, f);
	
	strcpy(f.nome, "Jose");
    f.idade=50;
    f.salario=2500;
	insere(fichario, f);
	
	strcpy(f.nome, "Joao");
    f.idade=28;
    f.salario=10000;
	insere(fichario, f);
	
	strcpy(f.nome, "Maria");
    f.idade=35;
    f.salario=12000;
	insere(fichario, f);
	
	exibe(fichario);
}
