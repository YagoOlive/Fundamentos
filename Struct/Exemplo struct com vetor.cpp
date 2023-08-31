#include <stdio.h> 
#include <string.h>

// Definição da struct
struct Ficha{
   char nome[50];
   int idade;
   float salario;
};

main(){
   struct Ficha fichario[5]; // Vetor de 5 structs Ficha
   int i;
   // Leitura do vetor de structs
   for(i=0;i<5;i++){
      scanf("%s", &fichario[i].nome);
      scanf("%d", &fichario[i].idade);
      scanf("%f", &fichario[i].salario);
   }
   
   // Exibição do vetor de structs
   for(i=0;i<5;i++){
      printf("\nNome: %s", fichario[i].nome);
      printf("\nIdade: %d", fichario[i].idade);
      printf("\nSalario: R$%.2f\n", fichario[i].salario);
   }
}



