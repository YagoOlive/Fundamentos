/*6. Crie um programa que controle o consumo de energia dos eletrodomésticos de uma casa.
(a) Faça a leitura dos eletrodomésticos com os campos (nome, potência (em kw hora) e tempo
(ativo por dia em horas));
(b) Leia um tempo t (em dias), calcule e mostre o consumo total na casa no tempo informado e o
consumo relativo de cada eletrodoméstico em porcentagem (consumo/consumo total) nesse
período de tempo.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Consumo {
    char nome[50];
    float potencia;
    float tempo_a;
    float consumo_r;
};

main(){
	struct Consumo eletrodomesticos[10];
	int tam, aux=1, i, dias;
	float cont_cons=0;
	while(aux!=0){
	    system("cls"); 
	    printf("\nMENU\n0- Sair\n1- Cadastrar Eletrodomestico\n2- Consumo da residencia\n");
	    scanf("%d", &aux);
	    switch(aux){
			case 1: 
				fflush(stdin);
			    printf("Nome: "); gets(eletrodomesticos[tam].nome); fflush(stdin);
			    printf("Potencia(Kw/h): "); scanf("%f",&eletrodomesticos[tam].potencia); fflush(stdin);
			    printf("Tempo de uso(horas por dia): "); scanf("%f",&eletrodomesticos[tam].tempo_a); fflush(stdin);
			    tam++;
			break;
			case 2: 
			    printf("Qual o tempo de consumo(dias): ");
			    scanf("%d", &dias);
			    system("cls");
			    for(i=0;i<tam;i++){
			    	cont_cons+=eletrodomesticos[i].potencia*eletrodomesticos[i].tempo_a;
					eletrodomesticos[i].consumo_r=(eletrodomesticos[i].potencia*eletrodomesticos[i].tempo_a)*dias;
				}
				printf("\nCosumo Total da residencia: %.2f Kw", cont_cons);
				for(i=0;i<tam;i++){
					printf("\n\n***COSUMO DO(S) APARELHO(S) ***");
					printf("\n%s", eletrodomesticos[i].nome);
					printf("\nO aparelho representa %.2f% do consumo total\n", eletrodomesticos[i].consumo_r/(cont_cons*dias));
					
				}
				system("pause");
			    
        }
    }
}

