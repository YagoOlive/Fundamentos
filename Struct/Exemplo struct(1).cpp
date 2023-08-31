#include <stdio.h> 
#include <string.h>

// Definição da struct
struct Ficha{
   char nome[50];
   int idade;
   float salario;
};

main(){
   // Declaração de uma struct
   struct Ficha f1;
   
   // Leitura da struct
   printf("\nInforme o nome: "); gets(f1.nome);
   printf("\nInforme a idade: "); scanf("%d", &f1.idade);
   printf("\nInforme o salario: "); scanf("%f", &f1.salario);
   
   // Exibindo o conteúdo da struct   
   printf("\n Nome: %s", f1.nome);
   printf("\n Idade: %d anos", f1.idade);
   printf("\n Salario: R$%.2f \n", f1.salario);
}
